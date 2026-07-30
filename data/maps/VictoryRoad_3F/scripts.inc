# 1 "data/maps/VictoryRoad_3F/scripts.pory"

# 2 "data/maps/VictoryRoad_3F/scripts.pory"
.set LOCALID_BOULDER1, 7
# 3 "data/maps/VictoryRoad_3F/scripts.pory"
.set LOCALID_BOULDER2, 10
# 4 "data/maps/VictoryRoad_3F/scripts.pory"

# 5 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_MapScripts::
# 6 "data/maps/VictoryRoad_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_3F_OnLoad
# 7 "data/maps/VictoryRoad_3F/scripts.pory"
	.byte 0
# 8 "data/maps/VictoryRoad_3F/scripts.pory"

# 9 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_OnLoad::
# 10 "data/maps/VictoryRoad_3F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VICTORY_ROAD_3F, 100, VictoryRoad_3F_EventScript_MoveSwitchBoulder
# 11 "data/maps/VictoryRoad_3F/scripts.pory"
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_3F, 100, VictoryRoad_3F_EventScript_SetRockBarrier
# 12 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 13 "data/maps/VictoryRoad_3F/scripts.pory"

# 14 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_MoveSwitchBoulder::
# 15 "data/maps/VictoryRoad_3F/scripts.pory"
	setobjectxyperm LOCALID_BOULDER2, 7 ,7
# 16 "data/maps/VictoryRoad_3F/scripts.pory"
	return
# 17 "data/maps/VictoryRoad_3F/scripts.pory"

# 18 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_SetRockBarrier::
# 19 "data/maps/VictoryRoad_3F/scripts.pory"
	setmetatile 12, 12, METATILE_Cave_RockBarrier_Top, 1
# 20 "data/maps/VictoryRoad_3F/scripts.pory"
	setmetatile 12, 13, METATILE_Cave_RockBarrier_Bottom, 1
# 21 "data/maps/VictoryRoad_3F/scripts.pory"
	return
# 22 "data/maps/VictoryRoad_3F/scripts.pory"

# 23 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_FloorSwitch::
# 24 "data/maps/VictoryRoad_3F/scripts.pory"
	lockall
# 25 "data/maps/VictoryRoad_3F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_3F, 100, VictoryRoad_3F_EventScript_FloorSwitchAlreadyPressed
# 26 "data/maps/VictoryRoad_3F/scripts.pory"
	setmetatile 12, 12, METATILE_Cave_Floor_Ledge_Top, 0
# 27 "data/maps/VictoryRoad_3F/scripts.pory"
	setmetatile 12, 13, METATILE_Cave_Floor_Ledge_Bottom, 0
# 28 "data/maps/VictoryRoad_3F/scripts.pory"
	playse SE_ICE_BREAK
# 29 "data/maps/VictoryRoad_3F/scripts.pory"
	special DrawWholeMapView
# 30 "data/maps/VictoryRoad_3F/scripts.pory"
	waitse
# 31 "data/maps/VictoryRoad_3F/scripts.pory"
	copyobjectxytoperm LOCALID_BOULDER1
# 32 "data/maps/VictoryRoad_3F/scripts.pory"
	copyobjectxytoperm LOCALID_BOULDER2
# 33 "data/maps/VictoryRoad_3F/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_3F, 100
# 34 "data/maps/VictoryRoad_3F/scripts.pory"
	releaseall
# 35 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 36 "data/maps/VictoryRoad_3F/scripts.pory"

# 37 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_FloorSwitchAlreadyPressed::
# 38 "data/maps/VictoryRoad_3F/scripts.pory"
	releaseall
# 39 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 40 "data/maps/VictoryRoad_3F/scripts.pory"

# 41 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_George::
# 42 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_GEORGE, VictoryRoad_3F_Text_GeorgeIntro, VictoryRoad_3F_Text_GeorgeDefeat
# 43 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 45 "data/maps/VictoryRoad_3F/scripts.pory"

# 46 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_Colby::
# 47 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_COLBY, VictoryRoad_3F_Text_ColbyIntro, VictoryRoad_3F_Text_ColbyDefeat
# 48 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_ColbyPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 50 "data/maps/VictoryRoad_3F/scripts.pory"

# 51 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_Caroline::
# 52 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_CAROLINE, VictoryRoad_3F_Text_CarolineIntro, VictoryRoad_3F_Text_CarolineDefeat
# 53 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_CarolinePostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 55 "data/maps/VictoryRoad_3F/scripts.pory"

# 56 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_Alexa::
# 57 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_ALEXA, VictoryRoad_3F_Text_AlexaIntro, VictoryRoad_3F_Text_AlexaDefeat
# 58 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_AlexaPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 60 "data/maps/VictoryRoad_3F/scripts.pory"

# 61 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_Ray::
# 62 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_double TRAINER_COOL_COUPLE_RAY_TYRA, VictoryRoad_3F_Text_RayIntro, VictoryRoad_3F_Text_RayDefeat, VictoryRoad_3F_Text_RayNotEnoughMons
# 63 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_RayPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 65 "data/maps/VictoryRoad_3F/scripts.pory"

# 66 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_Brooke::
# 67 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_BROOKE, VictoryRoad_3F_Text_BrookeIntro, VictoryRoad_3F_Text_BrookeDefeat
# 68 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_BrookePostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 70 "data/maps/VictoryRoad_3F/scripts.pory"

# 71 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_Text_BrookeIntro::
# 72 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "You made it this far? Impressive.\p"
# 73 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "You might of made mistakes\n"
# 74 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "on your journey,\l"
# 75 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "But Victory Road doesn't\l"
# 76 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "forgive mistakes!$"
# 77 "data/maps/VictoryRoad_3F/scripts.pory"

# 78 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_Text_BrookeDefeat::
# 79 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "That… that was flawless…\p"
# 80 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "You battle with confidence.$"
# 81 "data/maps/VictoryRoad_3F/scripts.pory"

# 82 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_Text_BrookePostBattle::
# 83 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "But The Elite Four\n"
# 84 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "won't go easy on you!$"
# 85 "data/maps/VictoryRoad_3F/scripts.pory"

# 86 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_Shannon::
# 87 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_SHANNON, VictoryRoad_3F_Text_ShannonIntro, VictoryRoad_3F_Text_ShannonDefeat
# 88 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_ShannonPostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 90 "data/maps/VictoryRoad_3F/scripts.pory"

# 91 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_Text_ShannonIntro::
# 92 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "I've been training here every day.\n"
# 93 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "Let's see if your\l"
# 94 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "journey measures up!$"
# 95 "data/maps/VictoryRoad_3F/scripts.pory"

# 96 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_Text_ShannonDefeat::
# 97 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "I trained so hard… and still lost!$"
# 98 "data/maps/VictoryRoad_3F/scripts.pory"

# 99 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_Text_ShannonPostBattle::
# 100 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "Your bond with your\n"
# 101 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "Pokémon is clear.\l"
# 102 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "That's what true strength\l"
# 103 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "looks like.$"
# 104 "data/maps/VictoryRoad_3F/scripts.pory"

# 105 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_Austina::
# 106 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_AUSTINA, VictoryRoad_3F_Text_AustinaIntro, VictoryRoad_3F_Text_AustinaDefeat
# 107 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_AustinaPostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/VictoryRoad_3F/scripts.pory"
	end
# 109 "data/maps/VictoryRoad_3F/scripts.pory"

# 110 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_Text_AustinaIntro::
# 111 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "The air here feels different..\n"
# 112 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "Intense...\p"
# 113 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "Show me your power!$"
# 114 "data/maps/VictoryRoad_3F/scripts.pory"

# 115 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_Text_AustinaDefeat::
# 116 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "I couldn't keep up with you…!$"
# 117 "data/maps/VictoryRoad_3F/scripts.pory"

# 118 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_Text_AustinaPostBattle::
# 119 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "Don't hold back at the League.\n"
# 120 "data/maps/VictoryRoad_3F/scripts.pory"
	.string "Battle like you did just now!$"
# 121 "data/maps/VictoryRoad_3F/scripts.pory"

# 122 "data/maps/VictoryRoad_3F/scripts.pory"
VictoryRoad_3F_EventScript_Tyra::
# 123 "data/maps/VictoryRoad_3F/scripts.pory"
	trainerbattle_double TRAINER_COOL_COUPLE_RAY_TYRA, VictoryRoad_3F_Text_TyraIntro, VictoryRoad_3F_Text_TyraDefeat, VictoryRoad_3F_Text_TyraNotEnoughMons
# 124 "data/maps/VictoryRoad_3F/scripts.pory"
	msgbox VictoryRoad_3F_Text_TyraPostBattle, MSGBOX_AUTOCLOSE
# 125 "data/maps/VictoryRoad_3F/scripts.pory"
	end
