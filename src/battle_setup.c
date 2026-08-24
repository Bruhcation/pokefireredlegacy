#include "global.h"
#include "task.h"
#include "help_system.h"
#include "overworld.h"
#include "item.h"
#include "sound.h"
#include "pokemon.h"
#include "load_save.h"
#include "safari_zone.h"
#include "quest_log.h"
#include "script.h"
#include "script_pokemon_util.h"
#include "strings.h"
#include "string_util.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "metatile_behavior.h"
#include "event_scripts.h"
#include "fldeff.h"
#include "fieldmap.h"
#include "field_control_avatar.h"
#include "field_player_avatar.h"
#include "field_screen_effect.h"
#include "field_message_box.h"
#include "vs_seeker.h"
#include "battle.h"
#include "battle_transition.h"
#include "battle_controllers.h"
#include "constants/battle_setup.h"
#include "constants/items.h"
#include "constants/maps.h"
#include "constants/songs.h"
#include "constants/pokemon.h"
#include "constants/trainers.h"

enum {
    TRANSITION_TYPE_NORMAL,
    TRANSITION_TYPE_CAVE,
    TRANSITION_TYPE_FLASH,
    TRANSITION_TYPE_WATER,
};

enum
{
    TRAINER_PARAM_LOAD_VAL_8BIT,
    TRAINER_PARAM_LOAD_VAL_16BIT,
    TRAINER_PARAM_LOAD_VAL_32BIT,
    TRAINER_PARAM_CLEAR_VAL_8BIT,
    TRAINER_PARAM_CLEAR_VAL_16BIT,
    TRAINER_PARAM_CLEAR_VAL_32BIT,
    TRAINER_PARAM_LOAD_SCRIPT_RET_ADDR,
};

struct TrainerBattleParameter
{
    void *varPtr;
    u8 ptrType;
};

static void DoSafariBattle(void);
static void DoGhostBattle(void);
static void DoStandardWildBattle(void);
static void CB2_EndWildBattle(void);
static u8 GetWildBattleTransition(void);
static u8 GetTrainerBattleTransition(void);
static void CB2_EndScriptedWildBattle(void);
static void CB2_EndMarowakBattle(void);
static bool32 IsPlayerDefeated(u32 battleOutcome);
static void CB2_EndTrainerBattle(void);
static const u8 *GetIntroSpeechOfApproachingTrainer(void);
static const u8 *GetTrainerCantBattleSpeech(void);

static EWRAM_DATA u16 sTrainerBattleMode = 0;
EWRAM_DATA u16 gTrainerBattleOpponent_A = 0;
static EWRAM_DATA u16 sTrainerObjectEventLocalId = 0;
static EWRAM_DATA u8 *sTrainerAIntroSpeech = NULL;
static EWRAM_DATA u8 *sTrainerADefeatSpeech = NULL;
static EWRAM_DATA u8 *sTrainerVictorySpeech = NULL;
static EWRAM_DATA u8 *sTrainerCannotBattleSpeech = NULL;
static EWRAM_DATA u8 *sTrainerBattleEndScript = NULL;
static EWRAM_DATA u8 *sTrainerABattleScriptRetAddr = NULL;
static EWRAM_DATA u16 sRivalBattleFlags = 0;

// The first transition is used if the enemy pokemon are lower level than our pokemon.
// Otherwise, the second transition is used.
static const u8 sBattleTransitionTable_Wild[][2] =
{
    [TRANSITION_TYPE_NORMAL] = {B_TRANSITION_SLICE,          B_TRANSITION_WHITE_BARS_FADE},
    [TRANSITION_TYPE_CAVE]   = {B_TRANSITION_CLOCKWISE_WIPE, B_TRANSITION_GRID_SQUARES},
    [TRANSITION_TYPE_FLASH]  = {B_TRANSITION_BLUR,           B_TRANSITION_GRID_SQUARES},
    [TRANSITION_TYPE_WATER]  = {B_TRANSITION_WAVE,           B_TRANSITION_RIPPLE},
};

static const u8 sBattleTransitionTable_Trainer[][2] =
{
    [TRANSITION_TYPE_NORMAL] = {B_TRANSITION_POKEBALLS_TRAIL, B_TRANSITION_ANGLED_WIPES},
    [TRANSITION_TYPE_CAVE]   = {B_TRANSITION_SHUFFLE,         B_TRANSITION_BIG_POKEBALL},
    [TRANSITION_TYPE_FLASH]  = {B_TRANSITION_BLUR,            B_TRANSITION_GRID_SQUARES},
    [TRANSITION_TYPE_WATER]  = {B_TRANSITION_SWIRL,           B_TRANSITION_RIPPLE},
};

static const struct TrainerBattleParameter sOrdinaryBattleParams[] =
{
    {&sTrainerBattleMode,           TRAINER_PARAM_LOAD_VAL_8BIT},
    {&gTrainerBattleOpponent_A,     TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerObjectEventLocalId,   TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerAIntroSpeech,         TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerADefeatSpeech,        TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerVictorySpeech,        TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerCannotBattleSpeech,   TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerABattleScriptRetAddr, TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerBattleEndScript,      TRAINER_PARAM_LOAD_SCRIPT_RET_ADDR},
};

static const struct TrainerBattleParameter sContinueScriptBattleParams[] =
{
    {&sTrainerBattleMode,           TRAINER_PARAM_LOAD_VAL_8BIT},
    {&gTrainerBattleOpponent_A,     TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerObjectEventLocalId,   TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerAIntroSpeech,         TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerADefeatSpeech,        TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerVictorySpeech,        TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerCannotBattleSpeech,   TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerABattleScriptRetAddr, TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerBattleEndScript,      TRAINER_PARAM_LOAD_SCRIPT_RET_ADDR},
};

static const struct TrainerBattleParameter sDoubleBattleParams[] =
{
    {&sTrainerBattleMode,           TRAINER_PARAM_LOAD_VAL_8BIT},
    {&gTrainerBattleOpponent_A,     TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerObjectEventLocalId,   TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerAIntroSpeech,         TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerADefeatSpeech,        TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerVictorySpeech,        TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerCannotBattleSpeech,   TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerABattleScriptRetAddr, TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerBattleEndScript,      TRAINER_PARAM_LOAD_SCRIPT_RET_ADDR},
};

static const struct TrainerBattleParameter sOrdinaryNoIntroBattleParams[] =
{
    {&sTrainerBattleMode,           TRAINER_PARAM_LOAD_VAL_8BIT},
    {&gTrainerBattleOpponent_A,     TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerObjectEventLocalId,   TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerAIntroSpeech,         TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerADefeatSpeech,        TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerVictorySpeech,        TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerCannotBattleSpeech,   TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerABattleScriptRetAddr, TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerBattleEndScript,      TRAINER_PARAM_LOAD_SCRIPT_RET_ADDR},
};

static const struct TrainerBattleParameter sEarlyRivalBattleParams[] =
{
    {&sTrainerBattleMode,           TRAINER_PARAM_LOAD_VAL_8BIT},
    {&gTrainerBattleOpponent_A,     TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sRivalBattleFlags,            TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerAIntroSpeech,         TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerADefeatSpeech,        TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerVictorySpeech,        TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerCannotBattleSpeech,   TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerABattleScriptRetAddr, TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerBattleEndScript,      TRAINER_PARAM_LOAD_SCRIPT_RET_ADDR},
};

static const struct TrainerBattleParameter sContinueScriptDoubleBattleParams[] =
{
    {&sTrainerBattleMode,           TRAINER_PARAM_LOAD_VAL_8BIT},
    {&gTrainerBattleOpponent_A,     TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerObjectEventLocalId,   TRAINER_PARAM_LOAD_VAL_16BIT},
    {&sTrainerAIntroSpeech,         TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerADefeatSpeech,        TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerVictorySpeech,        TRAINER_PARAM_CLEAR_VAL_32BIT},
    {&sTrainerCannotBattleSpeech,   TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerABattleScriptRetAddr, TRAINER_PARAM_LOAD_VAL_32BIT},
    {&sTrainerBattleEndScript,      TRAINER_PARAM_LOAD_SCRIPT_RET_ADDR},
};


#define tState data[0]
#define tTransition data[1]

static void Task_BattleStart(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    switch (tState)
    {
    case 0:
        if (!FldEffPoison_IsActive())
        {
            HelpSystem_Disable();
            BattleTransition_StartOnField(tTransition);
            ++tState;
        }
        break;
    case 1:
        if (IsBattleTransitionDone() == TRUE)
        {
            HelpSystem_Enable();
            CleanupOverworldWindowsAndTilemaps();
            SetMainCallback2(CB2_InitBattle);
            RestartWildEncounterImmunitySteps();
            ClearPoisonStepCounter();
            DestroyTask(taskId);
        }
        break;
    }
}

static void CreateBattleStartTask(u8 transition, u16 song) // song == 0 means default music for current map
{
    u8 taskId = CreateTask(Task_BattleStart, 1);

    gTasks[taskId].tTransition = transition;
    PlayMapChosenOrBattleBGM(song);
}

static bool8 CheckSilphScopeInPokemonTower(u16 mapGroup, u16 mapNum)
{
    if (mapGroup == MAP_GROUP(POKEMON_TOWER_1F)
     && (mapNum == MAP_NUM(POKEMON_TOWER_1F)
      || mapNum == MAP_NUM(POKEMON_TOWER_2F)
      || mapNum == MAP_NUM(POKEMON_TOWER_3F)
      || mapNum == MAP_NUM(POKEMON_TOWER_4F)
      || mapNum == MAP_NUM(POKEMON_TOWER_5F)
      || mapNum == MAP_NUM(POKEMON_TOWER_6F)
      || mapNum == MAP_NUM(POKEMON_TOWER_7F))
     && !(CheckBagHasItem(ITEM_SILPH_SCOPE, 1)))
        return TRUE;
    else
        return FALSE;
}

void StartWildBattle(void)
{
    if (GetSafariZoneFlag())
        DoSafariBattle();
    else if (CheckSilphScopeInPokemonTower(gSaveBlock1Ptr->location.mapGroup, gSaveBlock1Ptr->location.mapNum))
        DoGhostBattle();
    else
        DoStandardWildBattle();
}

static void DoStandardWildBattle(void)
{
    LockPlayerFieldControls();
    FreezeObjectEvents();
    StopPlayerAvatar();
    gMain.savedCallback = CB2_EndWildBattle;
    gBattleTypeFlags = 0;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
}

void StartRoamerBattle(void)
{
    LockPlayerFieldControls();
    FreezeObjectEvents();
    StopPlayerAvatar();
    gMain.savedCallback = CB2_EndWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_ROAMER;
    CreateBattleStartTask(GetWildBattleTransition(), MUS_VS_LEGEND);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
}

static void DoSafariBattle(void)
{
    LockPlayerFieldControls();
    FreezeObjectEvents();
    StopPlayerAvatar();
    gMain.savedCallback = CB2_EndSafariBattle;
    gBattleTypeFlags = BATTLE_TYPE_SAFARI;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
}

static void DoGhostBattle(void)
{
    LockPlayerFieldControls();
    FreezeObjectEvents();
    StopPlayerAvatar();
    gMain.savedCallback = CB2_EndWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_GHOST;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    SetMonData(&gEnemyParty[0], MON_DATA_NICKNAME, gText_Ghost);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
}

static void DoTrainerBattle(void)
{
    CreateBattleStartTask(GetTrainerBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_TRAINER_BATTLES);
}

void StartOldManTutorialBattle(void)
{
    CreateMaleMon(&gEnemyParty[0], SPECIES_WEEDLE, 5);
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_ReturnToFieldContinueScriptPlayMapMusic;
    gBattleTypeFlags = BATTLE_TYPE_OLD_MAN_TUTORIAL;
    CreateBattleStartTask(B_TRANSITION_SLICE, 0);
}

void StartScriptedWildBattle(void)
{
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_WILD_SCRIPTED;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
}

void StartMarowakBattle(void)
{
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndMarowakBattle;
    if (CheckBagHasItem(ITEM_SILPH_SCOPE, 1))
    {
        gBattleTypeFlags = BATTLE_TYPE_GHOST | BATTLE_TYPE_GHOST_UNVEILED;
        CreateMonWithGenderNatureLetter(gEnemyParty, SPECIES_MAROWAK, 35, 31, MON_FEMALE, NATURE_SERIOUS, 0);
    }
    else
    {
        gBattleTypeFlags = BATTLE_TYPE_GHOST;
    }
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    SetMonData(&gEnemyParty[0], MON_DATA_NICKNAME, gText_Ghost);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
}

void StartSouthernIslandBattle(void)
{
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_LEGENDARY;
    CreateBattleStartTask(GetWildBattleTransition(), 0);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
}

void StartLegendaryBattle(void)
{
    u16 species;
    
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_LEGENDARY | BATTLE_TYPE_LEGENDARY_FRLG;
    species = GetMonData(&gEnemyParty[0], MON_DATA_SPECIES);
    switch (species)
    {
    case SPECIES_MEWTWO:
        CreateBattleStartTask(B_TRANSITION_BLUR, MUS_VS_MEWTWO);
        break;
    case SPECIES_DEOXYS:
        CreateBattleStartTask(B_TRANSITION_BLUR, MUS_VS_DEOXYS);
        break;
    case SPECIES_MOLTRES:
    case SPECIES_ARTICUNO:
    case SPECIES_ZAPDOS:
    case SPECIES_HO_OH:
    case SPECIES_LUGIA:
        CreateBattleStartTask(B_TRANSITION_BLUR, MUS_VS_LEGEND);
        break;
    default:
        CreateBattleStartTask(B_TRANSITION_BLUR, MUS_RS_VS_TRAINER);
        break;
    }
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
}

void StartGroudonKyogreBattle(void)
{
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_LEGENDARY | BATTLE_TYPE_KYOGRE_GROUDON;
    if (gGameVersion == VERSION_FIRE_RED)
        CreateBattleStartTask(B_TRANSITION_ANGLED_WIPES, MUS_RS_VS_TRAINER);
    else // pointless, exactly the same
        CreateBattleStartTask(B_TRANSITION_ANGLED_WIPES, MUS_RS_VS_TRAINER);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
}

void StartRegiBattle(void)
{
    LockPlayerFieldControls();
    gMain.savedCallback = CB2_EndScriptedWildBattle;
    gBattleTypeFlags = BATTLE_TYPE_LEGENDARY | BATTLE_TYPE_REGI;
    CreateBattleStartTask(B_TRANSITION_BLUR, MUS_RS_VS_TRAINER);
    IncrementGameStat(GAME_STAT_TOTAL_BATTLES);
    IncrementGameStat(GAME_STAT_WILD_BATTLES);
}

// Unused
static void EndPokedudeBattle(void)
{
    LoadPlayerParty();
    CB2_EndWildBattle();
}

// Unused
static void StartPokedudeBattle(void)
{
    LockPlayerFieldControls();
    FreezeObjectEvents();
    StopPlayerAvatar();
    gMain.savedCallback = EndPokedudeBattle;
    SavePlayerParty();
    InitPokedudePartyAndOpponent();
    CreateBattleStartTask(GetWildBattleTransition(), 0);
}

static void CB2_EndWildBattle(void)
{
    CpuFill16(0, (void *)BG_PLTT, BG_PLTT_SIZE);
    ResetOamRange(0, 128);
    if (IsPlayerDefeated(gBattleOutcome) == TRUE)
    {
        SetMainCallback2(CB2_WhiteOut);
    }
    else
    {
        SetMainCallback2(CB2_ReturnToField);
        gFieldCallback = FieldCB_SafariZoneRanOutOfBalls;
    }
}

static void CB2_EndScriptedWildBattle(void)
{
    CpuFill16(0, (void *)BG_PLTT, BG_PLTT_SIZE);
    ResetOamRange(0, 128);
    if (IsPlayerDefeated(gBattleOutcome) == TRUE)
        SetMainCallback2(CB2_WhiteOut);
    else
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
}

static void CB2_EndMarowakBattle(void)
{
    CpuFill16(0, (void *)BG_PLTT, BG_PLTT_SIZE);
    ResetOamRange(0, 128);
    if (IsPlayerDefeated(gBattleOutcome))
    {
        SetMainCallback2(CB2_WhiteOut);
    }
    else
    {
        // If result is TRUE player didnt defeat Marowak, force player back from stairs
        if (gBattleOutcome == B_OUTCOME_WON)
            gSpecialVar_Result = FALSE;
        else
            gSpecialVar_Result = TRUE;
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
    }
}

u8 BattleSetup_GetTerrainId(void)
{
    u16 tileBehavior;
    s16 x, y;

    PlayerGetDestCoords(&x, &y);
    tileBehavior = MapGridGetMetatileBehaviorAt(x, y);
    if (MetatileBehavior_IsTallGrass(tileBehavior))
        return BATTLE_TERRAIN_GRASS;
    if (MetatileBehavior_IsLongGrass(tileBehavior))
        return BATTLE_TERRAIN_LONG_GRASS;
    if (MetatileBehavior_IsSandOrShallowFlowingWater(tileBehavior))
        return BATTLE_TERRAIN_SAND;
    switch (gMapHeader.mapType)
    {
    case MAP_TYPE_TOWN:
    case MAP_TYPE_CITY:
    case MAP_TYPE_ROUTE:
        break;
    case MAP_TYPE_UNDERGROUND:
        if (MetatileBehavior_IsIndoorEncounter(tileBehavior))
            return BATTLE_TERRAIN_BUILDING;
        if (MetatileBehavior_IsSurfable(tileBehavior))
            return BATTLE_TERRAIN_POND;
        return BATTLE_TERRAIN_CAVE;
    case MAP_TYPE_INDOOR:
    case MAP_TYPE_SECRET_BASE:
        return BATTLE_TERRAIN_BUILDING;
    case MAP_TYPE_UNDERWATER:
        return BATTLE_TERRAIN_UNDERWATER;
    case MAP_TYPE_OCEAN_ROUTE:
        if (MetatileBehavior_IsSurfable(tileBehavior))
            return BATTLE_TERRAIN_WATER;
        return BATTLE_TERRAIN_PLAIN;
    }
    if (MetatileBehavior_IsDeepWaterTerrain(tileBehavior))
        return BATTLE_TERRAIN_WATER;
    if (MetatileBehavior_IsSurfable(tileBehavior))
        return BATTLE_TERRAIN_POND;
    if (MetatileBehavior_IsMountain(tileBehavior))
        return BATTLE_TERRAIN_MOUNTAIN;
    if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_SURFING))
    {
        if (MetatileBehavior_GetBridgeType(tileBehavior))
            return BATTLE_TERRAIN_POND;
        if (MetatileBehavior_IsBridge(tileBehavior) == TRUE)
            return BATTLE_TERRAIN_WATER;
    }
    return BATTLE_TERRAIN_PLAIN;
}

static u8 GetBattleTransitionTypeByMap(void)
{
    u16 behavior;
    s16 x, y;

    PlayerGetDestCoords(&x, &y);
    behavior = MapGridGetMetatileBehaviorAt(x, y);

    if (Overworld_GetFlashLevel())
        return TRANSITION_TYPE_FLASH;

    if (MetatileBehavior_IsSurfable(behavior))
        return TRANSITION_TYPE_WATER;

    switch (gMapHeader.mapType)
    {
    case MAP_TYPE_UNDERGROUND:
        return TRANSITION_TYPE_CAVE;
    case MAP_TYPE_UNDERWATER:
        return TRANSITION_TYPE_WATER;
    default:
        return TRANSITION_TYPE_NORMAL;
    }
}

static u16 GetSumOfPlayerPartyLevel(u8 numMons)
{
    u8 sum = 0;
    s32 i;

    for (i = 0; i < PARTY_SIZE; ++i)
    {
        u32 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES_OR_EGG);

        if (species != SPECIES_EGG && species != SPECIES_NONE && GetMonData(&gPlayerParty[i], MON_DATA_HP) != 0)
        {
            sum += GetMonData(&gPlayerParty[i], MON_DATA_LEVEL);
            if (--numMons == 0)
                break;
        }
    }
    return sum;
}

static u8 GetSumOfEnemyPartyLevel(u16 opponentId, u8 numMons)
{
    u8 i;
    u8 sum;
    u32 count = numMons;
    const struct Trainer *opponent = &gTrainers[opponentId];

    if (opponent->partySize < count)
         count = opponent->partySize;
    sum = 0;
    for (i = 0; i < count; i++)
        sum += opponent->party[i].lvl;
    return sum;
}

static u8 GetWildBattleTransition(void)
{
    u8 transitionType = GetBattleTransitionTypeByMap();
    u8 enemyLevel = GetMonData(&gEnemyParty[0], MON_DATA_LEVEL);
    u8 playerLevel = GetSumOfPlayerPartyLevel(1);

    if (enemyLevel < playerLevel)
        return sBattleTransitionTable_Wild[transitionType][0];
    else
        return sBattleTransitionTable_Wild[transitionType][1];
}

static u8 GetTrainerBattleTransition(void)
{
    u8 minPartyCount;
    u8 transitionType;
    u8 enemyLevel;
    u8 playerLevel;

    if (gTrainerBattleOpponent_A == TRAINER_SECRET_BASE)
        return B_TRANSITION_BLUE;
    if (gTrainers[gTrainerBattleOpponent_A].trainerClass == TRAINER_CLASS_ELITE_FOUR)
    {
        if (gTrainerBattleOpponent_A == TRAINER_ELITE_FOUR_LORELEI || gTrainerBattleOpponent_A == TRAINER_ELITE_FOUR_LORELEI_2)
            return B_TRANSITION_LORELEI;
        if (gTrainerBattleOpponent_A == TRAINER_ELITE_FOUR_BRUNO || gTrainerBattleOpponent_A == TRAINER_ELITE_FOUR_BRUNO_2)
            return B_TRANSITION_BRUNO;
        if (gTrainerBattleOpponent_A == TRAINER_ELITE_FOUR_AGATHA || gTrainerBattleOpponent_A == TRAINER_ELITE_FOUR_AGATHA_2)
            return B_TRANSITION_AGATHA;
        if (gTrainerBattleOpponent_A == TRAINER_ELITE_FOUR_LANCE || gTrainerBattleOpponent_A == TRAINER_ELITE_FOUR_LANCE_2)
            return B_TRANSITION_LANCE;
        return B_TRANSITION_BLUE;
    }
    if (gTrainers[gTrainerBattleOpponent_A].trainerClass == TRAINER_CLASS_CHAMPION)
        return B_TRANSITION_BLUE;
    if (gTrainers[gTrainerBattleOpponent_A].doubleBattle == TRUE)
        minPartyCount = 2; // double battles always at least have 2 pokemon.
    else
        minPartyCount = 1;
    transitionType = GetBattleTransitionTypeByMap();
    enemyLevel = GetSumOfEnemyPartyLevel(gTrainerBattleOpponent_A, minPartyCount);
    playerLevel = GetSumOfPlayerPartyLevel(minPartyCount);
    if (enemyLevel < playerLevel)
        return sBattleTransitionTable_Trainer[transitionType][0];
    else
        return sBattleTransitionTable_Trainer[transitionType][1];
}

u8 BattleSetup_GetBattleTowerBattleTransition(void)
{
    u8 enemyLevel = GetMonData(&gEnemyParty[0], MON_DATA_LEVEL);
    u8 playerLevel = GetSumOfPlayerPartyLevel(1);

    if (enemyLevel < playerLevel)
        return B_TRANSITION_POKEBALLS_TRAIL;
    else
        return B_TRANSITION_BIG_POKEBALL;
}

static u32 TrainerBattleLoadArg32(const u8 *ptr)
{
    return T1_READ_32(ptr);
}

static u16 TrainerBattleLoadArg16(const u8 *ptr)
{
    return T1_READ_16(ptr);
}

static u8 TrainerBattleLoadArg8(const u8 *ptr)
{
    return T1_READ_8(ptr);
}

static u16 GetTrainerAFlag(void)
{
    return TRAINER_FLAGS_START + gTrainerBattleOpponent_A;
}

static bool32 IsPlayerDefeated(u32 battleOutcome)
{
    switch (battleOutcome)
    {
    case B_OUTCOME_LOST:
    case B_OUTCOME_DREW:
        return TRUE;
    case B_OUTCOME_WON:
    case B_OUTCOME_RAN:
    case B_OUTCOME_PLAYER_TELEPORTED:
    case B_OUTCOME_MON_FLED:
    case B_OUTCOME_CAUGHT:
        return FALSE;
    default:
        return FALSE;
    }
}

static void InitTrainerBattleVariables(void)
{
    sTrainerBattleMode = 0;
    gTrainerBattleOpponent_A = 0;
    sTrainerObjectEventLocalId = 0;
    sTrainerAIntroSpeech = NULL;
    sTrainerADefeatSpeech = NULL;
    sTrainerVictorySpeech = NULL;
    sTrainerCannotBattleSpeech = NULL;
    sTrainerBattleEndScript = NULL;
    sTrainerABattleScriptRetAddr = NULL;
    sRivalBattleFlags = 0;
}

static inline void SetU8(void *ptr, u8 value)
{
    *(u8 *)(ptr) = value;
}

static inline void SetU16(void *ptr, u16 value)
{
    *(u16 *)(ptr) = value;
}

static inline void SetU32(void *ptr, u32 value)
{
    *(u32 *)(ptr) = value;
}

static inline void SetPtr(const void *ptr, const void *value)
{
    *(const void **)(ptr) = value;
}

static void TrainerBattleLoadArgs(const struct TrainerBattleParameter *specs, const u8 *data)
{
    while (1)
    {
        switch (specs->ptrType)
        {
        case TRAINER_PARAM_LOAD_VAL_8BIT:
            SetU8(specs->varPtr, TrainerBattleLoadArg8(data));
            data += 1;
            break;
        case TRAINER_PARAM_LOAD_VAL_16BIT:
            SetU16(specs->varPtr, TrainerBattleLoadArg16(data));
            data += 2;
            break;
        case TRAINER_PARAM_LOAD_VAL_32BIT:
            SetU32(specs->varPtr, TrainerBattleLoadArg32(data));
            data += 4;
            break;
        case TRAINER_PARAM_CLEAR_VAL_8BIT:
            SetU8(specs->varPtr, 0);
            break;
        case TRAINER_PARAM_CLEAR_VAL_16BIT:
            SetU16(specs->varPtr, 0);
            break;
        case TRAINER_PARAM_CLEAR_VAL_32BIT:
            SetU32(specs->varPtr, 0);
            break;
        case TRAINER_PARAM_LOAD_SCRIPT_RET_ADDR:
            SetPtr(specs->varPtr, data);
            return;
        }
        ++specs;
    }
}

static void SetMapVarsToTrainer(void)
{
    if (sTrainerObjectEventLocalId != 0)
    {
        gSpecialVar_LastTalked = sTrainerObjectEventLocalId;
        gSelectedObjectEvent = GetObjectEventIdByLocalIdAndMap(sTrainerObjectEventLocalId, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup);
    }
}

const u8 *BattleSetup_ConfigureTrainerBattle(const u8 *data)
{
    InitTrainerBattleVariables();
    sTrainerBattleMode = TrainerBattleLoadArg8(data);
    switch (sTrainerBattleMode)
    {
    case TRAINER_BATTLE_SINGLE_NO_INTRO_TEXT:
        TrainerBattleLoadArgs(sOrdinaryNoIntroBattleParams, data);
        return EventScript_DoNoIntroTrainerBattle;
    case TRAINER_BATTLE_DOUBLE:
        TrainerBattleLoadArgs(sDoubleBattleParams, data);
        SetMapVarsToTrainer();
        return EventScript_TryDoDoubleTrainerBattle;
    case TRAINER_BATTLE_CONTINUE_SCRIPT:
    case TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC:
        TrainerBattleLoadArgs(sContinueScriptBattleParams, data);
        SetMapVarsToTrainer();
        return EventScript_TryDoNormalTrainerBattle;
    case TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE:
    case TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE_NO_MUSIC:
        TrainerBattleLoadArgs(sContinueScriptDoubleBattleParams, data);
        SetMapVarsToTrainer();
        return EventScript_TryDoDoubleTrainerBattle;
    case TRAINER_BATTLE_REMATCH_DOUBLE:
        QL_FinishRecordingScene();
        TrainerBattleLoadArgs(sDoubleBattleParams, data);
        SetMapVarsToTrainer();
        gTrainerBattleOpponent_A = GetRematchTrainerId(gTrainerBattleOpponent_A);
        return EventScript_TryDoDoubleRematchBattle;
    case TRAINER_BATTLE_REMATCH:
        QL_FinishRecordingScene();
        TrainerBattleLoadArgs(sOrdinaryBattleParams, data);
        SetMapVarsToTrainer();
        gTrainerBattleOpponent_A = GetRematchTrainerId(gTrainerBattleOpponent_A);
        return EventScript_TryDoRematchBattle;
    case TRAINER_BATTLE_EARLY_RIVAL:
        TrainerBattleLoadArgs(sEarlyRivalBattleParams, data);
        return EventScript_DoNoIntroTrainerBattle;
    default:
        TrainerBattleLoadArgs(sOrdinaryBattleParams, data);
        SetMapVarsToTrainer();
        return EventScript_TryDoNormalTrainerBattle;
    }
}

void ConfigureAndSetUpOneTrainerBattle(u8 trainerEventObjId, const u8 *trainerScript)
{
    gSelectedObjectEvent = trainerEventObjId;
    gSpecialVar_LastTalked = gObjectEvents[trainerEventObjId].localId;
    BattleSetup_ConfigureTrainerBattle(trainerScript + 1);
    ScriptContext_SetupScript(EventScript_DoTrainerBattleFromApproach);
    LockPlayerFieldControls();
}

bool32 GetTrainerFlagFromScriptPointer(const u8 *data)
{
    u32 flag = TrainerBattleLoadArg16(data + 2);

    return FlagGet(TRAINER_FLAGS_START + flag);
}

void SetUpTrainerMovement(void)
{
    struct ObjectEvent *objectEvent = &gObjectEvents[gSelectedObjectEvent];

    SetTrainerMovementType(objectEvent, GetTrainerFacingDirectionMovementType(objectEvent->facingDirection));
}

u8 GetTrainerBattleMode(void)
{
    return sTrainerBattleMode;
}

u16 GetRivalBattleFlags(void)
{
    return sRivalBattleFlags;
}

u16 Script_HasTrainerBeenFought(void)
{
    return FlagGet(GetTrainerAFlag());
}

void SetBattledTrainerFlag(void)
{
    FlagSet(GetTrainerAFlag());
}

// not used
static void SetBattledTrainerFlag2(void)
{
    FlagSet(GetTrainerAFlag());
}

bool8 HasTrainerBeenFought(u16 trainerId)
{
    return FlagGet(TRAINER_FLAGS_START + trainerId);
}

void SetTrainerFlag(u16 trainerId)
{
    FlagSet(TRAINER_FLAGS_START + trainerId);
}

void ClearTrainerFlag(u16 trainerId)
{
    FlagClear(TRAINER_FLAGS_START + trainerId);
}

void StartTrainerBattle(void)
{
    gBattleTypeFlags = BATTLE_TYPE_TRAINER;
    if (GetTrainerBattleMode() == TRAINER_BATTLE_EARLY_RIVAL && GetRivalBattleFlags() & RIVAL_BATTLE_TUTORIAL)
        gBattleTypeFlags |= BATTLE_TYPE_FIRST_BATTLE;
    gMain.savedCallback = CB2_EndTrainerBattle;
    DoTrainerBattle();
    ScriptContext_Stop();
}

static void CB2_EndTrainerBattle(void)
{
    if (sTrainerBattleMode == TRAINER_BATTLE_EARLY_RIVAL)
    {
        if (IsPlayerDefeated(gBattleOutcome) == TRUE)
        {
            gSpecialVar_Result = TRUE;
            if (sRivalBattleFlags & RIVAL_BATTLE_HEAL_AFTER)
            {
                HealPlayerParty();
            }
            else
            {
                SetMainCallback2(CB2_WhiteOut);
                return;
            }
            SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
            SetBattledTrainerFlag();
            QuestLogEvents_HandleEndTrainerBattle();
        }
        else
        {
            gSpecialVar_Result = FALSE;
            SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
            SetBattledTrainerFlag();
            QuestLogEvents_HandleEndTrainerBattle();
        }

    }
    else
    {
        if (gTrainerBattleOpponent_A == TRAINER_SECRET_BASE)
        {
            SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
        }
        else if (IsPlayerDefeated(gBattleOutcome) == TRUE)
        {
            SetMainCallback2(CB2_WhiteOut);
        }
        else
        {
            SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
            SetBattledTrainerFlag();
            QuestLogEvents_HandleEndTrainerBattle();
        }
    }
}

static void CB2_EndRematchBattle(void)
{
    if (gTrainerBattleOpponent_A == TRAINER_SECRET_BASE)
    {
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
    }
    else if (IsPlayerDefeated(gBattleOutcome) == TRUE)
    {
        SetMainCallback2(CB2_WhiteOut);
    }
    else
    {
        SetMainCallback2(CB2_ReturnToFieldContinueScriptPlayMapMusic);
        SetBattledTrainerFlag();
        ClearRematchStateOfLastTalked();
        ResetDeferredLinkEvent();
    }
}

void StartRematchBattle(void)
{
    gBattleTypeFlags = BATTLE_TYPE_TRAINER;
    gMain.savedCallback = CB2_EndRematchBattle;
    DoTrainerBattle();
    ScriptContext_Stop();
}

void ShowTrainerIntroSpeech(void)
{
    ShowFieldMessage(GetIntroSpeechOfApproachingTrainer());
}

const u8 *BattleSetup_GetScriptAddrAfterBattle(void)
{
    if (sTrainerBattleEndScript != NULL)
        return sTrainerBattleEndScript;
    else
        return EventScript_TestSignpostMsg;
}

const u8 *BattleSetup_GetTrainerPostBattleScript(void)
{
    if (sTrainerABattleScriptRetAddr != NULL)
        return sTrainerABattleScriptRetAddr;
    else
        return EventScript_TestSignpostMsg;
}

void ShowTrainerCantBattleSpeech(void)
{
    ShowFieldMessage(GetTrainerCantBattleSpeech());
}

void PlayTrainerEncounterMusic(void)
{
    u16 music;

    if (!QL_IS_PLAYBACK_STATE
     && sTrainerBattleMode != TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC
     && sTrainerBattleMode != TRAINER_BATTLE_CONTINUE_SCRIPT_DOUBLE_NO_MUSIC)
    {
        switch (GetTrainerEncounterMusicId(gTrainerBattleOpponent_A))
        {
        case TRAINER_ENCOUNTER_MUSIC_FEMALE:
        case TRAINER_ENCOUNTER_MUSIC_GIRL:
        case TRAINER_ENCOUNTER_MUSIC_TWINS:
            music = MUS_ENCOUNTER_GIRL;
            break;
        case TRAINER_ENCOUNTER_MUSIC_MALE:
        case TRAINER_ENCOUNTER_MUSIC_INTENSE:
        case TRAINER_ENCOUNTER_MUSIC_COOL:
        case TRAINER_ENCOUNTER_MUSIC_SWIMMER:
        case TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR:
        case TRAINER_ENCOUNTER_MUSIC_HIKER:
        case TRAINER_ENCOUNTER_MUSIC_INTERVIEWER:
        case TRAINER_ENCOUNTER_MUSIC_RICH:
            music = MUS_ENCOUNTER_BOY;
            break;
        default:
            music = MUS_ENCOUNTER_ROCKET;
            break;
        }
        PlayNewMapMusic(music);
    }
}

static const u8 *ReturnEmptyStringIfNull(const u8 *string)
{
    if (string == NULL)
        return gString_Dummy;
    else
        return string;
}

static const u8 *GetIntroSpeechOfApproachingTrainer(void)
{
    return ReturnEmptyStringIfNull(sTrainerAIntroSpeech);
}

const u8 *GetTrainerALoseText(void)
{
    const u8 *string = sTrainerADefeatSpeech;

    StringExpandPlaceholders(gStringVar4, ReturnEmptyStringIfNull(string));
    return gStringVar4;
}

const u8 *GetTrainerWonSpeech(void)
{
    StringExpandPlaceholders(gStringVar4, ReturnEmptyStringIfNull(sTrainerVictorySpeech));
    return gStringVar4;
}

static const u8 *GetTrainerCantBattleSpeech(void)
{
    return ReturnEmptyStringIfNull(sTrainerCannotBattleSpeech);
}

u8 getLevelCap(void){
    u8 levelCap = 0;
    u16 nextLeader, i;
    const struct TrainerMon *partyData;    
    if (!FlagGet(FLAG_HARD) || FlagGet(FLAG_IS_CHAMPION))
        return 100;
    if (!FlagGet(FLAG_BADGE01_GET))
        nextLeader = TRAINER_LEADER_BROCK;
    else if (!FlagGet(FLAG_BADGE02_GET))
        nextLeader = TRAINER_LEADER_MISTY;
    else if (!FlagGet(FLAG_GYM3CAP))
        nextLeader = TRAINER_LEADER_LT_SURGE;
    else if (!FlagGet(FLAG_GYM4CAP))
        nextLeader = TRAINER_LEADER_ERIKA;
    else if (!FlagGet(FLAG_GYM5CAP))
        nextLeader = TRAINER_LEADER_KOGA;
    else if (!FlagGet(FLAG_GYM6CAP))
        nextLeader = TRAINER_LEADER_SABRINA;
    else if ((!FlagGet(FLAG_DEFEATED_BLAINE) || !FlagGet(FLAG_DEFEATED_SABRINA) || !FlagGet(FLAG_DEFEATED_ERIKA) || !FlagGet(FLAG_DEFEATED_LT_SURGE) || !FlagGet(FLAG_DEFEATED_KOGA)))
        nextLeader = TRAINER_LEADER_BLAINE;
    else if (!FlagGet(FLAG_BADGE08_GET))
        nextLeader = TRAINER_LEADER_GIOVANNI;
    else if (!FlagGet(FLAG_LORCAP))
        nextLeader = TRAINER_ELITE_FOUR_LORELEI;
    else if (!FlagGet(FLAG_BRUNOCAP))
        nextLeader = TRAINER_ELITE_FOUR_BRUNO;
    else if (!FlagGet(FLAG_AGATHACAP))
        nextLeader = TRAINER_ELITE_FOUR_AGATHA;
    else if (!FlagGet(FLAG_MAXCAP))
        nextLeader = TRAINER_ELITE_FOUR_LANCE;
    else if (!FlagGet(FLAG_IS_CHAMPION))
        nextLeader = TRAINER_CHAMPION_FIRST_CHARMANDER;

    partyData = gTrainers[nextLeader].party;
    for (i = 0; i < gTrainers[nextLeader].partySize; i++){
        if (partyData[i].lvl > levelCap)
            levelCap = partyData[i].lvl;
    }
    return levelCap;
}

bool8 levelCappedNuzlocke(u8 level){
    u8 levelCap = getLevelCap();
    if (!FlagGet(FLAG_HARD) || FlagGet(FLAG_IS_CHAMPION))
        return FALSE;  //Redundant since getLevelCap would already return 100 for these, but better to be explicit
    if (level >= levelCap)
        return TRUE;
    return FALSE;
}

bool8 CanUseRareCandyHardcore(void)//Unused
{
    if (!FlagGet(FLAG_NUZLOCKE) || FlagGet(FLAG_IS_CHAMPION))
        return TRUE;

    // Before Brock
    if (!FlagGet(FLAG_BADGE01_GET))
    {
        return FlagGet(TRAINER_BUG_CATCHER_RICK) &&
               FlagGet(TRAINER_BUG_CATCHER_SAMMY) &&
               FlagGet(TRAINER_BUG_CATCHER_DOUG) &&
               FlagGet(TRAINER_SAM) &&
               FlagGet(TRAINER_BUG_CATCHER_CHARLIE) &&
               FlagGet(TRAINER_BUG_CATCHER_ANTHONY) &&
               FlagGet(FLAG_BLUE_FOUGHT_ROUTE22) &&
               FlagGet(TRAINER_CAMPER_LIAM);
    }
    // Before Misty
    else if (!FlagGet(FLAG_BADGE02_GET))
    {
        return FlagGet(TRAINER_YOUNGSTER_BEN) &&
               FlagGet(TRAINER_YOUNGSTER_CALVIN) &&
               FlagGet(TRAINER_BUG_CATCHER_COLTON) &&
               FlagGet(TRAINER_BUG_CATCHER_GREG) &&
               FlagGet(TRAINER_BUG_CATCHER_JAMES) &&
               FlagGet(TRAINER_LASS_JANICE) &&
               FlagGet(TRAINER_LASS_SALLY) &&
               FlagGet(TRAINER_LASS_ROBIN) &&
               FlagGet(TRAINER_HIKER_MARCOS) &&
               FlagGet(TRAINER_YOUNGSTER_JOSH) &&
               FlagGet(TRAINER_LASS_MIRIAM) &&
               FlagGet(TRAINER_LASS_IRIS) &&
               FlagGet(TRAINER_SUPER_NERD_JOVAN) &&
               FlagGet(TRAINER_BUG_CATCHER_KENT) &&
               FlagGet(TRAINER_BUG_CATCHER_ROBBY) &&
               FlagGet(TRAINER_SUPER_NERD_MIGUEL) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_2) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_3) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_4) &&
               FlagGet(TRAINER_YOUNGSTER_TIMMY) &&
               FlagGet(TRAINER_BUG_CATCHER_CALE) &&
               FlagGet(TRAINER_LASS_RELI) &&
               FlagGet(TRAINER_LASS_ALI) &&
               FlagGet(TRAINER_CAMPER_SHANE) &&
               FlagGet(TRAINER_CAMPER_ETHAN) &&
               FlagGet(TRAINER_PICNICKER_DIANA) &&
               FlagGet(TRAINER_SWIMMER_MALE_LUIS) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_6);
    }

    // Before Lt. Surge
    else if (!FlagGet(FLAG_GYM3CAP))
    {
        return FlagGet(TRAINER_YOUNGSTER_JOEY) &&
               FlagGet(TRAINER_YOUNGSTER_DAN) &&
               FlagGet(TRAINER_YOUNGSTER_CHAD) &&
               FlagGet(TRAINER_PICNICKER_KELSEY) &&
               FlagGet(TRAINER_LASS_HALEY) &&
               FlagGet(TRAINER_HIKER_FRANKLIN) &&
               FlagGet(TRAINER_HIKER_NOB) &&
               FlagGet(TRAINER_HIKER_WAYNE) &&
               FlagGet(TRAINER_CAMPER_FLINT) &&
               FlagGet(TRAINER_BUG_CATCHER_KEIGO) &&
               FlagGet(TRAINER_BUG_CATCHER_ELIJAH) &&
               FlagGet(TRAINER_CAMPER_RICKY) &&
               FlagGet(TRAINER_CAMPER_JEFF) &&
               FlagGet(TRAINER_PICNICKER_NANCY) &&
               FlagGet(TRAINER_PICNICKER_ISABELLE) &&
               FlagGet(TRAINER_YOUNGSTER_EDDIE) &&
               FlagGet(TRAINER_YOUNGSTER_DILLON) &&
               FlagGet(TRAINER_YOUNGSTER_YASU) &&
               FlagGet(TRAINER_YOUNGSTER_DAVE) &&
               FlagGet(TRAINER_ENGINEER_BRAXTON) &&
               FlagGet(TRAINER_ENGINEER_BERNIE) &&
               FlagGet(TRAINER_GAMER_HUGO) &&
               FlagGet(TRAINER_GAMER_JASPER) &&
               FlagGet(TRAINER_GAMER_DIRK) &&
               FlagGet(TRAINER_GAMER_DARIAN) &&
               FlagGet(TRAINER_LASS_ANN) &&
               FlagGet(TRAINER_YOUNGSTER_TYLER) &&
               FlagGet(TRAINER_FISHERMAN_DALE) &&
               FlagGet(TRAINER_GENTLEMAN_THOMAS) &&
               FlagGet(TRAINER_GENTLEMAN_BROOKS) &&
               FlagGet(TRAINER_GENTLEMAN_LAMAR) &&
               FlagGet(TRAINER_LASS_DAWN) &&
               FlagGet(TRAINER_FISHERMAN_BARNY) &&
               FlagGet(TRAINER_SAILOR_PHILLIP) &&
               FlagGet(TRAINER_SAILOR_HUEY) &&
               FlagGet(TRAINER_SAILOR_DYLAN) &&
               FlagGet(TRAINER_SAILOR_LEONARD) &&
               FlagGet(TRAINER_SAILOR_DUNCAN) &&
               FlagGet(TRAINER_SAILOR_DWAYNE) &&
               FlagGet(TRAINER_ENGINEER_BAILY) &&
               FlagGet(TRAINER_GENTLEMAN_TUCKER);
    }

    // Before Erika
    else if (!FlagGet(FLAG_GYM4CAP))
    {
        return FlagGet(TRAINER_BUG_CATCHER_BRENT) &&
               FlagGet(TRAINER_BUG_CATCHER_CONNER) &&
               FlagGet(TRAINER_CAMPER_CHRIS) &&
               FlagGet(TRAINER_CAMPER_DREW) &&
               FlagGet(TRAINER_PICNICKER_ALICIA) &&
               FlagGet(TRAINER_PICNICKER_CAITLIN) &&
               FlagGet(TRAINER_HIKER_ALAN) &&
               FlagGet(TRAINER_HIKER_BRICE) &&
               FlagGet(TRAINER_HIKER_JEREMY) &&
               FlagGet(TRAINER_PICNICKER_HEIDI) &&
               FlagGet(TRAINER_PICNICKER_CAROL) &&
               FlagGet(TRAINER_POKEMANIAC_HERMAN) &&
               FlagGet(TRAINER_HIKER_CLARK) &&
               FlagGet(TRAINER_HIKER_TRENT) &&
               FlagGet(TRAINER_LASS_PAIGE) &&
               FlagGet(TRAINER_LASS_ANDREA) &&
               FlagGet(TRAINER_LASS_MEGAN) &&
               FlagGet(TRAINER_LASS_JULIA) &&
               FlagGet(TRAINER_SUPER_NERD_AIDAN) &&
               FlagGet(TRAINER_SUPER_NERD_GLENN) &&
               FlagGet(TRAINER_SUPER_NERD_LESLIE) &&
               FlagGet(TRAINER_GAMER_STAN) &&
               FlagGet(TRAINER_GAMER_RICH) &&
               FlagGet(TRAINER_TWINS_ELI_ANNE) &&
               FlagGet(TRAINER_BIKER_RICARDO) &&
               FlagGet(TRAINER_BIKER_JAREN) &&
               FlagGet(TRAINER_YOUNG_COUPLE_LEA_JED) &&
               FlagGet(TRAINER_HIKER_LENNY) &&
               FlagGet(TRAINER_HIKER_OLIVER) &&
               FlagGet(TRAINER_HIKER_LUCAS) &&
               FlagGet(TRAINER_POKEMANIAC_ASHTON) &&
               FlagGet(TRAINER_PICNICKER_LEAH) &&
               FlagGet(TRAINER_PICNICKER_ARIANA) &&
               FlagGet(TRAINER_PICNICKER_DANA) &&
               FlagGet(TRAINER_PICNICKER_SOFIA) &&
               FlagGet(TRAINER_PICNICKER_MARTHA) &&
               FlagGet(TRAINER_HIKER_DUDLEY) &&
               FlagGet(TRAINER_HIKER_ALLEN) &&
               FlagGet(TRAINER_HIKER_ERIC) &&
               FlagGet(TRAINER_POKEMANIAC_COOPER) &&
               FlagGet(TRAINER_POKEMANIAC_STEVE) &&
               FlagGet(TRAINER_POKEMANIAC_WINSTON) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_8) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_9) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_10) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_11) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_12) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_13) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_14) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_15) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_16) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_17) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_18) &&
               FlagGet(TRAINER_BOSS_GIOVANNI) &&
               FlagGet(TRAINER_LASS_KAY) &&
               FlagGet(TRAINER_LASS_LISA) &&
               FlagGet(TRAINER_PICNICKER_TINA) &&
               FlagGet(TRAINER_BEAUTY_BRIDGET) &&
               FlagGet(TRAINER_BEAUTY_TAMIA) &&
               FlagGet(TRAINER_BEAUTY_LORI) &&
               FlagGet(TRAINER_FISHERMAN_NED) &&
               FlagGet(TRAINER_FISHERMAN_CHIP) &&
               FlagGet(TRAINER_FISHERMAN_HANK) &&
               FlagGet(TRAINER_FISHERMAN_ELLIOT) &&
               FlagGet(TRAINER_YOUNG_COUPLE_GIA_JES) &&
               FlagGet(TRAINER_BLACK_BELT_HITOSHI) &&
               FlagGet(TRAINER_BLACK_BELT_HIDEKI) &&
               FlagGet(TRAINER_BLACK_BELT_AARON) &&
               FlagGet(TRAINER_BLACK_BELT_MIKE) &&
               FlagGet(TRAINER_BLACK_BELT_KOICHI) &&
               FlagGet(TRAINER_COOLTRAINER_MARY);
    }

    // Before Koga
    else if (!FlagGet(FLAG_GYM5CAP))
    {
        return FlagGet(TRAINER_FISHERMAN_ANDREW) &&
               FlagGet(TRAINER_CHANNELER_PATRICIA) &&
               FlagGet(TRAINER_CHANNELER_CARLY) &&
               FlagGet(TRAINER_CHANNELER_HOPE) &&
               FlagGet(TRAINER_CHANNELER_PAULA) &&
               FlagGet(TRAINER_CHANNELER_LAUREL) &&
               FlagGet(TRAINER_CHANNELER_JODY) &&
               FlagGet(TRAINER_CHANNELER_TAMMY) &&
               FlagGet(TRAINER_CHANNELER_RUTH) &&
               FlagGet(TRAINER_CHANNELER_KARINA) &&
               FlagGet(TRAINER_CHANNELER_JANAE) &&
               FlagGet(TRAINER_CHANNELER_ANGELICA) &&
               FlagGet(TRAINER_CHANNELER_EMILIA) &&
               FlagGet(TRAINER_CHANNELER_JENNIFER) &&
               FlagGet(TRAINER_ROCKER_LUCA) &&
               FlagGet(TRAINER_CAMPER_JUSTIN) &&
               FlagGet(TRAINER_BIKER_JARED) &&
               FlagGet(TRAINER_BEAUTY_LOLA) &&
               FlagGet(TRAINER_BEAUTY_SHEILA) &&
               FlagGet(TRAINER_BIRD_KEEPER_SEBASTIAN) &&
               FlagGet(TRAINER_BIRD_KEEPER_PERRY) &&
               FlagGet(TRAINER_BIRD_KEEPER_ROBERT) &&
               FlagGet(TRAINER_PICNICKER_ALMA) &&
               FlagGet(TRAINER_PICNICKER_SUSIE) &&
               FlagGet(TRAINER_PICNICKER_VALERIE) &&
               FlagGet(TRAINER_PICNICKER_GWEN) &&
               FlagGet(TRAINER_BIKER_MALIK) &&
               FlagGet(TRAINER_BIKER_LUKAS) &&
               FlagGet(TRAINER_BIKER_ISAAC) &&
               FlagGet(TRAINER_BIKER_GERALD) &&
               FlagGet(TRAINER_BIRD_KEEPER_DONALD) &&
               FlagGet(TRAINER_BIRD_KEEPER_BENNY) &&
               FlagGet(TRAINER_BIRD_KEEPER_CARTER) &&
               FlagGet(TRAINER_BIRD_KEEPER_MITCH) &&
               FlagGet(TRAINER_BIRD_KEEPER_BECK) &&
               FlagGet(TRAINER_BIRD_KEEPER_MARLON) &&
               FlagGet(TRAINER_TWINS_KIRI_JAN) &&
               FlagGet(TRAINER_BIKER_ERNEST) &&
               FlagGet(TRAINER_BIKER_ALEX) &&
               FlagGet(TRAINER_BEAUTY_GRACE) &&
               FlagGet(TRAINER_BEAUTY_OLIVIA) &&
               FlagGet(TRAINER_BIRD_KEEPER_EDWIN) &&
               FlagGet(TRAINER_BIRD_KEEPER_CHESTER) &&
               FlagGet(TRAINER_PICNICKER_YAZMIN) &&
               FlagGet(TRAINER_PICNICKER_KINDRA) &&
               FlagGet(TRAINER_PICNICKER_BECKY) &&
               FlagGet(TRAINER_PICNICKER_CELIA) &&
               FlagGet(TRAINER_CRUSH_KIN_RON_MYA) &&
               FlagGet(TRAINER_BIKER_LAO) &&
               FlagGet(TRAINER_BIKER_HIDEO) &&
               FlagGet(TRAINER_BIKER_RUBEN) &&
               FlagGet(TRAINER_CUE_BALL_KOJI) &&
               FlagGet(TRAINER_CUE_BALL_LUKE) &&
               FlagGet(TRAINER_CUE_BALL_CAMRON) &&
               FlagGet(TRAINER_BIKER_BILLY) &&
               FlagGet(TRAINER_BIKER_NIKOLAS) &&
               FlagGet(TRAINER_BIKER_JAXON) &&
               FlagGet(TRAINER_BIKER_WILLIAM) &&
               FlagGet(TRAINER_CUE_BALL_RAUL) &&
               FlagGet(TRAINER_CUE_BALL_ISAIAH) &&
               FlagGet(TRAINER_CUE_BALL_ZEEK) &&
               FlagGet(TRAINER_CUE_BALL_JAMAL) &&
               FlagGet(TRAINER_CUE_BALL_COREY) &&
               FlagGet(TRAINER_BIKER_VIRGIL) &&
               FlagGet(TRAINER_BIRD_KEEPER_WILTON) &&
               FlagGet(TRAINER_BIRD_KEEPER_RAMIRO) &&
               FlagGet(TRAINER_BIRD_KEEPER_JACOB) &&
               FlagGet(TRAINER_SWIMMER_MALE_REECE) &&
               FlagGet(TRAINER_SWIMMER_MALE_RICHARD) &&
               FlagGet(TRAINER_TAMER_PHIL) &&
               FlagGet(TRAINER_TAMER_EDGAR) &&
               FlagGet(TRAINER_JUGGLER_KIRK) &&
               FlagGet(TRAINER_JUGGLER_SHAWN) &&
               FlagGet(TRAINER_JUGGLER_KAYDEN) &&
               FlagGet(TRAINER_LASS_JANINE);
    }

    else if (!FlagGet(FLAG_GYM6CAP))
    {
        return FlagGet(TRAINER_SCIENTIST_CONNOR) &&
               FlagGet(TRAINER_SCIENTIST_JERRY) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_23) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_24) &&
               FlagGet(TRAINER_SCIENTIST_JOSE) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_25) &&
               FlagGet(TRAINER_SCIENTIST_RODNEY) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_26) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_27) &&
               FlagGet(TRAINER_SCIENTIST_BEAU) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_28) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_29) &&
               FlagGet(TRAINER_JUGGLER_DALTON) &&
               FlagGet(TRAINER_SCIENTIST_TAYLOR) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_30) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_31) &&
               FlagGet(TRAINER_SCIENTIST_JOSHUA) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_33) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_34) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_35) &&
               FlagGet(TRAINER_SCIENTIST_PARKER) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_32) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_36) &&
               FlagGet(TRAINER_SCIENTIST_ED) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_37) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_38) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_39) &&
               FlagGet(TRAINER_SCIENTIST_TRAVIS) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_40) &&
               FlagGet(TRAINER_TEAM_ROCKET_GRUNT_41) &&
               FlagGet(TRAINER_PSYCHIC_TYRON) &&
               FlagGet(TRAINER_PSYCHIC_JOHAN) &&
               FlagGet(TRAINER_PSYCHIC_CAMERON) &&
               FlagGet(TRAINER_PSYCHIC_PRESTON) &&
               FlagGet(TRAINER_CHANNELER_AMANDA) &&
               FlagGet(TRAINER_CHANNELER_STACY) &&
               FlagGet(TRAINER_CHANNELER_TASHA);
    }
    else if (!FlagGet(FLAG_BADGE07_GET))
    {
        return FlagGet(TRAINER_SWIMMER_MALE_MATTHEW) &&
               FlagGet(TRAINER_SWIMMER_MALE_DOUGLAS) &&
               FlagGet(TRAINER_SWIMMER_MALE_DAVID) &&
               FlagGet(TRAINER_SWIMMER_MALE_TONY) &&
               FlagGet(TRAINER_SWIMMER_MALE_AXLE) &&
               FlagGet(TRAINER_SWIMMER_FEMALE_ANYA) &&
               FlagGet(TRAINER_SWIMMER_FEMALE_ALICE) &&
               FlagGet(TRAINER_SWIMMER_FEMALE_CONNIE) &&
               FlagGet(TRAINER_SIS_AND_BRO_LIA_LUC) &&
               FlagGet(TRAINER_SWIMMER_MALE_BARRY) &&
               FlagGet(TRAINER_SWIMMER_MALE_DEAN) &&
               FlagGet(TRAINER_SWIMMER_MALE_DARRIN) &&
               FlagGet(TRAINER_SWIMMER_FEMALE_TIFFANY) &&
               FlagGet(TRAINER_SWIMMER_FEMALE_NORA) &&
               FlagGet(TRAINER_SWIMMER_FEMALE_MELISSA) &&
               FlagGet(TRAINER_SWIMMER_FEMALE_SHIRLEY) &&
               FlagGet(TRAINER_BIRD_KEEPER_ROGER) &&
               FlagGet(TRAINER_PICNICKER_MISSY) &&
               FlagGet(TRAINER_PICNICKER_IRENE) &&
               FlagGet(TRAINER_FISHERMAN_RONALD) &&
               FlagGet(TRAINER_FISHERMAN_CLAUDE) &&
               FlagGet(TRAINER_FISHERMAN_WADE) &&
               FlagGet(TRAINER_FISHERMAN_NOLAN) &&
               FlagGet(TRAINER_SWIMMER_MALE_SPENCER) &&
               FlagGet(TRAINER_SWIMMER_MALE_JACK) &&
               FlagGet(TRAINER_SWIMMER_MALE_JEROME) &&
               FlagGet(TRAINER_SWIMMER_MALE_ROLAND) &&
               FlagGet(TRAINER_SIS_AND_BRO_LIL_IAN) &&
               FlagGet(TRAINER_SCIENTIST_TED) &&
               FlagGet(TRAINER_YOUNGSTER_JOHNSON) &&
               FlagGet(TRAINER_BURGLAR_ARNIE) &&
               FlagGet(TRAINER_BURGLAR_SIMON) &&
               FlagGet(TRAINER_SCIENTIST_BRAYDON) &&
               FlagGet(TRAINER_BURGLAR_LEWIS) &&
               FlagGet(TRAINER_SCIENTIST_IVAN) &&
               FlagGet(TRAINER_SUPER_NERD_ERIK) &&
               FlagGet(TRAINER_SUPER_NERD_AVERY) &&
               FlagGet(TRAINER_SUPER_NERD_DEREK) &&
               FlagGet(TRAINER_SUPER_NERD_ZAC) &&
               FlagGet(TRAINER_BURGLAR_QUINN) &&
               FlagGet(TRAINER_BURGLAR_RAMON) &&
               FlagGet(TRAINER_BURGLAR_DUSTY);
    }
    else if (!FlagGet(FLAG_BADGE08_GET))
    {
        return FlagGet(TRAINER_TAMER_JASON) &&
               FlagGet(TRAINER_TAMER_COLE) &&
               FlagGet(TRAINER_BLACK_BELT_ATSUSHI) &&
               FlagGet(TRAINER_BLACK_BELT_KIYO) &&
               FlagGet(TRAINER_BLACK_BELT_TAKASHI) &&
               FlagGet(TRAINER_COOLTRAINER_SAMUEL) &&
               FlagGet(TRAINER_COOLTRAINER_YUJI) &&
               FlagGet(TRAINER_AROMA_LADY_NIKKI) &&
               FlagGet(TRAINER_AROMA_LADY_VIOLET) &&
               FlagGet(TRAINER_TUBER_AMIRA) &&
               FlagGet(TRAINER_TUBER_ALEXIS) &&
               FlagGet(TRAINER_SWIMMER_FEMALE_TISHA) &&
               FlagGet(TRAINER_TWINS_JOY_MEG) &&
               FlagGet(TRAINER_COOLTRAINER_WARREN);
    }
    else if (!FlagGet(FLAG_LORCAP))
    {
        return FlagGet(TRAINER_COOLTRAINER_NAOMI) &&
               FlagGet(TRAINER_COOLTRAINER_BERKE) &&
               FlagGet(TRAINER_COOLTRAINER_ROLANDO) &&
               FlagGet(TRAINER_BLACK_BELT_DAISUKE) &&
               FlagGet(TRAINER_JUGGLER_NELSON) &&
               FlagGet(TRAINER_JUGGLER_GREGORY) &&
               FlagGet(TRAINER_COOLTRAINER_JULIE) &&
               FlagGet(TRAINER_COOLTRAINER_GEORGE) &&
               FlagGet(TRAINER_COOLTRAINER_COLBY) &&
               FlagGet(TRAINER_COOLTRAINER_CAROLINE) &&
               FlagGet(TRAINER_COOLTRAINER_ALEXA) &&
               FlagGet(TRAINER_COOLTRAINER_SHANNON) &&
               FlagGet(TRAINER_TAMER_VINCENT) &&
               FlagGet(TRAINER_POKEMANIAC_DAWSON) &&
               FlagGet(TRAINER_SWIMMER_FEMALE_ABIGAIL) &&
               FlagGet(TRAINER_SWIMMER_FEMALE_MARIA) &&
               FlagGet(TRAINER_SWIMMER_MALE_FINN) &&
               FlagGet(TRAINER_SWIMMER_MALE_GARRETT) &&
               FlagGet(TRAINER_FISHERMAN_TOMMY) &&
               FlagGet(TRAINER_CRUSH_GIRL_SHARON) &&
               FlagGet(TRAINER_CRUSH_GIRL_TANYA) &&
               FlagGet(TRAINER_BLACK_BELT_SHEA) &&
               FlagGet(TRAINER_BLACK_BELT_HUGH) &&
               FlagGet(TRAINER_CAMPER_BRYCE) &&
               FlagGet(TRAINER_PICNICKER_CLAIRE) &&
               FlagGet(TRAINER_CRUSH_KIN_MIK_KIA) &&
               FlagGet(TRAINER_PKMN_RANGER_LOGAN) &&
               FlagGet(TRAINER_PKMN_RANGER_BETH) &&
               FlagGet(TRAINER_CRUSH_GIRL_JOCELYN) &&
               FlagGet(TRAINER_COOLTRAINER_AUSTINA);
    }
    return TRUE;
}

