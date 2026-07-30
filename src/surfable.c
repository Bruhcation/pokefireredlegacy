#include "global.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "field_effect.h"
#include "field_effect_helpers.h"
#include "field_player_avatar.h"
#include "main.h"
#include "party_menu.h"
#include "sprite.h"
#include "surfable.h"
#include "constants/event_object_movement.h"
#include "constants/field_effects.h"
#include "constants/moves.h"
#include "constants/species.h"
#include "constants/vars.h"
#include "constants/flags.h"

extern const struct OamData gObjectEventBaseOam_32x32;
extern const struct OamData gObjectEventBaseOam_64x64;
extern const struct SpriteTemplate *const gFieldEffectObjectTemplatePointers[];

// Fallback in case your local include/constants/field_effects.h doesn't have these yet
#ifndef FLDEFF_PAL_TAG_RED
#define FLDEFF_PAL_TAG_RED   0x1100 // OBJ_EVENT_PAL_TAG_PLAYER_RED
#endif
#ifndef FLDEFF_PAL_TAG_GREEN
#define FLDEFF_PAL_TAG_GREEN 0x1110 // OBJ_EVENT_PAL_TAG_PLAYER_GREEN (Leaf)
#endif

// Fallback in case your local include/event_object_movement.h doesn't declare this yet
u8 LoadObjectEventPalette(u16 paletteTag);

// SynchroniseSurfAnim / SynchroniseSurfPosition / CreateBobbingEffect / GetSurfBlob_BobState /
// SetSurfBlob_BobState / BOB_PLAYER_AND_MON all come from field_effect_helpers.h (un-statically
// exposed there - see field_effect_helpers.c patch).

static void CreateOverlaySprite(void);
static void UpdateSurfMonOverlay(struct Sprite *sprite);

struct RideablePokemon
{
    u16 species;
    u8 trainerPose;
};

#include "data/object_events/surfable/surfable_pokemon.h"
#include "data/object_events/surfable/surfable_pokemon_graphics.h"
#include "data/object_events/surfable/surfable_pokemon_pic_tables.h"
#include "data/object_events/surfable/surfable_pokemon_templates.h"

static EWRAM_DATA u16 sCurrentSurfMon = 0;
static EWRAM_DATA u8 sSurfBaseSpriteId = MAX_SPRITES;

// VAR_SURF_MON_SLOT is set in FldEff_UseSurf (src/field_effect.c) when the
// player picks a mon to surf on, and kept in sync if that mon's party slot
// moves (see the slot-swap fix in party_menu.c's SwitchPartyMon-equivalent).
static u16 GetSurfMonSpecies(void)
{
    u8 slot = VarGet(VAR_SURF_MON_SLOT);
    return GetMonData(&gPlayerParty[slot], MON_DATA_SPECIES);
}

static u16 GetSurfablePokemonSprite(void)
{
    u32 i;
    u16 species = GetSurfMonSpecies();

    for (i = 0; i < ARRAY_COUNT(gSurfablePokemon); i++)
    {
        if (species == gSurfablePokemon[i].species)
            return i;
    }
    return 0xFFFF;
}

static void LoadSurfOverworldPalette(void)
{
    u8 slot = VarGet(VAR_SURF_MON_SLOT);

    if (IsMonShiny(&gPlayerParty[slot]) == TRUE)
        LoadSpritePalette(&sSurfablePokemonShinyPalettes[sCurrentSurfMon]);
    else
        LoadSpritePalette(&sSurfablePokemonPalettes[sCurrentSurfMon]);
}

u32 CreateSurfablePokemonSprite(void)
{
    u8 spriteId;
    struct Sprite *sprite;

    SetSpritePosToOffsetMapCoords((s16 *)&gFieldEffectArguments[0], (s16 *)&gFieldEffectArguments[1], 8, 8);

    sCurrentSurfMon = GetSurfablePokemonSprite();
    if (sCurrentSurfMon != 0xFFFF && FlagGet(FLAG_ENABLE_SURFOVERWORLD))
    {
        LoadSurfOverworldPalette();
        spriteId = CreateSpriteAtEnd(&gSurfablePokemonOverworldSprites[sCurrentSurfMon], gFieldEffectArguments[0], gFieldEffectArguments[1], 0x96);
        sSurfBaseSpriteId = spriteId;
        // Only the few species whose sprite is taller than the player (and needs a piece
        // poking out above them) get a second, overlay sprite - everything else has real
        // (non-null) overlay data too, but it's a duplicate of the overworld sprite that
        // just drifts out of sync with it, so only create it for species that actually use it.
        if (gSurfablePokemonOverlaySprites[sCurrentSurfMon].tileTag == 0xFFFF)
            CreateOverlaySprite();

        if (spriteId != MAX_SPRITES)
        {
            sprite = &gSprites[spriteId];
            sprite->coordOffsetEnabled = TRUE;
            sprite->data[2] = gFieldEffectArguments[2];
            sprite->data[3] = -1;
            sprite->data[6] = -1;
            sprite->data[7] = -1;
        }
    }
    else
    {
        // No custom sprite for this species (or the feature is flagged off) - fall back to the surf blob
        spriteId = CreateSpriteAtEnd(gFieldEffectObjectTemplatePointers[FLDEFFOBJ_SURF_BLOB], gFieldEffectArguments[0], gFieldEffectArguments[1], 0x96);
        if (spriteId != MAX_SPRITES)
        {
            sprite = &gSprites[spriteId];
            sprite->coordOffsetEnabled = TRUE;
            sprite->data[2] = gFieldEffectArguments[2];
            // Can use either gender's palette, so try to use the one that should be loaded
            sprite->oam.paletteNum = LoadObjectEventPalette(gSaveBlock2Ptr->playerGender ? FLDEFF_PAL_TAG_GREEN : FLDEFF_PAL_TAG_RED);
            sprite->data[3] = -1;
            sprite->data[6] = -1;
            sprite->data[7] = -1;
        }
    }
    FieldEffectActiveListRemove(FLDEFF_SURF_BLOB);
    return spriteId;
}

static void CreateOverlaySprite(void)
{
    u8 overlaySprite;
    u8 subpriority;
    struct Sprite *sprite;

    subpriority = gSprites[gPlayerAvatar.spriteId].subpriority - 1;
    overlaySprite = CreateSpriteAtEnd(&gSurfablePokemonOverlaySprites[sCurrentSurfMon], gFieldEffectArguments[0], gFieldEffectArguments[1], subpriority);

    if (overlaySprite != MAX_SPRITES)
    {
        sprite = &gSprites[overlaySprite];
        sprite->coordOffsetEnabled = TRUE;
        sprite->data[2] = gFieldEffectArguments[2];
        sprite->data[3] = -1;
        sprite->data[6] = -1;
        sprite->data[7] = -1;
        sprite->oam.priority = 2;
    }
    SetSurfBlob_BobState(overlaySprite, BOB_PLAYER_AND_MON);
}

static void UpdateSurfMonOverlay(struct Sprite *sprite)
{
    struct ObjectEvent *playerObj;
    struct Sprite *linkedSprite;
    u8 subpriority;

    playerObj = &gObjectEvents[gPlayerAvatar.objectEventId];
    linkedSprite = &gSprites[playerObj->spriteId];

    SynchroniseSurfAnim(playerObj, sprite);
    SynchroniseSurfPosition(playerObj, sprite);

    if (VarGet(VAR_FREEZE_SURF_BLOB) == 0 && sSurfBaseSpriteId != MAX_SPRITES)
        sprite->y2 = gSprites[sSurfBaseSpriteId].y2;

    subpriority = gSprites[gPlayerAvatar.spriteId].subpriority - 1;
    sprite->subpriority = subpriority;

    if (VarGet(VAR_FREEZE_SURF_BLOB) == 0 && linkedSprite->animNum < MOVEMENT_ACTION_DELAY_16)
    {
        // Reset the subpriority for the overlay sprite so it reliably stays on top of the
        // player, including right after a screen transition (e.g. leaving a battle). Only do
        // this once the player is out of a transitional state (like the initial jump onto the
        // mount) - during the jump arc the player's screen position swings dramatically, which
        // would make this chase a rapidly-changing value and flicker in front of/behind things.
        subpriority = gSprites[gPlayerAvatar.spriteId].subpriority - 1;
        sprite->subpriority = subpriority;

        sprite->x = linkedSprite->x;
        sprite->y = linkedSprite->y + 8;
        sprite->y2 = linkedSprite->y2;
    }
    if (!(gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_SURFING))
        DestroySprite(sprite);
}