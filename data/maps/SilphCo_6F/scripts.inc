# 1 "data/maps/SilphCo_6F/scripts.pory"

# 2 "data/maps/SilphCo_6F/scripts.pory"
SilphCo_6F_MapScripts::
# 3 "data/maps/SilphCo_6F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_6F_OnLoad
# 4 "data/maps/SilphCo_6F/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_6F/scripts.pory"

# 6 "data/maps/SilphCo_6F/scripts.pory"
SilphCo_6F_OnLoad::
# 7 "data/maps/SilphCo_6F/scripts.pory"
	call_if_unset FLAG_SILPH_6F_DOOR, EventScript_Close6FDoor
# 8 "data/maps/SilphCo_6F/scripts.pory"
	call_if_unset FLAG_SILPH_6F_DOOR_2, EventScript_Close6FDoor2
# 9 "data/maps/SilphCo_6F/scripts.pory"
	end
# 10 "data/maps/SilphCo_6F/scripts.pory"

# 11 "data/maps/SilphCo_6F/scripts.pory"
SilphCo_6F_EventScript_WorkerM2::
# 12 "data/maps/SilphCo_6F/scripts.pory"
	lock
# 13 "data/maps/SilphCo_6F/scripts.pory"
	faceplayer
# 14 "data/maps/SilphCo_6F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerM2RocketsGone
# 15 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_TargetedSilphForOurMonProducts
# 16 "data/maps/SilphCo_6F/scripts.pory"
	release
# 17 "data/maps/SilphCo_6F/scripts.pory"
	end
# 18 "data/maps/SilphCo_6F/scripts.pory"

# 19 "data/maps/SilphCo_6F/scripts.pory"
SilphCo_6F_EventScript_WorkerM2RocketsGone::
# 20 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_ComeWorkForSilphWhenYoureOlder
# 21 "data/maps/SilphCo_6F/scripts.pory"
	release
# 22 "data/maps/SilphCo_6F/scripts.pory"
	end
# 23 "data/maps/SilphCo_6F/scripts.pory"

# 24 "data/maps/SilphCo_6F/scripts.pory"
SilphCo_6F_EventScript_WorkerM3::
# 25 "data/maps/SilphCo_6F/scripts.pory"
	lock
# 26 "data/maps/SilphCo_6F/scripts.pory"
	faceplayer
# 27 "data/maps/SilphCo_6F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerM3RocketsGone
# 28 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_RocketsTookOverBuilding
# 29 "data/maps/SilphCo_6F/scripts.pory"
	release
# 30 "data/maps/SilphCo_6F/scripts.pory"
	end
# 31 "data/maps/SilphCo_6F/scripts.pory"

# 32 "data/maps/SilphCo_6F/scripts.pory"
SilphCo_6F_EventScript_WorkerM3RocketsGone::
# 33 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_BetterGetBackToWork
# 34 "data/maps/SilphCo_6F/scripts.pory"
	release
# 35 "data/maps/SilphCo_6F/scripts.pory"
	end
# 36 "data/maps/SilphCo_6F/scripts.pory"

# 37 "data/maps/SilphCo_6F/scripts.pory"
SilphCo_6F_EventScript_WorkerM1::
# 38 "data/maps/SilphCo_6F/scripts.pory"
	lock
# 39 "data/maps/SilphCo_6F/scripts.pory"
	faceplayer
# 40 "data/maps/SilphCo_6F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerM1RocketsGone
# 41 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_HelpMePlease
# 42 "data/maps/SilphCo_6F/scripts.pory"
	release
# 43 "data/maps/SilphCo_6F/scripts.pory"
	end
# 44 "data/maps/SilphCo_6F/scripts.pory"

# 45 "data/maps/SilphCo_6F/scripts.pory"
SilphCo_6F_EventScript_WorkerM1RocketsGone::
# 46 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_WeGotEngaged
# 47 "data/maps/SilphCo_6F/scripts.pory"
	release
# 48 "data/maps/SilphCo_6F/scripts.pory"
	end
# 49 "data/maps/SilphCo_6F/scripts.pory"

# 50 "data/maps/SilphCo_6F/scripts.pory"
SilphCo_6F_EventScript_WorkerF1::
# 51 "data/maps/SilphCo_6F/scripts.pory"
	lock
# 52 "data/maps/SilphCo_6F/scripts.pory"
	faceplayer
# 53 "data/maps/SilphCo_6F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerF1RocketsGone
# 54 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_ThatManIsSuchACoward
# 55 "data/maps/SilphCo_6F/scripts.pory"
	release
# 56 "data/maps/SilphCo_6F/scripts.pory"
	end
# 57 "data/maps/SilphCo_6F/scripts.pory"

# 58 "data/maps/SilphCo_6F/scripts.pory"
SilphCo_6F_EventScript_WorkerF1RocketsGone::
# 59 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_NeedsMeToLookAfterHim
# 60 "data/maps/SilphCo_6F/scripts.pory"
	release
# 61 "data/maps/SilphCo_6F/scripts.pory"
	end
# 62 "data/maps/SilphCo_6F/scripts.pory"

# 63 "data/maps/SilphCo_6F/scripts.pory"
SilphCo_6F_EventScript_WorkerF2::
# 64 "data/maps/SilphCo_6F/scripts.pory"
	lock
# 65 "data/maps/SilphCo_6F/scripts.pory"
	faceplayer
# 66 "data/maps/SilphCo_6F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_6F_EventScript_WorkerF2RocketsGone
# 67 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_RocketsTryingToConquerWorld
# 68 "data/maps/SilphCo_6F/scripts.pory"
	release
# 69 "data/maps/SilphCo_6F/scripts.pory"
	end
# 70 "data/maps/SilphCo_6F/scripts.pory"

# 71 "data/maps/SilphCo_6F/scripts.pory"
SilphCo_6F_EventScript_WorkerF2RocketsGone::
# 72 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_RocketsRanAwayBecauseOfYou
# 73 "data/maps/SilphCo_6F/scripts.pory"
	release
# 74 "data/maps/SilphCo_6F/scripts.pory"
	end
# 75 "data/maps/SilphCo_6F/scripts.pory"

# 76 "data/maps/SilphCo_6F/scripts.pory"
SilphCo_6F_EventScript_FloorSign::
# 77 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_FloorSign, MSGBOX_SIGN
# 78 "data/maps/SilphCo_6F/scripts.pory"
	end
# 79 "data/maps/SilphCo_6F/scripts.pory"

# 80 "data/maps/SilphCo_6F/scripts.pory"
SilphCo_6F_EventScript_Taylor::
# 81 "data/maps/SilphCo_6F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_TAYLOR, SilphCo_6F_Text_TaylorIntro, SilphCo_6F_Text_TaylorDefeat
# 82 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_TaylorPostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/SilphCo_6F/scripts.pory"
	end
# 84 "data/maps/SilphCo_6F/scripts.pory"

# 85 "data/maps/SilphCo_6F/scripts.pory"
SilphCo_6F_EventScript_Grunt1::
# 86 "data/maps/SilphCo_6F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_30, SilphCo_6F_Text_Grunt1Intro, SilphCo_6F_Text_Grunt1Defeat
# 87 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 88 "data/maps/SilphCo_6F/scripts.pory"
	end
# 89 "data/maps/SilphCo_6F/scripts.pory"

# 90 "data/maps/SilphCo_6F/scripts.pory"
SilphCo_6F_EventScript_Grunt2::
# 91 "data/maps/SilphCo_6F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_31, SilphCo_6F_Text_Grunt2Intro, SilphCo_6F_Text_Grunt2Defeat
# 92 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 93 "data/maps/SilphCo_6F/scripts.pory"
	end
# 94 "data/maps/SilphCo_6F/scripts.pory"

# 95 "data/maps/SilphCo_6F/scripts.pory"
SilphCo_6F_EventScript_SuperNerd:: 
# 96 "data/maps/SilphCo_6F/scripts.pory"
	msgbox SilphCo_6F_Text_SuperNerd, MSGBOX_NPC
# 97 "data/maps/SilphCo_6F/scripts.pory"
	end
# 98 "data/maps/SilphCo_6F/scripts.pory"
SilphCo_6F_Text_SuperNerd:
# 99 "data/maps/SilphCo_6F/scripts.pory"
	.string "I am one of the four SILPH\n"
# 100 "data/maps/SilphCo_6F/scripts.pory"
    .string "BROTHERS!\p"
# 101 "data/maps/SilphCo_6F/scripts.pory"
	.string "I make sure the company inventory\n"
# 102 "data/maps/SilphCo_6F/scripts.pory"
	.string "counts are correct!$"
