# 1 "data/maps/SilphCo_10F/scripts.pory"

# 2 "data/maps/SilphCo_10F/scripts.pory"
SilphCo_10F_MapScripts::
# 3 "data/maps/SilphCo_10F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_10F_OnLoad
# 4 "data/maps/SilphCo_10F/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_10F/scripts.pory"

# 6 "data/maps/SilphCo_10F/scripts.pory"
SilphCo_10F_OnLoad::
# 7 "data/maps/SilphCo_10F/scripts.pory"
	call_if_unset FLAG_SILPH_10F_DOOR, EventScript_Close10FDoor
# 8 "data/maps/SilphCo_10F/scripts.pory"
	end
# 9 "data/maps/SilphCo_10F/scripts.pory"

# 10 "data/maps/SilphCo_10F/scripts.pory"
SilphCo_10F_EventScript_WorkerF::
# 11 "data/maps/SilphCo_10F/scripts.pory"
	lock
# 12 "data/maps/SilphCo_10F/scripts.pory"
	faceplayer
# 13 "data/maps/SilphCo_10F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_10F_EventScript_WorkerFRocketsGone
# 14 "data/maps/SilphCo_10F/scripts.pory"
	msgbox SilphCo_10F_Text_WaaaImScared
# 15 "data/maps/SilphCo_10F/scripts.pory"
	release
# 16 "data/maps/SilphCo_10F/scripts.pory"
	end
# 17 "data/maps/SilphCo_10F/scripts.pory"

# 18 "data/maps/SilphCo_10F/scripts.pory"
SilphCo_10F_EventScript_WorkerFRocketsGone::
# 19 "data/maps/SilphCo_10F/scripts.pory"
	msgbox SilphCo_10F_Text_KeepMeCryingASecret
# 20 "data/maps/SilphCo_10F/scripts.pory"
	release
# 21 "data/maps/SilphCo_10F/scripts.pory"
	end
# 22 "data/maps/SilphCo_10F/scripts.pory"

# 23 "data/maps/SilphCo_10F/scripts.pory"
SilphCo_10F_EventScript_FloorSign::
# 24 "data/maps/SilphCo_10F/scripts.pory"
	msgbox SilphCo_10F_Text_FloorSign, MSGBOX_SIGN
# 25 "data/maps/SilphCo_10F/scripts.pory"
	end
# 26 "data/maps/SilphCo_10F/scripts.pory"

# 27 "data/maps/SilphCo_10F/scripts.pory"
SilphCo_10F_EventScript_Travis::
# 28 "data/maps/SilphCo_10F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_TRAVIS, SilphCo_10F_Text_TravisIntro, SilphCo_10F_Text_TravisDefeat
# 29 "data/maps/SilphCo_10F/scripts.pory"
	msgbox SilphCo_10F_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 30 "data/maps/SilphCo_10F/scripts.pory"
	end
# 31 "data/maps/SilphCo_10F/scripts.pory"

# 32 "data/maps/SilphCo_10F/scripts.pory"
SilphCo_10F_EventScript_Grunt::
# 33 "data/maps/SilphCo_10F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_39, SilphCo_10F_Text_GruntIntro, SilphCo_10F_Text_GruntDefeat
# 34 "data/maps/SilphCo_10F/scripts.pory"
	msgbox SilphCo_10F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
# 35 "data/maps/SilphCo_10F/scripts.pory"
	end
# 36 "data/maps/SilphCo_10F/scripts.pory"
	
# 37 "data/maps/SilphCo_10F/scripts.pory"
SilphCo_10F_EventScript_WorkerBro:: 
# 38 "data/maps/SilphCo_10F/scripts.pory"
	msgbox SilphCo_10F_Text_WorkerBro, MSGBOX_NPC
# 39 "data/maps/SilphCo_10F/scripts.pory"
	end
# 40 "data/maps/SilphCo_10F/scripts.pory"
SilphCo_10F_Text_WorkerBro:
# 41 "data/maps/SilphCo_10F/scripts.pory"
	.string "I am one of the four SILPH\n"
# 42 "data/maps/SilphCo_10F/scripts.pory"
    .string "BROTHERS!\p"
# 43 "data/maps/SilphCo_10F/scripts.pory"
	.string "I'm a janitor!\n"
# 44 "data/maps/SilphCo_10F/scripts.pory"
	.string "I keep this whole place sparkling!$"
# 45 "data/maps/SilphCo_10F/scripts.pory"
SilphCo_10F_EventScript_WorkerM:: 
# 46 "data/maps/SilphCo_10F/scripts.pory"
	msgbox SilphCo_10F_Text_WorkerM, MSGBOX_NPC
# 47 "data/maps/SilphCo_10F/scripts.pory"
	end
# 48 "data/maps/SilphCo_10F/scripts.pory"
SilphCo_10F_Text_WorkerM:
# 49 "data/maps/SilphCo_10F/scripts.pory"
	.string "Ahh!\n"
# 50 "data/maps/SilphCo_10F/scripts.pory"
	.string "You startled me!\p"
# 51 "data/maps/SilphCo_10F/scripts.pory"
	.string "…\n"
# 52 "data/maps/SilphCo_10F/scripts.pory"
	.string "What am I doing?\l"
# 53 "data/maps/SilphCo_10F/scripts.pory"
	.string "…Okay, you caught me.\p"
# 54 "data/maps/SilphCo_10F/scripts.pory"
	.string "I never wanted to be an office\n"
# 55 "data/maps/SilphCo_10F/scripts.pory"
	.string "drone, I wanted to be an artist!\p"
# 56 "data/maps/SilphCo_10F/scripts.pory"
	.string "I'm replacing some of the paintings\n"
# 57 "data/maps/SilphCo_10F/scripts.pory"
	.string "around here with some of my own\l"
# 58 "data/maps/SilphCo_10F/scripts.pory"
	.string "to see if people like them.\p"
# 59 "data/maps/SilphCo_10F/scripts.pory"
	.string "Don't worry, I'm putting the old\n"
# 60 "data/maps/SilphCo_10F/scripts.pory"
	.string "paintings in storage.\p"
# 61 "data/maps/SilphCo_10F/scripts.pory"
	.string "I'd never take such derivative\n"
# 62 "data/maps/SilphCo_10F/scripts.pory"
	.string "work home for myself.$"
# 63 "data/maps/SilphCo_10F/scripts.pory"
SilphCo_10F_EventScript_Painting::
# 64 "data/maps/SilphCo_10F/scripts.pory"
	goto_if_unset FLAG_HIDE_SAFFRON_CIVILIANS, SilphCo_10F_EventScript_NewPainting
# 65 "data/maps/SilphCo_10F/scripts.pory"
	msgbox SilphCo_10F_Text_NewPainting, MSGBOX_SIGN
# 66 "data/maps/SilphCo_10F/scripts.pory"
	end
# 67 "data/maps/SilphCo_10F/scripts.pory"
SilphCo_10F_EventScript_NewPainting::
# 68 "data/maps/SilphCo_10F/scripts.pory"
	msgbox SilphCo_10F_Text_NewPainting, MSGBOX_SIGN
# 69 "data/maps/SilphCo_10F/scripts.pory"
	end
# 70 "data/maps/SilphCo_10F/scripts.pory"
SilphCo_10F_Text_NewPainting:
# 71 "data/maps/SilphCo_10F/scripts.pory"
	.string "It's a gorgeous painting of a lush,\n"
# 72 "data/maps/SilphCo_10F/scripts.pory"
	.string "verdant landscape at sunset.$"
