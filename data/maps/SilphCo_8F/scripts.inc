# 1 "data/maps/SilphCo_8F/scripts.pory"

# 2 "data/maps/SilphCo_8F/scripts.pory"
SilphCo_8F_MapScripts::
# 3 "data/maps/SilphCo_8F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_8F_OnLoad
# 4 "data/maps/SilphCo_8F/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_8F/scripts.pory"

# 6 "data/maps/SilphCo_8F/scripts.pory"
SilphCo_8F_OnLoad::
# 7 "data/maps/SilphCo_8F/scripts.pory"
	call_if_unset FLAG_SILPH_8F_DOOR, EventScript_Close8FDoor
# 8 "data/maps/SilphCo_8F/scripts.pory"
	call_if_unset FLAG_HIDE_SAFFRON_CIVILIANS, SilphCo_8F_EventScript_ScientistPosition
# 9 "data/maps/SilphCo_8F/scripts.pory"
	end
# 10 "data/maps/SilphCo_8F/scripts.pory"

# 11 "data/maps/SilphCo_8F/scripts.pory"
SilphCo_8F_EventScript_ScientistPosition::
# 12 "data/maps/SilphCo_8F/scripts.pory"
	setobjectmovementtype 6, MOVEMENT_TYPE_WANDER_AROUND
# 13 "data/maps/SilphCo_8F/scripts.pory"
	setobjectxyperm 6, 26, 11
# 14 "data/maps/SilphCo_8F/scripts.pory"
	return
# 15 "data/maps/SilphCo_8F/scripts.pory"

# 16 "data/maps/SilphCo_8F/scripts.pory"
SilphCo_8F_EventScript_WorkerM::
# 17 "data/maps/SilphCo_8F/scripts.pory"
	lock
# 18 "data/maps/SilphCo_8F/scripts.pory"
	faceplayer
# 19 "data/maps/SilphCo_8F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_8F_EventScript_WorkerMRocketsGone
# 20 "data/maps/SilphCo_8F/scripts.pory"
	msgbox SilphCo_8F_Text_WonderIfSilphIsFinished
# 21 "data/maps/SilphCo_8F/scripts.pory"
	release
# 22 "data/maps/SilphCo_8F/scripts.pory"
	end
# 23 "data/maps/SilphCo_8F/scripts.pory"

# 24 "data/maps/SilphCo_8F/scripts.pory"
SilphCo_8F_EventScript_WorkerMRocketsGone::
# 25 "data/maps/SilphCo_8F/scripts.pory"
	msgbox SilphCo_8F_Text_ThanksForSavingUs
# 26 "data/maps/SilphCo_8F/scripts.pory"
	release
# 27 "data/maps/SilphCo_8F/scripts.pory"
	end
# 28 "data/maps/SilphCo_8F/scripts.pory"

# 29 "data/maps/SilphCo_8F/scripts.pory"
SilphCo_8F_EventScript_FloorSign::
# 30 "data/maps/SilphCo_8F/scripts.pory"
	msgbox SilphCo_8F_Text_FloorSign, MSGBOX_SIGN
# 31 "data/maps/SilphCo_8F/scripts.pory"
	end
# 32 "data/maps/SilphCo_8F/scripts.pory"

# 33 "data/maps/SilphCo_8F/scripts.pory"
SilphCo_8F_EventScript_Parker::
# 34 "data/maps/SilphCo_8F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_PARKER, SilphCo_8F_Text_ParkerIntro, SilphCo_8F_Text_ParkerDefeat
# 35 "data/maps/SilphCo_8F/scripts.pory"
	msgbox SilphCo_8F_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 36 "data/maps/SilphCo_8F/scripts.pory"
	end
# 37 "data/maps/SilphCo_8F/scripts.pory"

# 38 "data/maps/SilphCo_8F/scripts.pory"
SilphCo_8F_EventScript_Grunt1::
# 39 "data/maps/SilphCo_8F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_32, SilphCo_8F_Text_Grunt1Intro, SilphCo_8F_Text_Grunt1Defeat
# 40 "data/maps/SilphCo_8F/scripts.pory"
	msgbox SilphCo_8F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/SilphCo_8F/scripts.pory"
	end
# 42 "data/maps/SilphCo_8F/scripts.pory"

# 43 "data/maps/SilphCo_8F/scripts.pory"
SilphCo_8F_EventScript_Grunt2::
# 44 "data/maps/SilphCo_8F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_36, SilphCo_8F_Text_Grunt2Intro, SilphCo_8F_Text_Grunt2Defeat
# 45 "data/maps/SilphCo_8F/scripts.pory"
	msgbox SilphCo_8F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/SilphCo_8F/scripts.pory"
	end
# 47 "data/maps/SilphCo_8F/scripts.pory"

# 48 "data/maps/SilphCo_8F/scripts.pory"
SilphCo_8F_EventScript_ScientistBro:: 
# 49 "data/maps/SilphCo_8F/scripts.pory"
	msgbox SilphCo_8F_Text_ScientistBro, MSGBOX_NPC
# 50 "data/maps/SilphCo_8F/scripts.pory"
	end
# 51 "data/maps/SilphCo_8F/scripts.pory"
SilphCo_8F_Text_ScientistBro:
# 52 "data/maps/SilphCo_8F/scripts.pory"
	.string "I am one of the four SILPH\n"
# 53 "data/maps/SilphCo_8F/scripts.pory"
    .string "BROTHERS!\p"
# 54 "data/maps/SilphCo_8F/scripts.pory"
	.string "I'm not actually sure what I do\n"
# 55 "data/maps/SilphCo_8F/scripts.pory"
	.string "for the company…\p"
# 56 "data/maps/SilphCo_8F/scripts.pory"
	.string "Nobody has come to give me\n"
# 57 "data/maps/SilphCo_8F/scripts.pory"
	.string "work to do in a while…\p"
# 58 "data/maps/SilphCo_8F/scripts.pory"
	.string "Have they forgotten about me?\n"
# 59 "data/maps/SilphCo_8F/scripts.pory"
	.string "Do I just come in and do nothing?\p"
# 60 "data/maps/SilphCo_8F/scripts.pory"
	.string "At least I'm still getting paid.$"
# 61 "data/maps/SilphCo_8F/scripts.pory"
SilphCo_8F_EventScript_WorkerF:: 
# 62 "data/maps/SilphCo_8F/scripts.pory"
	msgbox SilphCo_8F_Text_WorkerF, MSGBOX_NPC
# 63 "data/maps/SilphCo_8F/scripts.pory"
	end
# 64 "data/maps/SilphCo_8F/scripts.pory"
SilphCo_8F_Text_WorkerF:
# 65 "data/maps/SilphCo_8F/scripts.pory"
	.string "Can't talk, I've gotta eat fast!\n"
# 66 "data/maps/SilphCo_8F/scripts.pory"
	.string "My lunch break is almost over!\p"
# 67 "data/maps/SilphCo_8F/scripts.pory"
	.string "Hurry up, WIGGLYTUFF!\n"
# 68 "data/maps/SilphCo_8F/scripts.pory"
	.string "Don't make me late again!$"
