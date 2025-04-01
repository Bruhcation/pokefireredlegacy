# 1 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 2 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ LOCALID_PROF_OAK,        4
# 3 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ LOCALID_BULBASAUR_BALL,  5
# 4 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ LOCALID_SQUIRTLE_BALL,   6
# 5 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ LOCALID_CHARMANDER_BALL, 7
# 6 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ LOCALID_RIVAL,           8
# 7 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ LOCALID_POKEDEX_1,       9
# 8 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ LOCALID_POKEDEX_2,       10
# 9 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 10 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ PLAYER_STARTER_NUM,      VAR_TEMP_1
# 11 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ PLAYER_STARTER_SPECIES,  VAR_TEMP_2
# 12 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ RIVAL_STARTER_SPECIES,   VAR_TEMP_3
# 13 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ RIVAL_STARTER_ID,        VAR_TEMP_4
# 14 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 15 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ SHOWED_OAK_COMPLETE_DEX, FLAG_TEMP_2
# 16 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 17 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_MapScripts::
# 18 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_ProfessorOaksLab_OnTransition
# 19 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_ProfessorOaksLab_OnWarp
# 20 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_ProfessorOaksLab_OnFrame
# 21 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.byte 0
# 22 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 23 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_OnTransition::
# 24 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_VISITED_OAKS_LAB
# 25 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene
# 26 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene
# 27 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished
# 28 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck
# 29 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 30 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 31 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck::
# 32 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_OAK_SKIP_22_RIVAL_CHECK
# 33 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 34 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 35 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished::
# 36 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9
# 37 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 38 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 39 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene::
# 40 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PROF_OAK, 6, 11
# 41 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 42 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_OAK
# 43 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 44 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 45 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene::
# 46 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PROF_OAK, 6, 11
# 47 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 48 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 49 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 50 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_OnWarp::
# 51 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene
# 52 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.2byte 0
# 53 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 54 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene::
# 55 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 56 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 57 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 58 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_OnFrame::
# 59 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_ChooseStarterScene
# 60 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene
# 61 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.2byte 0
# 62 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 63 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene:: @ 8169002 
# 64 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 65 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_FACING, DIR_NORTH
# 66 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 67 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 68 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 69 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_PROF_OAK
# 70 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PROF_OAK, 6, 3
# 71 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 72 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 73 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 74 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 75 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 76 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 77 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 78 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene::
# 79 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons
# 80 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 81 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth
# 82 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth
# 83 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 84 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 85 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything
# 86 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 87 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes
# 88 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth
# 89 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest
# 90 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 91 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits
# 92 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 93 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 94 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth
# 95 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth
# 96 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast
# 97 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest
# 98 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_POKEDEX_1
# 99 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_POKEDEX_2
# 100 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 101 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData
# 102 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 103 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 104 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 105 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 107 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 108 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 109 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 110 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 111 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 112 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded
# 113 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 115 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special EnableNationalPokedex
# 117 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex
# 118 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex
# 119 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 120 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 121 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 122 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 125 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_RIVAL
# 126 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 127 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8
# 128 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_HIS_LAB
# 129 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_IS_CHAMPION
# 130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_ADMIN
# 131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_ADMIN2
# 132 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK
# 133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_JANINE
# 134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 135 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth::
# 138 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 139 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 140 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 141 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 143 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 146 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest::
# 147 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 6, 10
# 148 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 149 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 150 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 151 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 152 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 153 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 155 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 156 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth::
# 157 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 6, 10
# 158 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 159 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 160 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 161 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 163 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 164 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 165 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth::
# 166 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 167 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 168 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 170 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest::
# 171 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 172 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 173 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 174 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 175 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth::
# 176 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 177 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 178 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 179 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 180 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth::
# 181 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth
# 182 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 184 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PROF_OAK
# 185 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 186 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 187 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast::
# 188 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 189 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PROF_OAK
# 191 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 192 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 193 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest::
# 194 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 196 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 197 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 198 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk::
# 199 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 200 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 201 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 202 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 203 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 206 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth::
# 207 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 208 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 209 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 210 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 211 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 212 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 213 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 214 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_ChooseStarterScene::
# 215 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 216 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 217 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 218 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_PROF_OAK
# 220 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_PROF_OAK, 6, 3
# 221 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 222 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 223 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 224 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 225 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 226 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 227 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 228 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_DUMMY
# 229 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 230 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting
# 231 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 60
# 233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne
# 234 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 235 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 236 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalReact
# 237 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 238 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe
# 239 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBePatientRival
# 240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 241 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 242 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_PlayersHouse_1F_Text_ReceivedRunningShoesFromAide
# 243 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 244 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 245 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_ReceivedRunningShoesFromAide2
# 246 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special DisableMsgBoxWalkaway
# 247 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	signmsg
# 248 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 249 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 250 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_PressB
# 251 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 253 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 254 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 255 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakEnter::
# 256 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 257 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 259 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 260 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 261 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 262 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 263 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 264 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerEnter::
# 265 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 266 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 267 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 268 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 269 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 270 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 271 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 272 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 274 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 275 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalReact::
# 276 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 277 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 278 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 279 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeaveStarterSceneTrigger::
# 281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 283 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FaceDown
# 284 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 285 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet
# 286 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 287 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp
# 288 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 289 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 290 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 291 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 292 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp::
# 293 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 294 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 295 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 296 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerLeft::
# 297 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 298 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 1
# 299 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 300 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 301 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 302 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerMid::
# 303 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 304 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 2
# 305 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 306 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 307 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 308 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerRight::
# 309 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 310 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 3
# 311 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 312 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 313 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 314 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattle::
# 315 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 316 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 317 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 319 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 320 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 321 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons
# 322 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 323 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FaceDown
# 324 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 325 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 0, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander
# 326 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur
# 327 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle
# 328 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 330 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ The scripts for the rival approaching the player for battle are a bit bloated because
# 331 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ both the player and rival can be in 3 different positions, so theres 9 different approaches
# 332 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ NOTE: Names below refer to the Rival's mon (e.g. for RivalBattleSquirtle, player has Charmander)
# 333 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 334 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle::
# 335 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft
# 336 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid
# 337 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight
# 338 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 339 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 340 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft::
# 341 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft
# 342 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 343 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 344 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 345 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 346 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid::
# 347 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid
# 348 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 349 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 350 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 351 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 352 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight::
# 353 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight
# 354 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 355 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 356 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 357 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 358 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle::
# 359 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_SQUIRTLE, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 360 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 361 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 362 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 363 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft::
# 364 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 365 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 366 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 367 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 368 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 369 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 370 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 371 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 372 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid::
# 373 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 374 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 375 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 376 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 377 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 378 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 379 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 380 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight::
# 381 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 382 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 383 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 384 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 385 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 386 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 387 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander::
# 388 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft
# 389 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid
# 390 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight
# 391 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 392 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 393 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft::
# 394 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft
# 395 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 396 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 397 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 398 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 399 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid::
# 400 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid
# 401 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 402 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 403 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 404 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 405 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight::
# 406 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight
# 407 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 408 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 409 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 410 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 411 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander::
# 412 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_CHARMANDER, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 413 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 414 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 415 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 416 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft::
# 417 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 418 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 419 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 420 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 421 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 422 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 423 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 424 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 425 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 426 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid::
# 427 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 428 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 429 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 430 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 431 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 432 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 433 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 434 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 435 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight::
# 436 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 437 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 438 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 439 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 440 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 441 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 442 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 443 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur::
# 444 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft
# 445 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid
# 446 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight
# 447 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 448 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 449 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft::
# 450 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft
# 451 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 452 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 453 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 454 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 455 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid::
# 456 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid
# 457 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 458 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 459 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 460 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 461 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight::
# 462 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight
# 463 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 464 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 465 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 466 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 467 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur::
# 468 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_BULBASAUR, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 469 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 470 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 471 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 472 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft::
# 473 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 474 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 475 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 476 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 477 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 478 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 479 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 480 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid::
# 481 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 482 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 483 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 484 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 485 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 486 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 487 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight::
# 488 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 489 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 490 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 491 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 492 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 493 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle::
# 494 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special HealPlayerParty
# 495 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon
# 496 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 497 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 498 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft
# 499 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid
# 500 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight
# 501 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_RIVAL
# 502 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_EXIT
# 503 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 504 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 505 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 506 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 507 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 508 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 509 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft::
# 510 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft
# 511 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 512 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_RIVAL
# 513 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 514 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 515 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid::
# 516 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid
# 517 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 518 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_RIVAL
# 519 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 520 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 521 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight::
# 522 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight
# 523 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight
# 524 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_RIVAL
# 525 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 526 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 527 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft::
# 528 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 529 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 530 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 531 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 532 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 533 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 534 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 535 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 536 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 537 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight::
# 538 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 539 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 540 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 541 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 542 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 543 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 544 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 545 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 546 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 547 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid::
# 548 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 549 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 550 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 551 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 552 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 553 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 554 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 555 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 556 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 557 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 558 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle::
# 559 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 560 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 561 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 562 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 563 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 564 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 565 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 566 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight::
# 567 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 568 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 569 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 570 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 571 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 572 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 573 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 574 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Rival::
# 575 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 576 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 577 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter
# 578 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter
# 579 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround
# 580 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 581 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 582 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 583 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter::
# 584 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer
# 585 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 586 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 587 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 588 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter::
# 589 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher
# 590 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 591 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 592 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 593 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak::
# 594 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 595 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 596 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set SHOWED_OAK_COMPLETE_DEX, PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex
# 597 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 598 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 599 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene
# 600 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 601 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls
# 602 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene
# 603 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4, PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow
# 604 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon
# 605 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose
# 606 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 607 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 608 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 609 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex::
# 610 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 611 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 612 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 613 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 614 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon::
# 615 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon
# 616 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 617 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 618 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 619 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow::
# 620 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow
# 621 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 622 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 623 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 624 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene::
# 625 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe
# 626 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 627 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 628 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel
# 629 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 630 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 631 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 632 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeitem ITEM_OAKS_PARCEL
# 633 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered
# 634 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 635 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGramps
# 636 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 637 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth
# 638 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth
# 639 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 640 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 641 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 642 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor
# 643 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 644 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 645 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_PIN
# 646 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_ExclamationMark
# 647 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 648 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_Delay48
# 649 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 650 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth
# 651 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast
# 652 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest
# 653 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth
# 654 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo
# 655 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 656 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth
# 657 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth
# 658 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast
# 659 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest
# 660 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk
# 661 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 662 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 663 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou
# 664 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 665 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 666 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 667 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 668 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 669 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 670 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 25
# 671 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 672 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 673 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 674 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 675 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 676 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 677 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 678 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak
# 679 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 680 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 681 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 682 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 683 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_GAME_CLEAR_OLD
# 684 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 685 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 686 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese
# 687 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 688 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakExplainCatching
# 689 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 1
# 690 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream
# 691 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps
# 692 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth
# 693 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth
# 694 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 695 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 696 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap
# 697 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 698 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 699 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 700 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 701 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 702 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 703 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_RIVAL
# 704 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 705 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 706 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 707 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 708 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 709 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 710 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 711 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 712 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 713 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth::
# 714 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 715 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 716 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 717 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 718 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth::
# 719 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth
# 720 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 721 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 722 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 723 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast::
# 724 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 725 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast
# 726 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 727 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 728 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 729 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest::
# 730 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 731 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 732 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 733 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 734 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast::
# 735 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 736 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 737 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 738 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 739 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 740 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver::
# 741 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 742 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 743 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 744 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 745 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth::
# 746 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 747 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 748 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 749 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 750 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth::
# 751 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 752 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 753 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 754 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 755 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth::
# 756 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth
# 757 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 758 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 759 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PROF_OAK
# 760 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 761 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 762 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast::
# 763 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 764 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 765 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_PROF_OAK
# 766 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 767 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 768 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest::
# 769 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 770 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 771 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 772 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 773 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast::
# 774 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 775 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 776 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 777 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 778 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 779 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk::
# 780 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 781 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 782 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 783 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 784 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 785 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk::
# 786 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 787 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 788 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 789 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 790 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 791 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 792 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth::
# 793 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 794 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 795 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 796 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 797 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 798 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 799 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 800 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls::
# 801 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 802 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 803 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 804 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 805 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 806 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 807 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_0x8009, 1, PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls  @ Player only has starter
# 808 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 809 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 810 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 811 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedex::
# 812 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 813 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SAW_DEX_COMPLETION, PalletTown_ProfessorOaksLab_EventScript_DexCompleted
# 814 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 815 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 816 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 817 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexCompleted::
# 818 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 819 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 820 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PokedexRating_Text_Wroooaaarrr
# 821 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 822 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth
# 823 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth
# 824 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast
# 825 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest
# 826 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FacePlayer
# 827 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 828 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 829 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 70
# 830 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 831 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag SHOWED_OAK_COMPLETE_DEX
# 832 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality2
# 833 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_HIS_LAB
# 834 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject 4
# 835 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 836 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 837 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 838 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 839 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 840 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth::
# 841 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth
# 842 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 843 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 844 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 845 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth::
# 846 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth
# 847 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 848 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 849 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 850 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast::
# 851 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedEast
# 852 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 853 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 854 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 855 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest::
# 856 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedWest
# 857 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 858 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 859 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 860 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth::
# 861 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 862 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 863 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 864 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 865 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 866 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 867 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 868 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 869 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth::
# 870 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 871 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 872 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 873 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 874 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 875 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 876 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 877 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 878 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedEast::
# 879 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 880 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 881 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 882 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 883 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 884 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 885 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 886 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 887 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedWest::
# 888 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 889 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 890 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 891 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 892 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 893 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 894 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 895 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 896 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ Unused
# 897 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_Search:
# 898 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 899 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 900 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 901 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 902 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 903 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 904 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 905 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 906 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 907 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 908 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 909 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 910 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 911 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 912 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 913 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 914 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 915 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 916 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 917 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 918 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 919 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 920 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 921 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 922 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 923 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 924 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ Unused
# 925 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_VerticalPacing:
# 926 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 927 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 928 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 929 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 930 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 931 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 932 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 933 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 934 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 935 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 936 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene::
# 937 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 938 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 939 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_lt VAR_0x8009, 1, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 940 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 941 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 942 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer
# 943 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 944 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 945 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 946 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene::
# 947 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 948 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 949 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 950 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls::
# 951 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 952 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special QuestLog_CutRecording
# 953 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SKIP_22_RIVAL_CHECK, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 954 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls
# 955 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	checkitem ITEM_POKE_BALL
# 956 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls
# 957 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 958 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 959 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 960 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls::
# 961 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ROUTE22, 2, PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls
# 962 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 963 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 964 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 965 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls::
# 966 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex
# 967 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 968 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
# 969 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 970 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 971 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 972 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait::
# 973 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait
# 974 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 975 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 976 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 977 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls::
# 978 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime
# 979 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 980 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 981 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 982 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth::
# 983 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 5, 10
# 984 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 985 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 986 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 987 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 988 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 989 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 990 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest::
# 991 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 6, 10
# 992 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 993 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 994 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 995 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 996 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 997 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 998 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 999 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth::
# 1000 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 6, 10
# 1001 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_RIVAL
# 1002 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1003 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 1004 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1005 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1006 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1007 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth::
# 1008 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FacePlayer
# 1009 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1010 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1011 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1012 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1013 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1014 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1015 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest::
# 1016 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FacePlayer
# 1017 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1018 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1019 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1020 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1021 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1022 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1023 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1024 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast::
# 1025 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FacePlayer
# 1026 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1027 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1028 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1029 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1030 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1031 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1032 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1033 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth::
# 1034 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 1035 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1036 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1037 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1038 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1039 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth::
# 1040 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 1041 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1042 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1043 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1044 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1045 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest::
# 1046 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 1047 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1048 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1049 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1050 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1051 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth::
# 1052 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 1053 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1054 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1055 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1056 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1057 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExit::
# 1058 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1059 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1060 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1061 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1062 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth::
# 1063 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1064 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1065 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1066 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1067 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest::
# 1068 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 1069 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1070 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1071 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1072 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth::
# 1073 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1074 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1075 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1076 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1077 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1078 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1079 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 1080 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 1081 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1082 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1083 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalEnter::
# 1084 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1085 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1086 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1087 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1088 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1089 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1090 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1091 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1092 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExit::
# 1093 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1094 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1095 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1096 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1097 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1098 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1099 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1100 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1101 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 1102 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1103 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1104 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 0
# 1105 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_CHIKORITA
# 1106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_CHARMANDER
# 1107 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_CHARMANDER_BALL
# 1108 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1109 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1110 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1111 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1112 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1113 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice::
# 1115 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_FaceRight
# 1116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1117 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	showmonpic PLAYER_STARTER_SPECIES, 10, 3
# 1118 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1119 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 0, PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur
# 1120 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 1, PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle
# 1121 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander
# 1122 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur::
# 1125 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur, MSGBOX_YESNO
# 1126 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1127 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1128 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1129 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle::
# 1131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle, MSGBOX_YESNO
# 1132 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1135 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander::
# 1137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander, MSGBOX_YESNO
# 1138 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1139 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1140 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1141 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter::
# 1143 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1146 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1147 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ChoseStarter::
# 1148 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1149 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1150 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 1151 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 1152 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1153 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 1154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	givemon PLAYER_STARTER_SPECIES, 5
# 1155 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_STARTER_MON, PLAYER_STARTER_NUM
# 1156 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, PLAYER_STARTER_SPECIES
# 1157 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 1158 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1159 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1160 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1161 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 1162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_GiveNicknameToStarter
# 1163 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 1164 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1165 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1166 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
EventScript_GiveNicknameToStarter::
# 1167 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 1168 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_ChangePokemonNickname
# 1169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 1170 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1171 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1172 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter::
# 1173 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 1174 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 0, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander
# 1175 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 1, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur
# 1176 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle
# 1177 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1178 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1179 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander::
# 1180 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander
# 1181 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1182 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1184 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1185 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle::
# 1186 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle
# 1187 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1188 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1189 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1191 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur::
# 1192 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur
# 1193 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1194 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1196 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1197 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter::
# 1198 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1199 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen
# 1200 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject RIVAL_STARTER_ID
# 1201 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1202 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, RIVAL_STARTER_SPECIES
# 1203 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak
# 1204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1206 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1207 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 1208 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_OPENED_START_MENU, PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene
# 1209 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1210 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1211 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1212 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene::
# 1213 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 1214 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1215 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1216 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander::
# 1217 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1218 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1220 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1221 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1222 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1223 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1224 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1225 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1226 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1227 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle::
# 1228 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1229 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1230 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1231 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1234 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1235 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1236 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur::
# 1237 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1238 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1239 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1241 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1242 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1243 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1244 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 1245 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1246 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1247 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 1
# 1248 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_TOTODILE
# 1249 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_BULBASAUR
# 1250 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_BULBASAUR_BALL
# 1251 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1253 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1254 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1255 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1256 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1257 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 1258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1259 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1260 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 2
# 1261 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_CYNDAQUIL
# 1262 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_SQUIRTLE
# 1263 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_SQUIRTLE_BALL
# 1264 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1265 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1266 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1267 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1268 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1269 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1270 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LastPokeBall::
# 1271 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OaksLastMon
# 1272 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1274 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1275 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1::
# 1276 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1277 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1278 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear
# 1279 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1283 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear::
# 1284 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 5
# 1285 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow
# 1286 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1287 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1288 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1289 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2::
# 1290 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1291 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1292 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear
# 1293 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1294 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1295 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1296 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1297 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear::
# 1298 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_DAISY, 0
# 1299 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons
# 1300 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1301 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1302 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1303 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide3::
# 1304 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1305 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1306 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 2
# 1307 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons
# 1308 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1309 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1310 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1311 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Pokedex::
# 1312 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia, MSGBOX_NPC
# 1313 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1314 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1315 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Computer::
# 1316 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_EmailMessage, MSGBOX_SIGN
# 1317 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1319 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeftSign::
# 1320 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu, MSGBOX_SIGN
# 1321 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1322 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1323 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSign::
# 1324 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 1325 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RightSignAlt
# 1326 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu
# 1327 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 1328 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1330 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSignAlt::
# 1331 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints
# 1332 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 1333 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
