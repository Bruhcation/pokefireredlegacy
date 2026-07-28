#include "global.h"
#include "gflib.h"
#include "scanline_effect.h"
#include "text_window_graphics.h"
#include "menu.h"
#include "task.h"
#include "overworld.h"
#include "help_system.h"
#include "text_window.h"
#include "strings.h"
#include "field_fadetransition.h"
#include "gba/m4a_internal.h"
#include "event_data.h"

// can't include the one in menu_helpers.h since Task_OptionMenu needs bool32 for matching
bool32 IsActiveOverworldLinkBusy(void);

// Menu items
enum
{
    MENUITEM_TEXTSPEED = 0,
    MENUITEM_BATTLE,
    MENUITEM_HACKOPTIONS,
    MENUITEM_SOUND,
    MENUITEM_BUTTONMODE,
    MENUITEM_FRAMETYPE,
    MENUITEM_CANCEL,
    MENUITEM_COUNT
};

// Items inside the MENUITEM_BATTLE submenu (the vanilla Battle Scene / Battle Style toggles)
enum
{
    BATTLEMENUITEM_BATTLESCENE = 0,
    BATTLEMENUITEM_BATTLESTYLE,
    BATTLEMENUITEM_BACK,
    BATTLEMENUITEM_COUNT
};

// Items inside the MENUITEM_HACKOPTIONS submenu
enum
{
    HACKMENUITEM_ENEMYSUMMARY = 0,
    HACKMENUITEM_MOVEEFFECTIVENESS,
    HACKMENUITEM_SURVIVEPOISON,
    HACKMENUITEM_FOLLOWPOKEMON,
    HACKMENUITEM_SURFPOKEMON,
    HACKMENUITEM_BACK,
    HACKMENUITEM_COUNT
};

// Which list is currently being shown/navigated in the options window
enum
{
    OPTIONMENU_LEVEL_MAIN,
    OPTIONMENU_LEVEL_HACK,
    OPTIONMENU_LEVEL_BATTLE
};

// Window Ids
enum
{
    WIN_TEXT_OPTION,
    WIN_OPTIONS
};

// RAM symbols
struct OptionMenu
{
    /*0x00*/ u16 option[MENUITEM_COUNT];
    /*0x0E*/ u16 cursorPos;
    /*0x10*/ u8 loadState;
    /*0x11*/ u8 state;
    /*0x12*/ u8 loadPaletteState;
    // Not part of the original struct layout, appended for the hack options and battle submenus
    u8 menuLevel; // OPTIONMENU_LEVEL_MAIN, OPTIONMENU_LEVEL_HACK, or OPTIONMENU_LEVEL_BATTLE
    u16 hackOption[HACKMENUITEM_COUNT];
    u16 battleOption[BATTLEMENUITEM_COUNT];
};

static EWRAM_DATA struct OptionMenu *sOptionMenuPtr = NULL;

//Function Declarataions
static void CB2_InitOptionMenu(void);
static void VBlankCB_OptionMenu(void);
static void OptionMenu_InitCallbacks(void);
static void OptionMenu_SetVBlankCallback(void);
static void CB2_OptionMenu(void);
static void SetOptionMenuTask(void);
static void InitOptionMenuBg(void);
static void OptionMenu_PickSwitchCancel(void);
static void OptionMenu_ResetSpriteData(void);
static bool8 LoadOptionMenuPalette(void);
static void Task_OptionMenu(u8 taskId);
static u8 OptionMenu_ProcessInput(void);
static void BufferOptionMenuString(u8 selection);
static void CloseAndSaveOptionMenu(u8 taskId);
static void PrintOptionMenuHeader(void);
static void DrawOptionMenuBg(void);
static void LoadOptionMenuItemNames(void);
static void UpdateSettingSelectionDisplay(u16 selection);
static void RedrawOptionMenuList(void);
static u16 *GetCurrentOptionValuePtr(void);
static u16 GetCurrentItemCount(void);
static u16 GetCurrentLastItem(void);

// Data Definitions
static const struct WindowTemplate sOptionMenuWinTemplates[] =
{
    {
        .bg = 1,
        .tilemapLeft = 2,
        .tilemapTop = 3,
        .width = 26,
        .height = 2,
        .paletteNum = 1,
        .baseBlock = 2
    },
    {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 7,
        .width = 26,
        .height = 12, // vanilla height - main list is back to 7 rows (BATTLE SCENE/STYLE moved into their own submenu)
        .paletteNum = 1,
        .baseBlock = 0x36
    },
    {
        .bg = 2,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 0x16e
    },
    DUMMY_WIN_TEMPLATE
};

static const struct BgTemplate sOptionMenuBgTemplates[] =
{
   {
       .bg = 1,
       .charBaseIndex = 1,
       .mapBaseIndex = 30,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 0,
       .baseTile = 0
   },
   {
       .bg = 0,
       .charBaseIndex = 1,
       .mapBaseIndex = 31,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 1,
       .baseTile = 0
   },
   {
       .bg = 2,
       .charBaseIndex = 1,
       .mapBaseIndex = 29,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 2,
       .baseTile = 0
   },
};

static const u16 sOptionMenuPalette[] = INCBIN_U16("graphics/misc/option_menu.gbapal");
static const u16 sOptionMenuItemCounts[MENUITEM_COUNT] = {3, 0, 0, 2, 3, 10, 0};

static const u8 *const sOptionMenuItemsNames[MENUITEM_COUNT] =
{
    [MENUITEM_TEXTSPEED]   = gText_TextSpeed,
    [MENUITEM_BATTLE]      = gText_Battle,
    [MENUITEM_SOUND]       = gText_Sound,
    [MENUITEM_BUTTONMODE]  = gText_ButtonMode,
    [MENUITEM_FRAMETYPE]   = gText_Frame,
    [MENUITEM_HACKOPTIONS] = gText_HackOptions,
    [MENUITEM_CANCEL]      = gText_OptionMenuCancel,
};

// Items inside the BATTLE submenu (the vanilla Battle Scene / Battle Style toggles).
// 0 = not cyclable (BACK just exits the submenu).
static const u16 sBattleMenuItemCounts[BATTLEMENUITEM_COUNT] = {2, 2, 0};

static const u8 *const sBattleMenuItemsNames[BATTLEMENUITEM_COUNT] =
{
    [BATTLEMENUITEM_BATTLESCENE] = gText_BattleScene,
    [BATTLEMENUITEM_BATTLESTYLE] = gText_BattleStyle,
    [BATTLEMENUITEM_BACK]        = gText_Back,
};

// Items inside the HACK OPTIONS submenu. 0 = not cyclable (BACK just exits the submenu).
static const u16 sHackOptionsItemCounts[HACKMENUITEM_COUNT] = {2, 4, 2, 2, 2, 0};

static const u8 *const sHackOptionsItemsNames[HACKMENUITEM_COUNT] =
{
    [HACKMENUITEM_ENEMYSUMMARY]      = gText_EnemySummary,
    [HACKMENUITEM_MOVEEFFECTIVENESS] = gText_MoveEffectivenessLabel,
    [HACKMENUITEM_SURVIVEPOISON]     = gText_SurvivePoison,
    [HACKMENUITEM_FOLLOWPOKEMON]     = gText_FollowPokemon,
    [HACKMENUITEM_SURFPOKEMON]       = gText_SurfPokemon,
    [HACKMENUITEM_BACK]              = gText_Back,
};

static const u8 *const sTextSpeedOptions[] =
{
    gText_TextSpeedSlow, 
    gText_TextSpeedMid, 
    gText_TextSpeedFast
};

static const u8 *const sBattleSceneOptions[] =
{
    gText_BattleSceneOn, 
    gText_BattleSceneOff
};

static const u8 *const sBattleStyleOptions[] =
{
    gText_BattleStyleShift,
    gText_BattleStyleSet
};

static const u8 *const sBattleStyleOptions2[] =
{
    gText_BattleStyleSet,
    gText_BattleStyleSet
};

static const u8 *const sSoundOptions[] =
{
    gText_SoundMono, 
    gText_SoundStereo
};

static const u8 *const sButtonTypeOptions[] =
{
    gText_ButtonTypeHelp,
	gText_ButtonTypeLR,
	gText_ButtonTypeLEqualsA
};

static const u8 *const sEnemySummaryOptions[] =
{
    gText_BattleSceneOn,
    gText_BattleSceneOff
};

static const u8 *const sMoveEffectivenessOptions[] =
{
    gText_MoveEffectivenessArrows,
    gText_MoveEffectivenessColor,
    gText_MoveEffectivenessBoth,
    gText_BattleSceneOff
};

static const u8 *const sSurvivePoisonOptions[] =
{
    gText_BattleSceneOn,
    gText_BattleSceneOff
};

static const u8 *const sFollowPokemonOptions[] =
{
    gText_BattleSceneOn,
    gText_BattleSceneOff
};

static const u8 *const sSurfPokemonOptions[] =
{
    gText_BattleSceneOn,
    gText_BattleSceneOff
};

static const u8 sOptionMenuPickSwitchCancelTextColor[] = {TEXT_DYNAMIC_COLOR_6, TEXT_COLOR_WHITE, TEXT_COLOR_DARK_GRAY};
static const u8 sOptionMenuTextColor[] = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_LIGHT_RED, TEXT_COLOR_RED};

// Functions
static void CB2_InitOptionMenu(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

static void VBlankCB_OptionMenu(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

void CB2_OptionsMenuFromStartMenu(void)
{
    u8 i;
    
    if (gMain.savedCallback == NULL)
        gMain.savedCallback = CB2_ReturnToFieldWithOpenMenu;
    sOptionMenuPtr = AllocZeroed(sizeof(struct OptionMenu));
    sOptionMenuPtr->loadState = 0;
    sOptionMenuPtr->loadPaletteState = 0;
    sOptionMenuPtr->state = 0;
    sOptionMenuPtr->cursorPos = 0;
    sOptionMenuPtr->menuLevel = OPTIONMENU_LEVEL_MAIN;
    sOptionMenuPtr->option[MENUITEM_TEXTSPEED] = gSaveBlock2Ptr->optionsTextSpeed;
    sOptionMenuPtr->option[MENUITEM_SOUND] = gSaveBlock2Ptr->optionsSound;
    sOptionMenuPtr->option[MENUITEM_BUTTONMODE] = gSaveBlock2Ptr->optionsButtonMode;
    sOptionMenuPtr->option[MENUITEM_FRAMETYPE] = gSaveBlock2Ptr->optionsWindowFrameType;
    sOptionMenuPtr->battleOption[BATTLEMENUITEM_BATTLESCENE] = gSaveBlock2Ptr->optionsBattleSceneOff;
    sOptionMenuPtr->battleOption[BATTLEMENUITEM_BATTLESTYLE] = gSaveBlock2Ptr->optionsBattleStyle;
    sOptionMenuPtr->hackOption[HACKMENUITEM_ENEMYSUMMARY] = gSaveBlock2Ptr->optionsEnemySummary;
    sOptionMenuPtr->hackOption[HACKMENUITEM_MOVEEFFECTIVENESS] = gSaveBlock2Ptr->optionsMoveEffectiveness;
    sOptionMenuPtr->hackOption[HACKMENUITEM_SURVIVEPOISON] = gSaveBlock2Ptr->optionsSurvivePoison;
    sOptionMenuPtr->hackOption[HACKMENUITEM_FOLLOWPOKEMON] = gSaveBlock2Ptr->optionsFollowPokemon;
    sOptionMenuPtr->hackOption[HACKMENUITEM_SURFPOKEMON] = !FlagGet(FLAG_ENABLE_SURFOVERWORLD);
    
    for (i = 0; i < MENUITEM_COUNT - 1; i++)
    {
        if (sOptionMenuItemCounts[i] != 0 && sOptionMenuPtr->option[i] > (sOptionMenuItemCounts[i]) - 1)
            sOptionMenuPtr->option[i] = 0;
    }
    for (i = 0; i < HACKMENUITEM_COUNT - 1; i++)
    {
        if (sHackOptionsItemCounts[i] != 0 && sOptionMenuPtr->hackOption[i] > (sHackOptionsItemCounts[i]) - 1)
            sOptionMenuPtr->hackOption[i] = 0;
    }
    for (i = 0; i < BATTLEMENUITEM_COUNT - 1; i++)
    {
        if (sBattleMenuItemCounts[i] != 0 && sOptionMenuPtr->battleOption[i] > (sBattleMenuItemCounts[i]) - 1)
            sOptionMenuPtr->battleOption[i] = 0;
    }
    SetHelpContextDontCheckBattle(HELPCONTEXT_OPTIONS);
    SetMainCallback2(CB2_OptionMenu);
}

static void OptionMenu_InitCallbacks(void)
{
    SetVBlankCallback(NULL);
    SetHBlankCallback(NULL);
}

static void OptionMenu_SetVBlankCallback(void)
{
    SetVBlankCallback(VBlankCB_OptionMenu);
}

static void CB2_OptionMenu(void)
{
    u8 i, state;
    state = sOptionMenuPtr->state;
    switch (state)
    {
    case 0:
        OptionMenu_InitCallbacks();
        break;
    case 1:
        InitOptionMenuBg();
        break;
    case 2:
        OptionMenu_ResetSpriteData();
        break;
    case 3:
        if (LoadOptionMenuPalette() != TRUE)
            return;
        break;
    case 4:
        PrintOptionMenuHeader();
        break;
    case 5:
        DrawOptionMenuBg();
        break;
    case 6:
        LoadOptionMenuItemNames();
        break;
    case 7:
        for (i = 0; i < MENUITEM_COUNT; i++)
            BufferOptionMenuString(i);
        break;
    case 8:
        UpdateSettingSelectionDisplay(sOptionMenuPtr->cursorPos);
        break;
    case 9:
        OptionMenu_PickSwitchCancel();
        break;
    default:
        SetOptionMenuTask();
		break;
    }
    sOptionMenuPtr->state++;
}

static void SetOptionMenuTask(void)
{
    CreateTask(Task_OptionMenu, 0);
    SetMainCallback2(CB2_InitOptionMenu);
}

static void InitOptionMenuBg(void)
{
    void *dest = (void *)VRAM;
    DmaClearLarge16(3, dest, VRAM_SIZE, 0x1000);    
    DmaClear32(3, (void *)OAM, OAM_SIZE);
    DmaClear16(3, (void *)PLTT, PLTT_SIZE);    
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_MODE_0);
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sOptionMenuBgTemplates, NELEMS(sOptionMenuBgTemplates));
    ChangeBgX(0, 0, 0);
    ChangeBgY(0, 0, 0);
    ChangeBgX(1, 0, 0);
    ChangeBgY(1, 0, 0);
    ChangeBgX(2, 0, 0);
    ChangeBgY(2, 0, 0);
    ChangeBgX(3, 0, 0);
    ChangeBgY(3, 0, 0);
    InitWindows(sOptionMenuWinTemplates);
    DeactivateAllTextPrinters();
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_BG0 | BLDCNT_EFFECT_BLEND | BLDCNT_EFFECT_LIGHTEN);
    SetGpuReg(REG_OFFSET_BLDY, BLDCNT_TGT1_BG1);
    SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG0);
    SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG0 | WINOUT_WIN01_BG1 | WINOUT_WIN01_BG2 | WINOUT_WIN01_CLR);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON | DISPCNT_WIN0_ON);
    ShowBg(0);
    ShowBg(1);
    ShowBg(2);
};

static void OptionMenu_PickSwitchCancel(void)
{
    s32 x;
    x = 0xE4 - GetStringWidth(FONT_SMALL, gText_PickSwitchCancel, 0);
    FillWindowPixelBuffer(2, PIXEL_FILL(15)); 
    AddTextPrinterParameterized3(2, FONT_SMALL, x, 0, sOptionMenuPickSwitchCancelTextColor, 0, gText_PickSwitchCancel);
    PutWindowTilemap(2);
    CopyWindowToVram(2, COPYWIN_FULL);
}

static void OptionMenu_ResetSpriteData(void)
{
    ResetSpriteData();
    ResetPaletteFade();
    FreeAllSpritePalettes();
    ResetTasks();
    ScanlineEffect_Stop();
}

static bool8 LoadOptionMenuPalette(void)
{
    switch (sOptionMenuPtr->loadPaletteState)
    {
    case 0:
        LoadBgTiles(1, GetUserWindowGraphics(sOptionMenuPtr->option[MENUITEM_FRAMETYPE])->tiles, 0x120, 0x1AA);
        break;
    case 1:
        LoadPalette(GetUserWindowGraphics(sOptionMenuPtr->option[MENUITEM_FRAMETYPE])->palette, BG_PLTT_ID(2), PLTT_SIZE_4BPP);
        break;
    case 2:
        LoadPalette(sOptionMenuPalette, BG_PLTT_ID(1), sizeof(sOptionMenuPalette));
        LoadPalette(GetTextWindowPalette(2), BG_PLTT_ID(15), PLTT_SIZE_4BPP);
        break;
    case 3:
        LoadStdWindowGfxOnBg(1, 0x1B3, BG_PLTT_ID(3));
        break;
    default:
        return TRUE;
    }
    sOptionMenuPtr->loadPaletteState++;
    return FALSE;
}

static void Task_OptionMenu(u8 taskId)
{
    switch (sOptionMenuPtr->loadState)
    {
    case 0:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0x10, 0, RGB_BLACK);
        OptionMenu_SetVBlankCallback();
        sOptionMenuPtr->loadState++;
        break;
    case 1:
        if (gPaletteFade.active)
            return;
        sOptionMenuPtr->loadState++;
        break;
    case 2:
        if (((bool32)IsActiveOverworldLinkBusy()) == TRUE)
            break;
        switch (OptionMenu_ProcessInput())
        {
        case 0:
            break;
        case 1:
            sOptionMenuPtr->loadState++;
            break;
        case 2:
            LoadBgTiles(1, GetUserWindowGraphics(sOptionMenuPtr->option[MENUITEM_FRAMETYPE])->tiles, 0x120, 0x1AA);
            LoadPalette(GetUserWindowGraphics(sOptionMenuPtr->option[MENUITEM_FRAMETYPE])->palette, BG_PLTT_ID(2), PLTT_SIZE_4BPP);
            BufferOptionMenuString(sOptionMenuPtr->cursorPos);
            break;
        case 3:
            UpdateSettingSelectionDisplay(sOptionMenuPtr->cursorPos);
            break;
        case 4:
            BufferOptionMenuString(sOptionMenuPtr->cursorPos);
            break;
        case 5:
            RedrawOptionMenuList();
            break;
        }
        break;
    case 3:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_BLACK);
        sOptionMenuPtr->loadState++;
        break;
    case 4:
        if (gPaletteFade.active)
            return;
        sOptionMenuPtr->loadState++;
        break;
    case 5:
        CloseAndSaveOptionMenu(taskId);
        break;
    }
}

// Returns a pointer to the option value for the current cursor row,
// in whichever list (main menu, hack submenu, or battle submenu) is currently active.
static u16 *GetCurrentOptionValuePtr(void)
{
    switch (sOptionMenuPtr->menuLevel)
    {
    case OPTIONMENU_LEVEL_HACK:
        return &sOptionMenuPtr->hackOption[sOptionMenuPtr->cursorPos];
    case OPTIONMENU_LEVEL_BATTLE:
        return &sOptionMenuPtr->battleOption[sOptionMenuPtr->cursorPos];
    default:
        return &sOptionMenuPtr->option[sOptionMenuPtr->cursorPos];
    }
}

// Number of values the currently-highlighted row can cycle through (0 = not cyclable)
static u16 GetCurrentItemCount(void)
{
    switch (sOptionMenuPtr->menuLevel)
    {
    case OPTIONMENU_LEVEL_HACK:
        return sHackOptionsItemCounts[sOptionMenuPtr->cursorPos];
    case OPTIONMENU_LEVEL_BATTLE:
        return sBattleMenuItemCounts[sOptionMenuPtr->cursorPos];
    default:
        return sOptionMenuItemCounts[sOptionMenuPtr->cursorPos];
    }
}

// Index of the last row in whichever list is currently active (used for Up/Down wraparound)
static u16 GetCurrentLastItem(void)
{
    switch (sOptionMenuPtr->menuLevel)
    {
    case OPTIONMENU_LEVEL_HACK:
        return HACKMENUITEM_BACK;
    case OPTIONMENU_LEVEL_BATTLE:
        return BATTLEMENUITEM_BACK;
    default:
        return MENUITEM_CANCEL;
    }
}

static u8 OptionMenu_ProcessInput(void)
{ 
    u16 current;
    u16 *curr;
    u16 itemCount;

    if (JOY_REPT(DPAD_RIGHT))
    {
        itemCount = GetCurrentItemCount();
        if (itemCount == 0)
            return 0; // Row has no cyclable value (e.g. HACK OPTIONS, CANCEL, BACK)
        curr = GetCurrentOptionValuePtr();
        current = *curr;
        if (current == itemCount - 1)
            *curr = 0;
        else
            *curr = current + 1;
        if (sOptionMenuPtr->menuLevel == OPTIONMENU_LEVEL_MAIN && sOptionMenuPtr->cursorPos == MENUITEM_FRAMETYPE)
            return 2;
        else
            return 4;
    }
    else if (JOY_REPT(DPAD_LEFT))
    {
        itemCount = GetCurrentItemCount();
        if (itemCount == 0)
            return 0;
        curr = GetCurrentOptionValuePtr();
        if (*curr == 0)
            *curr = itemCount - 1;
        else
            --*curr;
        
        if (sOptionMenuPtr->menuLevel == OPTIONMENU_LEVEL_MAIN && sOptionMenuPtr->cursorPos == MENUITEM_FRAMETYPE)
            return 2;
        else
            return 4;
    }
    else if (JOY_REPT(DPAD_UP))
    {
        if (sOptionMenuPtr->cursorPos == 0)
            sOptionMenuPtr->cursorPos = GetCurrentLastItem();
        else
            sOptionMenuPtr->cursorPos = sOptionMenuPtr->cursorPos - 1;
        return 3;        
    }
    else if (JOY_REPT(DPAD_DOWN))
    {
        if (sOptionMenuPtr->cursorPos == GetCurrentLastItem())
            sOptionMenuPtr->cursorPos = 0;
        else
            sOptionMenuPtr->cursorPos = sOptionMenuPtr->cursorPos + 1;
        return 3;
    }
    else if (JOY_NEW(A_BUTTON))
    {
        if (sOptionMenuPtr->menuLevel == OPTIONMENU_LEVEL_MAIN && sOptionMenuPtr->cursorPos == MENUITEM_BATTLE)
        {
            sOptionMenuPtr->menuLevel = OPTIONMENU_LEVEL_BATTLE;
            sOptionMenuPtr->cursorPos = 0;
            SetHelpContextDontCheckBattle(HELPCONTEXT_BATTLE_OPTIONS);
            return 5;
        }
        else if (sOptionMenuPtr->menuLevel == OPTIONMENU_LEVEL_BATTLE && sOptionMenuPtr->cursorPos == BATTLEMENUITEM_BACK)
        {
            sOptionMenuPtr->menuLevel = OPTIONMENU_LEVEL_MAIN;
            sOptionMenuPtr->cursorPos = MENUITEM_BATTLE;
            SetHelpContextDontCheckBattle(HELPCONTEXT_OPTIONS);
            return 5;
        }
        else if (sOptionMenuPtr->menuLevel == OPTIONMENU_LEVEL_MAIN && sOptionMenuPtr->cursorPos == MENUITEM_HACKOPTIONS)
        {
            sOptionMenuPtr->menuLevel = OPTIONMENU_LEVEL_HACK;
            sOptionMenuPtr->cursorPos = 0;
            SetHelpContextDontCheckBattle(HELPCONTEXT_HACK_OPTIONS);
            return 5;
        }
        else if (sOptionMenuPtr->menuLevel == OPTIONMENU_LEVEL_HACK && sOptionMenuPtr->cursorPos == HACKMENUITEM_BACK)
        {
            sOptionMenuPtr->menuLevel = OPTIONMENU_LEVEL_MAIN;
            sOptionMenuPtr->cursorPos = MENUITEM_HACKOPTIONS;
            SetHelpContextDontCheckBattle(HELPCONTEXT_OPTIONS);
            return 5;
        }
        else
        {
            return 1;
        }
    }
    else if (JOY_NEW(B_BUTTON))
    {
        if (sOptionMenuPtr->menuLevel == OPTIONMENU_LEVEL_BATTLE)
        {
            sOptionMenuPtr->menuLevel = OPTIONMENU_LEVEL_MAIN;
            sOptionMenuPtr->cursorPos = MENUITEM_BATTLE;
            SetHelpContextDontCheckBattle(HELPCONTEXT_OPTIONS);
            return 5;
        }
        else if (sOptionMenuPtr->menuLevel == OPTIONMENU_LEVEL_HACK)
        {
            sOptionMenuPtr->menuLevel = OPTIONMENU_LEVEL_MAIN;
            sOptionMenuPtr->cursorPos = MENUITEM_HACKOPTIONS;
            SetHelpContextDontCheckBattle(HELPCONTEXT_OPTIONS);
            return 5;
        }
        return 1;
    }
    else
    {
        return 0;
    }
}

static void BufferOptionMenuString(u8 selection)
{
    u8 str[20];
    u8 buf[12];
    u8 dst[3];
    u8 x, y;
    
    memcpy(dst, sOptionMenuTextColor, 3);
    x = 0x82;
    y = ((GetFontAttribute(FONT_NORMAL, FONTATTR_MAX_LETTER_HEIGHT) - 1) * selection) + 2;
    FillWindowPixelRect(1, 1, x, y, 0x46, GetFontAttribute(FONT_NORMAL, FONTATTR_MAX_LETTER_HEIGHT));

    if (sOptionMenuPtr->menuLevel == OPTIONMENU_LEVEL_HACK)
    {
        switch (selection)
        {
        case HACKMENUITEM_ENEMYSUMMARY:
            AddTextPrinterParameterized3(1, FONT_NORMAL, x, y, dst, -1, sEnemySummaryOptions[sOptionMenuPtr->hackOption[selection]]);
            break;
        case HACKMENUITEM_MOVEEFFECTIVENESS:
            AddTextPrinterParameterized3(1, FONT_NORMAL, x, y, dst, -1, sMoveEffectivenessOptions[sOptionMenuPtr->hackOption[selection]]);
            break;
        case HACKMENUITEM_SURVIVEPOISON:
            AddTextPrinterParameterized3(1, FONT_NORMAL, x, y, dst, -1, sSurvivePoisonOptions[sOptionMenuPtr->hackOption[selection]]);
            break;
        case HACKMENUITEM_FOLLOWPOKEMON:
            AddTextPrinterParameterized3(1, FONT_NORMAL, x, y, dst, -1, sFollowPokemonOptions[sOptionMenuPtr->hackOption[selection]]);
            break;
        case HACKMENUITEM_SURFPOKEMON:
            AddTextPrinterParameterized3(1, FONT_NORMAL, x, y, dst, -1, sSurfPokemonOptions[sOptionMenuPtr->hackOption[selection]]);
            break;
        default: // HACKMENUITEM_BACK: no value column
            break;
        }
    }
    else if (sOptionMenuPtr->menuLevel == OPTIONMENU_LEVEL_BATTLE)
    {
        switch (selection)
        {
        case BATTLEMENUITEM_BATTLESCENE:
            AddTextPrinterParameterized3(1, FONT_NORMAL, x, y, dst, -1, sBattleSceneOptions[sOptionMenuPtr->battleOption[selection]]);
            break;
        case BATTLEMENUITEM_BATTLESTYLE:
            if (FlagGet(FLAG_HARD))
                AddTextPrinterParameterized3(1, FONT_NORMAL, x, y, dst, -1, sBattleStyleOptions2[sOptionMenuPtr->battleOption[selection]]);
            else
                AddTextPrinterParameterized3(1, FONT_NORMAL, x, y, dst, -1, sBattleStyleOptions[sOptionMenuPtr->battleOption[selection]]);
            break;
        default: // BATTLEMENUITEM_BACK: no value column
            break;
        }
    }
    else
    {
        switch (selection)
        {
        case MENUITEM_TEXTSPEED:
            AddTextPrinterParameterized3(1, FONT_NORMAL, x, y, dst, -1, sTextSpeedOptions[sOptionMenuPtr->option[selection]]);
            break;
        case MENUITEM_BATTLE:
            AddTextPrinterParameterized3(1, FONT_NORMAL, x, y, dst, -1, gText_SelectorArrow2);
            break;
        case MENUITEM_SOUND:
            AddTextPrinterParameterized3(1, FONT_NORMAL, x, y, dst, -1, sSoundOptions[sOptionMenuPtr->option[selection]]);
            break;
        case MENUITEM_BUTTONMODE:
            AddTextPrinterParameterized3(1, FONT_NORMAL, x, y, dst, -1, sButtonTypeOptions[sOptionMenuPtr->option[selection]]);
            break;
        case MENUITEM_FRAMETYPE:
            StringCopy(str, gText_FrameType);
            ConvertIntToDecimalStringN(buf, sOptionMenuPtr->option[selection] + 1, 1, 2);
            StringAppendN(str, buf, 3);
            AddTextPrinterParameterized3(1, FONT_NORMAL, x, y, dst, -1, str);
            break;
        case MENUITEM_HACKOPTIONS:
            AddTextPrinterParameterized3(1, FONT_NORMAL, x, y, dst, -1, gText_SelectorArrow2);
            break;
        default: // MENUITEM_CANCEL: no value column
            break;
        }
    }
    PutWindowTilemap(1);
    CopyWindowToVram(1, COPYWIN_FULL);
}

static void CloseAndSaveOptionMenu(u8 taskId)
{
    gFieldCallback = FieldCB_DefaultWarpExit;
    SetMainCallback2(gMain.savedCallback);
    FreeAllWindowBuffers();
    gSaveBlock2Ptr->optionsTextSpeed = sOptionMenuPtr->option[MENUITEM_TEXTSPEED];
    gSaveBlock2Ptr->optionsSound = sOptionMenuPtr->option[MENUITEM_SOUND];
    gSaveBlock2Ptr->optionsButtonMode = sOptionMenuPtr->option[MENUITEM_BUTTONMODE];
    gSaveBlock2Ptr->optionsWindowFrameType = sOptionMenuPtr->option[MENUITEM_FRAMETYPE];
    gSaveBlock2Ptr->optionsBattleSceneOff = sOptionMenuPtr->battleOption[BATTLEMENUITEM_BATTLESCENE];
    gSaveBlock2Ptr->optionsBattleStyle = sOptionMenuPtr->battleOption[BATTLEMENUITEM_BATTLESTYLE];
    SetPokemonCryStereo(gSaveBlock2Ptr->optionsSound);
    gSaveBlock2Ptr->optionsEnemySummary = sOptionMenuPtr->hackOption[HACKMENUITEM_ENEMYSUMMARY];
    gSaveBlock2Ptr->optionsMoveEffectiveness = sOptionMenuPtr->hackOption[HACKMENUITEM_MOVEEFFECTIVENESS];
    gSaveBlock2Ptr->optionsSurvivePoison = sOptionMenuPtr->hackOption[HACKMENUITEM_SURVIVEPOISON];
    gSaveBlock2Ptr->optionsFollowPokemon = sOptionMenuPtr->hackOption[HACKMENUITEM_FOLLOWPOKEMON];

    if (sOptionMenuPtr->hackOption[HACKMENUITEM_SURFPOKEMON] == 0)
        FlagSet(FLAG_ENABLE_SURFOVERWORLD);
    else
        FlagClear(FLAG_ENABLE_SURFOVERWORLD);
    FREE_AND_SET_NULL(sOptionMenuPtr);
    DestroyTask(taskId);
}

static void PrintOptionMenuHeader(void)
{
    FillWindowPixelBuffer(0, PIXEL_FILL(1));
    AddTextPrinterParameterized(WIN_TEXT_OPTION, FONT_NORMAL, gText_Option, 8, 1, TEXT_SKIP_DRAW, NULL);
    PutWindowTilemap(0);
    CopyWindowToVram(0, COPYWIN_FULL);
}

static void DrawOptionMenuBg(void)
{
    u8 h;
    h = 2;
    
    FillBgTilemapBufferRect(1, 0x1B3, 1, 2, 1, 1, 3);
    FillBgTilemapBufferRect(1, 0x1B4, 2, 2, 0x1B, 1, 3);
    FillBgTilemapBufferRect(1, 0x1B5, 0x1C, 2, 1, 1, 3);
    FillBgTilemapBufferRect(1, 0x1B6, 1, 3, 1, h, 3);
    FillBgTilemapBufferRect(1, 0x1B8, 0x1C, 3, 1, h, 3);
    FillBgTilemapBufferRect(1, 0x1B9, 1, 5, 1, 1, 3);
    FillBgTilemapBufferRect(1, 0x1BA, 2, 5, 0x1B, 1, 3);
    FillBgTilemapBufferRect(1, 0x1BB, 0x1C, 5, 1, 1, 3);
    FillBgTilemapBufferRect(1, 0x1AA, 1, 6, 1, 1, h);
    FillBgTilemapBufferRect(1, 0x1AB, 2, 6, 0x1A, 1, h);
    FillBgTilemapBufferRect(1, 0x1AC, 0x1C, 6, 1, 1, h);
    FillBgTilemapBufferRect(1, 0x1AD, 1, 7, 1, 0x10, h);
    FillBgTilemapBufferRect(1, 0x1AF, 0x1C, 7, 1, 0x10, h);
    FillBgTilemapBufferRect(1, 0x1B0, 1, 0x13, 1, 1, h);
    FillBgTilemapBufferRect(1, 0x1B1, 2, 0x13, 0x1A, 1, h);
    FillBgTilemapBufferRect(1, 0x1B2, 0x1C, 0x13, 1, 1, h);
    CopyBgTilemapBufferToVram(1);
}

static void LoadOptionMenuItemNames(void)
{
    u8 i, count;
    const u8 *const *names;
    
    switch (sOptionMenuPtr->menuLevel)
    {
    case OPTIONMENU_LEVEL_HACK:
        names = sHackOptionsItemsNames;
        count = HACKMENUITEM_COUNT;
        break;
    case OPTIONMENU_LEVEL_BATTLE:
        names = sBattleMenuItemsNames;
        count = BATTLEMENUITEM_COUNT;
        break;
    default:
        names = sOptionMenuItemsNames;
        count = MENUITEM_COUNT;
        break;
    }

    FillWindowPixelBuffer(1, PIXEL_FILL(1));
    for (i = 0; i < count; i++)
    {
        AddTextPrinterParameterized(WIN_OPTIONS, FONT_NORMAL, names[i], 8, (u8)((i * (GetFontAttribute(FONT_NORMAL, FONTATTR_MAX_LETTER_HEIGHT))) + 2) - i, TEXT_SKIP_DRAW, NULL);    
    }
}

// Redraws the whole options list (names + values) after switching between
// the main options list and either submenu.
static void RedrawOptionMenuList(void)
{
    u8 i, count;

    switch (sOptionMenuPtr->menuLevel)
    {
    case OPTIONMENU_LEVEL_HACK:
        count = HACKMENUITEM_COUNT;
        break;
    case OPTIONMENU_LEVEL_BATTLE:
        count = BATTLEMENUITEM_COUNT;
        break;
    default:
        count = MENUITEM_COUNT;
        break;
    }
    LoadOptionMenuItemNames();
    for (i = 0; i < count; i++)
        BufferOptionMenuString(i);
    UpdateSettingSelectionDisplay(sOptionMenuPtr->cursorPos);
}

static void UpdateSettingSelectionDisplay(u16 selection)
{
    u16 maxLetterHeight, y;
    
    maxLetterHeight = GetFontAttribute(FONT_NORMAL, FONTATTR_MAX_LETTER_HEIGHT);
    y = selection * (maxLetterHeight - 1) + 0x3A;
    SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(y, y + maxLetterHeight));
    SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(0x10, 0xE0));
}
