#include "global.h"
#include "data.h"
#include "event_scripts.h"
#include "follower_helper.h"
#include "constants/battle.h"
#include "constants/metatile_behaviors.h"
#include "constants/pokemon.h"
#include "constants/region_map_sections.h"
#include "constants/songs.h"
#include "constants/weather.h"
#include "constants/maps.h"

#define TYPE_NOT_TYPE1 NUMBER_OF_MON_TYPES

// difficult conditional messages follow
static const u8 sCondMsg00[] = _("{STR_VAR_1} danced happily.");
static const u8 sCondMsg01[] = _("{STR_VAR_1} danced beautifully.");
static const u8* const sCelebiTexts[] = {sCondMsg00, sCondMsg01, NULL};
static const u8 sCondMsg02[] = _("{STR_VAR_1} emitted fire and shouted.");
static const u8 sCondMsg03[] = _("{STR_VAR_1} is vigorously producing\nfire!");
static const u8 sCondMsg04[] = _("{STR_VAR_1} spat fire!");
static const u8 sCondMsg05[] = _("{STR_VAR_1} is vigorously breathing\nfire!");
static const u8* const sFireTexts[] = {sCondMsg02, sCondMsg03, sCondMsg04, sCondMsg05, NULL};
static const u8 sCondMsg06[] = _("{STR_VAR_1} is staring at the at\nbig build!.");
static const u8 sCondMsg07[] = _("Your POKéMON is staring intently at\nthe mountain peak.");
static const u8 sCondMsg08[] = _("Sniff sniff, something smells good!");
static const u8 sCondMsg09[] = _("Your POKéMON is surveying the\nshelves restlessly.");
static const u8 sCondMsg10[] = _("{STR_VAR_1} is staring intently at\nthe shelves.");
static const u8* const sShopTexts[] = {sCondMsg09, sCondMsg10, NULL};
static const u8 sCondMsg11[] = _("{STR_VAR_1} focused with a sharp\ngaze!");
static const u8 sCondMsg12[] = _("{STR_VAR_1} seems very interested in\nthe bicycles.");
static const u8 sCondMsg13[] = _("{STR_VAR_1} seems to want to touch\nthe machines!");
static const u8 sCondMsg14[] = _("{STR_VAR_1} is swaying with the\nboat!");
static const u8 sCondMsg15[] = _("{STR_VAR_1} is dancing along with\nthe rolling of the ship.");
static const u8 sCondMsg16[] = _("{STR_VAR_1} doesn't want to get off\nthe boat yet!");
static const u8* const sBoatTexts[] = {sCondMsg14, sCondMsg15, sCondMsg16, NULL};
static const u8 sCondMsg17[] = _("{STR_VAR_1} is listening to the\nsound of the machines.");
static const u8* const sMachineTexts[] = {sCondMsg13, sCondMsg17, NULL};
static const u8 sCondMsg18[] = _("Waah! your POKéMON suddenly splashed\nwater!");
static const u8 sCondMsg19[] = _("Your POKéMON is blowing sand in the\nair!");
static const u8 sCondMsg20[] = _("{STR_VAR_1} is playing around,\nplucking bits of grass.");
static const u8 sCondMsg21[] = _("Your POKéMON is happily looking at\nyour footprints!");
static const u8 sCondMsg22[] = _("{STR_VAR_1} is feeling nervous and a\ntouch claustrophobic.");
static const u8 sCondMsg23[] = _("{STR_VAR_1} is cautious about the\nconfined area!");
static const u8* const sElevatorTexts[] = {sCondMsg22, sCondMsg23, NULL};
static const u8 sCondMsg24[] = _("A cold wind suddenly blew by!");
static const u8 sCondMsg25[] = _("Your POKéMON almost slipped and fell\nover!");
static const u8 sCondMsg26[] = _("Your POKéMON seems surprised to\ntouch ice.");
static const u8* const sColdTexts[] = {sCondMsg24, sCondMsg25, sCondMsg26, NULL};
static const u8 sCondMsg27[] = _("Your POKéMON has a flower petal on\nits face!");
static const u8 sCondMsg28[] = _("{STR_VAR_1} is growling softly.");
static const u8 sCondMsg29[] = _("{STR_VAR_1} is trembling with fear.");
static const u8 sCondMsg30[] = _("{STR_VAR_1} seems somehow sad…");
static const u8* const sFearTexts[] = {sCondMsg29, sCondMsg30, NULL};
static const u8 sCondMsg31[] = _("{STR_VAR_1} is taking shelter in the\ngrass from the rain.");
static const u8 sCondMsg32[] = _("{STR_VAR_1} seems very cold.");
static const u8 sCondMsg33[] = _("{STR_VAR_1} is staring at the sea.");
static const u8 sCondMsg34[] = _("Your POKéMON is staring intently at\nthe sea!");
static const u8 sCondMsg35[] = _("{STR_VAR_1} is looking at the\nsurging sea.");
static const u8* const sSeaTexts[] = {sCondMsg33, sCondMsg34, sCondMsg35, NULL};
static const u8 sCondMsg36[] = _("{STR_VAR_1} is listening to the\nsound of the waterfall.");
static const u8 sCondMsg37[] = _("{STR_VAR_1} seems to be happy about\nthe rain!");
static const u8 sCondMsg38[] = _("{STR_VAR_1} is staring at its\nreflection in the water.");
static const u8 sCondMsg39[] = _("{STR_VAR_1} seems to relax as it\nhears the sound of rustling leaves…");
static const u8 sCondMsg40[] = _("{STR_VAR_1} is gnawing at the ice.");
static const u8 sCondMsg41[] = _("{STR_VAR_1} is touching the ice.");
static const u8* const sIceTexts[] = {sCondMsg26, sCondMsg40, sCondMsg41, NULL};
static const u8 sCondMsg42[] = _("{STR_VAR_1}'s burn looks painful!");

//TODO: create more messages and fix conditions

// See the struct definition in follower_helper.h for more info
const struct FollowerMsgInfoExtended gFollowerConditionalMessages[COND_MSG_COUNT] = {
    [COND_MSG_CELEBI] =
    {
    .text = (u8*)sCelebiTexts,
    .textSpread = 1,
    .script = EventScript_FollowerDance,
    .emotion = FOLLOWER_EMOTION_NEUTRAL,
    .conditions = {MATCH_SPECIES(SPECIES_CELEBI)}, //todo
    },
    [COND_MSG_FIRE] =
    {
    .text = (u8*)sFireTexts,
    .textSpread = 1,
    .emotion = FOLLOWER_EMOTION_NEUTRAL,
    .conditions = {MATCH_TYPES(TYPE_FIRE, TYPE_FIRE)},
    },
    [COND_MSG_BIG_BUILDING] =
    {
    .text = sCondMsg06,
    .script = EventScript_FollowerFaceUp,
    .emotion = FOLLOWER_EMOTION_HAPPY,
    .orFlag = 1, // match any of these maps
    .conditions = {
        MATCH_MAP(SEVEN_ISLAND),
        MATCH_MAP(SAFFRON_CITY),
		MATCH_MAP(LAVENDER_TOWN)},
    },
    [COND_MSG_MT_EMBER] =
    {
    .text = sCondMsg07,
    .emotion = FOLLOWER_EMOTION_HAPPY,
    .conditions = {MATCH_MAP(MT_EMBER_EXTERIOR)},
    },
    [COND_MSG_DAY_CARE] =
    {
    .text = sCondMsg08,
    .script = EventScript_FollowerNostalgia,
    .emotion = FOLLOWER_EMOTION_NEUTRAL,
	.orFlag = 1, // match any of these maps
    .conditions = {
        MATCH_MAP(ROUTE5_POKEMON_DAY_CARE),
        MATCH_MAP(FOUR_ISLAND_POKEMON_DAY_CARE)},
    },
    [COND_MSG_MART] =
    {
    .text = (u8*)sShopTexts,
    .textSpread = 1, // match any of these maps
    .script = EventScript_FollowerLookAround,
    .emotion = FOLLOWER_EMOTION_NEUTRAL,
    .conditions = {MATCH_MUSIC(MUS_POKE_CENTER)}, //fix this one later
    },
    [COND_MSG_VICTORY_ROAD] =
    {
    .text = sCondMsg11,
    .emotion = FOLLOWER_EMOTION_PENSIVE,
    .conditions = {MATCH_MUSIC(MUS_VICTORY_ROAD)},
    },
    [COND_MSG_BIKE_SHOP] =
    {
    .text = sCondMsg12,
    .emotion = FOLLOWER_EMOTION_PENSIVE,
    .conditions = {MATCH_MAP(CERULEAN_CITY_BIKE_SHOP)},
    },
    [COND_MSG_MACHINES] =
    {
    .text = (u8*)sMachineTexts,
    .textSpread = 1,
    .emotion = FOLLOWER_EMOTION_MUSIC,
    .conditions = {
        MATCH_MAP(ROUTE25_SEA_COTTAGE)}, //todo
    },
    [COND_MSG_SAILING] =
    {
    .text = (u8*)sBoatTexts,
    .textSpread = 1,
    .emotion = FOLLOWER_EMOTION_MUSIC,
    .script = EventScript_FollowerLookAround,
    .conditions = {MATCH_MAPSEC(MAPSEC_S_S_ANNE)}, //todo
    },
    [COND_MSG_PUDDLE] =
    {
    .text = sCondMsg18,
    .script = EventScript_FollowerHopping,
    .emotion = FOLLOWER_EMOTION_MUSIC,
    .conditions = {MATCH_ON_MB(MB_SHALLOW_WATER, MB_PUDDLE)}, 
    },
    [COND_MSG_SAND] =
    {
    .text = sCondMsg19,
    .emotion = FOLLOWER_EMOTION_MUSIC,
    .conditions = {MATCH_ON_MB(MB_SAND, MB_SAND)},  //todo
    },
    [COND_MSG_GRASS] =
    {
    .text = sCondMsg20,
    .emotion = FOLLOWER_EMOTION_MUSIC,
    .conditions = {MATCH_ON_MB(MB_TALL_GRASS, MB_TALL_GRASS)},
    },
    [COND_MSG_FOOTPRINTS] =
    {
    .text = sCondMsg21,
    .emotion = FOLLOWER_EMOTION_MUSIC,
    .conditions = {MATCH_ON_MB(MB_SAND, MB_SAND)},  //todo
    },
    [COND_MSG_ELEVATOR] =
    {
    .text = (u8*)sElevatorTexts,
    .textSpread = 1,
    .emotion = FOLLOWER_EMOTION_SURPRISE,
    .conditions = {MATCH_MAP(CELADON_CITY_DEPARTMENT_STORE_ELEVATOR)},
    },
    [COND_MSG_ICE_ROOM] =
    {
    .text = (u8*)sColdTexts,
    .textSpread = 1,
    .emotion = FOLLOWER_EMOTION_SURPRISE,
	.orFlag = 1,
    .conditions = {
		MATCH_MAP(SEAFOAM_ISLANDS_1F),
		MATCH_MAP(SEAFOAM_ISLANDS_B1F),
		MATCH_MAP(SEAFOAM_ISLANDS_B2F),
		MATCH_MAP(SEAFOAM_ISLANDS_B3F),
		MATCH_MAP(SEAFOAM_ISLANDS_B4F)}, //check later
    },
    [COND_MSG_ROUTE_25] =
    {
    .text = sCondMsg27,
    .emotion = FOLLOWER_EMOTION_SURPRISE,
    .conditions = {MATCH_MAP(ROUTE25)},  //todo
    },
    [COND_MSG_DRAGON_GROWL] =
    {
    .text = sCondMsg28,
    .emotion = FOLLOWER_EMOTION_UPSET,
    .conditions = {
        MATCH_TYPES(TYPE_DRAGON, TYPE_DRAGON),
        MATCH_MAPSEC(MAPSEC_NAVEL_ROCK),  //todo
    }
    },
    [COND_MSG_FEAR] =
    {
    .text = (u8*)sFearTexts,
    .textSpread = 1,
    .emotion = FOLLOWER_EMOTION_UPSET,
    .conditions = {
        MATCH_NOT_TYPES(TYPE_GHOST, TYPE_GHOST),
        MATCH_MAPSEC(MAPSEC_LAVENDER_TOWN ),
        MATCH_MUSIC(MUS_MT_MOON),
    }
    },
    [COND_MSG_FIRE_RAIN] =
    {
    .text = sCondMsg31,
    .emotion = FOLLOWER_EMOTION_UPSET,
    .conditions = {
        MATCH_TYPES(TYPE_FIRE, TYPE_FIRE),
        MATCH_WEATHER(WEATHER_RAIN, WEATHER_RAIN_THUNDERSTORM),  //todo
    }
    },
    [COND_MSG_FROZEN] =
    {
    .text = sCondMsg32,
    .emotion = FOLLOWER_EMOTION_UPSET,
    .conditions = {
        MATCH_STATUS(STATUS1_FREEZE),
    }
    },
    [COND_MSG_SEASIDE] =
    {
    .text = (u8*)sSeaTexts,
    .textSpread = 1,
    .script = EventScript_FollowerFaceResult,
    .emotion = FOLLOWER_EMOTION_MUSIC,
    .conditions = {MATCH_NEAR_MB(MB_OCEAN_WATER, 5)},  //todo
    },
    [COND_MSG_WATERFALL] =
    {
    .text = sCondMsg36,
    .script = EventScript_FollowerFaceResult,
    .emotion = FOLLOWER_EMOTION_MUSIC,
    .conditions = {MATCH_NEAR_MB(MB_WATERFALL, 5)},  //todo
    },
    [COND_MSG_RAIN] =
    {
    .text = sCondMsg37,
    .emotion = FOLLOWER_EMOTION_MUSIC,
    .conditions = {
        MATCH_NOT_TYPES(TYPE_FIRE, TYPE_FIRE),
        MATCH_WEATHER(WEATHER_RAIN, WEATHER_RAIN_THUNDERSTORM)  //todo
    }
    },
    [COND_MSG_REFLECTION] =
    {
    .text = sCondMsg38,
    .script = EventScript_FollowerFaceResult,
    .emotion = FOLLOWER_EMOTION_PENSIVE,
    .conditions = {MATCH_NEAR_MB(MB_POND_WATER, 1)}, //todo
    },
    [COND_MSG_LEAVES] =
    {
    .text = sCondMsg39,
    .emotion = FOLLOWER_EMOTION_PENSIVE,
    .conditions = {MATCH_MAP(VIRIDIAN_FOREST)}, //check later
    },
    [COND_MSG_ICE] =
    {
    .text = (u8*)sIceTexts,
    .textSpread = 1,
    .script = EventScript_FollowerFaceResult,
    .emotion = FOLLOWER_EMOTION_PENSIVE,
    .conditions = {MATCH_NEAR_MB(MB_ICE, 1)}, //todo
    },
    [COND_MSG_BURN] =
    {
    .text = sCondMsg42,
    .emotion = FOLLOWER_EMOTION_SAD,
    .conditions = {MATCH_STATUS(STATUS1_BURN)}, //todo
    },
};

// Pool of "unconditional" follower messages
const struct FollowerMessagePool gFollowerBasicMessages[FOLLOWER_EMOTION_LENGTH] = {
    [FOLLOWER_EMOTION_HAPPY] = {gFollowerHappyMessages, EventScript_FollowerGeneric, N_FOLLOWER_HAPPY_MESSAGES},
    [FOLLOWER_EMOTION_NEUTRAL] = {gFollowerNeutralMessages, EventScript_FollowerGeneric, N_FOLLOWER_NEUTRAL_MESSAGES},
    [FOLLOWER_EMOTION_SAD] = {gFollowerSadMessages, EventScript_FollowerGeneric, N_FOLLOWER_SAD_MESSAGES},
    [FOLLOWER_EMOTION_UPSET] = {gFollowerUpsetMessages, EventScript_FollowerGeneric, N_FOLLOWER_UPSET_MESSAGES},
    [FOLLOWER_EMOTION_ANGRY] = {gFollowerAngryMessages, EventScript_FollowerGeneric, N_FOLLOWER_ANGRY_MESSAGES},
    [FOLLOWER_EMOTION_PENSIVE] = {gFollowerPensiveMessages, EventScript_FollowerGeneric, N_FOLLOWER_PENSIVE_MESSAGES},
    [FOLLOWER_EMOTION_LOVE] = {gFollowerLoveMessages, EventScript_FollowerGeneric, N_FOLLOWER_LOVE_MESSAGES},
    [FOLLOWER_EMOTION_SURPRISE] = {gFollowerSurpriseMessages, EventScript_FollowerGeneric, N_FOLLOWER_SURPRISE_MESSAGES},
    [FOLLOWER_EMOTION_CURIOUS] = {gFollowerCuriousMessages, EventScript_FollowerGeneric, N_FOLLOWER_CURIOUS_MESSAGES},
    [FOLLOWER_EMOTION_MUSIC] = {gFollowerMusicMessages, EventScript_FollowerGeneric, N_FOLLOWER_MUSIC_MESSAGES},
    [FOLLOWER_EMOTION_POISONED] = {gFollowerPoisonedMessages, EventScript_FollowerGeneric, N_FOLLOWER_POISONED_MESSAGES},
};