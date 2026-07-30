# 1 "data/maps/SilphCo_5F/scripts.pory"

# 2 "data/maps/SilphCo_5F/scripts.pory"
SilphCo_5F_MapScripts::
# 3 "data/maps/SilphCo_5F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_5F_OnLoad
# 4 "data/maps/SilphCo_5F/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_5F/scripts.pory"

# 6 "data/maps/SilphCo_5F/scripts.pory"
SilphCo_5F_OnLoad::
# 7 "data/maps/SilphCo_5F/scripts.pory"
	call_if_unset FLAG_SILPH_5F_DOOR_1, EventScript_Close5FDoor1
# 8 "data/maps/SilphCo_5F/scripts.pory"
	call_if_unset FLAG_SILPH_5F_DOOR_2, EventScript_Close5FDoor2
# 9 "data/maps/SilphCo_5F/scripts.pory"
	call_if_unset FLAG_SILPH_5F_DOOR_3, EventScript_Close5FDoor3
# 10 "data/maps/SilphCo_5F/scripts.pory"
	call_if_unset FLAG_HIDE_SAFFRON_CIVILIANS, SilphCo_5F_EventScript_ScientistMovementType
# 11 "data/maps/SilphCo_5F/scripts.pory"
	end
# 12 "data/maps/SilphCo_5F/scripts.pory"

# 13 "data/maps/SilphCo_5F/scripts.pory"
SilphCo_5F_EventScript_WorkerM::
# 14 "data/maps/SilphCo_5F/scripts.pory"
	lock
# 15 "data/maps/SilphCo_5F/scripts.pory"
	faceplayer
# 16 "data/maps/SilphCo_5F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_5F_EventScript_WorkerMRocketsGone
# 17 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_RocketsInUproarAboutIntruder
# 18 "data/maps/SilphCo_5F/scripts.pory"
	release
# 19 "data/maps/SilphCo_5F/scripts.pory"
	end
# 20 "data/maps/SilphCo_5F/scripts.pory"

# 21 "data/maps/SilphCo_5F/scripts.pory"
SilphCo_5F_EventScript_ScientistMovementType::
# 22 "data/maps/SilphCo_5F/scripts.pory"
	setobjectmovementtype 9, MOVEMENT_TYPE_WANDER_AROUND
# 23 "data/maps/SilphCo_5F/scripts.pory"
	return
# 24 "data/maps/SilphCo_5F/scripts.pory"

# 25 "data/maps/SilphCo_5F/scripts.pory"
SilphCo_5F_EventScript_WorkerMRocketsGone::
# 26 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_YoureOurHeroThankYou
# 27 "data/maps/SilphCo_5F/scripts.pory"
	release
# 28 "data/maps/SilphCo_5F/scripts.pory"
	end
# 29 "data/maps/SilphCo_5F/scripts.pory"

# 30 "data/maps/SilphCo_5F/scripts.pory"
SilphCo_5F_EventScript_PokemonReport1::
# 31 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_PorygonFirstVRMon, MSGBOX_SIGN
# 32 "data/maps/SilphCo_5F/scripts.pory"
	end
# 33 "data/maps/SilphCo_5F/scripts.pory"

# 34 "data/maps/SilphCo_5F/scripts.pory"
SilphCo_5F_EventScript_PokemonReport2::
# 35 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_Over350TechniquesConfirmed, MSGBOX_SIGN
# 36 "data/maps/SilphCo_5F/scripts.pory"
	end
# 37 "data/maps/SilphCo_5F/scripts.pory"

# 38 "data/maps/SilphCo_5F/scripts.pory"
SilphCo_5F_EventScript_PokemonReport3::
# 39 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_SomeMonsEvolveWhenTraded, MSGBOX_SIGN
# 40 "data/maps/SilphCo_5F/scripts.pory"
	end
# 41 "data/maps/SilphCo_5F/scripts.pory"

# 42 "data/maps/SilphCo_5F/scripts.pory"
SilphCo_5F_EventScript_FloorSign::
# 43 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_FloorSign, MSGBOX_SIGN
# 44 "data/maps/SilphCo_5F/scripts.pory"
	end
# 45 "data/maps/SilphCo_5F/scripts.pory"

# 46 "data/maps/SilphCo_5F/scripts.pory"
SilphCo_5F_EventScript_Beau::
# 47 "data/maps/SilphCo_5F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_BEAU, SilphCo_5F_Text_BeauIntro, SilphCo_5F_Text_BeauDefeat
# 48 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/SilphCo_5F/scripts.pory"
	end
# 50 "data/maps/SilphCo_5F/scripts.pory"

# 51 "data/maps/SilphCo_5F/scripts.pory"
SilphCo_5F_EventScript_Grunt1::
# 52 "data/maps/SilphCo_5F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_28, SilphCo_5F_Text_Grunt1Intro, SilphCo_5F_Text_Grunt1Defeat
# 53 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/SilphCo_5F/scripts.pory"
	end
# 55 "data/maps/SilphCo_5F/scripts.pory"

# 56 "data/maps/SilphCo_5F/scripts.pory"
SilphCo_5F_EventScript_Grunt2::
# 57 "data/maps/SilphCo_5F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_29, SilphCo_5F_Text_Grunt2Intro, SilphCo_5F_Text_Grunt2Defeat
# 58 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/SilphCo_5F/scripts.pory"
	end
# 60 "data/maps/SilphCo_5F/scripts.pory"

# 61 "data/maps/SilphCo_5F/scripts.pory"
SilphCo_5F_EventScript_Dalton::
# 62 "data/maps/SilphCo_5F/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_DALTON, SilphCo_5F_Text_DaltonIntro, SilphCo_5F_Text_DaltonDefeat
# 63 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_DaltonPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/SilphCo_5F/scripts.pory"
	end
# 65 "data/maps/SilphCo_5F/scripts.pory"

# 66 "data/maps/SilphCo_5F/scripts.pory"
SilphCo_5F_EventScript_WorkerM2:: 
# 67 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_WorkerM2, MSGBOX_NPC
# 68 "data/maps/SilphCo_5F/scripts.pory"
	end
# 69 "data/maps/SilphCo_5F/scripts.pory"
SilphCo_5F_Text_WorkerM2:
# 70 "data/maps/SilphCo_5F/scripts.pory"
	.string "Synergy!\n"
# 71 "data/maps/SilphCo_5F/scripts.pory"
	.string "Disruption!\l"
# 72 "data/maps/SilphCo_5F/scripts.pory"
	.string "Paradigm shift!$"
# 73 "data/maps/SilphCo_5F/scripts.pory"
SilphCo_5F_EventScript_WorkerF:: 
# 74 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_WorkerF, MSGBOX_NPC
# 75 "data/maps/SilphCo_5F/scripts.pory"
	end
# 76 "data/maps/SilphCo_5F/scripts.pory"
SilphCo_5F_Text_WorkerF:
# 77 "data/maps/SilphCo_5F/scripts.pory"
	.string "Is it just me or is this guy\n"
# 78 "data/maps/SilphCo_5F/scripts.pory"
	.string "not actually saying anything?$"
# 79 "data/maps/SilphCo_5F/scripts.pory"
SilphCo_5F_EventScript_Scientist2::
# 80 "data/maps/SilphCo_5F/scripts.pory"
	msgbox SilphCo_5F_Text_Scientist2, MSGBOX_NPC
# 81 "data/maps/SilphCo_5F/scripts.pory"
	end
# 82 "data/maps/SilphCo_5F/scripts.pory"
SilphCo_5F_Text_Scientist2:
# 83 "data/maps/SilphCo_5F/scripts.pory"
	.string "He-he's a visionary!\n"
# 84 "data/maps/SilphCo_5F/scripts.pory"
	.string "I've got to take notes!$"
