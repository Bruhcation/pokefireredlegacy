# 1 "data/maps/VictoryRoad_2F/scripts.pory"

# 2 "data/maps/VictoryRoad_2F/scripts.pory"
.set LOCALID_BOULDER1, 11
# 3 "data/maps/VictoryRoad_2F/scripts.pory"
.set LOCALID_BOULDER2, 12
# 4 "data/maps/VictoryRoad_2F/scripts.pory"
.set LOCALID_MOLTRES_TRAINER, 15
# 5 "data/maps/VictoryRoad_2F/scripts.pory"

# 6 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_MapScripts::
# 7 "data/maps/VictoryRoad_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_2F_OnLoad
# 8 "data/maps/VictoryRoad_2F/scripts.pory"
	.byte 0
# 9 "data/maps/VictoryRoad_2F/scripts.pory"

# 10 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_OnLoad::
# 11 "data/maps/VictoryRoad_2F/scripts.pory"
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100, VictoryRoad_2F_EventScript_SetRockBarrier1
# 12 "data/maps/VictoryRoad_2F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100, VictoryRoad_2F_EventScript_MoveSwitch1Boulder
# 13 "data/maps/VictoryRoad_2F/scripts.pory"
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100, VictoryRoad_2F_EventScript_SetRockBarrier2
# 14 "data/maps/VictoryRoad_2F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100, VictoryRoad_2F_EventScript_MoveSwitch2Boulder
# 15 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 16 "data/maps/VictoryRoad_2F/scripts.pory"

# 17 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_MoveSwitch1Boulder::
# 18 "data/maps/VictoryRoad_2F/scripts.pory"
	setobjectxyperm LOCALID_BOULDER1, 2, 19
# 19 "data/maps/VictoryRoad_2F/scripts.pory"
	return
# 20 "data/maps/VictoryRoad_2F/scripts.pory"

# 21 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_MoveSwitch2Boulder::
# 22 "data/maps/VictoryRoad_2F/scripts.pory"
	setobjectxyperm LOCALID_BOULDER2, 14, 19
# 23 "data/maps/VictoryRoad_2F/scripts.pory"
	return
# 24 "data/maps/VictoryRoad_2F/scripts.pory"

# 25 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_SetRockBarrier1::
# 26 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 13, 10, METATILE_Cave_RockBarrier_Top, 1
# 27 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 13, 11, METATILE_Cave_RockBarrier_Bottom, 1
# 28 "data/maps/VictoryRoad_2F/scripts.pory"
	return
# 29 "data/maps/VictoryRoad_2F/scripts.pory"

# 30 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_SetRockBarrier2::
# 31 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 33, 16, METATILE_Cave_RockBarrier_Top, 1
# 32 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 33, 17, METATILE_Cave_RockBarrier_Bottom, 1
# 33 "data/maps/VictoryRoad_2F/scripts.pory"
	return
# 34 "data/maps/VictoryRoad_2F/scripts.pory"

# 35 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch1::
# 36 "data/maps/VictoryRoad_2F/scripts.pory"
	lockall
# 37 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100, VictoryRoad_2F_EventScript_FloorSwitch1AlreadyPressed
# 38 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 13, 10, METATILE_Cave_Floor_Ledge_Top, 0
# 39 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 13, 11, METATILE_Cave_Floor_Ledge_Bottom, 0
# 40 "data/maps/VictoryRoad_2F/scripts.pory"
	playse SE_ICE_BREAK
# 41 "data/maps/VictoryRoad_2F/scripts.pory"
	special DrawWholeMapView
# 42 "data/maps/VictoryRoad_2F/scripts.pory"
	waitse
# 43 "data/maps/VictoryRoad_2F/scripts.pory"
	copyobjectxytoperm LOCALID_BOULDER1
# 44 "data/maps/VictoryRoad_2F/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100
# 45 "data/maps/VictoryRoad_2F/scripts.pory"
	releaseall
# 46 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 47 "data/maps/VictoryRoad_2F/scripts.pory"

# 48 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch1AlreadyPressed::
# 49 "data/maps/VictoryRoad_2F/scripts.pory"
	releaseall
# 50 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 51 "data/maps/VictoryRoad_2F/scripts.pory"

# 52 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch2::
# 53 "data/maps/VictoryRoad_2F/scripts.pory"
	lockall
# 54 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100, VictoryRoad_2F_EventScript_FloorSwitch2AlreadyPressed
# 55 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 33, 16, METATILE_Cave_Floor_Ledge_Top, 0
# 56 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 33, 17, METATILE_Cave_Floor_Ledge_Bottom, 0
# 57 "data/maps/VictoryRoad_2F/scripts.pory"
	playse SE_ICE_BREAK
# 58 "data/maps/VictoryRoad_2F/scripts.pory"
	special DrawWholeMapView
# 59 "data/maps/VictoryRoad_2F/scripts.pory"
	waitse
# 60 "data/maps/VictoryRoad_2F/scripts.pory"
	copyobjectxytoperm LOCALID_BOULDER2
# 61 "data/maps/VictoryRoad_2F/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100
# 62 "data/maps/VictoryRoad_2F/scripts.pory"
	releaseall
# 63 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 64 "data/maps/VictoryRoad_2F/scripts.pory"

# 65 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch2AlreadyPressed::
# 66 "data/maps/VictoryRoad_2F/scripts.pory"
	releaseall
# 67 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 68 "data/maps/VictoryRoad_2F/scripts.pory"

# 69 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Dawson::
# 70 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_POKEMANIAC_DAWSON, VictoryRoad_2F_Text_DawsonIntro, VictoryRoad_2F_Text_DawsonDefeat
# 71 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 72 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 73 "data/maps/VictoryRoad_2F/scripts.pory"

# 74 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Moltres::
# 75 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_set FLAG_FOUGHT_MOLTRES, VictoryRoad_2F_EventScript_MoltresDefeated
# 76 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_NoMoltresPostBattle, MSGBOX_AUTOCLOSE
# 77 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 78 "data/maps/VictoryRoad_2F/scripts.pory"

# 79 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_MoltresDefeated::
# 80 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_3, VictoryRoad_2F_Text_MoltresIntro, VictoryRoad_2F_Text_MoltresDefeat
# 81 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_MoltresPostBattle, MSGBOX_AUTOCLOSE
# 82 "data/maps/VictoryRoad_2F/scripts.pory"
	checkitemspace ITEM_TM38
# 83 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CinnabarIsland_Gym_EventScript_NoRoomForTM38
# 84 "data/maps/VictoryRoad_2F/scripts.pory"
	giveitem ITEM_TM38	
# 85 "data/maps/VictoryRoad_2F/scripts.pory"
	setflag FLAG_MOLTRES_TRAINER
# 86 "data/maps/VictoryRoad_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 87 "data/maps/VictoryRoad_2F/scripts.pory"
	removeobject LOCALID_MOLTRES_TRAINER
# 88 "data/maps/VictoryRoad_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 89 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 90 "data/maps/VictoryRoad_2F/scripts.pory"

# 91 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_Text_NoMoltresPostBattle::
# 92 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "Ahh! There's no Moltres here!$"
# 93 "data/maps/VictoryRoad_2F/scripts.pory"

# 94 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_Text_MoltresIntro::
# 95 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "Wait you actually fought MOLTRES?\p"
# 96 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "Well than, let me test your\n"
# 97 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "abilities!$"
# 98 "data/maps/VictoryRoad_2F/scripts.pory"

# 99 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_Text_MoltresDefeat::
# 100 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "You were worthy!$"
# 101 "data/maps/VictoryRoad_2F/scripts.pory"

# 102 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_Text_MoltresPostBattle::
# 103 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "I was trying to find MOLTRES\n"
# 104 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "for a long time.\p"
# 105 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "But I think i'll give up\n"
# 106 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "after fighting you!\p"
# 107 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "Take this TM meant for\n"
# 108 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "a great MOLTRES!$"
# 109 "data/maps/VictoryRoad_2F/scripts.pory"

# 110 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Daisuke::
# 111 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_DAISUKE, VictoryRoad_2F_Text_DaisukeIntro, VictoryRoad_2F_Text_DaisukeDefeat
# 112 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 113 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 114 "data/maps/VictoryRoad_2F/scripts.pory"

# 115 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Nelson::
# 116 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_NELSON, VictoryRoad_2F_Text_NelsonIntro, VictoryRoad_2F_Text_NelsonDefeat
# 117 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_NelsonPostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 119 "data/maps/VictoryRoad_2F/scripts.pory"

# 120 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Gregory::
# 121 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_GREGORY, VictoryRoad_2F_Text_GregoryIntro, VictoryRoad_2F_Text_GregoryDefeat
# 122 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_GregoryPostBattle, MSGBOX_AUTOCLOSE
# 123 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 124 "data/maps/VictoryRoad_2F/scripts.pory"

# 125 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Julie::
# 126 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_JULIE, VictoryRoad_2F_Text_JulieIntro, VictoryRoad_2F_Text_JulieDefeat
# 127 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_JuliePostBattle, MSGBOX_AUTOCLOSE
# 128 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 129 "data/maps/VictoryRoad_2F/scripts.pory"

# 130 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_Text_JulieIntro::
# 131 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "Victory Road tests\n"
# 132 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "more than strength.\p"
# 133 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "It tests resolve.\p"
# 134 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "Show me you have both!$"
# 135 "data/maps/VictoryRoad_2F/scripts.pory"

# 136 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_Text_JulieDefeat::
# 137 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "No way...\n"
# 138 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "I pushed myself to the limit…!$"
# 139 "data/maps/VictoryRoad_2F/scripts.pory"

# 140 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_Text_JuliePostBattle::
# 141 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "You have earned this win.\n"
# 142 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "Keep going,\l"
# 143 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "the Pokémon League is just ahead.$"
# 144 "data/maps/VictoryRoad_2F/scripts.pory"

# 145 "data/maps/VictoryRoad_2F/scripts.pory"

# 146 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Vincent::
# 147 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_TAMER_VINCENT, VictoryRoad_2F_Text_VincentIntro, VictoryRoad_2F_Text_VincentDefeat
# 148 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
# 149 "data/maps/VictoryRoad_2F/scripts.pory"
	end
