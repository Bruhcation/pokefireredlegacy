#include "global.h"
#include "random.h"
#include "wild_encounter.h"
#include "event_data.h"
#include "fieldmap.h"
#include "random.h"
#include "roamer.h"
#include "field_player_avatar.h"
#include "battle_setup.h"
#include "overworld.h"
#include "metatile_behavior.h"
#include "event_scripts.h"
#include "script.h"
#include "link.h"
#include "quest_log.h"
#include "constants/maps.h"
#include "constants/abilities.h"
#include "constants/items.h"
#include "constants/weather.h"

#define MAX_ENCOUNTER_RATE 1600

#define HEADER_NONE 0xFFFF

struct WildEncounterData
{
    u32 rngState;
    u16 prevMetatileBehavior;
    u16 encounterRateBuff;
    u8 stepsSinceLastEncounter;
    u8 abilityEffect;
    u16 leadMonHeldItem;
};

static EWRAM_DATA struct WildEncounterData sWildEncounterData = {};
static EWRAM_DATA bool8 sWildEncountersDisabled = FALSE;

static bool8 UnlockedTanobyOrAreNotInTanoby(void);
static u32 GenerateUnownPersonalityByLetter(u8 letter);
static bool8 IsWildLevelAllowedByRepel(u8 level);
static void ApplyFluteEncounterRateMod(u32 *rate);
static u8 GetFluteEncounterRateModType(void);
static void ApplyCleanseTagEncounterRateMod(u32 *rate);
static bool8 IsLeadMonHoldingCleanseTag(void);
static u16 WildEncounterRandom(void);
static void AddToWildEncounterRateBuff(u8 encouterRate);
static u8 PickWildMonNature(void);
static bool8 IsAbilityAllowingEncounter(u8 level);
static bool8 TryGetAbilityInfluencedWildMonIndex(const struct WildPokemon *wildMon, u8 type, u8 ability, u8 *monIndex);
static bool8 TryGetRandomWildMonIndexByType(const struct WildPokemon *wildMon, u8 type, u8 numMon, u8 *monIndex);

#include "data/wild_encounters.h"

static const u8 sUnownLetterSlots[][LAND_WILD_COUNT] = {
  //  A   A   A   A   A   A   A   A   A   A   A   ?
    { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 27},
  //  C   C   C   D   D   D   H   H   H   U   U   O
    { 2,  2,  2,  3,  3,  3,  7,  7,  7, 20, 20, 14},
  //  N   N   N   N   S   S   S   S   I   I   E   E
    {13, 13, 13, 13, 18, 18, 18, 18,  8,  8,  4,  4},
  //  P   P   L   L   J   J   R   R   R   Q   Q   Q
    {15, 15, 11, 11,  9,  9, 17, 17, 17, 16, 16, 16},
  //  Y   Y   T   T   G   G   G   F   F   F   K   K
    {24, 24, 19, 19,  6,  6,  6,  5,  5,  5, 10, 10},
  //  V   V   V   W   W   W   X   X   M   M   B   B
    {21, 21, 21, 22, 22, 22, 23, 23, 12, 12,  1,  1},
  //  Z   Z   Z   Z   Z   Z   Z   Z   Z   Z   Z   !
    {25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 26},
};

void DisableWildEncounters(bool8 state)
{
    sWildEncountersDisabled = state;
}

static u8 ChooseWildMonIndex_Land(void)
{
    u8 rand = Random() % ENCOUNTER_CHANCE_LAND_MONS_TOTAL;

    if (rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_0)
        return 0;
    else if (rand >= ENCOUNTER_CHANCE_LAND_MONS_SLOT_0 && rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_1)
        return 1;
    else if (rand >= ENCOUNTER_CHANCE_LAND_MONS_SLOT_1 && rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_2)
        return 2;
    else if (rand >= ENCOUNTER_CHANCE_LAND_MONS_SLOT_2 && rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_3)
        return 3;
    else if (rand >= ENCOUNTER_CHANCE_LAND_MONS_SLOT_3 && rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_4)
        return 4;
    else if (rand >= ENCOUNTER_CHANCE_LAND_MONS_SLOT_4 && rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_5)
        return 5;
    else if (rand >= ENCOUNTER_CHANCE_LAND_MONS_SLOT_5 && rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_6)
        return 6;
    else if (rand >= ENCOUNTER_CHANCE_LAND_MONS_SLOT_6 && rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_7)
        return 7;
    else if (rand >= ENCOUNTER_CHANCE_LAND_MONS_SLOT_7 && rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_8)
        return 8;
    else if (rand >= ENCOUNTER_CHANCE_LAND_MONS_SLOT_8 && rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_9)
        return 9;
    else if (rand >= ENCOUNTER_CHANCE_LAND_MONS_SLOT_9 && rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_10)
        return 10;
    else
        return 11;
}

static u8 ChooseWildMonIndex_WaterRock(void)
{
    u8 rand = Random() % ENCOUNTER_CHANCE_WATER_MONS_TOTAL;

    if (rand < ENCOUNTER_CHANCE_WATER_MONS_SLOT_0)
        return 0;
    else if (rand >= ENCOUNTER_CHANCE_WATER_MONS_SLOT_0 && rand < ENCOUNTER_CHANCE_WATER_MONS_SLOT_1)
        return 1;
    else if (rand >= ENCOUNTER_CHANCE_WATER_MONS_SLOT_1 && rand < ENCOUNTER_CHANCE_WATER_MONS_SLOT_2)
        return 2;
    else if (rand >= ENCOUNTER_CHANCE_WATER_MONS_SLOT_2 && rand < ENCOUNTER_CHANCE_WATER_MONS_SLOT_3)
        return 3;
    else
        return 4;
}

static u8 ChooseWildMonIndex_Fishing(u8 rod)
{
    u8 wildMonIndex = 0;
    u8 rand = Random() % max(max(ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_TOTAL, ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_TOTAL),
                             ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_TOTAL);

    switch (rod)
    {
    case OLD_ROD:
        if (rand < ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_0)
            wildMonIndex = 0;
        else
            wildMonIndex = 1;
        break;
    case GOOD_ROD:
        if (rand < ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_2)
            wildMonIndex = 2;
        if (rand >= ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_2 && rand < ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_3)
            wildMonIndex = 3;
        if (rand >= ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_3 && rand < ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_4)
            wildMonIndex = 4;
        break;
    case SUPER_ROD:
        if (rand < ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_5)
            wildMonIndex = 5;
        if (rand >= ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_5 && rand < ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_6)
            wildMonIndex = 6;
        if (rand >= ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_6 && rand < ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_7)
            wildMonIndex = 7;
        if (rand >= ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_7 && rand < ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_8)
            wildMonIndex = 8;
        if (rand >= ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_8 && rand < ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_9)
            wildMonIndex = 9;
        break;
    }
    return wildMonIndex;
}

static u8 ChooseWildMonLevel(const struct WildPokemon * info)
{
    u8 lo;
    u8 hi;
    u8 mod;
    u8 res;
    if (info->maxLevel >= info->minLevel)
    {
        lo = info->minLevel;
        hi = info->maxLevel;
    }
    else
    {
        lo = info->maxLevel;
        hi = info->minLevel;
    }
    mod = hi - lo + 1;
    res = Random() % mod;
    // check ability for max level mon
    if (!GetMonData(&gPlayerParty[0], MON_DATA_IS_EGG))
    {
        u8 ability = GetMonAbility(&gPlayerParty[0]);
        if (ability == ABILITY_HUSTLE || ability == ABILITY_VITAL_SPIRIT || ability == ABILITY_PRESSURE)
        {
            if (Random() % 2 == 0)
                return hi;
            if (res != 0)
                res--;
        }
    }
    return lo + res;
}

static u16 GetCurrentMapWildMonHeaderId(void)
{
    u16 i;

    for (i = 0; ; i++)
    {
        const struct WildPokemonHeader * wildHeader = &gWildMonHeaders[i];
        if (wildHeader->mapGroup == MAP_GROUP(UNDEFINED))
            break;

        if (gWildMonHeaders[i].mapGroup == gSaveBlock1Ptr->location.mapGroup &&
            gWildMonHeaders[i].mapNum == gSaveBlock1Ptr->location.mapNum)
        {
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE1) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE1))
            {
                i += VarGet(VAR_ROUTE1);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE2) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE2))
            {
                i += VarGet(VAR_ROUTE2);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE3) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE3))
            {
                i += VarGet(VAR_ROUTE3);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE4) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE4))
            {
                i += VarGet(VAR_ROUTE4);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE5) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE5))
            {
                i += VarGet(VAR_ROUTE5);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE6) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE6))
            {
                i += VarGet(VAR_ROUTE6);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE7) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE7))
            {
                i += VarGet(VAR_ROUTE7);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE8) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE8))
            {
                i += VarGet(VAR_ROUTE8);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE9) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE9))
            {
                i += VarGet(VAR_ROUTE9);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE10) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE10))
            {
                i += VarGet(VAR_ROUTE10);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE11) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE11))
            {
                i += VarGet(VAR_ROUTE11);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE12) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE12))
            {
                i += VarGet(VAR_ROUTE12);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE13) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE13))
            {
                i += VarGet(VAR_ROUTE13);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE14) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE14))
            {
                i += VarGet(VAR_ROUTE14);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE15) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE15))
            {
                i += VarGet(VAR_ROUTE15);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE16) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE16))
            {
                i += VarGet(VAR_ROUTE16);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE17) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE17))
            {
                i += VarGet(VAR_ROUTE17);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE18) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE18))
            {
                i += VarGet(VAR_ROUTE18);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE19) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE19))
            {
                i += VarGet(VAR_ROUTE19);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE20) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE20))
            {
                i += VarGet(VAR_ROUTE20);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE21_NORTH) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE21_NORTH))
            {
                i += VarGet(VAR_ROUTE21);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE21_SOUTH) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE21_SOUTH))
            {
                i += VarGet(VAR_ROUTE211);
            }
                if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE22) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE22))
            {
                i += VarGet(VAR_ROUTE22);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE24) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE24))
            {
                i += VarGet(VAR_ROUTE24);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROUTE25) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROUTE25))
            {
                i += VarGet(VAR_ROUTE25);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(POWER_PLANT) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(POWER_PLANT))
            {
                i += VarGet(VAR_POWERPLANT);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(DIGLETTS_CAVE_B1F) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(DIGLETTS_CAVE_B1F))
            {
                i += VarGet(VAR_DIGLETTCAVE);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(SAFARI_ZONE_CENTER) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(SAFARI_ZONE_CENTER))
            {
                i += VarGet(VAR_SAFARIZONE);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(VICTORY_ROAD_3F) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(VICTORY_ROAD_3F))
            {
                i += VarGet(VAR_VICTORYROAD);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(MT_MOON_1F) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(MT_MOON_1F))
            {
                i += VarGet(VAR_MTMOON1F);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(MT_MOON_B2F) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(MT_MOON_B2F))
            {
                i += VarGet(VAR_MTMOONB2F);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROCK_TUNNEL_1F) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROCK_TUNNEL_1F))
            {
                i += VarGet(VAR_ROCK_TUNNEL);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(ROCK_TUNNEL_B1F) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(ROCK_TUNNEL_B1F))
            {
                i += VarGet(VAR_ROCK_TUNNEL2);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(SEAFOAM_ISLANDS_1F) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(SEAFOAM_ISLANDS_1F))
            {
                i += VarGet(VAR_SEAFOAM1);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(SEAFOAM_ISLANDS_B1F) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(SEAFOAM_ISLANDS_1F))
            {
                i += VarGet(VAR_SEAFOAM2);
            }
                if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(SEAFOAM_ISLANDS_B2F) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(SEAFOAM_ISLANDS_B2F))
            {
                i += VarGet(VAR_SEAFOAM3);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(SEAFOAM_ISLANDS_B3F) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(SEAFOAM_ISLANDS_B3F))
            {
                i += VarGet(VAR_SEAFOAM4);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(SEAFOAM_ISLANDS_B4F) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(SEAFOAM_ISLANDS_B4F))
            {
                i += VarGet(VAR_SEAFOAM5);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(POKEMON_TOWER_3F) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(POKEMON_TOWER_3F))
            {
                i += VarGet(VAR_TOWER3);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(POKEMON_TOWER_4F) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(POKEMON_TOWER_4F))
            {
                i += VarGet(VAR_TOWER4);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(POKEMON_TOWER_5F) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(POKEMON_TOWER_5F))
            {
                i += VarGet(VAR_TOWER5);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(POKEMON_TOWER_6F) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(POKEMON_TOWER_6F))
            {
                i += VarGet(VAR_TOWER6);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(POKEMON_TOWER_7F) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(POKEMON_TOWER_7F))
            {
                i += VarGet(VAR_TOWER7);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(POKEMON_MANSION_1F) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(POKEMON_MANSION_1F))
            {
                i += VarGet(VAR_MANSION1);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(POKEMON_MANSION_2F) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(POKEMON_MANSION_2F))
            {
                i += VarGet(VAR_MANSION2);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(POKEMON_MANSION_3F) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(POKEMON_MANSION_3F))
            {
                i += VarGet(VAR_MANSION3);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(POKEMON_MANSION_B1F) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(POKEMON_MANSION_B1F))
            {
                i += VarGet(VAR_MANSIONB1F);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(CERULEAN_CITY) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(CERULEAN_CITY))
            {
                i += VarGet(VAR_CERULEAN);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(VERMILION_CITY) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(VERMILION_CITY))
            {
                i += VarGet(VAR_VERMILION);
            }
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(SIX_ISLAND_ALTERING_CAVE) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(SIX_ISLAND_ALTERING_CAVE))
            {
                u16 alteringCaveId = VarGet(VAR_ALTERING_CAVE_WILD_SET);
                if (alteringCaveId >= NUM_ALTERING_CAVE_TABLES)
                    alteringCaveId = 0;

                i += alteringCaveId;
            }

            if (!UnlockedTanobyOrAreNotInTanoby())
                break;
            return i;
        }
    }

    return HEADER_NONE;
}

static bool8 UnlockedTanobyOrAreNotInTanoby(void)
{
    if (FlagGet(FLAG_SYS_UNLOCKED_TANOBY_RUINS))
        return TRUE;
    if (gSaveBlock1Ptr->location.mapGroup != MAP_GROUP(SEVEN_ISLAND_TANOBY_RUINS_DILFORD_CHAMBER))
        return TRUE;
    if (!(gSaveBlock1Ptr->location.mapNum == MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER)
    ||  gSaveBlock1Ptr->location.mapNum == MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_LIPTOO_CHAMBER)
    ||  gSaveBlock1Ptr->location.mapNum == MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_WEEPTH_CHAMBER)
    ||  gSaveBlock1Ptr->location.mapNum == MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_DILFORD_CHAMBER)
    ||  gSaveBlock1Ptr->location.mapNum == MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_SCUFIB_CHAMBER)
    ||  gSaveBlock1Ptr->location.mapNum == MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_RIXY_CHAMBER)
    ||  gSaveBlock1Ptr->location.mapNum == MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_VIAPOIS_CHAMBER)
    ))
        return TRUE;
    return FALSE;
}

static void GenerateWildMon(u16 species, u8 level, u8 slot)
{
    bool32 checkCuteCharm;
    u32 personality;
    s8 chamber;
    ZeroEnemyPartyMons();

    checkCuteCharm = TRUE;
    switch (gSpeciesInfo[species].genderRatio)
    {
    case MON_MALE:
    case MON_FEMALE:
    case MON_GENDERLESS:
        checkCuteCharm = FALSE;
        break;
    }
    if (species != SPECIES_UNOWN)
    {
        if (checkCuteCharm
        && !GetMonData(&gPlayerParty[0], MON_DATA_IS_EGG)
        && GetMonAbility(&gPlayerParty[0]) == ABILITY_CUTE_CHARM
        && Random() % 3 != 0)
        {
            u16 leadingMonSpecies = GetMonData(&gPlayerParty[0], MON_DATA_SPECIES);
            u32 leadingMonPersonality = GetMonData(&gPlayerParty[0], MON_DATA_PERSONALITY);
            u8 gender = GetGenderFromSpeciesAndPersonality(leadingMonSpecies, leadingMonPersonality);

            // misses mon is genderless check, although no genderless mon can have cute charm as ability
            if (gender == MON_FEMALE)
                gender = MON_MALE;
            else
                gender = MON_FEMALE;

            CreateMonWithGenderNatureLetter(&gEnemyParty[0], species, level, USE_RANDOM_IVS, gender, PickWildMonNature(), 0);
            return;
        }
        CreateMonWithNature(&gEnemyParty[0], species, level, USE_RANDOM_IVS, PickWildMonNature());
    }
    else
    {
        chamber = gSaveBlock1Ptr->location.mapNum - MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER);
        personality = GenerateUnownPersonalityByLetter(sUnownLetterSlots[chamber][slot]);
        CreateMon(&gEnemyParty[0], species, level, USE_RANDOM_IVS, TRUE, personality, FALSE, 0);
    }
}

static u32 GenerateUnownPersonalityByLetter(u8 letter)
{
    u32 personality;
    do
    {
        personality = (Random() << 16) | Random();
    } while (GetUnownLetterByPersonalityLoByte(personality) != letter);
    return personality;
}

u8 GetUnownLetterByPersonalityLoByte(u32 personality)
{
    return GET_UNOWN_LETTER(personality);
}

enum
{
    WILD_AREA_LAND,
    WILD_AREA_WATER,
    WILD_AREA_ROCKS,
    WILD_AREA_FISHING,
};

#define WILD_CHECK_REPEL    0x1
#define WILD_CHECK_KEEN_EYE 0x2

static bool8 TryGenerateWildMon(const struct WildPokemonInfo * info, u8 area, u8 flags)
{
    u8 slot = 0;
    u8 level;
    switch (area)
    {
    case WILD_AREA_LAND:
        if (TryGetAbilityInfluencedWildMonIndex(info->wildPokemon, TYPE_STEEL, ABILITY_MAGNET_PULL, &slot))
            break;
        if (TryGetAbilityInfluencedWildMonIndex(info->wildPokemon, TYPE_ELECTRIC, ABILITY_STATIC, &slot))
            break;
        slot = ChooseWildMonIndex_Land();
        break;
    case WILD_AREA_WATER:
        if (TryGetAbilityInfluencedWildMonIndex(info->wildPokemon, TYPE_ELECTRIC, ABILITY_STATIC, &slot))
            break;
        slot = ChooseWildMonIndex_WaterRock();
        break;
    case WILD_AREA_ROCKS:
        slot = ChooseWildMonIndex_WaterRock();
        break;
    }
    level = ChooseWildMonLevel(&info->wildPokemon[slot]);
    if (flags & WILD_CHECK_REPEL && !IsWildLevelAllowedByRepel(level))
    {
        return FALSE;
    }
    if (flags & WILD_CHECK_KEEN_EYE && !IsAbilityAllowingEncounter(level))
        return FALSE;
    
    GenerateWildMon(info->wildPokemon[slot].species, level, slot);
    return TRUE;
}

static u16 GenerateFishingEncounter(const struct WildPokemonInfo * info, u8 rod)
{
    u8 slot = ChooseWildMonIndex_Fishing(rod);
    u8 level = ChooseWildMonLevel(&info->wildPokemon[slot]);
    GenerateWildMon(info->wildPokemon[slot].species, level, slot);
    return info->wildPokemon[slot].species;
}

static bool8 DoWildEncounterRateDiceRoll(u16 encounterRate)
{
    if (WildEncounterRandom() % MAX_ENCOUNTER_RATE < encounterRate)
        return TRUE;
    return FALSE;
}

static bool8 DoWildEncounterRateTest(u32 encounterRate, bool8 ignoreAbility)
{
    encounterRate *= 16;
    if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_MACH_BIKE | PLAYER_AVATAR_FLAG_ACRO_BIKE))
        encounterRate = encounterRate * 80 / 100;
    encounterRate += sWildEncounterData.encounterRateBuff * 16 / 200;
    ApplyFluteEncounterRateMod(&encounterRate);
    ApplyCleanseTagEncounterRateMod(&encounterRate);
    if (!ignoreAbility)
    {
        switch (sWildEncounterData.abilityEffect)
        {
        case 1:
            encounterRate /= 2;
            break;
        case 2:
            encounterRate *= 2;
            break;
        }
    }
    if (encounterRate > MAX_ENCOUNTER_RATE)
        encounterRate = MAX_ENCOUNTER_RATE;
    return DoWildEncounterRateDiceRoll(encounterRate);
}

static u8 GetAbilityEncounterRateModType(void)
{
    sWildEncounterData.abilityEffect = 0;
    if (!GetMonData(&gPlayerParty[0], MON_DATA_SANITY_IS_EGG))
    {
        u8 ability = GetMonAbility(&gPlayerParty[0]);
        if (ability == ABILITY_STENCH)
            sWildEncounterData.abilityEffect = 1;
        else if (ability == ABILITY_ILLUMINATE)
            sWildEncounterData.abilityEffect = 2;
        else if (ability == ABILITY_WHITE_SMOKE)
            sWildEncounterData.abilityEffect = 1;
        else if (ability == ABILITY_ARENA_TRAP)
            sWildEncounterData.abilityEffect = 2;
        else if (ability == ABILITY_SAND_VEIL && gSaveBlock1Ptr->weather == WEATHER_SANDSTORM)
            sWildEncounterData.abilityEffect = 1;
    }
    return sWildEncounterData.abilityEffect;
}

static bool8 DoGlobalWildEncounterDiceRoll(void)
{
    if ((Random() % 100) >= 60)
        return FALSE;
    return TRUE;
}

bool8 StandardWildEncounter(u32 currMetatileAttrs, u16 previousMetatileBehavior)
{
    u16 headerId;
    struct Roamer * roamer;

    if (sWildEncountersDisabled == TRUE)
        return FALSE;

    headerId = GetCurrentMapWildMonHeaderId();
    if (headerId != HEADER_NONE)
    {
        if (ExtractMetatileAttribute(currMetatileAttrs, METATILE_ATTRIBUTE_ENCOUNTER_TYPE) == TILE_ENCOUNTER_LAND)
        {
            if (gWildMonHeaders[headerId].landMonsInfo == NULL)
                return FALSE;
            else if (previousMetatileBehavior != ExtractMetatileAttribute(currMetatileAttrs, METATILE_ATTRIBUTE_BEHAVIOR) && !DoGlobalWildEncounterDiceRoll())
                return FALSE;
            if (DoWildEncounterRateTest(gWildMonHeaders[headerId].landMonsInfo->encounterRate, FALSE) != TRUE)
            {
                AddToWildEncounterRateBuff(gWildMonHeaders[headerId].landMonsInfo->encounterRate);
                return FALSE;
            }

            else if (TryStartRoamerEncounter() == TRUE)
            {
                roamer = &gSaveBlock1Ptr->roamer;
                if (!IsWildLevelAllowedByRepel(roamer->level))
                {
                    return FALSE;
                }

                StartRoamerBattle();
                return TRUE;
            }
            else
            {

                // try a regular wild land encounter
                if (TryGenerateWildMon(gWildMonHeaders[headerId].landMonsInfo, WILD_AREA_LAND, WILD_CHECK_REPEL | WILD_CHECK_KEEN_EYE) == TRUE)                {
                    StartWildBattle();
                    return TRUE;
                }
                else
                {
                    AddToWildEncounterRateBuff(gWildMonHeaders[headerId].landMonsInfo->encounterRate);
                }
            }
        }
        else if (ExtractMetatileAttribute(currMetatileAttrs, METATILE_ATTRIBUTE_ENCOUNTER_TYPE) == TILE_ENCOUNTER_WATER
                 || (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_SURFING) && MetatileBehavior_IsBridge(ExtractMetatileAttribute(currMetatileAttrs, METATILE_ATTRIBUTE_BEHAVIOR)) == TRUE))
        {
            if (gWildMonHeaders[headerId].waterMonsInfo == NULL)
                return FALSE;
            else if (previousMetatileBehavior != ExtractMetatileAttribute(currMetatileAttrs, METATILE_ATTRIBUTE_BEHAVIOR) && !DoGlobalWildEncounterDiceRoll())
                return FALSE;
            else if (DoWildEncounterRateTest(gWildMonHeaders[headerId].waterMonsInfo->encounterRate, FALSE) != TRUE)
            {
                AddToWildEncounterRateBuff(gWildMonHeaders[headerId].waterMonsInfo->encounterRate);
                return FALSE;
            }

            if (TryStartRoamerEncounter() == TRUE)
            {
                roamer = &gSaveBlock1Ptr->roamer;
                if (!IsWildLevelAllowedByRepel(roamer->level))
                {
                    return FALSE;
                }

                StartRoamerBattle();
                return TRUE;
            }
            else // try a regular surfing encounter
            {
                if (TryGenerateWildMon(gWildMonHeaders[headerId].waterMonsInfo, WILD_AREA_WATER, WILD_CHECK_REPEL | WILD_CHECK_KEEN_EYE) == TRUE)
                {                
                    StartWildBattle();
                    return TRUE;
                }
                else
                {
                    AddToWildEncounterRateBuff(gWildMonHeaders[headerId].waterMonsInfo->encounterRate);
                }
            }
        }
    }

    return FALSE;
}

void RockSmashWildEncounter(void)
{
    u16 headerIdx = GetCurrentMapWildMonHeaderId();
    if (headerIdx == HEADER_NONE)
        gSpecialVar_Result = FALSE;
    else if (gWildMonHeaders[headerIdx].rockSmashMonsInfo == NULL)
        gSpecialVar_Result = FALSE;
    else if (DoWildEncounterRateTest(gWildMonHeaders[headerIdx].rockSmashMonsInfo->encounterRate, TRUE) != TRUE)
        gSpecialVar_Result = FALSE;
    else if (TryGenerateWildMon(gWildMonHeaders[headerIdx].rockSmashMonsInfo, WILD_AREA_ROCKS, WILD_CHECK_REPEL | WILD_CHECK_KEEN_EYE) == TRUE)
    {
        StartWildBattle();
        gSpecialVar_Result = TRUE;
    }
    else
        gSpecialVar_Result = FALSE;
}

bool8 SweetScentWildEncounter(void)
{
    s16 x, y;
    u16 headerId;

    PlayerGetDestCoords(&x, &y);
    headerId = GetCurrentMapWildMonHeaderId();
    if (headerId != HEADER_NONE)
    {
        if (MapGridGetMetatileAttributeAt(x, y, METATILE_ATTRIBUTE_ENCOUNTER_TYPE) == TILE_ENCOUNTER_LAND)
        {
            if (TryStartRoamerEncounter() == TRUE)
            {
                StartRoamerBattle();
                return TRUE;
            }

            if (gWildMonHeaders[headerId].landMonsInfo == NULL)
                return FALSE;

            TryGenerateWildMon(gWildMonHeaders[headerId].landMonsInfo, WILD_AREA_LAND, 0);

            StartWildBattle();
            return TRUE;
        }
        else if (MapGridGetMetatileAttributeAt(x, y, METATILE_ATTRIBUTE_ENCOUNTER_TYPE) == TILE_ENCOUNTER_WATER)
        {
            if (TryStartRoamerEncounter() == TRUE)
            {
                StartRoamerBattle();
                return TRUE;
            }

            if (gWildMonHeaders[headerId].waterMonsInfo == NULL)
                return FALSE;

            TryGenerateWildMon(gWildMonHeaders[headerId].waterMonsInfo, WILD_AREA_WATER, 0);
            StartWildBattle();
            return TRUE;
        }
    }

    return FALSE;
}

bool8 DoesCurrentMapHaveFishingMons(void)
{
    u16 headerIdx = GetCurrentMapWildMonHeaderId();
    if (headerIdx == HEADER_NONE)
        return FALSE;
    if (gWildMonHeaders[headerIdx].fishingMonsInfo == NULL)
        return FALSE;
    return TRUE;
}

void FishingWildEncounter(u8 rod)
{
    GenerateFishingEncounter(gWildMonHeaders[GetCurrentMapWildMonHeaderId()].fishingMonsInfo, rod);
    IncrementGameStat(GAME_STAT_FISHING_CAPTURES);
    StartWildBattle();
}

u16 GetLocalWildMon(bool8 *isWaterMon)
{
    u16 headerId;
    const struct WildPokemonInfo * landMonsInfo;
    const struct WildPokemonInfo * waterMonsInfo;

    *isWaterMon = FALSE;
    headerId = GetCurrentMapWildMonHeaderId();
    if (headerId == HEADER_NONE)
        return SPECIES_NONE;
    landMonsInfo = gWildMonHeaders[headerId].landMonsInfo;
    waterMonsInfo = gWildMonHeaders[headerId].waterMonsInfo;
    // Neither
    if (landMonsInfo == NULL && waterMonsInfo == NULL)
        return SPECIES_NONE;
        // Land Pokemon
    else if (landMonsInfo != NULL && waterMonsInfo == NULL)
        return landMonsInfo->wildPokemon[ChooseWildMonIndex_Land()].species;
        // Water Pokemon
    else if (landMonsInfo == NULL && waterMonsInfo != NULL)
    {
        *isWaterMon = TRUE;
        return waterMonsInfo->wildPokemon[ChooseWildMonIndex_WaterRock()].species;
    }
    // Either land or water Pokemon
    if ((Random() % 100) < 80)
    {
        return landMonsInfo->wildPokemon[ChooseWildMonIndex_Land()].species;
    }
    else
    {
        *isWaterMon = TRUE;
        return waterMonsInfo->wildPokemon[ChooseWildMonIndex_WaterRock()].species;
    }
}

u16 GetLocalWaterMon(void)
{
    u16 headerId = GetCurrentMapWildMonHeaderId();

    if (headerId != HEADER_NONE)
    {
        const struct WildPokemonInfo * waterMonsInfo = gWildMonHeaders[headerId].waterMonsInfo;

        if (waterMonsInfo)
            return waterMonsInfo->wildPokemon[ChooseWildMonIndex_WaterRock()].species;
    }
    return SPECIES_NONE;
}

bool8 UpdateRepelCounter(void)
{
    u16 steps;

    if (InUnionRoom() == TRUE)
        return FALSE;

    if (gQuestLogState == QL_STATE_PLAYBACK)
        return FALSE;

    steps = VarGet(VAR_REPEL_STEP_COUNT);

    if (steps != 0)
    {
        steps--;
        VarSet(VAR_REPEL_STEP_COUNT, steps);
        if (steps == 0)
        {
            ScriptContext_SetupScript(EventScript_RepelWoreOff);
            return TRUE;
        }
    }
    return FALSE;
}

static bool8 IsWildLevelAllowedByRepel(u8 wildLevel)
{
    u8 i;

    if (!VarGet(VAR_REPEL_STEP_COUNT))
        return TRUE;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_HP) && !GetMonData(&gPlayerParty[i], MON_DATA_IS_EGG))
        {
            u8 ourLevel = GetMonData(&gPlayerParty[i], MON_DATA_LEVEL);

            if (wildLevel < ourLevel)
                return FALSE;
            else
                return TRUE;
        }
    }

    return FALSE;
}

static void ApplyFluteEncounterRateMod(u32 *encounterRate)
{
    switch (GetFluteEncounterRateModType())
    {
    case 1:
        *encounterRate += *encounterRate / 2;
        break;
    case 2:
        *encounterRate = *encounterRate / 2;
        break;
    }
}

static u8 GetFluteEncounterRateModType(void)
{
    if (FlagGet(FLAG_SYS_WHITE_FLUTE_ACTIVE) == TRUE)
        return 1;
    else if (FlagGet(FLAG_SYS_BLACK_FLUTE_ACTIVE) == TRUE)
        return 2;
    else
        return 0;
}

static void ApplyCleanseTagEncounterRateMod(u32 *encounterRate)
{
    int i;
    for (i = 0; i < PARTY_SIZE; i++){
        if (IsLeadMonHoldingCleanseTag())
        {
            *encounterRate = 0;
            break;
        }
    }
}

static bool8 IsLeadMonHoldingCleanseTag(void)
{
    if (sWildEncounterData.leadMonHeldItem == ITEM_CLEANSE_TAG)
        return TRUE;
    else
        return FALSE;
}

void SeedWildEncounterRng(u16 seed)
{
    sWildEncounterData.rngState = seed;
    ResetEncounterRateModifiers();
}

static u16 WildEncounterRandom(void)
{
    sWildEncounterData.rngState = ISO_RANDOMIZE2(sWildEncounterData.rngState);
    return sWildEncounterData.rngState >> 16;
}

static u8 GetMapBaseEncounterCooldown(u8 encounterType)
{
    u16 headerIdx = GetCurrentMapWildMonHeaderId();
    if (headerIdx == HEADER_NONE)
        return 0xFF;
    if (encounterType == TILE_ENCOUNTER_LAND)
    {
        if (gWildMonHeaders[headerIdx].landMonsInfo == NULL)
            return 0xFF;
        if (gWildMonHeaders[headerIdx].landMonsInfo->encounterRate >= 80)
            return 0;
        if (gWildMonHeaders[headerIdx].landMonsInfo->encounterRate < 10)
            return 8;
        return 8 - (gWildMonHeaders[headerIdx].landMonsInfo->encounterRate / 10);
    }
    if (encounterType == TILE_ENCOUNTER_WATER)
    {
        if (gWildMonHeaders[headerIdx].waterMonsInfo == NULL)
            return 0xFF;
        if (gWildMonHeaders[headerIdx].waterMonsInfo->encounterRate >= 80)
            return 0;
        if (gWildMonHeaders[headerIdx].waterMonsInfo->encounterRate < 10)
            return 8;
        return 8 - (gWildMonHeaders[headerIdx].waterMonsInfo->encounterRate / 10);
    }
    return 0xFF;
}

void ResetEncounterRateModifiers(void)
{
    sWildEncounterData.encounterRateBuff = 0;
    sWildEncounterData.stepsSinceLastEncounter = 0;
}

static bool8 HandleWildEncounterCooldown(u32 currMetatileAttrs)
{
    u8 encounterType = ExtractMetatileAttribute(currMetatileAttrs, METATILE_ATTRIBUTE_ENCOUNTER_TYPE);
    u32 minSteps;
    u32 encRate;
    if (encounterType == TILE_ENCOUNTER_NONE)
        return FALSE;
    minSteps = GetMapBaseEncounterCooldown(encounterType);
    if (minSteps == 0xFF)
        return FALSE;
    minSteps *= 256;
    encRate = 5 * 256;
    switch (GetFluteEncounterRateModType())
    {
    case 1:
        minSteps -= minSteps / 2;
        encRate += encRate / 2;
        break;
    case 2:
        minSteps *= 2;
        encRate /= 2;
        break;
    }
    sWildEncounterData.leadMonHeldItem = GetMonData(&gPlayerParty[0], MON_DATA_HELD_ITEM);
    if (IsLeadMonHoldingCleanseTag() == TRUE)
    {
        minSteps += minSteps / 3;
        encRate -= encRate / 3;
    }
    switch (GetAbilityEncounterRateModType())
    {
    case 1:
        minSteps *= 2;
        encRate /= 2;
        break;
    case 2:
        minSteps /= 2;
        encRate *= 2;
        break;
    }
    minSteps /= 256;
    encRate /= 256;
    if (sWildEncounterData.stepsSinceLastEncounter >= minSteps)
        return TRUE;
    sWildEncounterData.stepsSinceLastEncounter++;
    if ((Random() % 100) < encRate)
        return TRUE;
    return FALSE;
}

bool8 TryStandardWildEncounter(u32 currMetatileAttrs)
{
    if (!HandleWildEncounterCooldown(currMetatileAttrs))
    {
        sWildEncounterData.prevMetatileBehavior = ExtractMetatileAttribute(currMetatileAttrs, METATILE_ATTRIBUTE_BEHAVIOR);
        return FALSE;
    }
    else if (StandardWildEncounter(currMetatileAttrs, sWildEncounterData.prevMetatileBehavior) == TRUE)
    {
        sWildEncounterData.encounterRateBuff = 0;
        sWildEncounterData.stepsSinceLastEncounter = 0;
        sWildEncounterData.prevMetatileBehavior = ExtractMetatileAttribute(currMetatileAttrs, METATILE_ATTRIBUTE_BEHAVIOR);
        return TRUE;
    }
    else
    {
        sWildEncounterData.prevMetatileBehavior = ExtractMetatileAttribute(currMetatileAttrs, METATILE_ATTRIBUTE_BEHAVIOR);
        return FALSE;
    }
}

static void AddToWildEncounterRateBuff(u8 encounterRate)
{
    if (VarGet(VAR_REPEL_STEP_COUNT) == 0)
        sWildEncounterData.encounterRateBuff += encounterRate;
    else
        sWildEncounterData.encounterRateBuff = 0;
}

static u8 PickWildMonNature(void)
{
    // check synchronize for a pokemon with the same ability
    if (!GetMonData(&gPlayerParty[0], MON_DATA_SANITY_IS_EGG)
        && GetMonAbility(&gPlayerParty[0]) == ABILITY_SYNCHRONIZE
        && Random() % 2 == 0)
    {
        return GetMonData(&gPlayerParty[0], MON_DATA_PERSONALITY) % 25;
    }
    // random nature
    return Random() % 25;
}
static bool8 IsAbilityAllowingEncounter(u8 level)
{
    u8 ability;

    if (GetMonData(&gPlayerParty[0], MON_DATA_IS_EGG))
        return TRUE;

    ability = GetMonAbility(&gPlayerParty[0]);
    if (ability == ABILITY_KEEN_EYE || ability == ABILITY_INTIMIDATE)
    {
        u8 playerMonLevel = GetMonData(&gPlayerParty[0], MON_DATA_LEVEL);
        if (playerMonLevel > 5 && level <= playerMonLevel - 5 && !(Random() % 2))
            return FALSE;
    }

    return TRUE;
}
static bool8 TryGetAbilityInfluencedWildMonIndex(const struct WildPokemon *wildMon, u8 type, u8 ability, u8 *monIndex)
{
    if (GetMonData(&gPlayerParty[0], MON_DATA_IS_EGG))
        return FALSE;
    else if (GetMonAbility(&gPlayerParty[0]) != ability)
        return FALSE;
    else if (Random() % 2 != 0)
        return FALSE;
    return TryGetRandomWildMonIndexByType(wildMon, type, LAND_WILD_COUNT, monIndex);
}
static bool8 TryGetRandomWildMonIndexByType(const struct WildPokemon *wildMon, u8 type, u8 numMon, u8 *monIndex)
{
    u8 validIndexes[numMon]; // variable length array, an interesting feature
    u8 i, validMonCount;

    for (i = 0; i < numMon; i++)
        validIndexes[i] = 0;

    for (validMonCount = 0, i = 0; i < numMon; i++)
    {
        if (gSpeciesInfo[wildMon[i].species].types[0] == type || gSpeciesInfo[wildMon[i].species].types[1] == type)
            validIndexes[validMonCount++] = i;
    }

    if (validMonCount == 0 || validMonCount == numMon)
        return FALSE;

    *monIndex = validIndexes[Random() % validMonCount];
    return TRUE;
}
