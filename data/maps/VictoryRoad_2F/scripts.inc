# 1 "data/maps/VictoryRoad_2F/scripts.pory"

# 2 "data/maps/VictoryRoad_2F/scripts.pory"
.set LOCALID_BOULDER1, 11
# 3 "data/maps/VictoryRoad_2F/scripts.pory"
.set LOCALID_BOULDER2, 12
# 4 "data/maps/VictoryRoad_2F/scripts.pory"

# 5 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_MapScripts::
# 6 "data/maps/VictoryRoad_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_2F_OnLoad
# 7 "data/maps/VictoryRoad_2F/scripts.pory"
	.byte 0
# 8 "data/maps/VictoryRoad_2F/scripts.pory"

# 9 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_OnLoad::
# 10 "data/maps/VictoryRoad_2F/scripts.pory"
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100, VictoryRoad_2F_EventScript_SetRockBarrier1
# 11 "data/maps/VictoryRoad_2F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100, VictoryRoad_2F_EventScript_MoveSwitch1Boulder
# 12 "data/maps/VictoryRoad_2F/scripts.pory"
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100, VictoryRoad_2F_EventScript_SetRockBarrier2
# 13 "data/maps/VictoryRoad_2F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100, VictoryRoad_2F_EventScript_MoveSwitch2Boulder
# 14 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 15 "data/maps/VictoryRoad_2F/scripts.pory"

# 16 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_MoveSwitch1Boulder::
# 17 "data/maps/VictoryRoad_2F/scripts.pory"
	setobjectxyperm LOCALID_BOULDER1, 2, 19
# 18 "data/maps/VictoryRoad_2F/scripts.pory"
	return
# 19 "data/maps/VictoryRoad_2F/scripts.pory"

# 20 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_MoveSwitch2Boulder::
# 21 "data/maps/VictoryRoad_2F/scripts.pory"
	setobjectxyperm LOCALID_BOULDER2, 14, 19
# 22 "data/maps/VictoryRoad_2F/scripts.pory"
	return
# 23 "data/maps/VictoryRoad_2F/scripts.pory"

# 24 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_SetRockBarrier1::
# 25 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 13, 10, METATILE_Cave_RockBarrier_Top, 1
# 26 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 13, 11, METATILE_Cave_RockBarrier_Bottom, 1
# 27 "data/maps/VictoryRoad_2F/scripts.pory"
	return
# 28 "data/maps/VictoryRoad_2F/scripts.pory"

# 29 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_SetRockBarrier2::
# 30 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 33, 16, METATILE_Cave_RockBarrier_Top, 1
# 31 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 33, 17, METATILE_Cave_RockBarrier_Bottom, 1
# 32 "data/maps/VictoryRoad_2F/scripts.pory"
	return
# 33 "data/maps/VictoryRoad_2F/scripts.pory"

# 34 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch1::
# 35 "data/maps/VictoryRoad_2F/scripts.pory"
	lockall
# 36 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100, VictoryRoad_2F_EventScript_FloorSwitch1AlreadyPressed
# 37 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 13, 10, METATILE_Cave_Floor_Ledge_Top, 0
# 38 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 13, 11, METATILE_Cave_Floor_Ledge_Bottom, 0
# 39 "data/maps/VictoryRoad_2F/scripts.pory"
	playse SE_ICE_BREAK
# 40 "data/maps/VictoryRoad_2F/scripts.pory"
	special DrawWholeMapView
# 41 "data/maps/VictoryRoad_2F/scripts.pory"
	waitse
# 42 "data/maps/VictoryRoad_2F/scripts.pory"
	copyobjectxytoperm LOCALID_BOULDER1
# 43 "data/maps/VictoryRoad_2F/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100
# 44 "data/maps/VictoryRoad_2F/scripts.pory"
	releaseall
# 45 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 46 "data/maps/VictoryRoad_2F/scripts.pory"

# 47 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch1AlreadyPressed::
# 48 "data/maps/VictoryRoad_2F/scripts.pory"
	releaseall
# 49 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 50 "data/maps/VictoryRoad_2F/scripts.pory"

# 51 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch2::
# 52 "data/maps/VictoryRoad_2F/scripts.pory"
	lockall
# 53 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100, VictoryRoad_2F_EventScript_FloorSwitch2AlreadyPressed
# 54 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 33, 16, METATILE_Cave_Floor_Ledge_Top, 0
# 55 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 33, 17, METATILE_Cave_Floor_Ledge_Bottom, 0
# 56 "data/maps/VictoryRoad_2F/scripts.pory"
	playse SE_ICE_BREAK
# 57 "data/maps/VictoryRoad_2F/scripts.pory"
	special DrawWholeMapView
# 58 "data/maps/VictoryRoad_2F/scripts.pory"
	waitse
# 59 "data/maps/VictoryRoad_2F/scripts.pory"
	copyobjectxytoperm LOCALID_BOULDER2
# 60 "data/maps/VictoryRoad_2F/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100
# 61 "data/maps/VictoryRoad_2F/scripts.pory"
	releaseall
# 62 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 63 "data/maps/VictoryRoad_2F/scripts.pory"

# 64 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch2AlreadyPressed::
# 65 "data/maps/VictoryRoad_2F/scripts.pory"
	releaseall
# 66 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 67 "data/maps/VictoryRoad_2F/scripts.pory"

# 68 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Dawson::
# 69 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_POKEMANIAC_DAWSON, VictoryRoad_2F_Text_DawsonIntro, VictoryRoad_2F_Text_DawsonDefeat
# 70 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 71 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 72 "data/maps/VictoryRoad_2F/scripts.pory"

# 73 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Daisuke::
# 74 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_DAISUKE, VictoryRoad_2F_Text_DaisukeIntro, VictoryRoad_2F_Text_DaisukeDefeat
# 75 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 76 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 77 "data/maps/VictoryRoad_2F/scripts.pory"

# 78 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Nelson::
# 79 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_NELSON, VictoryRoad_2F_Text_NelsonIntro, VictoryRoad_2F_Text_NelsonDefeat
# 80 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_NelsonPostBattle, MSGBOX_AUTOCLOSE
# 81 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 82 "data/maps/VictoryRoad_2F/scripts.pory"

# 83 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Gregory::
# 84 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_GREGORY, VictoryRoad_2F_Text_GregoryIntro, VictoryRoad_2F_Text_GregoryDefeat
# 85 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_GregoryPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 87 "data/maps/VictoryRoad_2F/scripts.pory"

# 88 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Julie::
# 89 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_JULIE, VictoryRoad_2F_Text_JulieIntro, VictoryRoad_2F_Text_JulieDefeat
# 90 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_JuliePostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 92 "data/maps/VictoryRoad_2F/scripts.pory"

# 93 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_Text_JulieIntro::
# 94 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "Victory Road tests\n"
# 95 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "more than strength.\p"
# 96 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "It tests resolve.\p"
# 97 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "Show me you have both!$"
# 98 "data/maps/VictoryRoad_2F/scripts.pory"

# 99 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_Text_JulieDefeat::
# 100 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "No way...\n"
# 101 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "I pushed myself to the limit…!$"
# 102 "data/maps/VictoryRoad_2F/scripts.pory"

# 103 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_Text_JuliePostBattle::
# 104 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "You have earned this win.\n"
# 105 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "Keep going,\l"
# 106 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "the Pokémon League is just ahead.$"
# 107 "data/maps/VictoryRoad_2F/scripts.pory"

# 108 "data/maps/VictoryRoad_2F/scripts.pory"

# 109 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Vincent::
# 110 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_TAMER_VINCENT, VictoryRoad_2F_Text_VincentIntro, VictoryRoad_2F_Text_VincentDefeat
# 111 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
# 112 "data/maps/VictoryRoad_2F/scripts.pory"
	end
