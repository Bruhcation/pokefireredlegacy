// Trainer party data exists for all of the RS trainer classes, but
// are only filled with one of the following placeholder pokemon.
// The actual FRLG trainer party data starts after these.

#define DUMMY_TRAINER_MON           \
    {                               \
        .lvl = 5,                   \
        .species = SPECIES_EKANS,   \
    }

#define DUMMY_TRAINER_MON_IV        \
    {                               \
        .iv = 100,                  \
        .lvl = 5,                   \
        .species = SPECIES_EKANS,   \
    }

// Copy of Swimmer Male Finn's party
#define DUMMY_TRAINER_STARMIE       \
    {                               \
        .lvl = 38,                  \
        .species = SPECIES_STARMIE, \
    }

static const struct TrainerMon sParty_AquaLeader[] = {DUMMY_TRAINER_MON};
static const struct TrainerMon sParty_AquaGruntM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMon sParty_AquaGruntF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMon sParty_RSRuinManiac[] = {DUMMY_TRAINER_MON};
static const struct TrainerMon sParty_Interviewer[] = {
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_PIDGEY,
    },    

};//Twins at beginning of the game
static const struct TrainerMon sParty_RSTuberF[] = {DUMMY_TRAINER_STARMIE};
static const struct TrainerMon sParty_RSTuberM[] = {DUMMY_TRAINER_STARMIE};
static const struct TrainerMon sParty_RSCooltrainerM[] = {DUMMY_TRAINER_MON_IV};
static const struct TrainerMon sParty_RSCooltrainerF[] = {DUMMY_TRAINER_MON_IV};
static const struct TrainerMon sParty_HexManiac[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 67,
        .species = SPECIES_ZANGOOSE,
        .heldItem = ITEM_CHOICE_BAND,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DOUBLE_EDGE, MOVE_FAINT_ATTACK, MOVE_BRICK_BREAK, MOVE_IRON_TAIL},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 67,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_CHARCOAL,
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS),
        .moves = {MOVE_EARTHQUAKE, MOVE_FIRE_BLAST, MOVE_ROCK_SLIDE, MOVE_OUTRAGE},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 67,
        .species = SPECIES_CRADILY,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_RECOVER, MOVE_LEECH_SEED, MOVE_CURSE, MOVE_CONSTRICT},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 67,
        .species = SPECIES_GARDEVOIR,
        .heldItem = ITEM_FOCUS_BAND,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_CALM_MIND},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
        .isShiny = TRUE,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 67,
        .species = SPECIES_MURKROW,
        .heldItem = ITEM_QUICK_CLAW,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SKY_ATTACK, MOVE_FAINT_ATTACK, MOVE_HAZE, MOVE_ICY_WIND},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 67,
        .species = SPECIES_MISDREAVUS,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_SHADOW_BALL, MOVE_MEAN_LOOK, MOVE_PERISH_SONG, MOVE_THUNDERBOLT},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
    },
};//Binaro
static const struct TrainerMon sParty_RSPokemaniac[] = {DUMMY_TRAINER_MON};
static const struct TrainerMon sParty_RSSwimmerM[] = {
    {
        .iv = TRAINER_PARTY_IVS(0, 0, 0, 31, 0, 0),
        .lvl = 30,
        .species = SPECIES_DROWZEE,
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .moves = {MOVE_POISON_GAS, MOVE_NONE, MOVE_NONE, MOVE_NONE},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 255, 0, 0),
    },
};//Poison Guy
static const struct TrainerMon sParty_RSBlackBelt[] = 
{
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 100,
        .species = SPECIES_VENUSAUR,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_LEECH_SEED, MOVE_TOXIC, MOVE_GIGA_DRAIN, MOVE_TOXIC},
        .ev = TRAINER_PARTY_EVS(255, 255, 255, 255, 255, 255),
        .isShiny = TRUE,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 100,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_CHARCOAL,
        .nature = TRAINER_PARTY_NATURE(NATURE_SERIOUS),
        .moves = {MOVE_FIRE_BLAST, MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .ev = TRAINER_PARTY_EVS(255, 255, 255, 255, 255, 255),
        .isShiny = TRUE,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 100,
        .species = SPECIES_BLASTOISE,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_MIRROR_COAT, MOVE_IRON_DEFENSE},
        .ev = TRAINER_PARTY_EVS(255, 255, 255, 255, 255, 255),
        .isShiny = TRUE,
    },
};//Secret
static const struct TrainerMon sParty_Guitarist[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_WEEZING,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_EXPLOSION},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_PINSIR,
        .heldItem = ITEM_SILVER_POWDER,
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_MEGAHORN, MOVE_CROSS_CHOP, MOVE_BULK_UP, MOVE_ROCK_SLIDE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_CRUNCH, MOVE_FIRE_BLAST, MOVE_ROCK_SMASH, MOVE_IRON_TAIL},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_MACHAMP,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_CROSS_CHOP, MOVE_BULK_UP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_SNEASEL,
        .heldItem = ITEM_NEVER_MELT_ICE,
        .moves = {MOVE_BLIZZARD, MOVE_FAINT_ATTACK, MOVE_SURF, MOVE_BRICK_BREAK},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_ELECTABUZZ,
        .heldItem = ITEM_MAGNET,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_CROSS_CHOP},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
};//Paxton 2

static const struct TrainerMon sParty_Kindler[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_PIDGEOT,
        .heldItem = ITEM_SHARP_BEAK,
        .moves = {MOVE_PROTECT, MOVE_SKY_ATTACK, MOVE_EXTREME_SPEED, MOVE_MEGA_KICK},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_PROTECT, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_CHARCOAL,
        .moves = {MOVE_PROTECT, MOVE_FIRE_BLAST, MOVE_EXTREME_SPEED, MOVE_IRON_TAIL},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_GENGAR,
        .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_HYPNOSIS},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_BLASTOISE,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_PROTECT},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_HOUNDOOM,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_CRUNCH, MOVE_REVERSAL, MOVE_ROCK_SMASH, MOVE_FIRE_BLAST},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
};//Guard 2
static const struct TrainerMon sParty_RSCamper[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_GLASSES,
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_PROTECT, MOVE_FAINT_ATTACK},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_POLIWRATH,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SUPERPOWER, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_HYPNOSIS},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },   
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_QUICK_CLAW,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_ROCK_SLIDE, MOVE_PROTECT, MOVE_FIRE_BLAST},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 67,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_FOCUS_BAND,
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_PROTECT, MOVE_HI_JUMP_KICK, MOVE_MEGA_KICK, MOVE_ROCK_SLIDE},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 67,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_NEVER_MELT_ICE,
        .moves = {MOVE_PROTECT, MOVE_MACH_PUNCH, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 67,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_AGUAV_BERRY,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_FAKE_OUT, MOVE_TRIPLE_KICK, MOVE_ROCK_SLIDE, MOVE_PROTECT},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    }, 
};//Koichi 3
static const struct TrainerMon sParty_BugManiac[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 52,
        .species = SPECIES_BELLOSSOM,
        .heldItem = ITEM_AGUAV_BERRY,
        .moves = {MOVE_SLEEP_POWDER, MOVE_SYNTHESIS, MOVE_SUNNY_DAY, MOVE_GIGA_DRAIN},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 52,
        .species = SPECIES_VICTREEBEL,
        .heldItem = ITEM_POISON_BARB,
        .moves = {MOVE_STUN_SPORE, MOVE_SLUDGE_BOMB, MOVE_GROWTH, MOVE_GIGA_DRAIN},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 51,
        .species = SPECIES_TANGELA,
        .heldItem = ITEM_MAGNET,
        .moves = {MOVE_SUNNY_DAY, MOVE_ANCIENT_POWER, MOVE_SHOCK_WAVE, MOVE_GIGA_DRAIN},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 51,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_LEECH_SEED, MOVE_PSYCHIC, MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 53,
        .species = SPECIES_VILEPLUME,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB},
    },
};//Unused Erika
static const struct TrainerMon sParty_RSPsychicM[] = {
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 50,
        .species = SPECIES_ELECTABUZZ,
        .heldItem = ITEM_MAGNET,
        .moves = {MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 51,
        .species = SPECIES_MAGNETON,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_RAIN_DANCE},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 51,
        .species = SPECIES_ELECTRODE,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_THUNDER, MOVE_THUNDER_WAVE, MOVE_MIRROR_COAT, MOVE_EXPLOSION},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 52,
        .species = SPECIES_PORYGON2,
        .heldItem = ITEM_LUM_BERRY,
        .moves = {MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_RECOVER},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 53,
        .species = SPECIES_RAICHU,
        .heldItem = ITEM_BRIGHT_POWDER,
        .moves = {MOVE_SURF, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_THUNDER},
    },
};//Unused Surge
static const struct TrainerMon sParty_RSPsychicF[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 49,
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_SUNNY_DAY, MOVE_JUMP_KICK, MOVE_DOUBLE_EDGE, MOVE_FIRE_BLAST},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 47,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_HARD_STONE,
        .moves = {MOVE_ROCK_SLIDE, MOVE_WING_ATTACK, MOVE_DRAGON_CLAW, MOVE_FIRE_BLAST},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 48,
        .species = SPECIES_NINETALES,
        .heldItem = ITEM_MIRACLE_SEED,
        .moves = {MOVE_FIRE_BLAST, MOVE_SOLAR_BEAM, MOVE_CALM_MIND, MOVE_SUNNY_DAY},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 48,
        .species = SPECIES_MAGCARGO,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_FIRE_BLAST, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_BODY_SLAM},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 50,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_SILK_SCARF,
        .moves = {MOVE_CRUNCH, MOVE_IRON_TAIL, MOVE_EXTREME_SPEED, MOVE_FIRE_BLAST},
    },
}; //Unused Blaine
static const struct TrainerMon sParty_RSGentleman[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 52,
        .species = SPECIES_CROBAT,
        .heldItem = ITEM_BRIGHT_POWDER,
        .moves = {MOVE_TOXIC, MOVE_FLY, MOVE_BITE, MOVE_CONFUSE_RAY},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 50,
        .species = SPECIES_MUK,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_MINIMIZE, MOVE_SLUDGE_BOMB, MOVE_ACID_ARMOR, MOVE_TOXIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 51,
        .species = SPECIES_TENTACRUEL,
        .heldItem = ITEM_MYSTIC_WATER,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_ICE_BEAM, MOVE_BARRIER},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 53,
        .species = SPECIES_WEEZING,
        .heldItem = ITEM_AGUAV_BERRY,
        .nature = TRAINER_PARTY_NATURE(NATURE_CAREFUL),
        .moves = {MOVE_TOXIC, MOVE_SLUDGE_BOMB, MOVE_PAIN_SPLIT, MOVE_AMNESIA},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 51,
        .species = SPECIES_VENOMOTH,
        .heldItem = ITEM_SHELL_BELL,
        .moves = {MOVE_PSYCHIC, MOVE_DOUBLE_TEAM, MOVE_SIGNAL_BEAM, MOVE_TOXIC},
    },  
}; //Unused Koga
static const struct TrainerMon sParty_EliteFourSidney[] = {
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 28,
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_STUN_SPORE, MOVE_SLUDGE, MOVE_GROWTH, MOVE_RAZOR_LEAF},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 26,
        .species = SPECIES_IVYSAUR,
        .moves = {MOVE_SLEEP_POWDER, MOVE_NONE, MOVE_LEECH_SEED, MOVE_RAZOR_LEAF},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 27,
        .species = SPECIES_TANGELA,
        .moves = {MOVE_SUNNY_DAY, MOVE_ANCIENT_POWER, MOVE_NONE, MOVE_MEGA_DRAIN},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 29,
        .species = SPECIES_VILEPLUME,
        .heldItem = ITEM_MIRACLE_SEED,
        .moves = {MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_SUNNY_DAY, MOVE_SLUDGE},
    },
}; //Unused Erika
static const struct TrainerMon sParty_EliteFourPhoebe[] = {
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 47,
        .species = SPECIES_ELECTABUZZ,
        .heldItem = ITEM_MAGNET,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 48,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_TRI_ATTACK},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 48,
        .species = SPECIES_ELECTRODE,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_MIRROR_COAT, MOVE_EXPLOSION},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 49,
        .species = SPECIES_PORYGON2,
        .heldItem = ITEM_LUM_BERRY,
        .moves = {MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_RECOVER},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 50,
        .species = SPECIES_RAICHU,
        .heldItem = ITEM_BRIGHT_POWDER,
        .moves = {MOVE_SURF, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_THUNDERBOLT},
    },
};//Surge 4
static const struct TrainerMon sParty_SchoolKidM[] = {
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 40,
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_ICE_PUNCH, MOVE_BRICK_BREAK},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 41,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_REFLECT, MOVE_TRI_ATTACK},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 41,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_MIRROR_COAT, MOVE_SELF_DESTRUCT},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 42,
        .species = SPECIES_PORYGON,
        .moves = {MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_DOUBLE_EDGE},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 43,
        .species = SPECIES_RAICHU,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_SURF, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_THUNDERBOLT},
    },
};//Surge 3
static const struct TrainerMon sParty_Surge2[] = {
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 33,
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_THUNDER_PUNCH, MOVE_THUNDER_WAVE, MOVE_NONE, MOVE_BRICK_BREAK},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 33,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_NONE, MOVE_SELF_DESTRUCT},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 34,
        .species = SPECIES_PORYGON,
        .moves = {MOVE_SHOCK_WAVE, MOVE_PSYBEAM, MOVE_ICY_WIND, MOVE_SECRET_POWER},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 35,
        .species = SPECIES_RAICHU,
        .heldItem = ITEM_SITRUS_BERRY,
        .moves = {MOVE_BODY_SLAM, MOVE_THUNDER_WAVE, MOVE_DOUBLE_TEAM, MOVE_THUNDER_PUNCH},
    },
};//Surge 2

static const struct TrainerMon sParty_PokefanM[] = 
{
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_FURRET,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_SUNFLORA,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_MACHAMP,
    },
};//Sevii Leader Trainer
static const struct TrainerMon sParty_PokefanF[] = 
{
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_YANMA,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_MURKROW,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_SHIFTRY,
    },
};//Sevii Leader Trainer

static const struct TrainerMon sParty_SwimmingTriathleteF[] = 
{
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_EXEGGUTOR,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_HYPNO,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_VENOMOTH,
    },
};//Sevii Leader Trainer

static const struct TrainerMon sParty_SrAndJr[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_SUDOWOODO,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_KECLEON,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_SNORLAX,
    },
};//Sevii Leader Trainer

static const struct TrainerMon sParty_ExpertM[] = 
{
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_EXPLOUD,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_OMASTAR,
    },
};//Sevii Leader Trainer
static const struct TrainerMon sParty_ExpertF[] = 
{
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_MILTANK,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_XATU,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_KABUTOPS,
    },
};//Sevii Leader Trainer

static const struct TrainerMon sParty_RSYoungster[] = 
{
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_SNEASEL,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_DELIBIRD,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_QUAGSIRE,
    },
};//Four Island Sevii Leader Trainer

static const struct TrainerMon sParty_CyclingTriathleteM[] = 
{    
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_HERACROSS,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_SANDSLASH,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_MAGCARGO,
    },
};//One Island
static const struct TrainerMon sParty_CyclingTriathleteF[] = 
{
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_GLIGAR,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_SNEASEL,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_MAGCARGO,
    },
};// One Island

static const struct TrainerMon sParty_RunningTriathleteM[] = 
{
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_DUNSPARCE,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_ONIX,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_MAGCARGO,
    },
}; //Five Island
static const struct TrainerMon sParty_RunningTriathleteF[] = 
{
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_LEDIAN,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_ARIADOS,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_QWILFISH,
    },
}; //Five Island

static const struct TrainerMon sParty_SwimmingTriathleteM[] =
{
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_TYPHLOSION,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_MINUN,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_DODRIO,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_RHYDON,
    },
}; //Two Island

static const struct TrainerMon sParty_RSYoungCouple[] = {    
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_ARCANINE,
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_AERODACTYL,
    },
}; //Two Island

// Start of actual trainer data
static const struct TrainerMon sParty_RSFisherman[] = 
{    
    {
        .iv = 0,
        .lvl = 6,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = 0,
        .lvl = 6,
        .species = SPECIES_NIDORAN_F,
    },
};//Yellow Trainer Bought Back


static const struct TrainerMon sParty_FatGuy[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_NIDOKING,
        .heldItem = ITEM_NEVER_MELT_ICE,
        .moves = {MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_SLUDGE_BOMB, MOVE_BLIZZARD},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),

    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_DODRIO,
        .heldItem = ITEM_AGUAV_BERRY,
        .moves = {MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_JUMP_KICK, MOVE_PROTECT},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_FIRE_BLAST, MOVE_EXTREME_SPEED, MOVE_CRUNCH, MOVE_PROTECT},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_PORYGON2,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_PSYCHIC, MOVE_RECOVER, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_HYDRO_PUMP, MOVE_BOUNCE, MOVE_DOUBLE_EDGE, MOVE_DRAGON_DANCE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),

    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 69,
        .species = SPECIES_KANGASKHAN,
        .heldItem = ITEM_LUM_BERRY,
        .moves = {MOVE_FAKE_OUT, MOVE_DOUBLE_EDGE, MOVE_PROTECT, MOVE_CRUNCH},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
}; //GIOVANNI 4


static const struct TrainerMon sParty_Owl[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 85,
        .species = SPECIES_XATU,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_GIGA_DRAIN},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),

    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 86,
        .species = SPECIES_DODRIO,
        .heldItem = ITEM_CHOICE_BAND,
        .moves = {MOVE_JUMP_KICK, MOVE_DOUBLE_EDGE, MOVE_DRILL_PECK, MOVE_STEEL_WING},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),

    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 86,
        .species = SPECIES_WOBBUFFET,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_MIRROR_COAT, MOVE_COUNTER, MOVE_DESTINY_BOND, MOVE_ENCORE},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 0),

    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 86,
        .species = SPECIES_LUDICOLO,
        .heldItem = ITEM_MYSTIC_WATER,
        .moves = {MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_GIGA_DRAIN, MOVE_ICE_BEAM},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),

    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 86,
        .species = SPECIES_GLALIE,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_EXPLOSION, MOVE_TOXIC},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 95,
        .species = SPECIES_NOCTOWL,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_REFLECT, MOVE_SHADOW_BALL},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),

    },
}; //OWL EASTER EGG


static const struct TrainerMon sParty_Freddy[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 83,
        .species = SPECIES_GENGAR,
        .heldItem = ITEM_LUM_BERRY,
        .moves = {MOVE_SHADOW_BALL, MOVE_DOUBLE_TEAM, MOVE_TOXIC, MOVE_THUNDERBOLT},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 83,
        .species = SPECIES_GOREBYSS,
        .heldItem = ITEM_LEFTOVERS,
        .isShiny = TRUE,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_HYDRO_PUMP, MOVE_AGILITY},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 85,
        .species = SPECIES_AZUMARILL,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_HYDRO_PUMP, MOVE_DIG, MOVE_SUPERPOWER},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 85,
        .species = SPECIES_SHARPEDO,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_HYDRO_PUMP, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_ICE_BEAM},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 85,
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_SKY_UPPERCUT, MOVE_BLAZE_KICK, MOVE_EARTHQUAKE, MOVE_BULK_UP},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 88,
        .species = SPECIES_URSARING,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_CRUNCH, MOVE_FACADE, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },  
}; //Freddy Easter Egg

static const struct TrainerMon sParty_Speedy[] = {    
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_NIDOQUEEN,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_SUPERPOWER, MOVE_ICE_BEAM},
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),

    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_FERALIGATR,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_BLIZZARD, MOVE_EARTHQUAKE, MOVE_HYDRO_PUMP, MOVE_CRUNCH},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_RAICHU,
        .heldItem = ITEM_MYSTIC_WATER,
        .moves = {MOVE_SURF, MOVE_VOLT_TACKLE, MOVE_DYNAMIC_PUNCH, MOVE_THUNDER_WAVE},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),

    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_BLAZIKEN,
        .heldItem = ITEM_QUICK_CLAW,
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SKY_UPPERCUT, MOVE_BULK_UP},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),

    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_DUGTRIO,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_DOUBLE_EDGE},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 69,
        .species = SPECIES_TAUROS,
        .heldItem = ITEM_CHOICE_BAND,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_IRON_TAIL},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),

    },
}; //Six Island Master

static const struct TrainerMon sParty_NurseJoy[] = {    
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 62,
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_DOUBLE_TEAM, MOVE_REST},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 62,
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_REST, MOVE_TOXIC, MOVE_REFRESH, MOVE_WRAP},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 62,
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_DREAM_EATER, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN, MOVE_SOFT_BOILED},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 62,
        .species = SPECIES_UMBREON,
        .moves = {MOVE_FAINT_ATTACK, MOVE_MOONLIGHT, MOVE_CURSE, MOVE_DOUBLE_TEAM},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 0),

    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 62,
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_REST, MOVE_BODY_SLAM, MOVE_DEFENSE_CURL, MOVE_ROLLOUT},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 63,
        .species = SPECIES_BLISSEY,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_EGG_BOMB, MOVE_REFLECT, MOVE_SOFT_BOILED, MOVE_THUNDER_WAVE},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 0),
    },
}; //Nurse Joy


static const struct TrainerMon sParty_Pokedude[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_PIDGEOT,
        .heldItem = ITEM_BRIGHT_POWDER,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SKY_ATTACK, MOVE_MEGA_KICK, MOVE_EXTREME_SPEED, MOVE_TOXIC},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0), 
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_BUTTERFREE,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_SLEEP_POWDER, MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_SIGNAL_BEAM},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0), 
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_RATICATE,
        .heldItem = ITEM_FOCUS_BAND,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_REVERSAL, MOVE_SUPER_FANG},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0), 
        .abilityNum = 1,
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 63,
        .species = SPECIES_POLIWRATH,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_HYDRO_PUMP, MOVE_HYPNOSIS, MOVE_EARTHQUAKE, MOVE_SUBMISSION},
        .ev = TRAINER_PARTY_EVS(252, 128, 0, 0, 128, 0), 
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 63,
        .species = SPECIES_VILEPLUME,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB},
        .ev = TRAINER_PARTY_EVS(252, 128, 0, 128, 0, 0), 
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 63,
        .species = SPECIES_NINETALES,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_FIRE_BLAST, MOVE_SHADOW_BALL, MOVE_CALM_MIND, MOVE_WILL_O_WISP},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0), 
    },    
}; //Pokedude

static const struct TrainerMon sParty_Proton[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 63,
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_TWINEEDLE, MOVE_SPIKE_CANNON, MOVE_THUNDER_WAVE, MOVE_EXPLOSION},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_MAGCARGO,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_FIRE_BLAST, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_BODY_SLAM},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_CLOYSTER,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_HYDRO_PUMP, MOVE_EXPLOSION, MOVE_TOXIC, MOVE_ICE_BEAM},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_PUPITAR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_DOUBLE_EDGE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_STANTLER,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_HYPNOSIS, MOVE_EARTHQUAKE, MOVE_SHADOW_BALL},
    },
}; //RocketAdminProton
static const struct TrainerMon sParty_Petrol[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 63,
        .species = SPECIES_WEEZING,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_PAIN_SPLIT},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_SNEASEL,
        .moves = {MOVE_ICE_BEAM, MOVE_FAINT_ATTACK, MOVE_BRICK_BREAK, MOVE_SWORDS_DANCE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_RHYDON,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_DOUBLE_EDGE},

    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_MUK,
        .heldItem = ITEM_BRIGHT_POWDER,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_ACID_ARMOR, MOVE_MINIMIZE, MOVE_TOXIC},

    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_GRANBULL,
        .heldItem = ITEM_CHOICE_BAND,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_ROCK_SLIDE},
    },    
}; //RocketAdminPetrol
static const struct TrainerMon sParty_Falkner[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_NOCTOWL,
        .heldItem = ITEM_LUM_BERRY,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_SKY_ATTACK},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_SPIKES, MOVE_DRILL_PECK, MOVE_STEEL_WING, MOVE_MUD_SLAP},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_DODRIO,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_FLAIL, MOVE_ENDURE, MOVE_JUMP_KICK, MOVE_DRILL_PECK},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_MURKROW,
        .moves = {MOVE_DRILL_PECK, MOVE_ICY_WIND, MOVE_FAINT_ATTACK, MOVE_HAZE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_ALTARIA,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_SKY_ATTACK, MOVE_IRON_TAIL},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_PIDGEOT,
        .heldItem = ITEM_BRIGHT_POWDER,
        .moves = {MOVE_MEGA_KICK, MOVE_EXTREME_SPEED, MOVE_DOUBLE_TEAM, MOVE_SKY_ATTACK},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
}; //Falkner Father
static const struct TrainerMon sParty_Bugsy[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_LEDIAN,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_GIGA_DRAIN, MOVE_AGILITY, MOVE_BATON_PASS, MOVE_LIGHT_SCREEN},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_FORRETRESS,
        .moves = {MOVE_EXPLOSION, MOVE_CURSE, MOVE_SPIKE_CANNON, MOVE_TWINEEDLE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_SHUCKLE,
        .moves = {MOVE_TOXIC, MOVE_WRAP, MOVE_SANDSTORM, MOVE_PROTECT},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_NINJASK,
        .moves = {MOVE_SWORDS_DANCE, MOVE_PROTECT, MOVE_BATON_PASS, MOVE_AIR_CUTTER},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_TWINEEDLE, MOVE_METEOR_MASH, MOVE_AGILITY, MOVE_SUBSTITUTE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_SCYTHER,
        .heldItem = ITEM_SCOPE_LENS,
        .moves = {MOVE_CUT, MOVE_SLASH, MOVE_SWORDS_DANCE, MOVE_WING_ATTACK},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
}; //Bugsy
static const struct TrainerMon sParty_Whitney[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 62,
        .species = SPECIES_CLEFABLE,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_ICE_BEAM, MOVE_FLAMETHROWER, MOVE_THUNDERBOLT, MOVE_CALM_MIND},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 62,
        .species = SPECIES_URSARING,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_EARTHQUAKE, MOVE_STRENGTH, MOVE_REST, MOVE_METAL_CLAW},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 62,
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_EGG_BOMB, MOVE_ATTRACT, MOVE_SOFT_BOILED, MOVE_LIGHT_SCREEN},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 62,
        .species = SPECIES_TAUROS,
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_PURSUIT, MOVE_IRON_TAIL},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 62,
        .species = SPECIES_EXPLOUD,
        .moves = {MOVE_HYPER_VOICE, MOVE_SURF, MOVE_ICY_WIND, MOVE_ROCK_SLIDE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 63,
        .species = SPECIES_MILTANK,
        .heldItem = ITEM_SILK_SCARF,
        .moves = {MOVE_IRON_TAIL, MOVE_ATTRACT, MOVE_MILK_DRINK, MOVE_BODY_SLAM},

        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
}; //Whiney
static const struct TrainerMon sParty_Morty[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_SABLEYE,
        .moves = {MOVE_SHADOW_BALL, MOVE_FAINT_ATTACK, MOVE_THUNDER_WAVE, MOVE_RECOVER},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_STANTLER,
        .moves = {MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_HYPNOSIS, MOVE_DREAM_EATER},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_BANETTE,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_REVENGE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_DUSCLOPS,
        .moves = {MOVE_SHADOW_PUNCH, MOVE_PAIN_SPLIT, MOVE_WILL_O_WISP, MOVE_PROTECT},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_MISDREAVUS,
        .moves = {MOVE_SHADOW_BALL, MOVE_PAIN_SPLIT, MOVE_MEAN_LOOK, MOVE_PERISH_SONG},

        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_GENGAR,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SHADOW_BALL, MOVE_HYPNOSIS, MOVE_THUNDERBOLT, MOVE_DREAM_EATER},

        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
}; // Morty
static const struct TrainerMon sParty_Chuck[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_SCOPE_LENS,
        .moves = {MOVE_TRIPLE_KICK, MOVE_EARTHQUAKE, MOVE_PURSUIT, MOVE_ROCK_SLIDE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_SUDOWOODO,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_FAINT_ATTACK, MOVE_LOW_KICK},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_BRELOOM,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SPORE, MOVE_SKY_UPPERCUT, MOVE_MACH_PUNCH, MOVE_BULK_UP},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_PINSIR,
        .moves = {MOVE_ROCK_SLIDE, MOVE_STRENGTH, MOVE_MEGAHORN, MOVE_SWORDS_DANCE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_PRIMEAPE,
        .moves = {MOVE_ROCK_SLIDE, MOVE_CROSS_CHOP, MOVE_BULK_UP, MOVE_EARTHQUAKE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_POLIWRATH,
        .heldItem = ITEM_SALAC_BERRY,
        .moves = {MOVE_BELLY_DRUM, MOVE_DYNAMIC_PUNCH, MOVE_SURF, MOVE_EARTHQUAKE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
}; // Chuck
static const struct TrainerMon sParty_Jasmine[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_SKARMORY,
        .moves = {MOVE_SPIKES, MOVE_STEEL_WING, MOVE_TOXIC, MOVE_DRILL_PECK},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDER_WAVE, MOVE_SUBSTITUTE, MOVE_RAIN_DANCE, MOVE_THUNDER},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_CORSOLA,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_ANCIENT_POWER, MOVE_SURF, MOVE_RAIN_DANCE, MOVE_RECOVER},

        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_SCIZOR,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_TWINEEDLE, MOVE_SWORDS_DANCE, MOVE_LIGHT_SCREEN, MOVE_METEOR_MASH},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_AGGRON,
        .heldItem = ITEM_LUM_BERRY,
        .moves = {MOVE_IRON_TAIL, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_THUNDER_WAVE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_STEELIX,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_ROCK_SLIDE, MOVE_CRUNCH},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
}; // Jasmine
static const struct TrainerMon sParty_Pryce[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_SNEASEL,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_FAINT_ATTACK, MOVE_HAIL, MOVE_ICE_BEAM, MOVE_LOW_KICK},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_TOXIC, MOVE_HAIL, MOVE_ICE_BEAM, MOVE_SLACK_OFF},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_JYNX,
        .moves = {MOVE_BLIZZARD, MOVE_PSYCHIC, MOVE_WATER_PULSE, MOVE_LOVELY_KISS},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_LAPRAS,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SURF, MOVE_BLIZZARD, MOVE_THUNDERBOLT, MOVE_SING},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_GLALIE,
        .moves = {MOVE_HAIL, MOVE_BLIZZARD, MOVE_CRUNCH, MOVE_EARTHQUAKE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_PILOSWINE,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_BLIZZARD, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
}; //Pryce
static const struct TrainerMon sParty_Clair[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_DRAGONAIR,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_OUTRAGE, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_THUNDER_WAVE},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_HYDRO_PUMP, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_BOUNCE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_ALTARIA,
        .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_SKY_ATTACK},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_LAPRAS,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_PSYCHIC},
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_SALAMENCE,
        .moves = {MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE, MOVE_CRUNCH},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_KINGDRA,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_DRAGON_BREATH, MOVE_ICE_BEAM, MOVE_SURF, MOVE_AGILITY},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
}; //Clair
static const struct TrainerMon sParty_Smith[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_AERODACTYL,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SKY_ATTACK, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_GENGAR,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_PSYCHIC, MOVE_HYPNOSIS},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_VENUSAUR,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED, MOVE_SUBSTITUTE},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_FOCUS_BAND,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH, MOVE_SHADOW_BALL},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_TAUROS,
        .heldItem = ITEM_CHOICE_BAND,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_IRON_TAIL},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_STARMIE,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
    },
}; //Smith
static const struct TrainerMon sParty_Craig[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 50,
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_PROTECT},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 50,
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_PROTECT, MOVE_ROCK_SLIDE, MOVE_WING_ATTACK, MOVE_DOUBLE_EDGE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 50,
        .species = SPECIES_SNORLAX,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_PROTECT, MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_ROCK_SLIDE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 50,
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_EGG_BOMB, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_PROTECT},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 50,
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_EXPLOSION, MOVE_PROTECT},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 50,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_WHITE_HERB,
        .nickname = COMPOUND_STRING("FURBALL"),
        .moves = {MOVE_OVERHEAT, MOVE_EXTREME_SPEED, MOVE_FIRE_BLAST, MOVE_HELPING_HAND},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
}; //Craig

static const struct TrainerMon sParty_Weebra[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 50,
        .species = SPECIES_SNORLAX,
        .moves = {MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_REST, MOVE_CRUNCH},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 50,
        .species = SPECIES_GENGAR,
        .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_GIGA_DRAIN, MOVE_THUNDERBOLT},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 50,
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_DRAGON_CLAW, MOVE_AIR_CUTTER, MOVE_FIRE_BLAST, MOVE_EARTHQUAKE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 50,
        .species = SPECIES_VAPOREON,
        .moves = {MOVE_SURF, MOVE_ICE_BEAM, MOVE_SHADOW_BALL, MOVE_REST},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 50,
        .species = SPECIES_STEELIX,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUNCH},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 50,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_KINGS_ROCK,
        .nickname = COMPOUND_STRING("CINDERALLA"),
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
        .moves = {MOVE_FAKE_OUT, MOVE_TRIPLE_KICK, MOVE_BULK_UP, MOVE_ROCK_SLIDE}
    },
}; //Weebra

static const struct TrainerMon sParty_JohtoWill[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_GIRAFARIG,
        .heldItem = ITEM_SILK_SCARF,
        .moves = {MOVE_PSYCHIC, MOVE_ROCK_SMASH, MOVE_AGILITY, MOVE_BATON_PASS},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_ESPEON,
        .heldItem = ITEM_SPELL_TAG,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_REFLECT, MOVE_MORNING_SUN},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_SLOWBRO,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_CURSE, MOVE_BRICK_BREAK, MOVE_EARTHQUAKE, MOVE_SLACK_OFF},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_SLOWKING,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_SURF, MOVE_PSYCHIC, MOVE_FLAMETHROWER, MOVE_THUNDER_WAVE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_NINETALES,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_FLAMETHROWER, MOVE_SHADOW_BALL, MOVE_REFLECT, MOVE_CONFUSE_RAY},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_XATU,
        .heldItem = ITEM_TWISTED_SPOON,
        .moves = {MOVE_PSYCHIC, MOVE_DRILL_PECK, MOVE_RECOVER, MOVE_GIGA_DRAIN},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
}; //Will

static const struct TrainerMon sParty_Karen[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_UMBREON,
        .heldItem = ITEM_LUM_BERRY,
        .moves = {MOVE_FAINT_ATTACK, MOVE_DOUBLE_TEAM, MOVE_TOXIC, MOVE_PSYCH_UP},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_VILEPLUME,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_SUBSTITUTE, MOVE_LEECH_SEED},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_GENGAR,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_DESTINY_BOND, MOVE_CONFUSE_RAY},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_MURKROW,
        .heldItem = ITEM_SHARP_BEAK,
        .moves = {MOVE_SKY_ATTACK, MOVE_PURSUIT, MOVE_SWAGGER, MOVE_PSYCH_UP},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_MISDREAVUS,
        .heldItem = ITEM_SPELL_TAG,
        .moves = {MOVE_SHADOW_BALL, MOVE_THUNDERBOLT, MOVE_HYPNOSIS, MOVE_DREAM_EATER},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_HOUNDOOM,
        .heldItem = ITEM_WHITE_HERB,
        .moves = {MOVE_CRUNCH, MOVE_OVERHEAT, MOVE_REVERSAL, MOVE_ENDURE},
        .ev = TRAINER_PARTY_EVS(85, 85, 85, 85, 85, 85),
    },  
}; //Karen

static const struct TrainerMon sParty_Ditto[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 70,
        .species = SPECIES_DITTO,
        .heldItem = ITEM_LEFTOVERS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 70,
        .species = SPECIES_DITTO,
        .heldItem = ITEM_SCOPE_LENS,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    },   
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 70,
        .species = SPECIES_DITTO,
        .heldItem = ITEM_QUICK_CLAW,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    },   
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 70,
        .species = SPECIES_DITTO,
        .heldItem = ITEM_WHITE_HERB,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    },   
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 70,
        .species = SPECIES_DITTO,
        .heldItem = ITEM_FOCUS_BAND,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    },   
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 70,
        .species = SPECIES_DITTO,
        .heldItem = ITEM_SALAC_BERRY,
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    },     
}; //DITTO


static const struct TrainerMon sParty_Sabrina1[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 52,
        .species = SPECIES_MR_MIME,
        .heldItem = ITEM_BRIGHT_POWDER,
        .moves = {MOVE_SUBSTITUTE, MOVE_PSYCHIC, MOVE_BATON_PASS, MOVE_CALM_MIND},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 51,
        .species = SPECIES_WOBBUFFET,
        .heldItem = ITEM_AGUAV_BERRY,
        .moves = {MOVE_MIRROR_COAT, MOVE_COUNTER, MOVE_ENCORE, MOVE_DESTINY_BOND},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 51,
        .species = SPECIES_SLOWBRO,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_PSYCHIC, MOVE_EARTHQUAKE, MOVE_ICE_BEAM, MOVE_SURF},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 52,
        .species = SPECIES_WIGGLYTUFF,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_ICE_BEAM, MOVE_HYPER_VOICE, MOVE_LOVELY_KISS, MOVE_PSYCHIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 53,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDER_PUNCH, MOVE_CALM_MIND},
    },
}; //Unused Sabrina 1


static const struct TrainerMon sParty_Erika2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 41,
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_SLEEP_POWDER, MOVE_SYNTHESIS, MOVE_SUNNY_DAY, MOVE_GIGA_DRAIN},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 42,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_STUN_SPORE, MOVE_SLUDGE_BOMB, MOVE_GROWTH, MOVE_GIGA_DRAIN},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 42,
        .species = SPECIES_TANGELA,
        .moves = {MOVE_SUNNY_DAY, MOVE_ANCIENT_POWER, MOVE_SHOCK_WAVE, MOVE_GIGA_DRAIN},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 41,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_LEECH_SEED, MOVE_PSYCHIC, MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 43,
        .species = SPECIES_VILEPLUME,
        .heldItem = ITEM_MIRACLE_SEED,
        .moves = {MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB},
    },
}; //Erika 2
static const struct TrainerMon sParty_Erika3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 48,
        .species = SPECIES_BELLOSSOM,
        .heldItem = ITEM_MIRACLE_SEED,
        .moves = {MOVE_SLEEP_POWDER, MOVE_SYNTHESIS, MOVE_SUNNY_DAY, MOVE_GIGA_DRAIN},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 49,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_STUN_SPORE, MOVE_SLUDGE_BOMB, MOVE_GROWTH, MOVE_GIGA_DRAIN},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 48,
        .species = SPECIES_TANGELA,
        .moves = {MOVE_SUNNY_DAY, MOVE_ANCIENT_POWER, MOVE_SHOCK_WAVE, MOVE_GIGA_DRAIN},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 48,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_LEECH_SEED, MOVE_PSYCHIC, MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 50,
        .species = SPECIES_VILEPLUME,
        .heldItem = ITEM_MIRACLE_SEED,
        .moves = {MOVE_SLEEP_POWDER, MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB},
    },
}; //Erika 3

static const struct TrainerMon sParty_Koga2[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 49,
        .species = SPECIES_CROBAT,
        .heldItem = ITEM_BRIGHT_POWDER,
        .moves = {MOVE_TOXIC, MOVE_FLY, MOVE_BITE, MOVE_CONFUSE_RAY},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 48,
        .species = SPECIES_MUK,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_MINIMIZE, MOVE_SLUDGE_BOMB, MOVE_ACID_ARMOR, MOVE_TOXIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 47,
        .species = SPECIES_TENTACRUEL,
        .heldItem = ITEM_MYSTIC_WATER,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SURF, MOVE_ICE_BEAM, MOVE_BARRIER},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 50,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_TOXIC, MOVE_SLUDGE_BOMB, MOVE_AMNESIA, MOVE_PAIN_SPLIT},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 48,
        .species = SPECIES_VENOMOTH,
        .heldItem = ITEM_SHELL_BELL,
        .moves = {MOVE_PSYCHIC, MOVE_DOUBLE_TEAM, MOVE_SIGNAL_BEAM, MOVE_TOXIC},
    },    
}; //Koga 2


static const struct TrainerMon sParty_Oak[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 70,
        .species = SPECIES_TAUROS,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ROCK_TOMB, MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE},
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 69,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_PERSIM_BERRY,
        .moves = {MOVE_FIRE_BLAST, MOVE_OUTRAGE, MOVE_EARTHQUAKE, MOVE_AIR_CUTTER},
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 69,
        .species = SPECIES_VENUSAUR,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_ROCK_SLIDE, MOVE_LEECH_SEED, MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER},
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 69,
        .species = SPECIES_BLASTOISE,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_EARTHQUAKE, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_BODY_SLAM},
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 69,
        .species = SPECIES_SNORLAX,
        .heldItem = ITEM_CHESTO_BERRY,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_CRUNCH, MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_REST},
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 70,
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_ICE_BEAM},
    },    
}; //Oak
static const struct TrainerMon sParty_Oak2[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 79,
        .species = SPECIES_TAUROS,
        .heldItem = ITEM_AGUAV_BERRY,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ROCK_TOMB, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_PURSUIT},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 79,
        .species = SPECIES_SNORLAX,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BODY_SLAM, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_CURSE},
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 78,
        .species = SPECIES_ZAPDOS,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SKY_ATTACK, MOVE_THUNDERBOLT, MOVE_LIGHT_SCREEN, MOVE_THUNDER_WAVE},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 78,
        .species = SPECIES_ARTICUNO,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SKY_ATTACK, MOVE_ICE_BEAM, MOVE_TOXIC, MOVE_REFLECT},
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),

    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 78,
        .species = SPECIES_MOLTRES,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_SKY_ATTACK, MOVE_FIRE_BLAST, MOVE_AGILITY, MOVE_EXTRASENSORY},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),

    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 81,
        .species = SPECIES_NIDOKING,
        .heldItem = ITEM_CHOICE_BAND,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_ROCK_SLIDE},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),

    },  
}; //Oak2

static const struct TrainerMon sParty_LeaderBrock2[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_TYRANITAR,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_CRUNCH, MOVE_ROCK_SLIDE, MOVE_THUNDERBOLT, MOVE_DRAGON_DANCE},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_GOLEM,
        .heldItem = ITEM_QUICK_CLAW,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_EXPLOSION, MOVE_BODY_SLAM},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_AERODACTYL,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SKY_ATTACK, MOVE_ANCIENT_POWER, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_KABUTOPS,
        .heldItem = ITEM_SCOPE_LENS,
        .moves = {MOVE_SURF, MOVE_ROCK_SLIDE, MOVE_CUT, MOVE_SWORDS_DANCE},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_OMASTAR,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_SURF, MOVE_ROCK_SLIDE, MOVE_ICE_BEAM, MOVE_TOXIC},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 67,
        .species = SPECIES_STEELIX,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_IRON_TAIL, MOVE_CURSE},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
};//BROCK REMATCH
static const struct TrainerMon sParty_LeaderMisty2[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_KINGDRA,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_RAIN_DANCE, MOVE_SURF, MOVE_DRAGON_BREATH, MOVE_ICE_BEAM},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_GOLDUCK,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_HYPNOSIS, MOVE_PSYCHIC, MOVE_CALM_MIND},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },   
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_QUAGSIRE,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_SURF, MOVE_RAIN_DANCE},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_LAPRAS,
        .heldItem = ITEM_MAGNET,
        .moves = {MOVE_THUNDERBOLT, MOVE_SURF, MOVE_ICE_BEAM, MOVE_PSYCHIC},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_VAPOREON,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SURF, MOVE_ACID, MOVE_ICE_BEAM, MOVE_PROTECT},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),

    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 67,
        .species = SPECIES_STARMIE,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_PSYCHIC, MOVE_PROTECT, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
};//MISTY REMATCH

static const struct TrainerMon sParty_LeaderSurge2[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_ELECTRODE,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_RAIN_DANCE, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_EXPLOSION},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_REFLECT, MOVE_THUNDERBOLT, MOVE_THUNDER, MOVE_RAIN_DANCE},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },   
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_LANTURN,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_CONFUSE_RAY, MOVE_ICE_BEAM},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_PORYGON2,
        .heldItem = ITEM_MAGNET,
        .moves = {MOVE_RECOVER, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_PSYCHIC},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_ELECTABUZZ,
        .heldItem = ITEM_NEVER_MELT_ICE,
        .moves = {MOVE_FIRE_PUNCH, MOVE_CROSS_CHOP, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 67,
        .species = SPECIES_RAICHU,
        .heldItem = ITEM_MAGNET,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_THUNDER, MOVE_BODY_SLAM},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
};//SURGE REMATCH
static const struct TrainerMon sParty_LeaderErika2[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_JUMPLUFF,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_SLEEP_POWDER, MOVE_LEECH_SEED, MOVE_SUNNY_DAY, MOVE_GIGA_DRAIN},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_SOLAR_BEAM, MOVE_PSYCHIC, MOVE_SUNNY_DAY, MOVE_SLEEP_POWDER},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },   
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_SUDOWOODO,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_FAINT_ATTACK, MOVE_LOW_KICK},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_VENUSAUR,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SOLAR_BEAM, MOVE_ROCK_SLIDE, MOVE_SLEEP_POWDER, MOVE_EARTHQUAKE},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 67,
        .species = SPECIES_BELLOSSOM,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SUNNY_DAY, MOVE_SLEEP_POWDER, MOVE_SOLAR_BEAM, MOVE_SYNTHESIS},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 67,
        .species = SPECIES_VICTREEBEL,
        .heldItem = ITEM_MIRACLE_SEED,
        .moves = {MOVE_LEAF_BLADE, MOVE_SLUDGE_BOMB, MOVE_GROWTH, MOVE_GIGA_DRAIN},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },    
};//ERIKA REMATCH
static const struct TrainerMon sParty_LeaderKoga2[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_TENTACRUEL,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_TOXIC, MOVE_WRAP, MOVE_PROTECT},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_PARASECT,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_SPORE, MOVE_TWINEEDLE, MOVE_GIGA_DRAIN, MOVE_PSYCHIC},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },   
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_MUK,
        .heldItem = ITEM_BRIGHT_POWDER,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_MINIMIZE, MOVE_TOXIC, MOVE_BRICK_BREAK},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 67,
        .species = SPECIES_CROBAT,
        .moves = {MOVE_BITE, MOVE_CONFUSE_RAY, MOVE_TOXIC, MOVE_DOUBLE_TEAM},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_FIRE_BLAST, MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_PAIN_SPLIT},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 67,
        .species = SPECIES_VENOMOTH,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_SLEEP_POWDER, MOVE_PSYCHIC, MOVE_DOUBLE_TEAM},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
};//KOGA REMATCH
static const struct TrainerMon sParty_LeaderSabrina2[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_MR_MIME,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SUBSTITUTE, MOVE_CALM_MIND, MOVE_BATON_PASS, MOVE_PSYCHIC},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_JYNX,
        .moves = {MOVE_LOVELY_KISS, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_SHADOW_BALL},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },   
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_SLOWBRO,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_SLACK_OFF, MOVE_DYNAMIC_PUNCH, MOVE_SURF, MOVE_PSYCHIC},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_WOBBUFFET,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_DESTINY_BOND, MOVE_ENCORE},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_HYPNO,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_FIRE_PUNCH, MOVE_HYPNOSIS, MOVE_DREAM_EATER, MOVE_FIRE_PUNCH},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 67,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_SHADOW_BALL, MOVE_THUNDER_PUNCH},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
};//SABRINA REMATCH
static const struct TrainerMon sParty_LeaderBlaine2[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 67,
        .species = SPECIES_RAPIDASH,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_SUNNY_DAY, MOVE_FIRE_BLAST, MOVE_HI_JUMP_KICK, MOVE_MEGAHORN},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    }, 
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_MAGMAR,
        .heldItem = ITEM_WHITE_HERB,
        .moves = {MOVE_OVERHEAT, MOVE_FLAMETHROWER, MOVE_THUNDER_PUNCH, MOVE_PSYCHIC},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },   
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_SALAC_BERRY,
        .moves = {MOVE_ENDURE, MOVE_HEAT_WAVE, MOVE_DRAGON_CLAW, MOVE_ROCK_SLIDE},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_NINETALES,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_CALM_MIND, MOVE_SUNNY_DAY, MOVE_FIRE_BLAST, MOVE_SHADOW_BALL},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_HOUNDOOM,
        .heldItem = ITEM_MIRACLE_SEED,
        .moves = {MOVE_FLAMETHROWER, MOVE_HEAT_WAVE, MOVE_CRUNCH, MOVE_SOLAR_BEAM},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },  
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 67,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_CHARCOAL,
        .moves = {MOVE_HEAT_WAVE, MOVE_EXTREME_SPEED, MOVE_IRON_TAIL, MOVE_PROTECT},
    },  
};//BLAINE REMATCH
static const struct TrainerMon sParty_RandomGrunt[] = {
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 29,
        .species = SPECIES_PIDGEOTTO,
        .moves = {MOVE_SECRET_POWER, MOVE_WING_ATTACK, MOVE_MUD_SLAP, MOVE_NONE},
    },  
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 28,
        .species = SPECIES_MACHOKE,
        .moves = {MOVE_REVENGE, MOVE_MEGA_PUNCH, MOVE_ROCK_TOMB, MOVE_NONE},
    },  
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 29,
        .species = SPECIES_WARTORTLE,
        .moves = {MOVE_BUBBLE_BEAM, MOVE_MEGA_PUNCH, MOVE_BITE, MOVE_NONE},
    },  
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 30,
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FAINT_ATTACK, MOVE_FLAME_WHEEL, MOVE_ROCK_SMASH, MOVE_HOWL},
    },  
}; //Guard

static const struct TrainerMon sParty_Spike[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_FLYGON,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SIGNAL_BEAM, MOVE_FIRE_BLAST, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW},
        .ev = TRAINER_PARTY_EVS(0, 128, 0, 252, 128, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_JOLTEON,
        .heldItem = ITEM_FOCUS_BAND,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SHADOW_BALL, MOVE_HEADBUTT},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_CROBAT,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_DOUBLE_TEAM, MOVE_SLUDGE_BOMB, MOVE_TOXIC, MOVE_CONFUSE_RAY},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 66,
        .species = SPECIES_BRELOOM,
        .heldItem = ITEM_SALAC_BERRY,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SPORE, MOVE_SKY_UPPERCUT, MOVE_LEECH_SEED, MOVE_ROCK_TOMB},
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 67,
        .species = SPECIES_AZUMARILL,
        .heldItem = ITEM_QUICK_CLAW,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SUPERPOWER, MOVE_HYDRO_PUMP, MOVE_BRICK_BREAK},
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 100,
        .species = SPECIES_SEEDOT,
        .heldItem = ITEM_LEFTOVERS,
        .nickname = COMPOUND_STRING("BIDE BLAST"),
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .moves = {MOVE_BIDE, MOVE_SYNTHESIS, MOVE_REFRESH, MOVE_NONE},
        .ev = TRAINER_PARTY_EVS(252, 252, 252, 252, 252, 252),
    },
}; //Me


static const struct TrainerMon sParty_Attack[] = {

    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_WEEPINBELL,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_WEEPINBELL,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_WEEPINBELL,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_WEEPINBELL,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_WEEPINBELL,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_FLAREON,
    },
}; //Attack
static const struct TrainerMon sParty_Defense[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_METAPOD,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_KAKUNA,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_METAPOD,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_KAKUNA,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_METAPOD,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_EEVEE,
    },
}; //Defense

static const struct TrainerMon sParty_HP[] = {    
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_VAPOREON,
    },
}; //HP

static const struct TrainerMon sParty_Speed[] = {

    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_SKIPLOOM,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_SKIPLOOM,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_SKIPLOOM,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_SKIPLOOM,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_SKIPLOOM,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_JOLTEON,
    },
}; //SPEED

static const struct TrainerMon sParty_SpDef[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_TOGETIC,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_TOGETIC,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_TOGETIC,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_TOGETIC,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_TOGETIC,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_UMBREON,
    },
}; //SPDEF

static const struct TrainerMon sParty_SpAtk[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_GLOOM,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_GLOOM,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_GLOOM,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_GLOOM,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_GLOOM,
    },
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_ESPEON,
    },
}; //SPATK

static const struct TrainerMon sParty_SlugmaMaleJamal[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_MIGHTYENA,
        .heldItem = ITEM_BLACK_GLASSES,
        .moves = {MOVE_CRUNCH, MOVE_SUPER_FANG, MOVE_TOXIC, MOVE_ROCK_SMASH},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_CLOYSTER,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_ICE_BEAM, MOVE_EXPLOSION, MOVE_HYDRO_PUMP, MOVE_TOXIC},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 252, 252),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_STEELIX,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_ROCK_SLIDE, MOVE_TOXIC},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_NIDOKING,
        .heldItem = ITEM_CHOICE_BAND,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_CRUNCH},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 69,
        .species = SPECIES_MAGCARGO,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_EARTHQUAKE, MOVE_FIRE_BLAST, MOVE_ROCK_SLIDE, MOVE_BODY_SLAM},
        .ev = TRAINER_PARTY_EVS(252, 128, 0, 0, 128, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_BULK_UP, MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    },   
};//One Island Sevii Master

static const struct TrainerMon sParty_CruelKing[] = {

    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_TENTACRUEL,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_ICE_BEAM, MOVE_HYDRO_PUMP, MOVE_GIGA_DRAIN, MOVE_TOXIC},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_SHARPEDO,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_BLIZZARD, MOVE_HYDRO_PUMP, MOVE_EARTHQUAKE, MOVE_CRUNCH},
        .ev = TRAINER_PARTY_EVS(0, 128, 0, 252, 128, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_HOUNDOOM,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_CRUNCH, MOVE_REVERSAL, MOVE_FIRE_BLAST, MOVE_FLAMETHROWER},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_SCYTHER,
        .heldItem = ITEM_SCOPE_LENS,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_TWINEEDLE, MOVE_WING_ATTACK, MOVE_BRICK_BREAK, MOVE_SWORDS_DANCE},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 69,
        .species = SPECIES_SCEPTILE,
        .heldItem = ITEM_LUM_BERRY,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_LEAF_BLADE, MOVE_DRAGON_CLAW, MOVE_THUNDER_PUNCH, MOVE_GROWTH},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_TYRANITAR,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ROCK_SLIDE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_DRAGON_DANCE},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
    },
};//Three Island Sevii Master

static const struct TrainerMon sParty_Caseno[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_TAUROS,
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .heldItem = ITEM_AGUAV_BERRY,
        .moves = {MOVE_PURSUIT, MOVE_ROCK_TOMB, MOVE_IRON_TAIL, MOVE_DOUBLE_EDGE},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_ALAKAZAM,
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_REFLECT, MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDER_PUNCH},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),


    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_MAROWAK,
        .heldItem = ITEM_THICK_CLUB,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE, MOVE_BONEMERANG, MOVE_BRICK_BREAK},
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_MAWILE,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_METEOR_MASH, MOVE_CRUNCH, MOVE_PROTECT, MOVE_ROCK_SLIDE},
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_JYNX,
        .heldItem = ITEM_FOCUS_BAND,
        .nature = TRAINER_PARTY_NATURE(NATURE_TIMID),
        .moves = {MOVE_ICE_BEAM, MOVE_LOVELY_KISS, MOVE_PSYCHIC, MOVE_LIGHT_SCREEN},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),


    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 69,
        .species = SPECIES_SNORLAX,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BODY_SLAM, MOVE_PROTECT, MOVE_CRUNCH, MOVE_BRICK_BREAK},
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    },   
};//Two Island Sevii Master

static const struct TrainerMon sParty_Armstrong[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 70,
        .species = SPECIES_STARMIE,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDER_WAVE, MOVE_SURF, MOVE_PSYCHIC},
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 70,
        .species = SPECIES_DRAGONITE,
        .heldItem = ITEM_PERSIM_BERRY,
        .moves = {MOVE_EARTHQUAKE, MOVE_SKY_ATTACK, MOVE_DRAGON_DANCE, MOVE_OUTRAGE},
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 70,
        .species = SPECIES_ELECTABUZZ,
        .heldItem = ITEM_FOCUS_BAND,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
        .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 71,
        .species = SPECIES_HERACROSS,
        .heldItem = ITEM_AGUAV_BERRY,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_CROSS_CHOP, MOVE_MEGAHORN},
        .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),

    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 70,
        .species = SPECIES_TYRANITAR,
        .heldItem = ITEM_CHOICE_BAND,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_CRUNCH, MOVE_AERIAL_ACE},
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),

    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 70,
        .species = SPECIES_METAGROSS,
        .heldItem = ITEM_LUM_BERRY,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_METEOR_MASH, MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_AGILITY},
        .ev = TRAINER_PARTY_EVS(252, 128, 0, 4, 128, 0),

    },
};//Seven Island Sevii Master

static const struct TrainerMon sParty_Oman[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_QWILFISH,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .moves = {MOVE_SPIKES, MOVE_TOXIC, MOVE_SURF, MOVE_ICE_BEAM},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),

    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_TROPIUS,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_BOLD),
        .moves = {MOVE_SUBSTITUTE, MOVE_GIGA_DRAIN, MOVE_TOXIC, MOVE_LEECH_SEED},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_GOLEM,
        .heldItem = ITEM_FOCUS_BAND,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE, MOVE_EXPLOSION},
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_FLAREON,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_FIRE_BLAST, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_SUPERPOWER},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_KECLEON,
        .heldItem = ITEM_SILK_SCARF,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_DOUBLE_EDGE, MOVE_THUNDERBOLT},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 252, 0),

    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 69,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_PERSIM_BERRY,
        .moves = {MOVE_ROCK_SLIDE, MOVE_FIRE_BLAST, MOVE_OUTRAGE, MOVE_EARTHQUAKE},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),

    },
};//Five Island Sevii Master


static const struct TrainerMon sParty_YoungsterBen[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_EKANS,
    },
};

static const struct TrainerMon sParty_YoungsterCalvin[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_SPEAROW,
    },
};

static const struct TrainerMon sParty_YoungsterJosh[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_ZUBAT,
    },
};

static const struct TrainerMon sParty_YoungsterTimmy[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_SANDSHREW,
    },
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_EKANS,
    },
};

static const struct TrainerMon sParty_YoungsterJoey[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_SPEAROW,
    },
};

static const struct TrainerMon sParty_YoungsterDan[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_SLOWPOKE,
    },
};

static const struct TrainerMon sParty_YoungsterChad[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_EKANS,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_SANDSHREW,
    },
};

static const struct TrainerMon sParty_YoungsterTyler[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_NIDORINO,
    },
};

static const struct TrainerMon sParty_YoungsterEddie[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_EKANS,
    },
};

static const struct TrainerMon sParty_YoungsterDillon[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_SANDSHREW,
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_ZUBAT,
    },
};

static const struct TrainerMon sParty_YoungsterYasu[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_RATICATE,
    },
};

static const struct TrainerMon sParty_YoungsterDave[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_NIDORINO,
    },
};

static const struct TrainerMon sParty_YoungsterBen2[] = {
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 17,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 17,
        .species = SPECIES_EKANS,
    },
};

static const struct TrainerMon sParty_BugCatcherRick[] = {
    {
        .iv = 0,
        .lvl = 6,
        .species = SPECIES_WEEDLE,
    },
    {
        .iv = 0,
        .lvl = 6,
        .species = SPECIES_CATERPIE,
    },
};

static const struct TrainerMon sParty_BugCatcherDoug[] = {
    {
        .iv = 0,
        .lvl = 7,
        .species = SPECIES_WEEDLE,
    },
    {
        .iv = 0,
        .lvl = 7,
        .species = SPECIES_KAKUNA,
    },
    {
        .iv = 0,
        .lvl = 7,
        .species = SPECIES_VENONAT,
    },
};

static const struct TrainerMon sParty_BugCatcherSammy[] = {
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 9,
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_POISON_STING, MOVE_STRING_SHOT, MOVE_RAGE, MOVE_NONE},
    },
};

static const struct TrainerMon sParty_BugCatcherColton[] = {
    {
        .iv = 0,
        .lvl = 8,
        .species = SPECIES_METAPOD,
    },
    {
        .iv = 0,
        .lvl = 8,
        .species = SPECIES_KAKUNA,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_BUTTERFREE,
    },
};

static const struct TrainerMon sParty_BugCatcherGreg[] = {
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_WEEDLE,
    },
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_KAKUNA,
    },
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_CATERPIE,
    },
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_METAPOD,
    },
};

static const struct TrainerMon sParty_BugCatcherJames[] = {
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_METAPOD,
    },
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_PARAS,
    },
        {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_KAKUNA,
    },
};

static const struct TrainerMon sParty_BugCatcherKent[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_WEEDLE,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_BEEDRILL,
    },
};

static const struct TrainerMon sParty_BugCatcherRobby[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_CATERPIE,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_BUTTERFREE,
    },
};

static const struct TrainerMon sParty_BugCatcherCale[] = {
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_BUTTERFREE,
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_BEEDRILL,
    },
};

static const struct TrainerMon sParty_BugCatcherKeigo[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_BEEDRILL,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_BUTTERFREE,
    },
};

static const struct TrainerMon sParty_BugCatcherElijah[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_VENONAT,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_SCYTHER,
    },
};

static const struct TrainerMon sParty_BugCatcher2[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_METAPOD,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_CATERPIE,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_VENONAT,
    },
};

static const struct TrainerMon sParty_BugCatcherBrent[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_VENONAT,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_PINSIR,
    },
};

static const struct TrainerMon sParty_BugCatcherConner[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_BUTTERFREE,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_BEEDRILL,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_SCYTHER,
    },
};

static const struct TrainerMon sParty_LassJanice[] = {
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_PIDGEY,
    },
    {
        .iv = 0,
        .lvl = 9,
        .species = SPECIES_PIDGEY,
    },
};

static const struct TrainerMon sParty_LassSally[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_NIDORAN_F,
    },
};

static const struct TrainerMon sParty_LassRobin[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_JIGGLYPUFF,
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_IGGLYBUFF,
    },
};

static const struct TrainerMon sParty_LassCrissy[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_PARASECT,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_GLOOM,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_PARASECT,
    },
};

static const struct TrainerMon sParty_LassMiriam[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_ODDISH,
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_BELLSPROUT,
    },
};

static const struct TrainerMon sParty_LassIris[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_CLEFFA,
    },
};

static const struct TrainerMon sParty_LassReli[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_NIDORAN_F,
    },
};

static const struct TrainerMon sParty_LassAli[] = {
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_JIGGLYPUFF,
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_ODDISH,
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_BELLSPROUT,
    },
};

static const struct TrainerMon sParty_Lass2[] = {
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_NIDORAN_F,
    },
};

static const struct TrainerMon sParty_LassHaley[] = {
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_ODDISH,
    },
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_PIDGEY,
    },
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_ODDISH,
    },
};

static const struct TrainerMon sParty_LassAnn[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_PIDGEY,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_NIDORINA,
    },
};

static const struct TrainerMon sParty_LassDawn[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_MEOWTH,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_PIKACHU,
    },
};

static const struct TrainerMon sParty_LassPaige[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_WEEPINBELL,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_NIDORINA,
    },
};

static const struct TrainerMon sParty_LassAndrea[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_MEOWTH,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_LICKITUNG,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_NIDORINO,
    },
};

static const struct TrainerMon sParty_LassMegan[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_NIDORINA,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_MEOWTH,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_PIKACHU,
    },
};

static const struct TrainerMon sParty_LassJulia[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_CLEFABLE,
    },
};

static const struct TrainerMon sParty_LassKay[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_GLOOM,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_WEEPINBELL,
    },
};

static const struct TrainerMon sParty_LassLisa[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_PARASECT,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_EXEGGCUTE,
    },
};

static const struct TrainerMon sParty_SailorEdmond[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_SHELLDER,
    },
};

static const struct TrainerMon sParty_SailorTrevor[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_TENTACOOL,
    },
};

static const struct TrainerMon sParty_SailorLeonard[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_SHELLDER,
    },
};

static const struct TrainerMon sParty_SailorDuncan[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_HORSEA,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_SHELLDER,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_TENTACOOL,
    },
};

static const struct TrainerMon sParty_SailorHuey[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_KRABBY,
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_STARYU,
    },
};

static const struct TrainerMon sParty_SailorDylan[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_HORSEA,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_KRABBY,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_STARYU,
    },
};

static const struct TrainerMon sParty_SailorPhillip[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_MACHOP,
    },
};

static const struct TrainerMon sParty_SailorDwayne[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_ELEKID,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_MAGNEMITE,
    },
};

static const struct TrainerMon sParty_CamperLiam[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_TACKLE, MOVE_DEFENSE_CURL, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_SANDSHREW,
        .moves = {MOVE_SCRATCH, MOVE_DEFENSE_CURL, MOVE_SAND_ATTACK, MOVE_NONE},
    },
};

static const struct TrainerMon sParty_KSI[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_ICE_PUNCH, MOVE_MACH_PUNCH, MOVE_SKY_UPPERCUT, MOVE_ROCK_TOMB},
        .ev = TRAINER_PARTY_EVS(0, 128, 0, 252, 128, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_SALAC_BERRY,
        .moves = {MOVE_ENDURE, MOVE_FIRE_BLAST, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE},
        .ev = TRAINER_PARTY_EVS(0, 4, 0, 252, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_SNEASEL,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_ICE_BEAM, MOVE_FAINT_ATTACK, MOVE_SURF, MOVE_BRICK_BREAK},
        .ev = TRAINER_PARTY_EVS(0, 128, 0, 252, 128, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_GARDEVOIR,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_THUNDERBOLT, MOVE_CALM_MIND},
        .ev = TRAINER_PARTY_EVS(255, 0, 0, 0, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_KINGDRA,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_AGILITY, MOVE_DRAGON_BREATH, MOVE_SURF, MOVE_ICE_BEAM},
        .ev = TRAINER_PARTY_EVS(255, 0, 0, 0, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 68,
        .species = SPECIES_PORYGON2,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_RECOVER, MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_PSYCHIC},
        .ev = TRAINER_PARTY_EVS(255, 0, 0, 0, 252, 0),
    },
};//Four Island Sevii Master

static const struct TrainerMon sParty_CamperShane[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_DIGLETT,
    },
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_PSYDUCK,
    },
};

static const struct TrainerMon sParty_CamperEthan[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_MANKEY,
    },
};

static const struct TrainerMon sParty_CamperRicky[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_SQUIRTLE,
    },
        {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_BELLSPROUT,
    },
};

static const struct TrainerMon sParty_CamperJeff[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_MANKEY,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_RATICATE,
    },
};

static const struct TrainerMon sParty_Camper2[] = {DUMMY_TRAINER_MON};

static const struct TrainerMon sParty_CamperChris[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_CHARMELEON,
    },
};

static const struct TrainerMon sParty_CamperDrew[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_DIGLETT,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_EKANS,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_SANDSHREW,
    },
};

static const struct TrainerMon sParty_PicnickerDiana[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_SEEL,
    },
};

static const struct TrainerMon sParty_PicnickerNancy[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_EEVEE,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_PIKACHU,
    },
};

static const struct TrainerMon sParty_PicnickerIsabelle[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_PIDGEY,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_SPEAROW,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_PIDGEY,
    },
};

static const struct TrainerMon sParty_PicnickerKelsey[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_WIGGLYTUFF,
    },
};

static const struct TrainerMon sParty_PicnickerAlicia[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_ODDISH,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_BELLSPROUT,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_TANGELA,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_PIDGEOTTO,
    },
};

static const struct TrainerMon sParty_PicnickerCaitlin[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_MEOWTH,
    },
};

static const struct TrainerMon sParty_PicnickerHeidi[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_WIGGLYTUFF,
    },
};

static const struct TrainerMon sParty_PicnickerCarol[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_FARFETCHD,
    },
};

static const struct TrainerMon sParty_PicnickerSofia[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_JIGGLYPUFF,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_MEOWTH,
    },
};

static const struct TrainerMon sParty_PicnickerMartha[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GLOOM,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_IVYSAUR,
    },
};

static const struct TrainerMon sParty_PicnickerTina[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_BULBASAUR,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_IVYSAUR,
    },
};

static const struct TrainerMon sParty_PicnickerHannah[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_PIDGEY,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_MEOWTH,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_PIKACHU,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_MEOWTH,
    },
};

static const struct TrainerMon sParty_PokemaniacMark[] = {
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 43,
        .species = SPECIES_MAGMAR,
    },
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 43,
        .species = SPECIES_LAPRAS,
    },
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 43,
        .species = SPECIES_JYNX,
    },
};

static const struct TrainerMon sParty_PokemaniacHerman[] = {
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 27,
        .species = SPECIES_KANGASKHAN,
    },
};

static const struct TrainerMon sParty_PokemaniacCooper[] = {
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 23,
        .species = SPECIES_SLOWPOKE,
    },
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 23,
        .species = SPECIES_LICKITUNG,
    },
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 23,
        .species = SPECIES_WYNAUT,
    },
};

static const struct TrainerMon sParty_PokemaniacSteve[] = {
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 26,
        .species = SPECIES_CHARMANDER,
    },
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 26,
        .species = SPECIES_CUBONE,
    },
};

static const struct TrainerMon sParty_PokemaniacWinston[] = {
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 25,
        .species = SPECIES_SLOWPOKE,
    },
};

static const struct TrainerMon sParty_PokemaniacDawson[] = {
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 52,
        .species = SPECIES_VENUSAUR,
    },
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 52,
        .species = SPECIES_LAPRAS,
    },
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 52,
        .species = SPECIES_LICKITUNG,
    },
};

static const struct TrainerMon sParty_PokemaniacAshton[] = {
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 25,
        .species = SPECIES_CUBONE,
    },
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 25,
        .species = SPECIES_SLOWPOKE,
    },
};

static const struct TrainerMon sParty_SuperNerdJovan[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_VOLTORB,
    },
};

static const struct TrainerMon sParty_SuperNerdMiguel[] = {
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_GRIMER,
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_VOLTORB,
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = SPECIES_MAGNEMITE,
    },
};

static const struct TrainerMon sParty_SuperNerdAidan[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE, MOVE_SPARK},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE, MOVE_SPARK},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_SONIC_BOOM, MOVE_SUPERSONIC, MOVE_SPARK, MOVE_TACKLE},
    },
};

static const struct TrainerMon sParty_SuperNerdGlenn[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_MAGBY,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_PORYGON,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_GRIMER,
    },
};

static const struct TrainerMon sParty_SuperNerdLeslie[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_SMOG, MOVE_SELF_DESTRUCT},
    },
};

static const struct TrainerMon sParty_SuperNerd1[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_KOFFING,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_WEEZING,
    },
};

static const struct TrainerMon sParty_SuperNerd2[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_KOFFING,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_MAGNEMITE,
    },
};

static const struct TrainerMon sParty_SuperNerd3[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_VOLTORB,
    },
};

static const struct TrainerMon sParty_SuperNerdErik[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_VULPIX,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_FLAREON,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_NINETALES,
    },
};

static const struct TrainerMon sParty_SuperNerdAvery[] = {
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_PONYTA,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_CHARMELEON,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_VULPIX,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_HOUNDOUR,
    },
};

static const struct TrainerMon sParty_SuperNerdDerek[] = {
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_RAPIDASH,
    },
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_MAGMAR,
    },
};

static const struct TrainerMon sParty_SuperNerdZac[] = {
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_ARCANINE,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_NINETALES,
    },
};

static const struct TrainerMon sParty_HikerMarcos[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_GEODUDE,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_GEODUDE,
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = SPECIES_ONIX,
    },
};

static const struct TrainerMon sParty_HikerFranklin[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_GEODUDE,
    },
};

static const struct TrainerMon sParty_HikerNob[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_GEODUDE,
    },
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_ZUBAT,
    },
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_SWINUB,
    },
};

static const struct TrainerMon sParty_HikerWayne[] = {
    {
        .iv = 0,
        .lvl = 18,
        .heldItem = ITEM_HARD_STONE,
        .species = SPECIES_ONIX,
    },
};

static const struct TrainerMon sParty_HikerAlan[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_SWINUB,
        .moves = {MOVE_MAGNITUDE, MOVE_POWDER_SNOW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_ONIX,
        .moves = {MOVE_HARDEN, MOVE_ROCK_THROW, MOVE_BIND, MOVE_SCREECH},
    },
};

static const struct TrainerMon sParty_HikerBrice[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_GEODUDE,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_GEODUDE,
    },
};

static const struct TrainerMon sParty_HikerClark[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_ZUBAT,
        .moves = {MOVE_SLUDGE, MOVE_WING_ATTACK, MOVE_CONFUSE_RAY, MOVE_ASTONISH},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_ONIX,
        .moves = {MOVE_HARDEN, MOVE_ROCK_THROW, MOVE_BIND, MOVE_SCREECH},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_SLUDGE, MOVE_WING_ATTACK, MOVE_CONFUSE_RAY, MOVE_ASTONISH},
    },
};

static const struct TrainerMon sParty_HikerTrent[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_RHYHORN,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_DUGTRIO,
    },
};

static const struct TrainerMon sParty_HikerDudley[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_SELF_DESTRUCT , MOVE_DEFENSE_CURL},
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_SELF_DESTRUCT, MOVE_DEFENSE_CURL},
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_SELF_DESTRUCT, MOVE_DEFENSE_CURL},
    },
};

static const struct TrainerMon sParty_HikerAllen[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_SELF_DESTRUCT, MOVE_DEFENSE_CURL},
    },
};

static const struct TrainerMon sParty_HikerEric[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_ONIX,
    },
};

static const struct TrainerMon sParty_HikerLenny[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_MACHOKE,
    },
};

static const struct TrainerMon sParty_HikerOliver[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_ONIX,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_ONIX,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_ONIX,
    },
};

static const struct TrainerMon sParty_HikerLucas[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_GRAVELER,
        .moves = {MOVE_MAGNITUDE, MOVE_ROCK_THROW, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
    },
};

static const struct TrainerMon sParty_BikerJared[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_SHELLDER,
        .moves = {MOVE_ICY_WIND, MOVE_BUBBLE_BEAM, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_AMNESIA, MOVE_SELF_DESTRUCT},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_NONE, MOVE_BUBBLE_BEAM, MOVE_ICICLE_SPEAR, MOVE_NONE},
    },
};

static const struct TrainerMon sParty_BikerMalik[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_SANDSLASH,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_DIG, MOVE_METAL_CLAW, MOVE_CUT, MOVE_SANDSTORM},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_MACHOKE,
        .moves = {MOVE_SUBMISSION, MOVE_VITAL_THROW, MOVE_FORESIGHT, MOVE_NONE},
    },
};

static const struct TrainerMon sParty_BikerErnest[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_DIG, MOVE_METAL_CLAW, MOVE_CUT, MOVE_SANDSTORM},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_POUND},
    },
};

static const struct TrainerMon sParty_BikerAlex[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_SNEASEL,
        .moves = {MOVE_ICE_PUNCH, MOVE_FAINT_ATTACK, MOVE_BRICK_BREAK, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
};

static const struct TrainerMon sParty_BikerLao[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_BRICK_BREAK, MOVE_POISON_STING, MOVE_SWORDS_DANCE, MOVE_TWINEEDLE},
    },
};

static const struct TrainerMon sParty_Biker1[] = {DUMMY_TRAINER_MON};

static const struct TrainerMon sParty_BikerHideo[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_WEEZING,
    },
};

static const struct TrainerMon sParty_BikerRuben[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_CHARMELEON,
        .moves = {MOVE_SMOKESCREEN, MOVE_FIRE_PUNCH, MOVE_BRICK_BREAK, MOVE_CUT},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_RHYHORN,
        .moves = {MOVE_ROCK_BLAST, MOVE_MAGNITUDE, MOVE_NONE, MOVE_NONE},
    },
};

static const struct TrainerMon sParty_BikerBilly[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_MUK,
    },
};

static const struct TrainerMon sParty_BikerNikolas[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_CHARGE},
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_SPARK, MOVE_SONIC_BOOM, MOVE_METAL_SOUND, MOVE_CHARGE},
    },
};

static const struct TrainerMon sParty_BikerJaxon[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE, MOVE_SMOKESCREEN, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_MUK,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_AMNESIA},
    },
};

static const struct TrainerMon sParty_BikerWilliam[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_SANDSLASH,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_KOFFING,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_WEEZING,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_HOUNDOOM,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_KINGLER,
    },
};

static const struct TrainerMon sParty_BikerLukas[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_BEEDRILL,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_RAGE, MOVE_TWINEEDLE, MOVE_POISON_STING},
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_AMNESIA},
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_HITMONTOP,
        .moves = {MOVE_NONE, MOVE_DETECT, MOVE_MACH_PUNCH, MOVE_ROLLING_KICK},
    },
};

static const struct TrainerMon sParty_BikerIsaac[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_HITMONCHAN,
        .moves = {MOVE_BRICK_BREAK, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH},
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
};

static const struct TrainerMon sParty_BikerGerald[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_HITMONLEE,
        .moves = {MOVE_JUMP_KICK, MOVE_NONE, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_MUK,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE},
    },
};

static const struct TrainerMon sParty_Burglar1[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_VULPIX,
    },
};

static const struct TrainerMon sParty_Burglar2[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_GROWLITHE,
    },
};

static const struct TrainerMon sParty_Burglar3[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_VULPIX,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_CHARMANDER,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_PONYTA,
    },
};

static const struct TrainerMon sParty_BurglarQuinn[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_CHARMELEON,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_HOUNDOOM
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_NINETALES,
    },
};

static const struct TrainerMon sParty_BurglarRamon[] = {
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_RAPIDASH,
    },
};

static const struct TrainerMon sParty_BurglarDusty[] = {
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_MAGBY,
    },
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_FLAREON,
    },
};

static const struct TrainerMon sParty_BurglarArnie[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_CHARIZARD,
    },
};

static const struct TrainerMon sParty_Burglar4[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_CHARMANDER,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_CHARMELEON,
    },
};

static const struct TrainerMon sParty_BurglarSimon[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_NINETALES,
    },
};

static const struct TrainerMon sParty_BurglarLewis[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_MACHOKE,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_MAGCARGO,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_HOUNDOOM,
    },
};

static const struct TrainerMon sParty_EngineerBaily[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_VOLTORB,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_MAGNEMITE,
    },
};

static const struct TrainerMon sParty_EngineerBraxton[] = {
    {
        .iv = 0,
        .lvl = 21,
        .heldItem = ITEM_MAGNET,
        .species = SPECIES_MAGNEMITE,
    },
};

static const struct TrainerMon sParty_EngineerBernie[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_MACHOP,
    },
};

static const struct TrainerMon sParty_FishermanDale[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_GOLDEEN,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_GOLDEEN,
    },
};

static const struct TrainerMon sParty_FishermanBarny[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_STARYU,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_SHELLDER,
    },
};

static const struct TrainerMon sParty_FishermanNed[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_GOLDEEN,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_POLIWAG,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_GOLDEEN,
    },
};

static const struct TrainerMon sParty_FishermanChip[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_GOLDEEN,
    },
};

static const struct TrainerMon sParty_FishermanHank[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_GOLDEEN,
    },
};

static const struct TrainerMon sParty_FishermanElliot[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_POLIWAG,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_SHELLDER,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GOLDEEN,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_HORSEA,
    },
};

static const struct TrainerMon sParty_FishermanRonald[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_SLOWPOKE,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_SEAKING,
    },
};

static const struct TrainerMon sParty_FishermanClaude[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_SHELLDER,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_CLOYSTER,
    },
};

static const struct TrainerMon sParty_FishermanWade[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_GYARADOS,
    },
};

static const struct TrainerMon sParty_FishermanNolan[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_TENTACRUEL,
    },
};

static const struct TrainerMon sParty_FishermanAndrew[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_GYARADOS,
    },
};

static const struct TrainerMon sParty_SwimmerMaleLuis[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_HORSEA,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_SHELLDER,
    },
};

static const struct TrainerMon sParty_SwimmerMaleRichard[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_TENTACRUEL,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_CLOYSTER,
    },
};

static const struct TrainerMon sParty_SwimmerMaleReece[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_STARMIE,
    },
};

static const struct TrainerMon sParty_SwimmerMaleMatthew[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_POLITOED,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_POLIWRATH,
    },
};

static const struct TrainerMon sParty_SwimmerMaleDouglas[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_POLIWRATH,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_CLOYSTER,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_TENTACRUEL,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_SEAKING,
    },
};

static const struct TrainerMon sParty_SwimmerMaleDavid[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_STARMIE,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_TENTACRUEL,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_SEAKING,
    },
};

static const struct TrainerMon sParty_SwimmerMaleTony[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_KINGDRA,
    },
};

static const struct TrainerMon sParty_SwimmerMaleAxle[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_TENTACRUEL,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_SLOWBRO,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_STARMIE,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_TENTACRUEL,
    },
};

static const struct TrainerMon sParty_SwimmerMaleBarry[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_SLOWKING,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_KINGLER,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_CLOYSTER,
    },
};

static const struct TrainerMon sParty_SwimmerMaleDean[] = {
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_GYARADOS,
    },
};

static const struct TrainerMon sParty_SwimmerMaleDarrin[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_KINGDRA,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_DRATINI,
    },
};

static const struct TrainerMon sParty_SwimmerMaleSpencer[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_TENTACRUEL,
    },
};

static const struct TrainerMon sParty_SwimmerMaleJack[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_STARMIE,
    },
};

static const struct TrainerMon sParty_SwimmerMaleJerome[] = {
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_STARMIE,
    },
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_BLASTOISE,
    },
};

static const struct TrainerMon sParty_SwimmerMaleRoland[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_POLIWRATH,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_TENTACRUEL,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_SEADRA,
    },
};

static const struct TrainerMon sParty_CueBallKoji[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_WIGGLYTUFF,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_MACHOP,
    },
};

static const struct TrainerMon sParty_CueBallLuke[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_MANKEY,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_MACHOP,
    },
};

static const struct TrainerMon sParty_CueBallCamron[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_MANKEY,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_MACHOKE,
    },
};

static const struct TrainerMon sParty_CueBallRaul[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_WIGGLYTUFF,
    },
};

static const struct TrainerMon sParty_CueBallIsaiah[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_MACHOKE,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_CLEFABLE,
    },
};

static const struct TrainerMon sParty_CueBallZeek[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_MACHOKE,
    },
};

static const struct TrainerMon sParty_CueBallJamal[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_MANKEY,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_CLEFABLE,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_SNEASEL,
    },
};

static const struct TrainerMon sParty_CueBallCorey[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_MURKROW,
    },
};

static const struct TrainerMon sParty_CueBallChase[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_TENTACOOL,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_TENTACRUEL,
    },
};

static const struct TrainerMon sParty_GamerHugo[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_POLIWAG,
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_HORSEA,
    },
};

static const struct TrainerMon sParty_GamerJasper[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_BELLSPROUT,
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_ODDISH,
    },
};

static const struct TrainerMon sParty_GamerDirk[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_DROWZEE,
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_KADABRA,
    },
};

static const struct TrainerMon sParty_GamerDarian[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_VULPIX,
    },
};

static const struct TrainerMon sParty_GamerStan[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_POLIWAG,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_POLIWAG,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_POLIWHIRL,
    },
};

static const struct TrainerMon sParty_Gamer1[] = {DUMMY_TRAINER_MON};

static const struct TrainerMon sParty_GamerRich[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_VULPIX,
    },
};

static const struct TrainerMon sParty_BeautyBridget[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_TANGELA,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_WEEPINBELL,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_EXEGGCUTE,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_IVYSAUR,
    },
};

static const struct TrainerMon sParty_BeautyTamia[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_TANGELA,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_IVYSAUR,
    },
};

static const struct TrainerMon sParty_BeautyLori[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_VICTREEBEL,
    },
};

static const struct TrainerMon sParty_BeautyLola[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_RAICHU,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_NINETALES,
    },
};

static const struct TrainerMon sParty_BeautySheila[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_CLEFABLE,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_PERSIAN,
    },
};

static const struct TrainerMon sParty_SwimmerFemaleTiffany[] = {
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_SEAKING,
    },
};

static const struct TrainerMon sParty_SwimmerFemaleNora[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_KINGLER,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_POLITOED,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_CLOYSTER,
    },
};

static const struct TrainerMon sParty_SwimmerFemaleMelissa[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_POLIWRATH,
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = SPECIES_DEWGONG,
    },
};

static const struct TrainerMon sParty_BeautyGrace[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_GOLDUCK,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_WIGGLYTUFF,
    },
};

static const struct TrainerMon sParty_BeautyOlivia[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_IVYSAUR,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_TANGELA,
    },
};

static const struct TrainerMon sParty_BeautyLauren[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_WEEPINBELL,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_BELLSPROUT,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_WEEPINBELL,
    },
};

static const struct TrainerMon sParty_SwimmerFemaleAnya[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_GOLDUCK,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_DEWGONG,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_SLOWKING,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_POLIWRATH,
    },
};

static const struct TrainerMon sParty_SwimmerFemaleAlice[] = {
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_LAPRAS,
    },
};

static const struct TrainerMon sParty_SwimmerFemaleConnie[] = {
    {
        .iv = 0,
        .lvl = 43,
        .heldItem = ITEM_DRAGON_FANG,
        .species = SPECIES_DRAGONAIR,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_SEADRA,
    },
};

static const struct TrainerMon sParty_SwimmerFemaleShirley[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_BLASTOISE,
    },
    {
        .iv = 0,
        .lvl = 43,
        .heldItem = ITEM_NEVER_MELT_ICE,
        .species = SPECIES_DEWGONG,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_SLOWBRO,
    },
};

static const struct TrainerMon sParty_PsychicJohan[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 42,
        .heldItem = ITEM_TWISTED_SPOON,
        .species = SPECIES_KADABRA,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 42,
        .heldItem = ITEM_TWISTED_SPOON,
        .species = SPECIES_SLOWBRO,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 42,
        .heldItem = ITEM_TWISTED_SPOON,
        .species = SPECIES_HYPNO,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 42,
        .heldItem = ITEM_TWISTED_SPOON,
        .species = SPECIES_ESPEON,
    },
};

static const struct TrainerMon sParty_PsychicTyron[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 43,
        .species = SPECIES_MR_MIME,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 43,
        .species = SPECIES_KADABRA,
    },
};

static const struct TrainerMon sParty_PsychicCameron[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 41,
        .species = SPECIES_VENOMOTH,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 41,
        .species = SPECIES_JYNX,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 41,
        .species = SPECIES_SLOWBRO,
    },
};

static const struct TrainerMon sParty_PsychicPreston[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 45,
        .species = SPECIES_SLOWKING,
    },
};

static const struct TrainerMon sParty_RockerRandall[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_VOLTORB,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_MAGNEMITE,
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = SPECIES_VOLTORB,
    },
};

static const struct TrainerMon sParty_RockerLuca[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_VOLTORB,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_ELECTRODE,
    },
};

static const struct TrainerMon sParty_JugglerDalton[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_KADABRA,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_MR_MIME,
    },
};

static const struct TrainerMon sParty_JugglerNelson[] = {
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_OMASTAR,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_MR_MIME,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_RAICHU,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_ALAKAZAM,
    },
};

static const struct TrainerMon sParty_JugglerKirk[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_BEEDRILL,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_NIDOKING,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_GOLBAT,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_HAUNTER,
    },
};

static const struct TrainerMon sParty_JugglerShawn[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_TENTACRUEL,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_MUK,
    },
};

static const struct TrainerMon sParty_JugglerGregory[] = {
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_PSYCHIC, MOVE_ROLE_PLAY, MOVE_MAGICAL_LEAF, MOVE_ENCORE},
    },
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_FLAREON,
        .moves = {MOVE_FIRE_BLAST, MOVE_SHADOW_BALL, MOVE_FLAMETHROWER, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_JOLTEON,
        .moves = {MOVE_THUNDERBOLT, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE, MOVE_NONE},
    },
};

static const struct TrainerMon sParty_JugglerEdward[] = {
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_DELIBIRD,
        .moves = {MOVE_ICE_BEAM, MOVE_DRILL_PECK, MOVE_EGG_BOMB, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_QWILFISH,
        .moves = {MOVE_SURF, MOVE_SLUDGE_BOMB, MOVE_EXPLOSION, MOVE_TOXIC},
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDER_WAVE, MOVE_THUNDERBOLT, MOVE_SELF_DESTRUCT, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_MR_MIME,
        .moves = {MOVE_PSYCHIC, MOVE_ROLE_PLAY, MOVE_REFLECT, MOVE_ENCORE},
    },
};

static const struct TrainerMon sParty_JugglerKayden[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_HYPNO,
    },
};

static const struct TrainerMon sParty_JugglerNate[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_VENOMOTH,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_GOLBAT,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_NIDOQUEEN,
    },
};

static const struct TrainerMon sParty_TamerPhil[] = {
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 36,
        .species = SPECIES_SANDSLASH,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 36,
        .species = SPECIES_ARBOK,
    },
};

static const struct TrainerMon sParty_TamerEdgar[] = {
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 35,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 35,
        .species = SPECIES_NIDOQUEEN,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 35,
        .species = SPECIES_ARBOK,
    },
};

static const struct TrainerMon sParty_TamerJason[] = {
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 55,
        .species = SPECIES_RHYDON,
    },
};

static const struct TrainerMon sParty_TamerCole[] = {
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 53,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 53,
        .species = SPECIES_TAUROS,
    },
};

static const struct TrainerMon sParty_TamerVincent[] = {
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 53,
        .species = SPECIES_PERSIAN,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 53,
        .species = SPECIES_SANDSLASH,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 53,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 53,
        .species = SPECIES_TANGELA,
    },
};

static const struct TrainerMon sParty_TamerJohn[] = {
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 42,
        .species = SPECIES_RHYHORN,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 42,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 42,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 42,
        .species = SPECIES_TAUROS,
    },
};

static const struct TrainerMon sParty_BirdKeeperSebastian[] = {
    {
        .iv = 0,
        .lvl = 32,
        .heldItem = ITEM_SHARP_BEAK,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_PIDGEOTTO,
    },
};

static const struct TrainerMon sParty_BirdKeeperPerry[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_DODUO,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_MURKROW,
    },
};

static const struct TrainerMon sParty_BirdKeeperRobert[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_FEAROW,
    },
};

static const struct TrainerMon sParty_BirdKeeperDonald[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_FARFETCHD,
    },
};

static const struct TrainerMon sParty_BirdKeeperBenny[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_FEAROW,
    },
};

static const struct TrainerMon sParty_BirdKeeperEdwin[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_FARFETCHD,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_DODUO,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_MURKROW,
    },
};

static const struct TrainerMon sParty_BirdKeeperChester[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_DODRIO,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_MURKROW,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_GOLBAT,
    },
};

static const struct TrainerMon sParty_BirdKeeperWilton[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_FEAROW,
    },
};

static const struct TrainerMon sParty_BirdKeeperRamiro[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_DODRIO,
    },
};

static const struct TrainerMon sParty_BirdKeeperJacob[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_FARFETCHD,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_DODUO,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_MURKROW,
    },
};

static const struct TrainerMon sParty_BirdKeeperRoger[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_PIDGEOT,
    },
};

static const struct TrainerMon sParty_BirdKeeperReed[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_PIDGEY,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_PIDGEOTTO,
    },
};

static const struct TrainerMon sParty_BirdKeeperKeith[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_FARFETCHD,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_FEAROW,
    },
};

static const struct TrainerMon sParty_BirdKeeperCarter[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_PIDGEY,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_DODUO,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_PIDGEOTTO,
    },
};

static const struct TrainerMon sParty_BirdKeeperMitch[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_FARFETCHD,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_SPEAROW,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_PIDGEY,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_FEAROW,
    },
};

static const struct TrainerMon sParty_BirdKeeperBeck[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_FEAROW,
    },
};

static const struct TrainerMon sParty_BirdKeeperMarlon[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_DODUO,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_FEAROW,
    },
};

static const struct TrainerMon sParty_BlackBeltKoichi[] = {
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 30,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
        .moves = {MOVE_REVENGE, MOVE_BRICK_BREAK, MOVE_FORESIGHT, MOVE_STRENGTH},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 29,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
        .moves = {MOVE_NONE, MOVE_JUMP_KICK, MOVE_MEGA_KICK, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 29,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
        .moves = {MOVE_MACH_PUNCH, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 29,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_BLACK_BELT,
        .moves = {MOVE_FAKE_OUT, MOVE_ROLLING_KICK, MOVE_ROCK_SLIDE, MOVE_STRENGTH},
    },
};

static const struct TrainerMon sParty_BlackBeltMike[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 27,
        .species = SPECIES_TYROGUE,
        .heldItem = ITEM_BLACK_BELT,
        .moves = {MOVE_TACKLE, MOVE_BRICK_BREAK, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 27,
        .species = SPECIES_MANKEY,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 27,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_BlackBeltHideki[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 27,
        .species = SPECIES_MACHOP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 27,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_BlackBeltAaron[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 29,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_BlackBeltHitoshi[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 26,
        .species = SPECIES_MACHOP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 26,
        .species = SPECIES_MANKEY,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 28,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_BlackBeltAtsushi[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_POLIWRATH,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_BlackBeltKiyo[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_BlackBeltTakashi[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 51,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
        .moves = {MOVE_HI_JUMP_KICK, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_MEGA_KICK},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 51,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
        .moves = {MOVE_SKY_UPPERCUT, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH, MOVE_THUNDER_PUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 51,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_BLACK_BELT,
        .moves = {MOVE_FAKE_OUT, MOVE_TRIPLE_KICK, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 52,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_ROCK_SLIDE},
        .ev = TRAINER_PARTY_EVS(252, 128, 0, 0, 0, 0),
    },
};

static const struct TrainerMon sParty_BlackBeltDaisuke[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_RivalOaksLabSquirtle[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_MUDKIP,
    },
};

static const struct TrainerMon sParty_RivalOaksLabBulbasaur[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_TREECKO,
    },
};

static const struct TrainerMon sParty_RivalOaksLabCharmander[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_TORCHIC,
    },
};

static const struct TrainerMon sParty_RivalRoute22EarlySquirtle[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 9,
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_TACKLE, MOVE_SAND_ATTACK, MOVE_GUST, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 9,
        .species = SPECIES_MUDKIP,
    },
};

static const struct TrainerMon sParty_RivalRoute22EarlyBulbasaur[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 9,
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_TACKLE, MOVE_SAND_ATTACK, MOVE_GUST, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 9,
        .species = SPECIES_TREECKO,
    },
};

static const struct TrainerMon sParty_RivalRoute22EarlyCharmander[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 9,
        .species = SPECIES_PIDGEY,
        .moves = {MOVE_TACKLE, MOVE_SAND_ATTACK, MOVE_GUST, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 9,
        .species = SPECIES_TORCHIC
    },
};

static const struct TrainerMon sParty_RivalCeruleanSquirtle[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 17,
        .species = SPECIES_PIDGEOTTO,
        .moves = {MOVE_SWIFT, MOVE_SAND_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK},
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 15,
        .species = SPECIES_BELLSPROUT,
        .moves = {MOVE_GROWTH, MOVE_VINE_WHIP, MOVE_POISON_POWDER, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 15,
        .species = SPECIES_RATTATA,
        .moves = {MOVE_BITE, MOVE_QUICK_ATTACK, MOVE_HYPER_FANG, MOVE_TAIL_WHIP},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 18,
        .species = SPECIES_MARSHTOMP,
        .moves = {MOVE_MUD_SHOT, MOVE_WATER_GUN, MOVE_TACKLE, MOVE_BIDE},
    },
};

static const struct TrainerMon sParty_RivalCeruleanBulbasaur[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 17,
        .species = SPECIES_PIDGEOTTO,
        .moves = {MOVE_SWIFT, MOVE_SAND_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK},
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 15,
        .species = SPECIES_GEODUDE,
        .moves = {MOVE_ROCK_THROW, MOVE_MUD_SLAP, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 15,
        .species = SPECIES_RATTATA,
        .moves = {MOVE_BITE, MOVE_QUICK_ATTACK, MOVE_HYPER_FANG, MOVE_TAIL_WHIP},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 18,
        .species = SPECIES_GROVYLE,
        .moves = {MOVE_RAZOR_LEAF, MOVE_ASTONISH, MOVE_QUICK_ATTACK, MOVE_ABSORB},
    },
};

static const struct TrainerMon sParty_RivalCeruleanCharmander[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 17,
        .species = SPECIES_PIDGEOTTO,
        .moves = {MOVE_SWIFT, MOVE_SAND_ATTACK, MOVE_GUST, MOVE_QUICK_ATTACK},
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 15,
        .species = SPECIES_BELLSPROUT,
        .moves = {MOVE_GROWTH, MOVE_VINE_WHIP, MOVE_POISON_POWDER, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 15,
        .species = SPECIES_RATTATA,
        .moves = {MOVE_BITE, MOVE_QUICK_ATTACK, MOVE_HYPER_FANG, MOVE_TAIL_WHIP},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 18,
        .species = SPECIES_COMBUSKEN,
        .moves = {MOVE_DOUBLE_KICK, MOVE_EMBER, MOVE_PECK, MOVE_SCRATCH},
    },
};

static const struct TrainerMon sParty_ScientistTed[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_WEEZING,
    },
};

static const struct TrainerMon sParty_ScientistConnor[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_MUK,
        .moves = {MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE_BOMB, MOVE_DISABLE},
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE_BOMB, MOVE_AMNESIA, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_PORYGON,
        .moves = {MOVE_TRI_ATTACK, MOVE_PSYCHIC, MOVE_RECOVER, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE_BOMB, MOVE_NONE, MOVE_NONE},
    },
};

static const struct TrainerMon sParty_ScientistJerry[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_MAGNETON,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 38,
        .species = SPECIES_DITTO,
        .ev = TRAINER_PARTY_EVS(255, 0, 0, 0, 0, 0)
    },
};

static const struct TrainerMon sParty_ScientistJose[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SCREECH, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE_BOMB, MOVE_NONE, MOVE_AMNESIA},
    },
};

static const struct TrainerMon sParty_ScientistRodney[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_ELECTABUZZ,
    },
};

static const struct TrainerMon sParty_ScientistBeau[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC},
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_PSYCHIC, MOVE_TRI_ATTACK, MOVE_THUNDER_WAVE, MOVE_RECOVER},
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE_BOMB, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_MAGNEMITE,
        .moves = {MOVE_SPARK, MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC},
    },
};

static const struct TrainerMon sParty_ScientistTaylor[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_THUNDERBOLT, MOVE_SONIC_BOOM, MOVE_SCREECH, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE_BOMB, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_STARYU,
        .moves = {MOVE_CONFUSION, MOVE_BUBBLE_BEAM, MOVE_RECOVER, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDER_WAVE, MOVE_SONIC_BOOM, MOVE_SUPERSONIC, MOVE_THUNDERBOLT},
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_STARMIE,
        .moves = {MOVE_CONFUSION, MOVE_BUBBLE_BEAM, MOVE_RECOVER, MOVE_NONE},
    },
};

static const struct TrainerMon sParty_ScientistJoshua[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_MUK,
    },
};

static const struct TrainerMon sParty_ScientistParker[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_PORYGON2,
    },
};

static const struct TrainerMon sParty_ScientistEd[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_MUK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_ACID_ARMOR, MOVE_MINIMIZE, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_KABUTOPS,
        .moves = {MOVE_ROCK_SLIDE, MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_CUT},
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_NONE, MOVE_NONE},
    },
};

static const struct TrainerMon sParty_ScientistTravis[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_WEEZING,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_OMASTAR,
    },
};

static const struct TrainerMon sParty_ScientistBraydon[] = {
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_MAGNETON,
    },
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_ARCANINE,
    },
    {
        .iv = 0,
        .lvl = 45,
        .species = SPECIES_MUK,
    },
};

static const struct TrainerMon sParty_ScientistIvan[] = {
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_PORYGON2,
    },
    {
        .iv = 0,
        .lvl = 46,
        .species = SPECIES_ELECTRODE,
    },
};

static const struct TrainerMon sParty_BossGiovanni[] = {
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 29,
        .species = SPECIES_ONIX,
        .moves = {MOVE_DIG, MOVE_ROCK_TOMB, MOVE_SCREECH, MOVE_ROCK_SMASH},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 31,
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_SLASH, MOVE_CUT, MOVE_WATER_PULSE, MOVE_THUNDERBOLT},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 30,
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_CUT, MOVE_ROCK_SMASH, MOVE_TAKE_DOWN},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 31,
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_FAKE_OUT, MOVE_BITE, MOVE_ROCK_SMASH, MOVE_MEGA_PUNCH},
    },
};

static const struct TrainerMon sParty_BossGiovanni2[] = {
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 44,
        .species = SPECIES_KINGLER,
        .moves = {MOVE_CUT, MOVE_CRABHAMMER, MOVE_BRICK_BREAK, MOVE_METAL_CLAW},

    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 44,
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_CUT, MOVE_FAINT_ATTACK, MOVE_DOUBLE_EDGE, MOVE_WATER_PULSE},
        .abilityNum = 1,

    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 45,
        .species = SPECIES_MACHOKE,
        .moves = {MOVE_ROCK_SLIDE, MOVE_REVENGE, MOVE_BULK_UP, MOVE_BODY_SLAM},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 44,
        .species = SPECIES_STEELIX,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_ROCK_SLIDE, MOVE_CRUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 47,
        .heldItem = ITEM_SHELL_BELL,
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_FAKE_OUT, MOVE_BRICK_BREAK, MOVE_CRUNCH},
    },
};

static const struct TrainerMon sParty_LeaderGiovanni[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 53,
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_ROCK_SLIDE, MOVE_FISSURE, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 53,
        .species = SPECIES_STEELIX,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_BODY_SLAM, MOVE_ROCK_SLIDE, MOVE_IRON_TAIL, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 55,
        .species = SPECIES_KANGASKHAN,
        .heldItem = ITEM_SHELL_BELL,
        .moves = {MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_SUBMISSION, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 54,
        .species = SPECIES_NIDOQUEEN,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_BODY_SLAM, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 54,
        .species = SPECIES_NIDOKING,
        .heldItem = ITEM_SCOPE_LENS,
        .moves = {MOVE_THUNDER, MOVE_BLIZZARD, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 55,
        .species = SPECIES_RHYDON,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_MEGAHORN, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE},
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt[] = {
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 15,
        .species = SPECIES_KOFFING,
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 15,
        .species = SPECIES_EKANS,
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 17,
        .species = SPECIES_MEOWTH,
        .abilityNum = 1,
        .moves = {MOVE_FURY_SWIPES, MOVE_BITE, MOVE_NONE, MOVE_NONE},
    },
}; //New Admin 1

static const struct TrainerMon sParty_TeamRocketGrunt2[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_SANDSHREW,
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = SPECIES_ZUBAT,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt3[] = {
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_ZUBAT,
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = SPECIES_EKANS,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt4[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 14,
        .species = SPECIES_ZUBAT,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt5[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_DROWZEE,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt6[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_EKANS,
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = SPECIES_ZUBAT,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt7[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_GOLBAT,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt8[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_DROWZEE,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_MACHOP,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt9[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_EKANS,
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_RATICATE,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt10[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_HARDEN},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE, MOVE_TACKLE, MOVE_POISON_GAS, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_MURKROW,
        .moves = {MOVE_AERIAL_ACE, MOVE_PURSUIT, MOVE_NONE, MOVE_NONE},
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt11[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_DROWZEE,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_HOUNDOUR,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_SANDSHREW,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_RATICATE,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt12[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_HARDEN},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_ARBOK,
        .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS},
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt13[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_BITE, MOVE_SLUDGE, MOVE_WING_ATTACK, MOVE_LEECH_LIFE},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE, MOVE_TACKLE, MOVE_POISON_GAS, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_SLUDGE, MOVE_DISABLE, MOVE_HARDEN, MOVE_POUND},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_RATICATE,
        .moves = {MOVE_HYPER_FANG, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP, MOVE_TACKLE},
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt14[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_EKANS,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_DROWZEE,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt15[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_MACHOKE,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_ARBOK,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt16[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_GOLBAT,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_EKANS,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_SANDSLASH,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt17[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_RHYHORN,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_SANDSHREW,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_ARBOK,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt18[] = {
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 29,
        .species = SPECIES_VOLTORB,
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 30,
        .species = SPECIES_GOLBAT,
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 30,
        .species = SPECIES_KOFFING,
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 31,
        .species = SPECIES_POLIWRATH,
        .moves = {MOVE_WATERFALL, MOVE_BRICK_BREAK, MOVE_ICE_PUNCH, MOVE_HYPNOSIS},
    },
};//New Admin 2

static const struct TrainerMon sParty_TeamRocketGrunt19[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_ZUBAT,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_HOUNDOOM,
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = SPECIES_GOLBAT,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt20[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_KOFFING,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_HYPNO,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt21[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_WEEZING
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_HOUNDOOM,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_GOLBAT,
    },
};//New Admin 3

static const struct TrainerMon sParty_TeamRocketGrunt22[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_MURKROW,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_MAROWAK,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_HYPNO,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_GENGAR,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt23[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_MAROWAK,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_GOLBAT,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt24[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_GOLBAT,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_HOUNDOOM,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_PINSIR,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_MURKROW,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt25[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_HYPNO,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_MUK,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt26[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_MACHOKE,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_HYPNO,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt27[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_VILEPLUME,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_MAROWAK,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt28[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_TAUROS,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_SNEASEL,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt29[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_HYPNO,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt30[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_MUK,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_SCIZOR,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt31[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_GOLBAT,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_VILEPLUME,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_HOUNDOOM,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt32[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_RATICATE,
        .moves = {MOVE_FACADE, MOVE_HYPER_FANG, MOVE_QUICK_ATTACK, MOVE_TAIL_WHIP},
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_ARBOK,
        .moves = {MOVE_GLARE, MOVE_BITE, MOVE_SLUDGE_BOMB, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE_BOMB, MOVE_SELF_DESTRUCT, MOVE_AMNESIA},
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_FAINT_ATTACK, MOVE_FLAMETHROWER, MOVE_NONE, MOVE_NONE},
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt33[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_MAROWAK,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_MAGMAR,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt34[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_SANDSLASH,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_SCYTHER,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt35[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_TENTACRUEL,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_HOUNDOOM,
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = SPECIES_GOLBAT,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt36[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_VICTREEBEL,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_GOLBAT,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_WEEZING,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt37[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_MURKROW,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_MUK,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_MACHOKE,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt38[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_GOLBAT,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_RHYHORN,
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_HYPNO,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt39[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_MACHOKE,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt40[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_EXEGGUTOR,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_GOLBAT,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_SNEASEL,
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = SPECIES_ARBOK,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt41[] = {
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 43,
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_CRUNCH, MOVE_NONE, MOVE_NONE, MOVE_FLAMETHROWER},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 44,
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_HYPNOSIS, MOVE_FIRE_PUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 44,
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_ROCK_TOMB, MOVE_NONE, MOVE_NONE, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 45,
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_NONE, MOVE_TWINEEDLE, MOVE_METAL_CLAW, MOVE_ROCK_SMASH},
    },
}; //NEW ADMIN

static const struct TrainerMon sParty_CooltrainerSamuel[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 49,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_SLASH, MOVE_NONE, MOVE_NONE, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 49,
        .species = SPECIES_DUGTRIO,
        .moves = {MOVE_SLASH, MOVE_NONE, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 49,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_LEAF_BLADE, MOVE_SLUDGE_BOMB, MOVE_STUN_SPORE, MOVE_GROWTH},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 49,
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_SLUDGE_BOMB, MOVE_DOUBLE_KICK},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 49,
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_THRASH, MOVE_DOUBLE_KICK, MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE},
    },
};

static const struct TrainerMon sParty_CooltrainerGeorge[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_EGG_BOMB, MOVE_PSYCHIC, MOVE_LEECH_SEED, MOVE_SLEEP_POWDER},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_SWORDS_DANCE, MOVE_CUT, MOVE_METAL_CLAW, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_SPIKE_CANNON, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_EXPLOSION},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDERBOLT, MOVE_EXPLOSION, MOVE_VOLT_TACKLE, MOVE_LIGHT_SCREEN},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLAMETHROWER, MOVE_EXTREME_SPEED, MOVE_BITE, MOVE_TOXIC},
    },
};

static const struct TrainerMon sParty_CooltrainerColby[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_POLITOED,
        .moves = {MOVE_BODY_SLAM, MOVE_RAIN_DANCE, MOVE_HYDRO_PUMP, MOVE_HYPNOSIS},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 51,
        .species = SPECIES_KINGLER,
        .moves = {MOVE_CUT, MOVE_ICE_BEAM, MOVE_MUD_SHOT, MOVE_CRABHAMMER},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_TENTACRUEL,
        .moves = {MOVE_BARRIER, MOVE_GIGA_DRAIN, MOVE_SURF, MOVE_SLUDGE_BOMB},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_SURF, MOVE_RAIN_DANCE, MOVE_DRAGON_BREATH, MOVE_ICE_BEAM},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 53,
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_HYDRO_PUMP, MOVE_RAIN_DANCE, MOVE_ICE_BEAM, MOVE_EARTHQUAKE},
    },
};

static const struct TrainerMon sParty_CooltrainerPaul[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_SLOWKING,
        .moves = {MOVE_RAIN_DANCE, MOVE_PSYCHIC, MOVE_SURF, MOVE_SLACK_OFF},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_SPIKE_CANNON, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_EXPLOSION},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_SEAKING,
        .moves = {MOVE_MEGAHORN, MOVE_SURF, MOVE_DRILL_PECK, MOVE_SWORDS_DANCE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SURF, MOVE_THUNDERBOLT, MOVE_RECOVER, MOVE_PSYCHIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_GOLDUCK,
        .moves = {MOVE_PSYCHIC, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_CALM_MIND},
    },
};

static const struct TrainerMon sParty_CooltrainerRolando[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_RATICATE,
        .moves = {MOVE_SUPER_FANG, MOVE_PURSUIT, MOVE_FACADE, MOVE_QUICK_ATTACK},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_VENUSAUR,
        .moves = {MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_SLUDGE_BOMB, MOVE_SYNTHESIS},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_BLASTOISE,
        .moves = {MOVE_SURF, MOVE_BITE, MOVE_EARTHQUAKE, MOVE_ICE_BEAM},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_SKY_ATTACK, MOVE_EXTREME_SPEED, MOVE_FEATHER_DANCE, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_CHARIZARD,
        .moves = {MOVE_FLAMETHROWER, MOVE_WING_ATTACK, MOVE_OUTRAGE, MOVE_EARTHQUAKE},
    },
};

static const struct TrainerMon sParty_CooltrainerGilbert[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_PERSIAN,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_LICKITUNG,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_TAUROS,
    },
};

static const struct TrainerMon sParty_CooltrainerOwen[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_NIDOKING,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_NIDOQUEEN,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_MAGCARGO,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_SANDSLASH,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_RHYDON,
    },
};

static const struct TrainerMon sParty_CooltrainerBerke[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_DEWGONG,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_GOLEM,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_KINGLER,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_STEELIX,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_CLOYSTER,
    },
};

static const struct TrainerMon sParty_CooltrainerYuji[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 50,
        .species = SPECIES_SANDSLASH,
        .moves = {MOVE_SLASH, MOVE_SWIFT, MOVE_SAND_ATTACK, MOVE_POISON_STING},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 50,
        .species = SPECIES_GOLEM,
        .moves = {MOVE_ROCK_BLAST, MOVE_MAGNITUDE, MOVE_MUD_SPORT, MOVE_DEFENSE_CURL},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 50,
        .species = SPECIES_ONIX,
        .moves = {MOVE_IRON_TAIL, MOVE_SANDSTORM, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 50,
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_MAGNITUDE, MOVE_ROCK_SLIDE, MOVE_DEFENSE_CURL},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 50,
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_HEADBUTT, MOVE_LEER, MOVE_GROWL},
    },
};

static const struct TrainerMon sParty_CooltrainerWarren[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 49,
        .species = SPECIES_MAROWAK,
        .moves = {MOVE_BONEMERANG, MOVE_HEADBUTT, MOVE_LEER, MOVE_GROWL},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 49,
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_NONE, MOVE_ROCK_SLIDE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 49,
        .species = SPECIES_RHYDON,
        .moves = {MOVE_TAKE_DOWN, MOVE_ROCK_BLAST, MOVE_EARTHQUAKE, MOVE_MEGAHORN},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 49,
        .species = SPECIES_PILOSWINE,
        .moves = {MOVE_BLIZZARD, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 49,
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_DOUBLE_KICK},
    },
};

static const struct TrainerMon sParty_CooltrainerMary[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 29,
        .species = SPECIES_EXEGGCUTE,
        .moves = {MOVE_CONFUSION, MOVE_LEECH_SEED, MOVE_SLEEP_POWDER, MOVE_EGG_BOMB},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 29,
        .species = SPECIES_PARASECT,
        .moves = {MOVE_CUT, MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_ROCK_SMASH},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 29,
        .species = SPECIES_WEEPINBELL,
        .moves = {MOVE_RAZOR_LEAF, MOVE_STUN_SPORE, MOVE_SLUDGE, MOVE_GROWTH},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 29,
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_MEGA_DRAIN, MOVE_STUN_SPORE, MOVE_POISON_POWDER, MOVE_SWEET_SCENT},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 29,
        .species = SPECIES_IVYSAUR,
        .moves = {MOVE_RAZOR_LEAF, MOVE_SLEEP_POWDER, MOVE_SLUDGE, MOVE_LEECH_SEED},
    },
};

static const struct TrainerMon sParty_CooltrainerCaroline[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_LEAF_BLADE, MOVE_SUNNY_DAY, MOVE_SLEEP_POWDER, MOVE_SLUDGE_BOMB},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_LEAF_BLADE, MOVE_SLUDGE_BOMB, MOVE_GROWTH, MOVE_SLEEP_POWDER},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_EGG_BOMB, MOVE_PSYCHIC, MOVE_SOFT_BOILED, MOVE_SLEEP_POWDER},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FLAMETHROWER, MOVE_SUNNY_DAY, MOVE_SHADOW_BALL, MOVE_CALM_MIND},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_TWINEEDLE, MOVE_BRICK_BREAK},
    },
};

static const struct TrainerMon sParty_CooltrainerAlexa[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_CLEFABLE,
        .moves = {MOVE_LIGHT_SCREEN, MOVE_COSMIC_POWER, MOVE_BODY_SLAM, MOVE_SOFT_BOILED},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_WIGGLYTUFF,
        .moves = {MOVE_LOVELY_KISS, MOVE_ICE_BEAM, MOVE_ROLLOUT, MOVE_HYPER_VOICE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_UMBREON,
        .moves = {MOVE_FAINT_ATTACK, MOVE_REST, MOVE_CURSE, MOVE_TOXIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_SHEER_COLD, MOVE_SURF, MOVE_SLACK_OFF, MOVE_ICE_BEAM},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_SING, MOVE_EGG_BOMB, MOVE_SOFT_BOILED, MOVE_MINIMIZE},
    },
};

static const struct TrainerMon sParty_CooltrainerShannon[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_BEEDRILL,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_BUTTERFREE,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_PARASECT,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_PINSIR,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_VENOMOTH,
    },
};

static const struct TrainerMon sParty_CooltrainerNaomi[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_SCREECH, MOVE_FAINT_ATTACK, MOVE_PAY_DAY},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_JYNX,
        .moves = {MOVE_SHADOW_BALL, MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_LOVELY_KISS},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_MEGAHORN, MOVE_FLAMETHROWER, MOVE_STOMP, MOVE_HI_JUMP_KICK},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_DRAGONAIR,
        .moves = {MOVE_FLAMETHROWER, MOVE_DRAGON_BREATH, MOVE_ICE_BEAM, MOVE_THUNDERBOLT},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_NINETALES,
        .moves = {MOVE_SHADOW_BALL, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_FLAMETHROWER},
    },
};

static const struct TrainerMon sParty_CooltrainerBrooke[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_TANGELA,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_ESPEON,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_POLIWRATH,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_ARCANINE,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_VENUSAUR,
    },
};

static const struct TrainerMon sParty_CooltrainerAustina[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_PILOSWINE,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_RECOVER, MOVE_PSYCHIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_SNORLAX,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_NIDOKING,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_HOUNDOOM,
    },
};

static const struct TrainerMon sParty_CooltrainerJulie[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_MURKROW,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_NINETALES,
        .moves = {MOVE_FLAMETHROWER, MOVE_WILL_O_WISP, MOVE_CONFUSE_RAY, MOVE_GRUDGE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_RAPIDASH,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_ELECTABUZZ,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_RAICHU,
    },
};

static const struct TrainerMon sParty_EliteFourLorelei[] = {
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 55,
        .species = SPECIES_SLOWBRO,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_EARTHQUAKE, MOVE_BLIZZARD, MOVE_HAIL, MOVE_PSYCHIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 56,
        .species = SPECIES_PILOSWINE,
        .heldItem = ITEM_SOFT_SAND,
        .moves = {MOVE_EARTHQUAKE, MOVE_BLIZZARD, MOVE_HAIL, MOVE_ROCK_SLIDE},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 56,
        .species = SPECIES_DEWGONG,
        .heldItem = ITEM_CHESTO_BERRY,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_REST, MOVE_BLIZZARD},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 57,
        .species = SPECIES_JYNX,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_ICE_BEAM, MOVE_WATER_PULSE, MOVE_LOVELY_KISS, MOVE_PSYCHIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 58,
        .species = SPECIES_LAPRAS,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SING, MOVE_BLIZZARD, MOVE_SURF, MOVE_THUNDERBOLT},
    },
};

static const struct TrainerMon sParty_EliteFourBruno[] = {
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 58,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_SKY_UPPERCUT, MOVE_ROCK_TOMB, MOVE_THUNDER_PUNCH, MOVE_ICE_PUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 57,
        .species = SPECIES_POLIWRATH,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ICE_BEAM, MOVE_HYPNOSIS, MOVE_HYDRO_PUMP, MOVE_SUBMISSION},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 58,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_HI_JUMP_KICK, MOVE_MEGA_KICK, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 57,
        .species = SPECIES_STEELIX,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_IRON_TAIL, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CRUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 59,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_CROSS_CHOP, MOVE_BULK_UP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
    },
};

static const struct TrainerMon sParty_EliteFourAgatha[] = {
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 58,
        .species = SPECIES_MISDREAVUS,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SHADOW_BALL, MOVE_PERISH_SONG, MOVE_PSYCHIC, MOVE_DESTINY_BOND},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 59,
        .species = SPECIES_CROBAT,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_FLY, MOVE_POISON_FANG, MOVE_TOXIC, MOVE_DOUBLE_TEAM},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 58,
        .species = SPECIES_MAROWAK,
        .heldItem = ITEM_THICK_CLUB,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE, MOVE_ROCK_TOMB},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 59,
        .species = SPECIES_ARBOK,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SUBSTITUTE, MOVE_CRUNCH, MOVE_GLARE},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 60,
        .species = SPECIES_GENGAR,
        .heldItem = ITEM_SPELL_TAG,
        .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_THUNDERBOLT},
    },
};

static const struct TrainerMon sParty_EliteFourLance[] = {
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 61,
        .species = SPECIES_KINGDRA,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_HYPER_BEAM, MOVE_DRAGON_BREATH, MOVE_SURF, MOVE_ICE_BEAM},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 60,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_HYPER_BEAM, MOVE_HYDRO_PUMP, MOVE_BOUNCE, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 60,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_HYPER_BEAM, MOVE_FIRE_BLAST, MOVE_ROCK_SLIDE, MOVE_OUTRAGE},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 61,
        .species = SPECIES_AERODACTYL,
        .moves = {MOVE_HYPER_BEAM, MOVE_ROCK_SLIDE, MOVE_WING_ATTACK, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 62,
        .species = SPECIES_DRAGONITE,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_HYPER_BEAM, MOVE_EARTHQUAKE, MOVE_OUTRAGE, MOVE_THUNDER_WAVE},
    },
};

static const struct TrainerMon sParty_LeaderBrock[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 13,
        .species = SPECIES_GEODUDE,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_ROCK_THROW, MOVE_DEFENSE_CURL, MOVE_ROCK_TOMB, MOVE_TACKLE},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 0, 0, 9),
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 11,
        .species = SPECIES_SLUGMA,
        .heldItem = ITEM_NONE,
        .moves = {MOVE_SMOG, MOVE_POUND, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 10, 20, 0, 20, 20),
        .lvl = 14,
        .species = SPECIES_ONIX,
        .heldItem = ITEM_ORAN_BERRY,
        .moves = {MOVE_DRAGON_BREATH, MOVE_BIND, MOVE_ROCK_TOMB, MOVE_TACKLE},
    },
}; //I hate Brock

static const struct TrainerMon sParty_LeaderMisty[] = {
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 18,
        .species = SPECIES_POLIWHIRL,
        .moves = {MOVE_WATER_PULSE, MOVE_MEGA_PUNCH, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 20,
        .species = SPECIES_GOLDEEN,
        .moves = {MOVE_HORN_ATTACK, MOVE_NONE, MOVE_PECK, MOVE_WATERFALL},
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 31, 8, 8, 8, 8),
        .lvl = 21,
        .species = SPECIES_STARMIE,
        .moves = {MOVE_SWIFT, MOVE_CONFUSION, MOVE_WATER_PULSE, MOVE_CAMOUFLAGE},
    },
};

static const struct TrainerMon sParty_LeaderLtSurge[] = {
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 24,
        .species = SPECIES_ELEKID,
        .moves = {MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_SWIFT, MOVE_BRICK_BREAK},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 23,
        .species = SPECIES_VOLTORB,
        .moves = {MOVE_SHOCK_WAVE, MOVE_THUNDER_WAVE, MOVE_NONE, MOVE_SWIFT},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 22,
        .species = SPECIES_PORYGON,
        .moves = {MOVE_SHOCK_WAVE, MOVE_NONE, MOVE_ICY_WIND, MOVE_SWIFT},
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 25,
        .species = SPECIES_RAICHU,
        .moves = {MOVE_MEGA_PUNCH, MOVE_NONE, MOVE_DOUBLE_TEAM, MOVE_SHOCK_WAVE},
    },
};

static const struct TrainerMon sParty_LeaderErika[] = {
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 33,
        .species = SPECIES_BELLOSSOM,
        .heldItem = ITEM_MIRACLE_SEED,
        .moves = {MOVE_SLEEP_POWDER, MOVE_SYNTHESIS, MOVE_SUNNY_DAY, MOVE_GIGA_DRAIN},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 34,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_STUN_SPORE, MOVE_SLUDGE, MOVE_GROWTH, MOVE_GIGA_DRAIN},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 33,
        .species = SPECIES_TANGELA,
        .moves = {MOVE_SUNNY_DAY, MOVE_ANCIENT_POWER, MOVE_SHOCK_WAVE, MOVE_GIGA_DRAIN},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 35,
        .species = SPECIES_VILEPLUME,
        .heldItem = ITEM_MIRACLE_SEED,
        .moves = {MOVE_SLEEP_POWDER, MOVE_SOLAR_BEAM, MOVE_SUNNY_DAY, MOVE_GIGA_DRAIN},
    },
};

static const struct TrainerMon sParty_LeaderKoga[] = {
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 41,
        .species = SPECIES_CROBAT,
        .moves = {MOVE_TOXIC, MOVE_FLY, MOVE_BITE, MOVE_CONFUSE_RAY},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 42,
        .species = SPECIES_MUK,
        .heldItem = ITEM_POISON_BARB,
        .moves = {MOVE_MINIMIZE, MOVE_SLUDGE_BOMB, MOVE_ACID_ARMOR, MOVE_TOXIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 41,
        .species = SPECIES_TENTACRUEL,
        .heldItem = ITEM_MYSTIC_WATER,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_SURF, MOVE_ICE_BEAM, MOVE_BARRIER},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 43,
        .species = SPECIES_WEEZING,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_TOXIC, MOVE_SLUDGE_BOMB, MOVE_AMNESIA, MOVE_PAIN_SPLIT},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 42,
        .species = SPECIES_VENOMOTH,
        .moves = {MOVE_PSYCHIC, MOVE_DOUBLE_TEAM, MOVE_SIGNAL_BEAM, MOVE_TOXIC},
    },
};

static const struct TrainerMon sParty_LeaderBlaine[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 52,
        .species = SPECIES_RAPIDASH,
        .heldItem = ITEM_SCOPE_LENS,
        .moves = {MOVE_SUNNY_DAY, MOVE_HI_JUMP_KICK, MOVE_MEGAHORN, MOVE_FIRE_BLAST},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 51,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_HARD_STONE,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_DRAGON_CLAW, MOVE_FIRE_BLAST},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 51,
        .species = SPECIES_NINETALES,
        .heldItem = ITEM_MIRACLE_SEED,
        .moves = {MOVE_FIRE_BLAST, MOVE_SOLAR_BEAM, MOVE_CALM_MIND, MOVE_SUNNY_DAY},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 51,
        .species = SPECIES_MAGCARGO,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_FIRE_BLAST, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_BODY_SLAM},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 53,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_SILK_SCARF,
        .moves = {MOVE_CRUNCH, MOVE_IRON_TAIL, MOVE_EXTREME_SPEED, MOVE_FIRE_BLAST},
    },
};

static const struct TrainerMon sParty_LeaderSabrina[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 49,
        .species = SPECIES_MR_MIME,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_ICE_PUNCH, MOVE_PSYCHIC, MOVE_BATON_PASS, MOVE_CALM_MIND},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 48,
        .species = SPECIES_SLOWBRO,
        .heldItem = ITEM_BLACK_BELT,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_CURSE, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 49,
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_COUNTER, MOVE_MIRROR_COAT, MOVE_ENCORE, MOVE_DESTINY_BOND},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 49,
        .species = SPECIES_HYPNO,
        .heldItem = ITEM_TWISTED_SPOON,
        .moves = {MOVE_DREAM_EATER, MOVE_HYPNOSIS, MOVE_CALM_MIND, MOVE_FIRE_PUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 50,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_SALAC_BERRY,
        .moves = {MOVE_PSYCHIC, MOVE_RECOVER, MOVE_THUNDER_PUNCH, MOVE_CALM_MIND},
    },
};

static const struct TrainerMon sParty_GentlemanThomas[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_GROWLITHE,
    },
};

static const struct TrainerMon sParty_GentlemanArthur[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = SPECIES_NIDORAN_F,
    },
};

static const struct TrainerMon sParty_GentlemanTucker[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_PIKACHU,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_PICHU,
    },
};

static const struct TrainerMon sParty_GentlemanNorton[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_PERSIAN,
    },
};

static const struct TrainerMon sParty_GentlemanWalter[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = SPECIES_PONYTA,
    },
};

static const struct TrainerMon sParty_RivalSsAnneSquirtle[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 21,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 20,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 20,
        .species = SPECIES_KADABRA,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 23,
        .species = SPECIES_MARSHTOMP
    },
};

static const struct TrainerMon sParty_RivalSsAnneBulbasaur[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 21,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 20,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 20,
        .species = SPECIES_KADABRA,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 23,
        .species = SPECIES_GROVYLE,
    },
};

static const struct TrainerMon sParty_RivalSsAnneCharmander[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 21,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 20,
        .species = SPECIES_BELLSPROUT,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 20,
        .species = SPECIES_KADABRA,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 23,
        .species = SPECIES_COMBUSKEN,
    },
};

static const struct TrainerMon sParty_RivalPokemonTowerSquirtle[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 34,
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_FURY_ATTACK, MOVE_NONE, MOVE_NONE}
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 32,
        .species = SPECIES_VULPIX,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 32,
        .species = SPECIES_SCYTHER,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 33,
        .species = SPECIES_KADABRA,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 35,
        .species = SPECIES_MARSHTOMP,
    },
};

static const struct TrainerMon sParty_RivalPokemonTowerBulbasaur[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 34,
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_FURY_ATTACK, MOVE_NONE, MOVE_NONE}
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 32,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 32,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 33,
        .species = SPECIES_KADABRA,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 35,
        .species = SPECIES_GROVYLE
    },
};

static const struct TrainerMon sParty_RivalPokemonTowerCharmander[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 34,
        .species = SPECIES_FEAROW,
        .moves = {MOVE_DRILL_PECK, MOVE_FURY_ATTACK, MOVE_NONE, MOVE_NONE}
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 32,
        .species = SPECIES_EXEGGCUTE,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 32,
        .species = SPECIES_SHELLDER,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 33,
        .species = SPECIES_KADABRA,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 35,
        .species = SPECIES_COMBUSKEN,
    },
};

static const struct TrainerMon sParty_RivalSilphSquirtle[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 44,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_LEAF_BLADE, MOVE_SLUDGE_BOMB, MOVE_ROCK_SMASH, MOVE_STUN_SPORE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 44,
        .species = SPECIES_PORYGON2,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDERBOLT, MOVE_TRI_ATTACK, MOVE_RECOVER},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 43,
        .species = SPECIES_PRIMEAPE,
        .moves = {MOVE_THRASH, MOVE_CROSS_CHOP, MOVE_DIG, MOVE_ROCK_SLIDE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 44,
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 46,
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_MUDDY_WATER, MOVE_ICE_BEAM, MOVE_DIG, MOVE_TAKE_DOWN},
    },
};

static const struct TrainerMon sParty_RivalSilphBulbasaur[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 45,
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_SKY_ATTACK, MOVE_EXTREME_SPEED, MOVE_MEGA_KICK, MOVE_STEEL_WING},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 43,
        .species = SPECIES_RHYDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_TAKE_DOWN, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 44,
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLAMETHROWER, MOVE_EXTREME_SPEED, MOVE_TAKE_DOWN, MOVE_DIG},

    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 44,
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 46,
        .species = SPECIES_SCEPTILE
        .moves = {MOVE_GIGA_DRAIN, MOVE_LEAF_BLADE, MOVE_EXTREME_SPEED, MOVE_GROWTH},
    },
};

static const struct TrainerMon sParty_RivalSilphCharmander[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 43,
        .species = SPECIES_ELECTABUZZ,
        .moves = {MOVE_ICE_PUNCH, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_BRICK_BREAK},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 44,
        .species = SPECIES_CLOYSTER,
        .moves = {MOVE_ICE_BEAM, MOVE_SURF, MOVE_EXPLOSION, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 43,
        .species = SPECIES_SCIZOR,
        .moves = {MOVE_STEEL_WING, MOVE_CUT, MOVE_BRICK_BREAK, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 44,
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDER_WAVE, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 46,
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_SKY_UPPERCUT, MOVE_BLAZE_KICK, MOVE_MACH_PUNCH, MOVE_BOUNCE},
    },
};

static const struct TrainerMon sParty_RivalRoute22LateSquirtle[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 53,
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_FEATHER_DANCE, MOVE_SKY_ATTACK, MOVE_DOUBLE_EDGE, MOVE_EXTREME_SPEED},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 53,
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE, MOVE_REVENGE, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 53,
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLAMETHROWER, MOVE_IRON_TAIL, MOVE_EXTREME_SPEED, MOVE_AGILITY},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 53,
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_PSYCHIC, MOVE_SLEEP_POWDER, MOVE_EGG_BOMB, MOVE_STUN_SPORE},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 54,
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_RECOVER, MOVE_SHOCK_WAVE},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 55,
        .species = SPECIES_SWAMPERT,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE},
    },
};

static const struct TrainerMon sParty_RivalRoute22LateBulbasaur[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 53,
        .species = SPECIES_PIDGEOT,
        .moves = {MOVE_FEATHER_DANCE, MOVE_SKY_ATTACK, MOVE_MEGA_KICK, MOVE_EXTREME_SPEED},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 52,
        .species = SPECIES_RHYDON,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_MEGAHORN},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 53,
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_EARTHQUAKE, MOVE_BOUNCE, MOVE_DRAGON_DANCE},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 53,
        .species = SPECIES_ARCANINE,
        .moves = {MOVE_FLAMETHROWER, MOVE_EXTREME_SPEED, MOVE_FIRE_BLAST, MOVE_AGILITY},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 54,
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_RECOVER, MOVE_SHOCK_WAVE},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 55,
        .species = SPECIES_SCEPTILE,
        .moves = {MOVE_LEAF_BLADE, MOVE_DRAGON_CLAW, MOVE_EARTHQUAKE, MOVE_EXTREME_SPEED,
    },
};

static const struct TrainerMon sParty_RivalRoute22LateCharmander[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 54,
        .species = SPECIES_FEAROW,
        .moves = {MOVE_PURSUIT, MOVE_DRILL_PECK, MOVE_DOUBLE_EDGE, MOVE_SHARPEN},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 53,
        .species = SPECIES_MAGNETON,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_THUNDER, MOVE_TRI_ATTACK},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 53,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_LEAF_BLADE, MOVE_SLEEP_POWDER, MOVE_GROWTH, MOVE_SLUDGE_BOMB},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 53,
        .species = SPECIES_KINGDRA,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_BREATH, MOVE_AGILITY, MOVE_ICE_BEAM},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 54,
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_RECOVER, MOVE_SHOCK_WAVE},
    },
    {
        .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
        .lvl = 55,
        .species = SPECIES_BLAZIKEN,
        .moves = {MOVE_FLAMETHROWER, MOVE_SKY_UPPERCUT, MOVE_EARTHQUAKE, MOVE_BOUNCE},
    },
};

static const struct TrainerMon sParty_ChampionFirstSquirtle[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_RECOVER, MOVE_CALM_MIND},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 62,
        .species = SPECIES_SCIZOR,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_METEOR_MASH, MOVE_TWINEEDLE, MOVE_AGILITY, MOVE_BRICK_BREAK},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 63,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_EGG_BOMB, MOVE_PSYCHIC, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 63,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_EXTREME_SPEED, MOVE_FIRE_BLAST, MOVE_IRON_TAIL, MOVE_TOXIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 63,
        .species = SPECIES_PIDGEOT,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_SKY_ATTACK, MOVE_EXTREME_SPEED, MOVE_HYPER_BEAM, MOVE_TOXIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_SWAMPERT,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
    },
};

static const struct TrainerMon sParty_ChampionFirstBulbasaur[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_SHADOW_BALL, MOVE_REFLECT},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 62,
        .species = SPECIES_SCIZOR,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_METEOR_MASH, MOVE_TWINEEDLE, MOVE_AGILITY, MOVE_BRICK_BREAK},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 63,
        .species = SPECIES_RHYDON,
        .heldItem = ITEM_CHOICE_BAND,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_DOUBLE_EDGE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 63,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_EARTHQUAKE, MOVE_BOUNCE, MOVE_DRAGON_DANCE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 63,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_EXTREME_SPEED, MOVE_FIRE_BLAST, MOVE_IRON_TAIL, MOVE_TOXIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_SCEPTILE,
        .heldItem = ITEM_LIECHI_BERRY,
        .moves = {MOVE_EARTHQUAKE, MOVE_LEAF_BLADE, MOVE_DRAGON_CLAW, MOVE_THUNDER_PUNCH},
    },
};

static const struct TrainerMon sParty_ChampionFirstCharmander[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 64,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDER_WAVE, MOVE_SHADOW_BALL, MOVE_REFLECT},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 63,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_CHOICE_BAND,  
        .moves = {MOVE_CROSS_CHOP, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_SUPERPOWER},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 62,
        .species = SPECIES_SCIZOR,
        .heldItem = ITEM_CHOICE_BAND,
        .moves = {MOVE_METEOR_MASH, MOVE_TWINEEDLE, MOVE_BRICK_BREAK, MOVE_DOUBLE_EDGE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 63,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_PSYCHIC, MOVE_EGG_BOMB, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 63,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_HYDRO_PUMP, MOVE_EARTHQUAKE, MOVE_BOUNCE, MOVE_DRAGON_DANCE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_BLAZIKEN,
        .heldItem = ITEM_SALAC_BERRY,
        .moves = {MOVE_FIRE_BLAST, MOVE_SKY_UPPERCUT, MOVE_BULK_UP, MOVE_EARTHQUAKE},
    },
};

static const struct TrainerMon sParty_ChannelerPatricia[] = {
    {
        .iv = 0,
        .lvl = 26,
        .heldItem = ITEM_SPELL_TAG,
        .species = SPECIES_GASTLY,
    },
};

static const struct TrainerMon sParty_ChannelerCarly[] = {
    {
        .iv = 0,
        .lvl = 26,
        .heldItem = ITEM_SPELL_TAG,
        .species = SPECIES_VULPIX,
    },
};

static const struct TrainerMon sParty_ChannelerHope[] = {
    {
        .iv = 0,
        .lvl = 27,
        .heldItem = ITEM_SPELL_TAG,
        .species = SPECIES_MISDREAVUS,
    },
};

static const struct TrainerMon sParty_ChannelerPaula[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_GASTLY,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_DROWZEE,
    },
};

static const struct TrainerMon sParty_ChannelerLaurel[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_GASTLY,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_VULPIX,
    },
};

static const struct TrainerMon sParty_ChannelerJody[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_HAUNTER,
    },
};

static const struct TrainerMon sParty_ChannelerTammy[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_HAUNTER,
    },
        {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_MISDREAVUS,
    },
};

static const struct TrainerMon sParty_ChannelerRuth[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_MR_MIME,
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = SPECIES_GASTLY,
    },
};

static const struct TrainerMon sParty_ChannelerKarina[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_HAUNTER,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_HYPNO,
    },
};

static const struct TrainerMon sParty_ChannelerJanae[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_HAUNTER,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_VULPIX,
    },
};

static const struct TrainerMon sParty_ChannelerAngelica[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_GASTLY,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_MISDREAVUS,
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = SPECIES_HAUNTER,
    },
};

static const struct TrainerMon sParty_ChannelerEmilia[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_HYPNO,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_HAUNTER,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_NINETALES,
    },
};

static const struct TrainerMon sParty_ChannelerJennifer[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_HAUNTER,
    },
};

static const struct TrainerMon sParty_Channeler1[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_HAUNTER,
    },
};

static const struct TrainerMon sParty_Channeler2[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GASTLY,
    },
};

static const struct TrainerMon sParty_Channeler3[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_GASTLY,
    },
};

static const struct TrainerMon sParty_Channeler4[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GASTLY,
    },
};

static const struct TrainerMon sParty_Channeler5[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_HAUNTER,
    },
};

static const struct TrainerMon sParty_Channeler6[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_GASTLY,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_GASTLY,
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = SPECIES_GASTLY,
    },
};

static const struct TrainerMon sParty_Channeler7[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GASTLY,
    },
};

static const struct TrainerMon sParty_Channeler8[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_GASTLY,
    },
};

static const struct TrainerMon sParty_ChannelerAmanda[] = {
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_HAUNTER,
    },
    {
        .iv = 0,
        .lvl = 44,
        .species = SPECIES_NINETALES,
    },
};

static const struct TrainerMon sParty_ChannelerStacy[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_HYPNO,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_UMBREON,
    },
};

static const struct TrainerMon sParty_ChannelerTasha[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_HYPNO,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_HAUNTER,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_MISDREAVUS,
    },
};

static const struct TrainerMon sParty_HikerJeremy[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_MACHOP,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_ONIX,
    },
};

static const struct TrainerMon sParty_PicnickerAlma[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_SEADRA,
    },
};

static const struct TrainerMon sParty_PicnickerSusie[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_WEEPINBELL,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_NIDORINO,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_MEOWTH,
    },
};

static const struct TrainerMon sParty_PicnickerValerie[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_SEAKING,
    },
};

static const struct TrainerMon sParty_PicnickerGwen[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_TANGELA,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_PERSIAN,
    },
};

static const struct TrainerMon sParty_BikerVirgil[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_WEEZING,
        .heldItem = ITEM_POISON_BARB,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_BITE, MOVE_FLAME_WHEEL, MOVE_SMOG, MOVE_NONE},
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SMOKESCREEN, MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE},
    },
};

static const struct TrainerMon sParty_CamperFlint[] = {
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = 0,
        .lvl = 15,
        .species = SPECIES_EKANS,
    },
};

static const struct TrainerMon sParty_PicnickerMissy[] = {
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_TENTACRUEL,
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = SPECIES_SEAKING,
    },
};

static const struct TrainerMon sParty_PicnickerIrene[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_SLOWKING,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = SPECIES_DEWGONG,
    },
};

static const struct TrainerMon sParty_PicnickerDana[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_MEOWTH,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_WARTORTLE,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_FEAROW,
    },
};

static const struct TrainerMon sParty_PicnickerAriana[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_NIDORINA,
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_WEEPINBELL,
    },
};

static const struct TrainerMon sParty_PicnickerLeah[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_BELLSPROUT,
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_CLEFAIRY,
    },
};

static const struct TrainerMon sParty_CamperJustin[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_NIDORINO,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_NIDORINO,
    },
};

static const struct TrainerMon sParty_PicnickerYazmin[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_TANGELA,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_PONYTA,
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = SPECIES_SANDSLASH,
    },
};

static const struct TrainerMon sParty_PicnickerKindra[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_PSYDUCK,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_PERSIAN,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_POLITOED,
    },
};

static const struct TrainerMon sParty_PicnickerBecky[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_POLIWRATH,
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = SPECIES_RAICHU,
    },
};

static const struct TrainerMon sParty_PicnickerCelia[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = SPECIES_CLEFAIRY,
    },
};

static const struct TrainerMon sParty_GentlemanBrooks[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = SPECIES_PIKACHU,
    },
};

static const struct TrainerMon sParty_GentlemanLamar[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = SPECIES_PONYTA,
    },
};

static const struct TrainerMon sParty_TwinsEliAnne[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = SPECIES_JIGGLYPUFF,
    },
};

static const struct TrainerMon sParty_CoolCoupleRayTyra[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 53,
        .species = SPECIES_NIDOQUEEN,
        .moves = {MOVE_SUPERPOWER, MOVE_BODY_SLAM, MOVE_CRUNCH, MOVE_DIG},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 53,
        .species = SPECIES_NIDOKING,
        .moves = {MOVE_MEGAHORN, MOVE_ICE_BEAM, MOVE_SLUDGE_BOMB, MOVE_DIG},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 53,
        .species = SPECIES_PINSIR,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 53,
        .species = SPECIES_SCIZOR,
    },
};

static const struct TrainerMon sParty_YoungCoupleGiaJes[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_NIDORINO,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_NIDORINA,
    },
};

static const struct TrainerMon sParty_TwinsKiriJan[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_CHARMELEON,
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = SPECIES_WARTORTLE,
    },
};

static const struct TrainerMon sParty_CrushKinRonMya[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 37,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 37,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_YoungCoupleLeaJed[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_RAPIDASH,
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_NINETALES,
    },
};

static const struct TrainerMon sParty_SisAndBroLiaLuc[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_VAPOREON,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_GYARADOS,
    },
};

static const struct TrainerMon sParty_SisAndBroLilIan[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_VAPOREON,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_STARMIE,
    },
};

static const struct TrainerMon sParty_BugCatcher3[] = {DUMMY_TRAINER_MON};
static const struct TrainerMon sParty_BugCatcher4[] = {DUMMY_TRAINER_MON};
static const struct TrainerMon sParty_BugCatcher5[] = {DUMMY_TRAINER_MON};
static const struct TrainerMon sParty_BugCatcher6[] = {DUMMY_TRAINER_MON};
static const struct TrainerMon sParty_BugCatcher7[] = {DUMMY_TRAINER_MON};
static const struct TrainerMon sParty_BugCatcher8[] = {DUMMY_TRAINER_MON};

static const struct TrainerMon sParty_YoungsterBen3[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_EKANS,
    },
};

static const struct TrainerMon sParty_YoungsterBen4[] = {
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 48,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 48,
        .species = SPECIES_ARBOK,
    },
};

static const struct TrainerMon sParty_YoungsterChad2[] = {
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 20,
        .species = SPECIES_EKANS,
    },
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 20,
        .species = SPECIES_SANDSHREW,
    },
};

static const struct TrainerMon sParty_LassReli2[] = {
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 20,
        .species = SPECIES_PIDGEY,
    },
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 20,
        .species = SPECIES_NIDORAN_F,
    },
};

static const struct TrainerMon sParty_LassReli3[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_NIDORINA,
    },
};

static const struct TrainerMon sParty_YoungsterTimmy2[] = {
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 19,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 19,
        .species = SPECIES_EKANS,
    },
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 19,
        .species = SPECIES_ZUBAT,
    },
};

static const struct TrainerMon sParty_YoungsterTimmy3[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 27,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 27,
        .species = SPECIES_EKANS,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 27,
        .species = SPECIES_GOLBAT,
    },
};

static const struct TrainerMon sParty_YoungsterTimmy4[] = {
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 52,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 52,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 52,
        .species = SPECIES_GOLBAT,
    },
};

static const struct TrainerMon sParty_YoungsterChad3[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_SANDSHREW,
    },
};

static const struct TrainerMon sParty_LassJanice2[] = {
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 20,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 20,
        .species = SPECIES_PIDGEOTTO,
    },
};

static const struct TrainerMon sParty_LassJanice3[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_PIDGEOTTO,
    },
};

static const struct TrainerMon sParty_YoungsterChad4[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 48,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 48,
        .species = SPECIES_SANDSLASH,
    },
};

static const struct TrainerMon sParty_HikerFranklin2[] = {
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 25,
        .species = SPECIES_MACHOKE,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 25,
        .species = SPECIES_GRAVELER,
    },
};

static const struct TrainerMon sParty_PkmnProfProfOak[] = {DUMMY_TRAINER_MON};
static const struct TrainerMon sParty_PlayerBrendan[] = {DUMMY_TRAINER_MON};
static const struct TrainerMon sParty_PlayerMay[] = {DUMMY_TRAINER_MON};
static const struct TrainerMon sParty_PlayerRed[] = {DUMMY_TRAINER_MON};
static const struct TrainerMon sParty_PlayerLeaf[] = {DUMMY_TRAINER_MON};

static const struct TrainerMon sParty_TeamRocketGrunt42[] = {
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_WEEZING,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_HOUNDOOM,
    },
};

static const struct TrainerMon sParty_PsychicJaclyn[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 62,
        .species = SPECIES_XATU,
        .moves = {MOVE_PSYCHIC, MOVE_SKY_ATTACK, MOVE_FUTURE_SIGHT, MOVE_WISH},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 62,
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_AMNESIA, MOVE_SLACK_OFF},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 62,
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_FUTURE_SIGHT, MOVE_RECOVER, MOVE_REFLECT},
    },
};

static const struct TrainerMon sParty_CrushGirlSharon[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 51,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 51,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_TuberAmira[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_POLIWAG,
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_SEADRA,
    },
};

static const struct TrainerMon sParty_PkmnBreederAlize[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 63,
        .species = SPECIES_RAICHU,
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 63,
        .species = SPECIES_TOGETIC,
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 63,
        .species = SPECIES_AZUMARILL,
    },
};

static const struct TrainerMon sParty_PkmnRangerNicolas[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 64,
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_TWINEEDLE, MOVE_BRICK_BREAK},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 64,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_LEAF_BLADE, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_STUN_SPORE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 64,
        .species = SPECIES_EXEGGUTOR,
    },
};

static const struct TrainerMon sParty_PkmnRangerMadeline[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 64,
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_PETAL_DANCE, MOVE_SLUDGE_BOMB, MOVE_SWEET_SCENT, MOVE_POISON_POWDER},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 64,
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_PETAL_DANCE, MOVE_MOONLIGHT, MOVE_SLUDGE_BOMB, MOVE_STUN_SPORE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 64,
        .species = SPECIES_VICTREEBEL,
    },
};

static const struct TrainerMon sParty_AromaLadyNikki[] = {
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_WEEPINBELL,
    },
    {
        .iv = 0,
        .lvl = 52,
        .species = SPECIES_VICTREEBEL,
    },
};

static const struct TrainerMon sParty_RuinManiacStanly[] = {
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_SKARMORY,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_DONPHAN,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_GOLEM,
    },
};

static const struct TrainerMon sParty_LadyJacki[] = {
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_SUNFLORA,
        .heldItem = ITEM_STARDUST,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_JUMPLUFF,
        .heldItem = ITEM_STARDUST,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_MEGANIUM,
        .heldItem = ITEM_NUGGET,
    },
};

static const struct TrainerMon sParty_PainterDaisy[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 75,
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_DYNAMIC_PUNCH, MOVE_DIZZY_PUNCH, MOVE_FOCUS_PUNCH, MOVE_MEGA_PUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 62,
        .species = SPECIES_NINETALES,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 62,
        .species = SPECIES_STARMIE,
    },
};

static const struct TrainerMon sParty_BikerGoon[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_THUNDERBOLT, MOVE_SMOKESCREEN, MOVE_SLUDGE_BOMB, MOVE_AMNESIA},
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_MUK,
        .moves = {MOVE_ACID_ARMOR, MOVE_SCREECH, MOVE_MINIMIZE, MOVE_SLUDGE_BOMB},
    },
};

static const struct TrainerMon sParty_BikerGoon2[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_NONE, MOVE_CRUNCH, MOVE_FLAMETHROWER, MOVE_ROCK_SMASH},
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_NONE, MOVE_EXPLOSION, MOVE_THUNDERBOLT, MOVE_VOLT_TACKLE},
    },
};

static const struct TrainerMon sParty_BikerGoon3[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_MURKROW,
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_SCYTHER,
    },
};

static const struct TrainerMon sParty_Biker2[] = {DUMMY_TRAINER_MON};

static const struct TrainerMon sParty_BugCatcherAnthony[] = {
    {
        .iv = 0,
        .lvl = 7,
        .species = SPECIES_CATERPIE,
    },
    {
        .iv = 0,
        .lvl = 8,
        .species = SPECIES_CATERPIE,
    },
};

static const struct TrainerMon sParty_BugCatcherCharlie[] = {
    {
        .iv = 0,
        .lvl = 7,
        .species = SPECIES_METAPOD,
    },
    {
        .iv = 0,
        .lvl = 7,
        .species = SPECIES_CATERPIE,
    },
    {
        .iv = 0,
        .lvl = 7,
        .species = SPECIES_WEEDLE,
    },
};

static const struct TrainerMon sParty_TwinsEliAnne2[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_JIGGLYPUFF,
    },
};

static const struct TrainerMon sParty_YoungsterJohnson[] = {
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = SPECIES_SANDSLASH,
    },
    {
        .iv = 0,
        .lvl = 44,
        .heldItem = ITEM_SILK_SCARF,
        .species = SPECIES_RATICATE,
    },
};

static const struct TrainerMon sParty_BikerRicardo[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_KOFFING,
        .moves = {MOVE_SLUDGE, MOVE_SMOG, MOVE_TACKLE, MOVE_POISON_GAS},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = SPECIES_HOUNDOOM,
        .heldItem = ITEM_BLACK_GLASSES,
        .moves = {MOVE_BITE, MOVE_FLAME_WHEEL, MOVE_HOWL, MOVE_SMOG},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_GRIMER,
        .moves = {MOVE_MINIMIZE, MOVE_SLUDGE, MOVE_DISABLE, MOVE_POUND},
    },
};

static const struct TrainerMon sParty_BikerJaren[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = SPECIES_GRIMER,
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = SPECIES_SNEASEL,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt43[] = {
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_MAROWAK,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_GOLBAT,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt44[] = {
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_QWILFISH,
    },
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_PUPITAR,
    },
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_SANDSLASH,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt45[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 63,
        .species = SPECIES_MURKROW,
        .moves = {MOVE_FAINT_ATTACK, MOVE_SKY_ATTACK, MOVE_STEEL_WING, MOVE_ICY_WIND},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 63,
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_ICE_PUNCH, MOVE_FIRE_PUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 63,
        .species = SPECIES_GOLBAT,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_CRUNCH, MOVE_AIR_CUTTER, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 63,
        .species = SPECIES_RHYDON,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE, MOVE_MEGAHORN},
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 65,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_CROSS_CHOP, MOVE_FIRE_BLAST},
    },
}; //NEW Admin 4

static const struct TrainerMon sParty_TeamRocketGrunt46[] = {
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_MUK,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_WEEZING,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_HOUNDOOM,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt47[] = {
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_GLIGAR,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_FORRETRESS,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_MACHAMP,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt48[] = {
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_HERACROSS,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_GRANBULL,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_GYARADOS,
    },
};

static const struct TrainerMon sParty_TeamRocketAdmin[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 63,
        .species = SPECIES_ARBOK,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_GLARE},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 64,
        .species = SPECIES_MURKROW,
        .moves = {MOVE_SKY_ATTACK, MOVE_FAINT_ATTACK, MOVE_STEEL_WING, MOVE_ICY_WIND},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 64,
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_FAINT_ATTACK, MOVE_FAKE_OUT, MOVE_TOXIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 64,
        .species = SPECIES_JYNX,
        .moves = {MOVE_ICE_BEAM, MOVE_LOVELY_KISS, MOVE_PSYCHIC, MOVE_SHADOW_BALL},
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 65,
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_GIGA_DRAIN, MOVE_SLEEP_POWDER, MOVE_SYNTHESIS},
    },
};

static const struct TrainerMon sParty_TeamRocketAdmin2[] = {
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 64,
        .species = SPECIES_TAUROS,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB, MOVE_BODY_SLAM},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 64,
        .species = SPECIES_GYARADOS,
        .moves = {MOVE_SURF, MOVE_EARTHQUAKE, MOVE_BOUNCE, MOVE_DRAGON_DANCE},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 65,
        .species = SPECIES_HERACROSS,
        .moves = {MOVE_CROSS_CHOP, MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 65,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_EXPLOSION, MOVE_PAIN_SPLIT},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 66,
        .species = SPECIES_MAGMAR,
        .moves = {MOVE_FLAMETHROWER, MOVE_CROSS_CHOP, MOVE_PSYCHIC, MOVE_THUNDER_PUNCH},
    },
};

static const struct TrainerMon sParty_ScientistGideon[] = {
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 65,
        .species = SPECIES_ELECTRODE,
        .moves = {MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_EXPLOSION, MOVE_LIGHT_SCREEN},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 66,
        .species = SPECIES_WEEZING,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_PAIN_SPLIT, MOVE_FLAMETHROWER, MOVE_TOXIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 65,
        .species = SPECIES_MAGNETON,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_TRI_ATTACK, MOVE_THUNDERBOLT, MOVE_THUNDER_WAVE, MOVE_REFLECT},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 65,
        .species = SPECIES_AERODACTYL,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_EARTHQUAKE, MOVE_SKY_ATTACK, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 67,
        .species = SPECIES_SLOWBRO,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_PSYCHIC, MOVE_CALM_MIND, MOVE_SLACK_OFF, MOVE_PSYCHIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 68,
        .species = SPECIES_PORYGON2,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_RECOVER, MOVE_PSYCHIC},
    },
};//GIDEON SAPPHIRE GUY BUFFED

static const struct TrainerMon sParty_SwimmerFemaleAmara[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_GOLDUCK,
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_DEWGONG,
    },
};

static const struct TrainerMon sParty_SwimmerFemaleMaria[] = {
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_KINGDRA,
    },
};

static const struct TrainerMon sParty_SwimmerFemaleAbigail[] = {
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_POLITOED,
    },
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_SLOWBRO,
    },
    {
        .iv = 0,
        .lvl = 51,
        .species = SPECIES_GOLDUCK,
    },
};

static const struct TrainerMon sParty_SwimmerMaleFinn[] = {
    {
        .iv = 0,
        .lvl = 53,
        .species = SPECIES_STARMIE,
    },
};

static const struct TrainerMon sParty_SwimmerMaleGarrett[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_KINGLER,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_CLOYSTER,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_BLASTOISE,
    },
};

static const struct TrainerMon sParty_FishermanTommy[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_GOLDEEN,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_SLOWPOKE,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_SLOWBRO,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_SLOWKING,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_SEAKING,
    },
};

static const struct TrainerMon sParty_CrushGirlTanya[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 49,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 49,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 49,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_BlackBeltShea[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 52,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_BlackBeltHugh[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 51,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 51,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_CamperBryce[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_NIDOKING,
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_SANDSLASH,
    },
};

static const struct TrainerMon sParty_PicnickerClaire[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_UMBREON,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_NIDOQUEEN,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_RAICHU,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_CLEFABLE,
    },
};

static const struct TrainerMon sParty_CrushKinMikKia[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 51,
        .species = SPECIES_MACHOKE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 51,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_AromaLadyViolet[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_BULBASAUR,
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_IVYSAUR,
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_VENUSAUR,
    },
};

static const struct TrainerMon sParty_TuberAlexis[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_STARYU,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_STARYU,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_SLOWBRO,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_KINGLER,
    },
};

static const struct TrainerMon sParty_TwinsJoyMeg[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_JIGGLYPUFF,
    },
};

static const struct TrainerMon sParty_SwimmerFemaleTisha[] = {
    {
        .iv = 0,
        .lvl = 54,
        .species = SPECIES_KINGLER,
    },
};

static const struct TrainerMon sParty_PainterCelina[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 75,
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_FLY, MOVE_DIG, MOVE_DIVE, MOVE_BOUNCE},
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 62,
        .species = SPECIES_HITMONTOP,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 62,
        .species = SPECIES_LAPRAS,
    },
};

static const struct TrainerMon sParty_PainterRayna[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 75,
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_CROSS_CHOP, MOVE_MEGAHORN, MOVE_DOUBLE_EDGE, MOVE_SELF_DESTRUCT},
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 62,
        .species = SPECIES_SUDOWOODO,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 62,
        .species = SPECIES_LUDICOLO,
    },
};

static const struct TrainerMon sParty_LadyGillian[] = {
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_MEGANIUM,
        .heldItem = ITEM_STARDUST,
    },
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_GRANBULL,
        .heldItem = ITEM_STARDUST,
    },
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_AMPHAROS,
        .heldItem = ITEM_NUGGET,
    },
};

static const struct TrainerMon sParty_YoungsterDestin[] = {
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_FURRET,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_STANTLER,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_FERALIGATR,
    },
};

static const struct TrainerMon sParty_SwimmerMaleToby[] = {
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_POLIWRATH,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_FERALIGATR,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_TENTACRUEL,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt49[] = {
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_NOCTOWL,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_MUK,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt50[] = {
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_MAGCARGO,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_WEEZING,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_MUK,
    },
};

static const struct TrainerMon sParty_TeamRocketGrunt51[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 61,
        .species = SPECIES_ARBOK,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 61,
        .species = SPECIES_STANTLER,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 61,
        .species = SPECIES_VICTREEBEL,
    },
};

static const struct TrainerMon sParty_BirdKeeperMilo[] = {
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_SKARMORY,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_PIDGEOT,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_FARFETCHD,
    },
};

static const struct TrainerMon sParty_BirdKeeperChaz[] = {
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_XATU,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_SWELLOW,
    },
};

static const struct TrainerMon sParty_BirdKeeperHarold[] = {
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_MURKROW,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_NOCTOWL,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_DODRIO,
    },
};

static const struct TrainerMon sParty_FishermanTylor[] = {
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_QWILFISH,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_OCTILLERY,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_GYARADOS,
    },
};

static const struct TrainerMon sParty_SwimmerMaleMymo[] = {
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_MANTINE,
    },
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_BLASTOISE,
    },
};

static const struct TrainerMon sParty_SwimmerFemaleNicole[] = {
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_AZUMARILL,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_LANTURN,
    },
};

static const struct TrainerMon sParty_SisAndBroAvaGeb[] = {
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_CORSOLA,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_STARMIE,
    },
};

static const struct TrainerMon sParty_AromaLadyRose[] = {
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_JUMPLUFF,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_SUNFLORA,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_VICTREEBEL,
    },
};

static const struct TrainerMon sParty_SwimmerMaleSamir[] = {
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_OCTILLERY,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_FERALIGATR,
    },
};

static const struct TrainerMon sParty_SwimmerFemaleDenise[] = {
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_LANTURN,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_CORSOLA,
    },
};

static const struct TrainerMon sParty_TwinsMiuMia[] = {
    {
        .iv = 0,
        .lvl = 70,
        .species = SPECIES_DELIBIRD,
    },
    {
        .iv = 0,
        .lvl = 70,
        .species = SPECIES_PIKACHU,
    },
};

static const struct TrainerMon sParty_HikerEarl[] = {
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_STEELIX,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_MACHAMP,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_SKARMORY,
    },
};

static const struct TrainerMon sParty_RuinManiacFoster[] = {
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_SHUCKLE,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_AERODACTYL,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_GOLEM,
    },
};

static const struct TrainerMon sParty_RuinManiacLarry[] = {
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_STEELIX,
    },
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_HERACROSS,
    },
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_CROBAT,
    },
};

static const struct TrainerMon sParty_HikerDaryl[] = {
    {
        .iv = 0,
        .lvl = 70,
        .species = SPECIES_SUDOWOODO,
    },
};

static const struct TrainerMon sParty_PokemaniacHector[] = {
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 63,
        .species = SPECIES_RHYDON,
    },
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 63,
        .species = SPECIES_KANGASKHAN,
    },
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 63,
        .species = SPECIES_TYPHLOSION,
    },
};

static const struct TrainerMon sParty_PsychicDario[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 64,
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_CRUNCH, MOVE_PSYCHIC, MOVE_ODOR_SLEUTH, MOVE_AGILITY},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 64,
        .species = SPECIES_NINETALES,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 64,
        .species = SPECIES_MR_MIME,
    },
};

static const struct TrainerMon sParty_PsychicRodette[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 63,
        .species = SPECIES_XATU,
        .moves = {MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_WISH, MOVE_FUTURE_SIGHT},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 63,
        .species = SPECIES_UNOWN,
        .moves = {MOVE_HIDDEN_POWER, MOVE_ANCIENT_POWER, MOVE_NONE, MOVE_NONE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 65,
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_PSYCH_UP, MOVE_FUTURE_SIGHT},
    },
};

static const struct TrainerMon sParty_AromaLadyMiah[] = {
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_BELLOSSOM,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_SUNFLORA,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_JUMPLUFF,
    },
};

static const struct TrainerMon sParty_YoungCoupleEveJon[] = {
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_GOLDUCK,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_CORSOLA,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_JYNX,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_ELECTABUZZ,
    },
};

static const struct TrainerMon sParty_JugglerMason[] = {
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_ALAKAZAM,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_FORRETRESS,
    },
};

static const struct TrainerMon sParty_CrushGirlCyndy[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 64,
        .species = SPECIES_HERACROSS,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 64,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 64,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_CrushGirlJocelyn[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 52,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 52,
        .species = SPECIES_POLIWRATH,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_TamerEvan[] = {
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 65,
        .species = SPECIES_GLIGAR,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 65,
        .species = SPECIES_LICKITUNG,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 65,
        .species = SPECIES_URSARING,
    },
};

static const struct TrainerMon sParty_PokemaniacMark2[] = {
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 43,
        .species = SPECIES_MAGMAR,
    },
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 43,
        .species = SPECIES_LAPRAS,
    },
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 43,
        .species = SPECIES_JYNX,
    },
};

static const struct TrainerMon sParty_PkmnRangerLogan[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 53,
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_TWINEEDLE, MOVE_LEECH_SEED},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 53,
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_EGG_BOMB, MOVE_LEECH_SEED, MOVE_PSYCHIC, MOVE_SLEEP_POWDER},
    },
};

static const struct TrainerMon sParty_PkmnRangerJackson[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 63,
        .species = SPECIES_TANGELA,
        .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_SHOCK_WAVE, MOVE_SLEEP_POWDER},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 63,
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_GIGA_DRAIN, MOVE_AIR_CUTTER, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 64,
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_PSYCHIC, MOVE_EGG_BOMB, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED},
    },
};

static const struct TrainerMon sParty_PkmnRangerBeth[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 51,
        .species = SPECIES_VICTREEBEL,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 51,
        .species = SPECIES_VILEPLUME,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 51,
        .species = SPECIES_BELLOSSOM,
    },
};

static const struct TrainerMon sParty_PkmnRangerKatelyn[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 66,
        .species = SPECIES_CHANSEY,
        .moves = {MOVE_EGG_BOMB, MOVE_DEFENSE_CURL, MOVE_MINIMIZE, MOVE_SOFT_BOILED},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 66,
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_EGG_BOMB, MOVE_DEFENSE_CURL, MOVE_MINIMIZE, MOVE_SOFT_BOILED},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 66,
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_EGG_BOMB, MOVE_DEFENSE_CURL, MOVE_MINIMIZE, MOVE_SOFT_BOILED},
    },
};

static const struct TrainerMon sParty_CooltrainerLeroy[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 66,
        .species = SPECIES_RHYDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 66,
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_AMNESIA, MOVE_SLACK_OFF},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 66,
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_REVERSAL},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 66,
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_VITAL_THROW, MOVE_REVENGE, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 66,
        .species = SPECIES_URSARING,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_SLEEP_TALK, MOVE_REST},
    },
};

static const struct TrainerMon sParty_CooltrainerMichelle[] = {
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 66,
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_FAKE_OUT, MOVE_FAINT_ATTACK, MOVE_TOXIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 66,
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_ICE_BEAM, MOVE_SLACK_OFF, MOVE_HYDRO_PUMP, MOVE_SHEER_COLD},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 66,
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_NONE, MOVE_DOUBLE_EDGE},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 66,
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_BOUNCE, MOVE_FIRE_BLAST, MOVE_MEGAHORN, MOVE_HI_JUMP_KICK},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 66,
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_CRUNCH, MOVE_PSYCHIC, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE},
    },
};

static const struct TrainerMon sParty_CoolCoupleLexNya[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 67,
        .species = SPECIES_MILTANK,
        .moves = {MOVE_BODY_SLAM, MOVE_MILK_DRINK, MOVE_GROWL, MOVE_DEFENSE_CURL},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 67,
        .species = SPECIES_TAUROS,
        .moves = {MOVE_BODY_SLAM, MOVE_NONE, MOVE_PURSUIT, MOVE_SWAGGER},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 67,
        .species = SPECIES_NIDOKING,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 67,
        .species = SPECIES_NIDOQUEEN,
    },
};

static const struct TrainerMon sParty_RuinManiacBrandon[] = {
    {
        .iv = 0,
        .lvl = 70,
        .species = SPECIES_ONIX,
    },
};

static const struct TrainerMon sParty_RuinManiacBenjamin[] = {
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_RHYDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_BLAST, MOVE_ROCK_SLIDE, MOVE_MEGAHORN},
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_GOLEM,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_BLAST, MOVE_ROCK_SLIDE, MOVE_SELF_DESTRUCT},
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_STEELIX,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_IRON_TAIL, MOVE_SELF_DESTRUCT},
    },
};

static const struct TrainerMon sParty_PainterEdna[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 75,
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_FAKE_OUT, MOVE_EXTREME_SPEED, MOVE_PROTECT, MOVE_MACH_PUNCH},
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 65,
        .species = SPECIES_SUDOWOODO,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 65,
        .species = SPECIES_MR_MIME,
    },
};

static const struct TrainerMon sParty_GentlemanClifford[] = {
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_MAROWAK,
    },
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_GOLDUCK,
    },
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_ARCANINE,
    },
};

static const struct TrainerMon sParty_LadySelphy[] = {
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_GRANBULL,
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_TAUNT, MOVE_TORMENT},
    },
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_PERSIAN,
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_PAY_DAY, MOVE_DOUBLE_EDGE, MOVE_TORMENT, MOVE_TAUNT},
    },
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_PERSIAN,
        .heldItem = ITEM_NUGGET,
        .moves = {MOVE_PAY_DAY, MOVE_DOUBLE_EDGE, MOVE_TORMENT, MOVE_TAUNT},
    },
};

static const struct TrainerMon sParty_RuinManiacLawson[] = {
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_ONIX,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_URSARING,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_QUAGSIRE,
    },
};

static const struct TrainerMon sParty_PsychicLaura[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 62,
        .species = SPECIES_GIRAFARIG,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 62,
        .species = SPECIES_UNOWN,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 62,
        .species = SPECIES_XATU,
    },
};

static const struct TrainerMon sParty_PkmnBreederBethany[] = {
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 65,
        .species = SPECIES_CHANSEY,
    },
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 65,
        .species = SPECIES_DITTO,
    },
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 65,
        .species = SPECIES_MAGCARGO,
    },
};

static const struct TrainerMon sParty_PkmnBreederAllison[] = {
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 62,
        .species = SPECIES_PERSIAN,
    },
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 62,
        .species = SPECIES_GRANBULL,
    },
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 62,
        .species = SPECIES_CLEFABLE,
    },
};

static const struct TrainerMon sParty_BugCatcherGarret[] = {
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_HERACROSS,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_YANMA,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_SCYTHER,
    },
};

static const struct TrainerMon sParty_BugCatcherJonah[] = {
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_YANMA,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_BEEDRILL,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_SHUCKLE,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_SCIZOR,
    },
};

static const struct TrainerMon sParty_BugCatcherVance[] = {
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_LEDIAN,
    },
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_ARIADOS,
    },
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_FORRETRESS,
    },
};

static const struct TrainerMon sParty_YoungsterNash[] = {
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_DUNSPARCE,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_SHUCKLE,
    },
    {
        .iv = 0,
        .lvl = 64,
        .species = SPECIES_VICTREEBEL,
    },
};

static const struct TrainerMon sParty_YoungsterCordell[] = {
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_FARFETCHD,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_NIDOKING,
    },
};

static const struct TrainerMon sParty_LassDalia[] = {
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_MEGANIUM,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_SKIPLOOM,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_BELLOSSOM,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_JUMPLUFF,
    },
};

static const struct TrainerMon sParty_LassJoana[] = {
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_GRANBULL,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_BUTTERFREE,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_PINSIR,
    },
};

static const struct TrainerMon sParty_CamperRiley[] = {
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_PINSIR,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_HERACROSS,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_SCIZOR,
    },
};

static const struct TrainerMon sParty_PicnickerMarcy[] = {
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_AIPOM,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_FORRETRESS,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_PARASECT,
    },
};

static const struct TrainerMon sParty_RuinManiacLayton[] = {
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_SANDSLASH,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_MAGCARGO,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_QUAGSIRE,
    },
};

static const struct TrainerMon sParty_PicnickerKelsey2[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_WIGGLYTUFF,
    },
};

static const struct TrainerMon sParty_PicnickerKelsey3[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = SPECIES_WIGGLYTUFF,
    },
};

static const struct TrainerMon sParty_PicnickerKelsey4[] = {
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_WIGGLYTUFF,
    },
};

static const struct TrainerMon sParty_CamperRicky2[] = {
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 22,
        .species = SPECIES_SQUIRTLE,
    },
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 22,
        .species = SPECIES_BELLSPROUT,
    },
};

static const struct TrainerMon sParty_CamperRicky3[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 30,
        .species = SPECIES_WARTORTLE,
    },
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 22,
        .species = SPECIES_WEEPINBELL,
    },
};

static const struct TrainerMon sParty_CamperRicky4[] = {
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 55,
        .species = SPECIES_BLASTOISE,
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 55,
        .species = SPECIES_VICTREEBEL,
    },
};

static const struct TrainerMon sParty_CamperJeff2[] = {
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 21,
        .species = SPECIES_MANKEY,
    },
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 21,
        .species = SPECIES_RATICATE,
    },
};

static const struct TrainerMon sParty_CamperJeff3[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 29,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 29,
        .species = SPECIES_RATICATE,
    },
};

static const struct TrainerMon sParty_CamperJeff4[] = {
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 54,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 54,
        .species = SPECIES_RATICATE,
    },
};

static const struct TrainerMon sParty_PicnickerIsabelle2[] = {
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 21,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 21,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 18,
        .species = SPECIES_PIDGEY,
    },
};

static const struct TrainerMon sParty_PicnickerIsabelle3[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 29,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 29,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 26,
        .species = SPECIES_PIDGEOTTO,
    },
};

static const struct TrainerMon sParty_PicnickerIsabelle4[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 47,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 47,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 50,
        .species = SPECIES_PIDGEOT,
    },
};

static const struct TrainerMon sParty_YoungsterYasu2[] = {
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 22,
        .species = SPECIES_RATTATA,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 22,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 22,
        .species = SPECIES_RATICATE,
    },
};

static const struct TrainerMon sParty_YoungsterYasu3[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 47,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 47,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 47,
        .species = SPECIES_RATICATE,
    },
};

static const struct TrainerMon sParty_EngineerBernie2[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_MAGNETON,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_MAGNETON,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_MACHOKE,
    },
};

static const struct TrainerMon sParty_GamerDarian2[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 29,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 29,
        .species = SPECIES_VULPIX,
    },
};

static const struct TrainerMon sParty_CamperChris2[] = {
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 24,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 24,
        .species = SPECIES_CHARMANDER,
    },
};

static const struct TrainerMon sParty_CamperChris3[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 29,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 29,
        .species = SPECIES_CHARMELEON,
    },
};

static const struct TrainerMon sParty_CamperChris4[] = {
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 54,
        .species = SPECIES_ARCANINE,
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 54,
        .species = SPECIES_CHARIZARD,
    },
};

static const struct TrainerMon sParty_PicnickerAlicia2[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_ODDISH,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_BELLSPROUT,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_TANGELA,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_PIDGEOTTO,
    },
};

static const struct TrainerMon sParty_PicnickerAlicia3[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_ODDISH,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_BELLSPROUT,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_TANGELA,
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = SPECIES_PIDGEOTTO,
    },
};

static const struct TrainerMon sParty_PicnickerAlicia4[] = {
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_VILEPLUME,
    },
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_VICTREEBEL,
    },
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_TANGELA,
    },
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_PIDGEOT,
    },
};

static const struct TrainerMon sParty_HikerJeremy2[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 30,
        .species = SPECIES_MACHOKE,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_ONIX,
    },
};

static const struct TrainerMon sParty_PokemaniacMark3[] = {
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 43,
        .species = SPECIES_MAGMAR,
    },
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 43,
        .species = SPECIES_LAPRAS,
    },
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 43,
        .species = SPECIES_JYNX,
    },
};

static const struct TrainerMon sParty_PokemaniacHerman2[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 29,
        .species = SPECIES_MAROWAK,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 29,
        .species = SPECIES_SLOWBRO,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 29,
        .species = SPECIES_KANGASKHAN,
    },
};

static const struct TrainerMon sParty_PokemaniacHerman3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 54,
        .species = SPECIES_MAROWAK,
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 54,
        .species = SPECIES_SLOWBRO,
    },
};

static const struct TrainerMon sParty_HikerTrent2[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 31,
        .species = SPECIES_ONIX,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 31,
        .species = SPECIES_RHYHORN,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 31,
        .species = SPECIES_DUGTRIO,
    },
};

static const struct TrainerMon sParty_LassMegan2[] = {
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 22,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 22,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 23,
        .species = SPECIES_NIDORAN_M,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 21,
        .species = SPECIES_MEOWTH,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 22,
        .species = SPECIES_PIKACHU,
    },
};

static const struct TrainerMon sParty_LassMegan3[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 63,
        .species = SPECIES_PIDGEOT,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 63,
        .species = SPECIES_RATICATE,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 63,
        .species = SPECIES_NIDOKING,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 63,
        .species = SPECIES_PERSIAN,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 63,
        .species = SPECIES_RAICHU,
    },
};

static const struct TrainerMon sParty_SuperNerdGlenn2[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_MAGMAR,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_PORYGON,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_MUK,
    },
};

static const struct TrainerMon sParty_GamerRich2[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 30,
        .species = SPECIES_GROWLITHE,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 30,
        .species = SPECIES_VULPIX,
    },
};

static const struct TrainerMon sParty_BikerJaren2[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_MUK,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 30,
        .species = SPECIES_SNEASEL,
    },
};

static const struct TrainerMon sParty_FishermanElliot2[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_CLOYSTER,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_SEAKING,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_SEADRA,
    },
};

static const struct TrainerMon sParty_RockerLuca2[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 33,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 33,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 33,
        .species = SPECIES_MAGNETON,
        .heldItem = ITEM_MAGNET,
    },
};

static const struct TrainerMon sParty_BeautySheila2[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_CLEFABLE,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_PERSIAN,
    },
};

static const struct TrainerMon sParty_BirdKeeperRobert2[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 28,
        .species = SPECIES_FEAROW,
    },
};

static const struct TrainerMon sParty_BirdKeeperRobert3[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 47,
        .species = SPECIES_PIDGEOT,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 47,
        .species = SPECIES_PIDGEOT,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 47,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 47,
        .species = SPECIES_FEAROW,
    },
};

static const struct TrainerMon sParty_PicnickerSusie2[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_WEEPINBELL,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_NIDORINO,
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = SPECIES_MEOWTH,
    },
};

static const struct TrainerMon sParty_PicnickerSusie3[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 47,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 47,
        .species = SPECIES_CLEFABLE,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 47,
        .species = SPECIES_VICTREEBEL,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 47,
        .species = SPECIES_NIDOKING,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 47,
        .species = SPECIES_PERSIAN,
    },
};

static const struct TrainerMon sParty_PicnickerSusie4[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 62,
        .species = SPECIES_POLITOED,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 62,
        .species = SPECIES_CLEFABLE,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 62,
        .species = SPECIES_VICTREEBEL,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 62,
        .species = SPECIES_NIDOKING,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 62,
        .species = SPECIES_PERSIAN,
    },
};

static const struct TrainerMon sParty_BikerLukas2[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 47,
        .species = SPECIES_BEEDRILL,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 47,
        .species = SPECIES_HITMONTOP,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 47,
        .species = SPECIES_MUK,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 47,
        .species = SPECIES_WEEZING,
    },
};

static const struct TrainerMon sParty_BirdKeeperBenny2[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 33,
        .species = SPECIES_PIDGEOT,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 33,
        .species = SPECIES_MURKROW,
    },
};

static const struct TrainerMon sParty_BirdKeeperBenny3[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_PIDGEOT,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_FEAROW,
    },
};

static const struct TrainerMon sParty_BirdKeeperMarlon2[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 30,
        .species = SPECIES_PIDGEOTTO,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 30,
        .species = SPECIES_DODUO,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 30,
        .species = SPECIES_FEAROW,
    },
};

static const struct TrainerMon sParty_BirdKeeperMarlon3[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 48,
        .species = SPECIES_PIDGEOT,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 48,
        .species = SPECIES_DODRIO,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 48,
        .species = SPECIES_FEAROW,
    },
};

static const struct TrainerMon sParty_BeautyGrace2[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_GOLDUCK,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_WIGGLYTUFF,
    },
};

static const struct TrainerMon sParty_BirdKeeperChester2[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_DODRIO,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_MURKROW,
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = SPECIES_GOLBAT,
    },
};

static const struct TrainerMon sParty_BirdKeeperChester3[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 48,
        .species = SPECIES_DODRIO,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 48,
        .species = SPECIES_MURKROW,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 48,
        .species = SPECIES_GOLBAT,
    },
};

static const struct TrainerMon sParty_PicnickerBecky2[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 32,
        .species = SPECIES_POLIWRATH,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 32,
        .species = SPECIES_RAICHU,
    },
};

static const struct TrainerMon sParty_PicnickerBecky3[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_POLIWRATH,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_RAICHU,
    },
};

static const struct TrainerMon sParty_PicnickerBecky4[] = {
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 54,
        .species = SPECIES_POLIWRATH,
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 54,
        .species = SPECIES_RAICHU,
    },
};

static const struct TrainerMon sParty_CrushKinRonMya2[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 40,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 40,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_CrushKinRonMya3[] = {
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 56,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 56,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_CrushKinRonMya4[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 60,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 60,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_BikerRuben2[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 48,
        .species = SPECIES_WEEZING,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 48,
        .species = SPECIES_CHARIZARD,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 48,
        .species = SPECIES_RHYDON,
    },
};

static const struct TrainerMon sParty_CueBallCamron2[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_MACHOKE,
    },
};

static const struct TrainerMon sParty_BikerJaxon2[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_WEEZING,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_MUK,
    },
};

static const struct TrainerMon sParty_CueBallIsaiah2[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_MACHOKE,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_CLEFABLE,
    },
};

static const struct TrainerMon sParty_CueBallCorey2[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_PRIMEAPE,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_MURKROW,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_MACHAMP,
    },
};

static const struct TrainerMon sParty_BirdKeeperJacob2[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 36,
        .species = SPECIES_FARFETCHD,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 36,
        .species = SPECIES_DODRIO,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 36,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 36,
        .species = SPECIES_MURKROW,
    },
};

static const struct TrainerMon sParty_BirdKeeperJacob3[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 57,
        .species = SPECIES_FARFETCHD,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 57,
        .species = SPECIES_DODRIO,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 57,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 57,
        .species = SPECIES_MURKROW,
    },
};

static const struct TrainerMon sParty_SwimmerFemaleAlice2[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_LAPRAS,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_SEAKING,
    },
};

static const struct TrainerMon sParty_SwimmerMaleDarrin2[] = {
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 62,
        .species = SPECIES_KINGDRA,
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 62,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 62,
        .species = SPECIES_KINGDRA,
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 62,
        .species = SPECIES_FERALIGATR,
    },
};

static const struct TrainerMon sParty_PicnickerMissy2[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_TENTACRUEL,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_SEAKING,
    },
};

static const struct TrainerMon sParty_PicnickerMissy3[] = {
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 54,
        .species = SPECIES_TENTACRUEL,
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 54,
        .species = SPECIES_SEAKING,
    },
};

static const struct TrainerMon sParty_FishermanWade2[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 57,
        .species = SPECIES_MAGIKARP,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 57,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 57,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 57,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 57,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 57,
        .species = SPECIES_GYARADOS,
    },
};

static const struct TrainerMon sParty_SwimmerMaleJack2[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 50,
        .species = SPECIES_STARMIE,
    },
};

static const struct TrainerMon sParty_SisAndBroLilIan2[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 65,
        .species = SPECIES_KINGDRA,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 65,
        .species = SPECIES_STARMIE,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 65,
        .species = SPECIES_MANTINE,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 65,
        .species = SPECIES_CORSOLA,
    },
};

static const struct TrainerMon sParty_SisAndBroLilIan3[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 70,
        .species = SPECIES_KINGDRA,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 70,
        .species = SPECIES_STARMIE,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 70,
        .species = SPECIES_MANTINE,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 70,
        .species = SPECIES_CORSOLA,
    },
};

static const struct TrainerMon sParty_SwimmerMaleFinn2[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 60,
        .species = SPECIES_STARMIE,
    },
};

static const struct TrainerMon sParty_CrushGirlSharon2[] = {
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 61,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 61,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_CrushGirlSharon3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 66,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 66,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 66,
        .species = SPECIES_HERACROSS,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_CrushGirlTanya2[] = {
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 65,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 65,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 65,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_CrushGirlTanya3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 60,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 60,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 60,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_BlackBeltShea2[] = {
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 65,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 65,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 65,
        .species = SPECIES_HARIYAMA,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_BlackBeltShea3[] = {
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 65,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 65,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 65,
        .species = SPECIES_HARIYAMA,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_BlackBeltHugh2[] = {
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 65,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 65,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 65,
        .species = SPECIES_MEDICHAM,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_BlackBeltHugh3[] = {
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 65,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 65,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 65,
        .species = SPECIES_MEDICHAM,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_CrushKinMikKia2[] = {
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 62,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 62,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 62,
        .species = SPECIES_POLIWRATH,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 62,
        .species = SPECIES_BLAZIKEN,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_CrushKinMikKia3[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 67,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 67,
        .species = SPECIES_PRIMEAPE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_TuberAmira2[] = {
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_POLIWHIRL,
    },
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_POLITOED,
    },
    {
        .iv = 0,
        .lvl = 60,
        .species = SPECIES_SEADRA,
    },
};

static const struct TrainerMon sParty_TwinsJoyMeg2[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 69,
        .species = SPECIES_CLEFAIRY,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 69,
        .species = SPECIES_JIGGLYPUFF,
    },
};

static const struct TrainerMon sParty_PainterRayna2[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 75,
        .species = SPECIES_SMEARGLE,
        .moves = {MOVE_CROSS_CHOP, MOVE_MEGAHORN, MOVE_DOUBLE_EDGE, MOVE_SELF_DESTRUCT},
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 62,
        .species = SPECIES_SUDOWOODO,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 62,
        .species = SPECIES_LUDICOLO,
    },
};

static const struct TrainerMon sParty_YoungsterDestin2[] = {
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_FURRET,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_STANTLER,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_FERALIGATR,
    },
};

static const struct TrainerMon sParty_PkmnBreederAlize2[] = {
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 63,
        .species = SPECIES_RAICHU,
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 63,
        .species = SPECIES_TOGETIC,
    },
    {
        .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
        .lvl = 63,
        .species = SPECIES_AZUMARILL,
    },
};

static const struct TrainerMon sParty_YoungCoupleGiaJes2[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 30,
        .species = SPECIES_NIDORINA,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 30,
        .species = SPECIES_NIDORINO,
    },
};

static const struct TrainerMon sParty_YoungCoupleGiaJes3[] = {
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 55,
        .species = SPECIES_NIDOKING,
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 55,
        .species = SPECIES_NIDOQUEEN,
    },
};

static const struct TrainerMon sParty_BirdKeeperMilo2[] = {
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_SKARMORY,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_PIDGEOT,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_FARFETCHD,
    },
};

static const struct TrainerMon sParty_BirdKeeperChaz2[] = {
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_XATU,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_FEAROW,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_SWELLOW,
    },
};

static const struct TrainerMon sParty_BirdKeeperHarold2[] = {
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_MURKROW,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_NOCTOWL,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_DODRIO,
    },
};

static const struct TrainerMon sParty_SwimmerFemaleNicole2[] = {
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_AZUMARILL,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_LANTURN,
    },
    {
        .iv = 0,
        .lvl = 65,
        .species = SPECIES_QWILFISH,
    },
};

static const struct TrainerMon sParty_PsychicJaclyn2[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 62,
        .species = SPECIES_XATU,
        .moves = {MOVE_PSYCHIC, MOVE_SKY_ATTACK, MOVE_FUTURE_SIGHT, MOVE_WISH},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 62,
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_AMNESIA, MOVE_SLACK_OFF},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 62,
        .species = SPECIES_ALAKAZAM,
        .moves = {MOVE_PSYCHIC, MOVE_FUTURE_SIGHT, MOVE_RECOVER, MOVE_REFLECT},
    },
};

static const struct TrainerMon sParty_SwimmerMaleSamir2[] = {
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_OCTILLERY,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_GYARADOS,
    },
    {
        .iv = 0,
        .lvl = 62,
        .species = SPECIES_FERALIGATR,
    },
};

static const struct TrainerMon sParty_HikerEarl2[] = {
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_STEELIX,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_MACHAMP,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_SKARMORY,
    },
};

static const struct TrainerMon sParty_RuinManiacLarry2[] = {
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_STEELIX,
    },
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_HERACROSS,
    },
    {
        .iv = 0,
        .lvl = 68,
        .species = SPECIES_CROBAT,
    },
};

static const struct TrainerMon sParty_PokemaniacHector2[] = {
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 63,
        .species = SPECIES_RHYDON,
    },
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 63,
        .species = SPECIES_KANGASKHAN,
    },
    {
        .iv = TRAINER_PARTY_IVS(5, 5, 5, 5, 5, 5),
        .lvl = 63,
        .species = SPECIES_TYPHLOSION,
    },
};

static const struct TrainerMon sParty_PsychicDario2[] = {
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 71,
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_CRUNCH, MOVE_PSYCHIC, MOVE_ODOR_SLEUTH, MOVE_AGILITY},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 71,
        .species = SPECIES_NINETALES,
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 71,
        .species = SPECIES_MR_MIME,
    },
};

static const struct TrainerMon sParty_PsychicRodette2[] = {
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 67,
        .species = SPECIES_XATU,
        .moves = {MOVE_PSYCHIC, MOVE_CONFUSE_RAY, MOVE_WISH, MOVE_FUTURE_SIGHT},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 67,
        .species = SPECIES_HYPNO,
        .moves = {MOVE_PSYCHIC, MOVE_DISABLE, MOVE_PSYCH_UP, MOVE_FUTURE_SIGHT},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 67,
        .species = SPECIES_WOBBUFFET,
        .moves = {MOVE_PSYCHIC, MOVE_HYPNOSIS, MOVE_PSYCH_UP, MOVE_FUTURE_SIGHT},
    },
};

static const struct TrainerMon sParty_JugglerMason2[] = {
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_HYPNO,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_ALAKAZAM,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_ELECTRODE,
    },
    {
        .iv = 0,
        .lvl = 63,
        .species = SPECIES_FORRETRESS,
    },
};

static const struct TrainerMon sParty_PkmnRangerNicolas2[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 64,
        .species = SPECIES_PARASECT,
        .moves = {MOVE_SPORE, MOVE_GIGA_DRAIN, MOVE_TWINEEDLE, MOVE_BRICK_BREAK},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 64,
        .species = SPECIES_VICTREEBEL,
        .moves = {MOVE_LEAF_BLADE, MOVE_SLUDGE_BOMB, MOVE_SLEEP_POWDER, MOVE_STUN_SPORE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 64,
        .species = SPECIES_EXEGGUTOR,
    },
};

static const struct TrainerMon sParty_PkmnRangerMadeline2[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 64,
        .species = SPECIES_BELLOSSOM,
        .moves = {MOVE_PETAL_DANCE, MOVE_SLUDGE_BOMB, MOVE_SWEET_SCENT, MOVE_POISON_POWDER},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 64,
        .species = SPECIES_VILEPLUME,
        .moves = {MOVE_PETAL_DANCE, MOVE_MOONLIGHT, MOVE_SLUDGE_BOMB, MOVE_STUN_SPORE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 64,
        .species = SPECIES_VICTREEBEL,
    },
};

static const struct TrainerMon sParty_CrushGirlCyndy2[] = {
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 64,
        .species = SPECIES_HERACROSS,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 64,
        .species = SPECIES_HITMONTOP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = TRAINER_PARTY_IVS(8, 8, 8, 8, 8, 8),
        .lvl = 64,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMon sParty_TamerEvan2[] = {
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 65,
        .species = SPECIES_GLIGAR,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 65,
        .species = SPECIES_LICKITUNG,
    },
    {
        .iv = TRAINER_PARTY_IVS(7, 7, 7, 7, 7, 7),
        .lvl = 65,
        .species = SPECIES_URSARING,
    },
};

static const struct TrainerMon sParty_PkmnRangerJackson2[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 63,
        .species = SPECIES_TANGELA,
        .moves = {MOVE_GIGA_DRAIN, MOVE_ANCIENT_POWER, MOVE_SHOCK_WAVE, MOVE_SLEEP_POWDER},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 63,
        .species = SPECIES_JUMPLUFF,
        .moves = {MOVE_GIGA_DRAIN, MOVE_AIR_CUTTER, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 64,
        .species = SPECIES_EXEGGUTOR,
        .moves = {MOVE_PSYCHIC, MOVE_EGG_BOMB, MOVE_SLEEP_POWDER, MOVE_LEECH_SEED},
    },
};

static const struct TrainerMon sParty_PkmnRangerKatelyn2[] = {
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 70,
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_EGG_BOMB, MOVE_DEFENSE_CURL, MOVE_MINIMIZE, MOVE_SOFT_BOILED},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 70,
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_EGG_BOMB, MOVE_DEFENSE_CURL, MOVE_MINIMIZE, MOVE_SOFT_BOILED},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 70,
        .species = SPECIES_BLISSEY,
        .moves = {MOVE_EGG_BOMB, MOVE_DEFENSE_CURL, MOVE_MINIMIZE, MOVE_SOFT_BOILED},
    },
};

static const struct TrainerMon sParty_CooltrainerLeroy2[] = {
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 70,
        .species = SPECIES_RHYDON,
        .moves = {MOVE_EARTHQUAKE, MOVE_MEGAHORN, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 70,
        .species = SPECIES_SLOWBRO,
        .moves = {MOVE_PSYCHIC, MOVE_SURF, MOVE_AMNESIA, MOVE_SLACK_OFF},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 70,
        .species = SPECIES_KANGASKHAN,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_EARTHQUAKE, MOVE_REVERSAL},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 70,
        .species = SPECIES_MACHAMP,
        .moves = {MOVE_CROSS_CHOP, MOVE_VITAL_THROW, MOVE_REVENGE, MOVE_EARTHQUAKE},
    },
    {
        .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
        .lvl = 70,
        .species = SPECIES_URSARING,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_CRUNCH, MOVE_SLEEP_TALK, MOVE_REST},
    },
};

static const struct TrainerMon sParty_CooltrainerMichelle2[] = {
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 70,
        .species = SPECIES_PERSIAN,
        .moves = {MOVE_DOUBLE_EDGE, MOVE_FAKE_OUT, MOVE_FAINT_ATTACK, MOVE_TOXIC},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 70,
        .species = SPECIES_DEWGONG,
        .moves = {MOVE_ICE_BEAM, MOVE_SLACK_OFF, MOVE_HYDRO_PUMP, MOVE_SHEER_COLD},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 70,
        .species = SPECIES_DONPHAN,
        .moves = {MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_NONE, MOVE_DOUBLE_EDGE},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 70,
        .species = SPECIES_RAPIDASH,
        .moves = {MOVE_BOUNCE, MOVE_FIRE_BLAST, MOVE_MEGAHORN, MOVE_HI_JUMP_KICK},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 70,
        .species = SPECIES_GIRAFARIG,
        .moves = {MOVE_CRUNCH, MOVE_PSYCHIC, MOVE_DOUBLE_EDGE, MOVE_EARTHQUAKE},
    },
};
static const struct TrainerMon sParty_DragonTamer[] = {    
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 88,
        .species = SPECIES_STARMIE,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_ICE_BEAM, MOVE_THUNDER_WAVE, MOVE_SURF, MOVE_PSYCHIC},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 88,
        .species = SPECIES_SCIZOR,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_METEOR_MASH, MOVE_TWINEEDLE, MOVE_AGILITY, MOVE_BRICK_BREAK},
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),

    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 85,
        .species = SPECIES_MEWTWO,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_ICE_BEAM, MOVE_FIRE_BLAST},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),

    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 88,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_CROSS_CHOP, MOVE_BULK_UP},
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),

    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 88,
        .species = SPECIES_AERODACTYL,
        .heldItem = ITEM_CHOICE_BAND,
        .moves = {MOVE_ROCK_SLIDE, MOVE_EARTHQUAKE, MOVE_SKY_ATTACK, MOVE_DOUBLE_EDGE},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),

    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 91,
        .species = SPECIES_METAGROSS,
        .heldItem = ITEM_LUM_BERRY,
        .moves = {MOVE_METEOR_MASH, MOVE_EARTHQUAKE, MOVE_PSYCHIC, MOVE_AGILITY},
        .ev = TRAINER_PARTY_EVS(252, 128, 0, 0, 128, 0),

    },
};

static const struct TrainerMon sParty_CoolCoupleLexNya2[] = {
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 67,
        .species = SPECIES_MILTANK,
        .moves = {MOVE_BODY_SLAM, MOVE_MILK_DRINK, MOVE_GROWL, MOVE_DEFENSE_CURL},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 67,
        .species = SPECIES_TAUROS,
        .moves = {MOVE_TAKE_DOWN, MOVE_SCARY_FACE, MOVE_PURSUIT, MOVE_SWAGGER},
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 67,
        .species = SPECIES_NIDOKING
    },
    {
        .iv = TRAINER_PARTY_IVS(28, 28, 28, 28, 28, 28),
        .lvl = 67,
        .species = SPECIES_NIDOQUEEN,
    },
};

static const struct TrainerMon sParty_BugCatcherColton2[] = {
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 19,
        .species = SPECIES_BUTTERFREE,
    },
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 19,
        .species = SPECIES_BEEDRILL,
    },
    {
        .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
        .lvl = 19,
        .heldItem = ITEM_SILVER_POWDER,
        .species = SPECIES_BUTTERFREE,
    },
};

static const struct TrainerMon sParty_BugCatcherColton3[] = {
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 27,
        .species = SPECIES_BUTTERFREE,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 27,
        .species = SPECIES_BEEDRILL,
    },
    {
        .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
        .lvl = 27,
        .heldItem = ITEM_SILVER_POWDER,
        .species = SPECIES_BUTTERFREE,
    },
};

static const struct TrainerMon sParty_BugCatcherColton4[] = {
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 51,
        .species = SPECIES_BUTTERFREE,
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 54,
        .species = SPECIES_BEEDRILL,
    },
    {
        .iv = TRAINER_PARTY_IVS(20, 20, 20, 20, 20, 20),
        .lvl = 51,
        .heldItem = ITEM_SILVER_POWDER,
        .species = SPECIES_BUTTERFREE,
    },
};

static const struct TrainerMon sParty_SwimmerMaleMatthew2[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_POLITOED,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 49,
        .species = SPECIES_POLIWRATH,
    },
};

static const struct TrainerMon sParty_SwimmerMaleTony2[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 60,
        .species = SPECIES_SEADRA,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 60,
        .species = SPECIES_KINGDRA,
    },
};

static const struct TrainerMon sParty_SwimmerFemaleMelissa2[] = {
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 60,
        .species = SPECIES_POLIWRATH,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 60,
        .species = SPECIES_DEWGONG,
    },
    {
        .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
        .lvl = 60,
        .species = SPECIES_LANTURN,
    },
};

static const struct TrainerMon sParty_EliteFourLorelei2[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 70,
        .species = SPECIES_SLOWKING,
        .heldItem = ITEM_QUICK_CLAW,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_BLIZZARD, MOVE_PSYCHIC, MOVE_HAIL, MOVE_PROTECT},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 70,
        .species = SPECIES_PILOSWINE,
        .heldItem = ITEM_QUICK_CLAW,
        .moves = {MOVE_BLIZZARD, MOVE_EARTHQUAKE, MOVE_HAIL, MOVE_ROCK_SLIDE},
        .ev = TRAINER_PARTY_EVS(252, 128, 0, 0, 128, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 71,
        .species = SPECIES_CLOYSTER,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_BLIZZARD, MOVE_HAIL, MOVE_EXPLOSION, MOVE_PROTECT},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 71,
        .species = SPECIES_DEWGONG,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .moves = {MOVE_BLIZZARD, MOVE_SLACK_OFF, MOVE_HYDRO_PUMP, MOVE_PROTECT},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 0, 252),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 71,
        .species = SPECIES_JYNX,
        .heldItem = ITEM_BRIGHT_POWDER,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_ICE_BEAM, MOVE_PSYCHIC, MOVE_LOVELY_KISS, MOVE_SHADOW_BALL},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 72,
        .species = SPECIES_LAPRAS,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_BLIZZARD, MOVE_SURF, MOVE_PROTECT, MOVE_THUNDERBOLT},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
    },
};

static const struct TrainerMon sParty_EliteFourBruno2[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 72,
        .species = SPECIES_HITMONCHAN,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_SKY_UPPERCUT, MOVE_MACH_PUNCH, MOVE_ROCK_TOMB, MOVE_ICE_PUNCH},
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 70,
        .species = SPECIES_URSARING,
        .heldItem = ITEM_AGUAV_BERRY,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_EARTHQUAKE, MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_CRUNCH},
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 71,
        .species = SPECIES_STEELIX,
        .heldItem = ITEM_QUICK_CLAW,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_EARTHQUAKE, MOVE_IRON_TAIL, MOVE_CRUNCH, MOVE_ROCK_TOMB},
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 71,
        .species = SPECIES_HERACROSS,
        .heldItem = ITEM_CHOICE_BAND,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_CROSS_CHOP, MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 72,
        .species = SPECIES_HITMONLEE,
        .heldItem = ITEM_SALAC_BERRY,
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_EARTHQUAKE, MOVE_ENDURE, MOVE_FAINT_ATTACK, MOVE_HI_JUMP_KICK},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 73,
        .species = SPECIES_MACHAMP,
        .heldItem = ITEM_QUICK_CLAW,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BULK_UP, MOVE_EARTHQUAKE, MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE},
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    },
};

static const struct TrainerMon sParty_EliteFourAgatha2[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 71,
        .species = SPECIES_CROBAT,
        .heldItem = ITEM_FOCUS_BAND,
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SLUDGE_BOMB, MOVE_TOXIC, MOVE_DOUBLE_TEAM, MOVE_CONFUSE_RAY},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 71,
        .species = SPECIES_MAROWAK,
        .heldItem = ITEM_THICK_CLUB,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_SWORDS_DANCE, MOVE_EARTHQUAKE, MOVE_ROCK_SLIDE, MOVE_DOUBLE_EDGE},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 72,
        .species = SPECIES_DUSCLOPS,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .moves = {MOVE_WILL_O_WISP, MOVE_PAIN_SPLIT, MOVE_SHADOW_BALL, MOVE_ICE_BEAM},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 70,
        .species = SPECIES_MISDREAVUS,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_SHADOW_BALL, MOVE_MEAN_LOOK, MOVE_PERISH_SONG, MOVE_DESTINY_BOND},
        .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 72,
        .species = SPECIES_ARBOK,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_SLUDGE_BOMB, MOVE_EARTHQUAKE, MOVE_SUBSTITUTE, MOVE_GLARE},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 73,
        .species = SPECIES_GENGAR,
        .heldItem = ITEM_LUM_BERRY,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_SHADOW_BALL, MOVE_PSYCHIC, MOVE_THUNDERBOLT, MOVE_GIGA_DRAIN},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
    },
};

static const struct TrainerMon sParty_EliteFourLance2[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 73,
        .species = SPECIES_FLYGON,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_EARTHQUAKE, MOVE_SIGNAL_BEAM, MOVE_DRAGON_CLAW, MOVE_CRUNCH},
        .ev = TRAINER_PARTY_EVS(0, 128, 0, 252, 128, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 73,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_CHOICE_BAND,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_BOUNCE, MOVE_EARTHQUAKE, MOVE_SURF, MOVE_DOUBLE_EDGE},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 0, 252),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 74,
        .species = SPECIES_CHARIZARD,
        .heldItem = ITEM_SALAC_BERRY,
        .moves = {MOVE_FIRE_BLAST, MOVE_BELLY_DRUM, MOVE_EARTHQUAKE, MOVE_BODY_SLAM},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 73,
        .species = SPECIES_KINGDRA,
        .heldItem = ITEM_CHESTO_BERRY,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_DRAGON_BREATH, MOVE_HYDRO_PUMP, MOVE_ICE_BEAM, MOVE_REST},
        .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 73,
        .species = SPECIES_AERODACTYL,
        .heldItem = ITEM_SOFT_SAND,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_DOUBLE_EDGE, MOVE_ROCK_SLIDE, MOVE_SKY_ATTACK, MOVE_EARTHQUAKE},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 75,
        .species = SPECIES_DRAGONITE,
        .heldItem = ITEM_PERSIM_BERRY,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_EARTHQUAKE, MOVE_OUTRAGE, MOVE_SKY_ATTACK, MOVE_EXTREME_SPEED},
        .ev = TRAINER_PARTY_EVS(252, 128, 0, 0, 128, 0),
    },
};

static const struct TrainerMon sParty_ChampionRematchSquirtle[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 78,
        .species = SPECIES_ALAKAZAM,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .heldItem = ITEM_LUM_BERRY,
        .moves = {MOVE_PSYCHIC, MOVE_ICE_PUNCH, MOVE_SHADOW_BALL, MOVE_REFLECT},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 75,
        .species = SPECIES_HERACROSS,
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .heldItem = ITEM_SALAC_BERRY,
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 76,
        .species = SPECIES_TYRANITAR,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .heldItem = ITEM_LUM_BERRY,
        .moves = {MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_CRUNCH},
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 77,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_EXTREME_SPEED, MOVE_FIRE_BLAST, MOVE_CRUNCH, MOVE_TOXIC},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 77,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_QUICK_CLAW,
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .moves = {MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 77,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_BOUNCE},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
    },
};

static const struct TrainerMon sParty_ChampionRematchBulbasaur[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 78,
        .species = SPECIES_ALAKAZAM,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .heldItem = ITEM_LUM_BERRY,
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_THUNDER_PUNCH, MOVE_REFLECT},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 75,
        .species = SPECIES_HERACROSS,
        .heldItem = ITEM_SALAC_BERRY,
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 76,
        .species = SPECIES_TYRANITAR,
        .heldItem = ITEM_LUM_BERRY,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_CRUNCH},
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 77,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_EXTREME_SPEED, MOVE_FIRE_BLAST, MOVE_CRUNCH, MOVE_TOXIC},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 77,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_QUICK_CLAW,
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .moves = {MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 77,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_BOUNCE},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
    },
};

static const struct TrainerMon sParty_ChampionRematchCharmander[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 78,
        .species = SPECIES_ALAKAZAM,
        .heldItem = ITEM_LUM_BERRY,
        .nature = TRAINER_PARTY_NATURE(NATURE_MODEST),
        .moves = {MOVE_PSYCHIC, MOVE_SHADOW_BALL, MOVE_FIRE_PUNCH, MOVE_REFLECT},
        .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 75,
        .species = SPECIES_HERACROSS,
        .heldItem = ITEM_SALAC_BERRY,
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_MEGAHORN, MOVE_EARTHQUAKE, MOVE_CROSS_CHOP, MOVE_ROCK_SLIDE},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 76,
        .species = SPECIES_TYRANITAR,
        .heldItem = ITEM_LUM_BERRY,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_ROCK_SLIDE, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_CRUNCH},
        .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 77,
        .species = SPECIES_ARCANINE,
        .heldItem = ITEM_LEFTOVERS,
        .moves = {MOVE_EXTREME_SPEED, MOVE_FIRE_BLAST, MOVE_CRUNCH, MOVE_TOXIC},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 77,
        .species = SPECIES_EXEGGUTOR,
        .heldItem = ITEM_QUICK_CLAW,
        .nature = TRAINER_PARTY_NATURE(NATURE_CALM),
        .moves = {MOVE_GIGA_DRAIN, MOVE_PSYCHIC, MOVE_SLEEP_POWDER, MOVE_LIGHT_SCREEN},
        .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 0),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 77,
        .species = SPECIES_GYARADOS,
        .heldItem = ITEM_FOCUS_BAND,
        .moves = {MOVE_HYDRO_PUMP, MOVE_DRAGON_DANCE, MOVE_EARTHQUAKE, MOVE_BOUNCE},
        .ev = TRAINER_PARTY_EVS(0, 252, 0, 0, 0, 252),
    },
};

static const struct TrainerMon sParty_CueBallPaxton[] = {
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 51,
        .species = SPECIES_WEEZING,
        .moves = {MOVE_SLUDGE_BOMB, MOVE_THUNDERBOLT, MOVE_FLAMETHROWER, MOVE_EXPLOSION},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 52,
        .species = SPECIES_PINSIR,
        .heldItem = ITEM_LEFTOVERS,
        .nature = TRAINER_PARTY_NATURE(NATURE_JOLLY),
        .moves = {MOVE_MEGAHORN, MOVE_SUBMISSION, MOVE_BULK_UP, MOVE_ROCK_SLIDE},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 51,
        .species = SPECIES_HOUNDOOM,
        .moves = {MOVE_CRUNCH, MOVE_FIRE_BLAST, MOVE_ROCK_SMASH, MOVE_IRON_TAIL},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 51,
        .species = SPECIES_MACHAMP,
        .nature = TRAINER_PARTY_NATURE(NATURE_ADAMANT),
        .moves = {MOVE_CROSS_CHOP, MOVE_BULK_UP, MOVE_EARTHQUAKE, MOVE_ROCK_TOMB},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },
    {
        .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
        .lvl = 51,
        .species = SPECIES_SNEASEL,
        .heldItem = ITEM_NEVER_MELT_ICE,
        .moves = {MOVE_ICE_BEAM, MOVE_FAINT_ATTACK, MOVE_SURF, MOVE_BRICK_BREAK},
        .ev = TRAINER_PARTY_EVS(40, 40, 40, 40, 40, 40),
    },
}; //PAXTON BUFFED
