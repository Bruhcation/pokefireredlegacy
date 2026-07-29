# 1 "data/maps/VictoryRoad_1F/scripts.pory"

# 2 "data/maps/VictoryRoad_1F/scripts.pory"
.set LOCALID_BOULDER, 5
# 3 "data/maps/VictoryRoad_1F/scripts.pory"

# 4 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_MapScripts::
# 5 "data/maps/VictoryRoad_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_1F_OnLoad
# 6 "data/maps/VictoryRoad_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_1F_OnTransition
# 7 "data/maps/VictoryRoad_1F/scripts.pory"
	.byte 0
# 8 "data/maps/VictoryRoad_1F/scripts.pory"

# 9 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_OnLoad::
# 10 "data/maps/VictoryRoad_1F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VICTORY_ROAD_1F, 100, VictoryRoad_1F_EventScript_MoveSwitchBoulder
# 11 "data/maps/VictoryRoad_1F/scripts.pory"
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_1F, 100, VictoryRoad_1F_EventScript_SetRockBarrier
# 12 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 13 "data/maps/VictoryRoad_1F/scripts.pory"

# 14 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_SetRockBarrier::
# 15 "data/maps/VictoryRoad_1F/scripts.pory"
	setmetatile 12, 14, METATILE_Cave_RockBarrier_Top, 1
# 16 "data/maps/VictoryRoad_1F/scripts.pory"
	setmetatile 12, 15, METATILE_Cave_RockBarrier_Bottom, 1
# 17 "data/maps/VictoryRoad_1F/scripts.pory"
	return
# 18 "data/maps/VictoryRoad_1F/scripts.pory"

# 19 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_OnTransition::
# 20 "data/maps/VictoryRoad_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VICTORY_ROAD_1F
# 21 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 22 "data/maps/VictoryRoad_1F/scripts.pory"

# 23 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_MoveSwitchBoulder::
# 24 "data/maps/VictoryRoad_1F/scripts.pory"
	setobjectxyperm LOCALID_BOULDER, 20, 16
# 25 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 26 "data/maps/VictoryRoad_1F/scripts.pory"

# 27 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_FloorSwitch::
# 28 "data/maps/VictoryRoad_1F/scripts.pory"
	lockall
# 29 "data/maps/VictoryRoad_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_1F, 100, VictoryRoad_1F_EventScript_FloorSwitchAlreadyPressed
# 30 "data/maps/VictoryRoad_1F/scripts.pory"
	setmetatile 12, 14, METATILE_Cave_Floor_Ledge_Top, 0
# 31 "data/maps/VictoryRoad_1F/scripts.pory"
	setmetatile 12, 15, METATILE_Cave_Floor_Ledge_Bottom, 0
# 32 "data/maps/VictoryRoad_1F/scripts.pory"
	playse SE_ICE_BREAK
# 33 "data/maps/VictoryRoad_1F/scripts.pory"
	special DrawWholeMapView
# 34 "data/maps/VictoryRoad_1F/scripts.pory"
	waitse
# 35 "data/maps/VictoryRoad_1F/scripts.pory"
	copyobjectxytoperm LOCALID_BOULDER
# 36 "data/maps/VictoryRoad_1F/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_1F, 100
# 37 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
# 38 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 39 "data/maps/VictoryRoad_1F/scripts.pory"

# 40 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_FloorSwitchAlreadyPressed::
# 41 "data/maps/VictoryRoad_1F/scripts.pory"
	releaseall
# 42 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 43 "data/maps/VictoryRoad_1F/scripts.pory"

# 44 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Naomi::
# 45 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_NAOMI, VictoryRoad_1F_Text_NaomiIntro, VictoryRoad_1F_Text_NaomiDefeat
# 46 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_NaomiPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 48 "data/maps/VictoryRoad_1F/scripts.pory"

# 49 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Berke::
# 50 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_BERKE, VictoryRoad_1F_Text_BerkeIntro, VictoryRoad_1F_Text_BerkeDefeat
# 51 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 53 "data/maps/VictoryRoad_1F/scripts.pory"

# 54 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_EventScript_Rolando::
# 55 "data/maps/VictoryRoad_1F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_ROLANDO, VictoryRoad_1F_Text_RolandoIntro, VictoryRoad_1F_Text_RolandoDefeat
# 56 "data/maps/VictoryRoad_1F/scripts.pory"
	msgbox VictoryRoad_1F_Text_RolandoPostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/VictoryRoad_1F/scripts.pory"
	end
# 58 "data/maps/VictoryRoad_1F/scripts.pory"

# 59 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_BerkeIntro::
# 60 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Victory Road isnt for the weak.\p"
# 61 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Only trainers who have earned\n"
# 62 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "every Badge belong here.\p"
# 63 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Lets see if you are truly\n"
# 64 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Elite Four material!$"
# 65 "data/maps/VictoryRoad_1F/scripts.pory"

# 66 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_BerkeDefeat::
# 67 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "What?! I trained for this mountain…\p"
# 68 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "How did you break through my team?$"
# 69 "data/maps/VictoryRoad_1F/scripts.pory"

# 70 "data/maps/VictoryRoad_1F/scripts.pory"
VictoryRoad_1F_Text_BerkePostBattle::
# 71 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Heh… I get it now.\p"
# 72 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Strength isnt just levels,\n"
# 73 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "its trust.\p"
# 74 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "Go on,\n"
# 75 "data/maps/VictoryRoad_1F/scripts.pory"
	.string "The Leagues waiting for you.$"
