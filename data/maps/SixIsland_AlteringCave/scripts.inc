# 1 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 2 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_MapScripts::
# 3 "data/maps/SixIsland_AlteringCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_AlteringCave_OnTransition
# 4 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.byte 0
# 5 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 6 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_OnTransition::
# 7 "data/maps/SixIsland_AlteringCave/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND_ALTERING_CAVE
# 8 "data/maps/SixIsland_AlteringCave/scripts.pory"
	call SixIsland_OutcastIsland_UpdateAlteringCaveMewtwo
# 9 "data/maps/SixIsland_AlteringCave/scripts.pory"
	end
# 10 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 11 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_EventScript_Spike::
# 12 "data/maps/SixIsland_AlteringCave/scripts.pory"
	lock
# 13 "data/maps/SixIsland_AlteringCave/scripts.pory"
	faceplayer
# 14 "data/maps/SixIsland_AlteringCave/scripts.pory"
	goto_if_set FLAG_SPIKE_DEFEATED, SixIsland_AlteringCave_EventScript_RematchSpike
# 15 "data/maps/SixIsland_AlteringCave/scripts.pory"
	msgbox SixIsland_AlteringCave_Text_Spike, MSGBOX_YESNO
# 16 "data/maps/SixIsland_AlteringCave/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SixIsland_AlteringCave_EventScript_NoSpike
# 17 "data/maps/SixIsland_AlteringCave/scripts.pory"
	trainerbattle_single TRAINER_SPIKE, SixIsland_AlteringCave_Text_YesSpike, SixIsland_AlteringCave_Text_SpikeDefeat, SixIsland_AlteringCave_EventScript_PostSpike, NO_MUSIC
# 18 "data/maps/SixIsland_AlteringCave/scripts.pory"
	release
# 19 "data/maps/SixIsland_AlteringCave/scripts.pory"
	end
# 20 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 21 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_EventScript_PostSpike::
# 22 "data/maps/SixIsland_AlteringCave/scripts.pory"
	msgbox SixIsland_AlteringCave_Text_SpikePostBattle
# 23 "data/maps/SixIsland_AlteringCave/scripts.pory"
	setflag FLAG_SPIKE_DEFEATED
# 24 "data/maps/SixIsland_AlteringCave/scripts.pory"
	cleartrainerflag TRAINER_SPIKE
# 25 "data/maps/SixIsland_AlteringCave/scripts.pory"
	release
# 26 "data/maps/SixIsland_AlteringCave/scripts.pory"
	end
# 27 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 28 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_EventScript_CantRematchSpike::
# 29 "data/maps/SixIsland_AlteringCave/scripts.pory"
	msgbox SixIsland_AlteringCave_Text_SpikePostBattle
# 30 "data/maps/SixIsland_AlteringCave/scripts.pory"
	release
# 31 "data/maps/SixIsland_AlteringCave/scripts.pory"
	end
# 32 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 33 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_EventScript_NoSpike::
# 34 "data/maps/SixIsland_AlteringCave/scripts.pory"
	msgbox SixIsland_AlteringCave_Text_NoSpike
# 35 "data/maps/SixIsland_AlteringCave/scripts.pory"
	release
# 36 "data/maps/SixIsland_AlteringCave/scripts.pory"
	end
# 37 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 38 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_EventScript_RematchSpike::
# 39 "data/maps/SixIsland_AlteringCave/scripts.pory"
	msgbox SixIsland_AlteringCave_Text_RematchSpike, MSGBOX_YESNO
# 40 "data/maps/SixIsland_AlteringCave/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SixIsland_AlteringCave_EventScript_NoSpike
# 41 "data/maps/SixIsland_AlteringCave/scripts.pory"
	trainerbattle_single TRAINER_SPIKE, SixIsland_AlteringCave_Text_YesRematchSpike, SixIsland_AlteringCave_Text_RematchSpikeDefeat, SixIsland_AlteringCave_EventScript_PostRematchSpike, NO_MUSIC
# 42 "data/maps/SixIsland_AlteringCave/scripts.pory"
	release
# 43 "data/maps/SixIsland_AlteringCave/scripts.pory"
	end
# 44 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 45 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_EventScript_PostRematchSpike::
# 46 "data/maps/SixIsland_AlteringCave/scripts.pory"
	msgbox SixIsland_AlteringCave_Text_RematchSpikeDefeat
# 47 "data/maps/SixIsland_AlteringCave/scripts.pory"
	cleartrainerflag TRAINER_SPIKE
# 48 "data/maps/SixIsland_AlteringCave/scripts.pory"
	release
# 49 "data/maps/SixIsland_AlteringCave/scripts.pory"
	end
# 50 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 51 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 52 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_EventScript_Credits::
# 53 "data/maps/SixIsland_AlteringCave/scripts.pory"
	msgbox SixIsland_AlteringCave_Text_Credits, MSGBOX_SIGN
# 54 "data/maps/SixIsland_AlteringCave/scripts.pory"
	release
# 55 "data/maps/SixIsland_AlteringCave/scripts.pory"
	end
# 56 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 57 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_EventScript_Credits2::
# 58 "data/maps/SixIsland_AlteringCave/scripts.pory"
	msgbox SixIsland_AlteringCave_Text_Credits2, MSGBOX_SIGN
# 59 "data/maps/SixIsland_AlteringCave/scripts.pory"
	release
# 60 "data/maps/SixIsland_AlteringCave/scripts.pory"
	end
# 61 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 62 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_EventScript_Credits3::
# 63 "data/maps/SixIsland_AlteringCave/scripts.pory"
	msgbox SixIsland_AlteringCave_Text_Credits3, MSGBOX_SIGN
# 64 "data/maps/SixIsland_AlteringCave/scripts.pory"
	release
# 65 "data/maps/SixIsland_AlteringCave/scripts.pory"
	end
# 66 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 67 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_EventScript_Credits4::
# 68 "data/maps/SixIsland_AlteringCave/scripts.pory"
	msgbox SixIsland_AlteringCave_Text_Credits4, MSGBOX_SIGN
# 69 "data/maps/SixIsland_AlteringCave/scripts.pory"
	release
# 70 "data/maps/SixIsland_AlteringCave/scripts.pory"
	end
# 71 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 72 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_Text_Credits::
# 73 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "FRLG REIGNITED AND REGROWN\n"
# 74 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "FULL CREDITS:\p"
# 75 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "HACK CREATOR: SPIKECATION\n"
# 76 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "TEXT ASSISTER: THEREALTEAMPLAYER$"
# 77 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 78 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_Text_Credits2::
# 79 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "HACKS THAT HELPED IN MAKING\n"
# 80 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "THIS HACK:\p"
# 81 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "FRLG PLUS:\n"
# 82 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "DEOKISHISU\p"
# 83 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "EMERALD AND YELLOW LEGACY:\n"
# 84 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "SMITHPLAYSPOKEMON and CRZ SHADOWS\p"
# 85 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "CHARLES FIRERED\n"
# 86 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "CELIA'S STUPID ROMHACK\l"
# 87 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "POKEMON FIREGOLD\l"
# 88 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "POKEMON CRYSTAL DUST$"
# 89 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 90 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_Text_Credits3::
# 91 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "PLAYTESTERS:\p"
# 92 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "BLAZETORRENT\n"
# 93 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "BASEDTUXEDOMAN\l"
# 94 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "KEWAUN$"
# 95 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 96 "data/maps/SixIsland_AlteringCave/scripts.pory"

# 97 "data/maps/SixIsland_AlteringCave/scripts.pory"
SixIsland_AlteringCave_Text_Credits4::
# 98 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "OTHER:\p"
# 99 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "PRET TEAM\n"
# 100 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "TEAM AQUA HIDEOUT\l"
# 101 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "PROJECT PALLADIUM TEAM\l"
# 102 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "INVIS (HMA DISCORD)\p"
# 103 "data/maps/SixIsland_AlteringCave/scripts.pory"
	.string "MORE ON THE GITHUB\n$"
