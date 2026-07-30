# 1 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
.equ LOCALID_RIVAL, 2
# 3 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
SixIsland_PokemonCenter_1F_MapScripts::
# 5 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_PokemonCenter_1F_OnTransition
# 6 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SixIsland_PokemonCenter_1F_OnFrame
# 7 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	.byte 0
# 8 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"

# 9 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
SixIsland_PokemonCenter_1F_OnTransition::
# 10 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_SIX_ISLAND
# 11 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 0, SixIsland_PokemonCenter_1F_EventScript_ShowRival
# 12 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
SixIsland_PokemonCenter_1F_EventScript_ShowRival::
# 15 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_SIX_ISLAND_POKECENTER_RIVAL
# 16 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	return
# 17 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
SixIsland_PokemonCenter_1F_OnFrame::
# 19 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 0, SixIsland_PokemonCenter_1F_EventScript_RivalScene
# 20 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	.2byte 0
# 21 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
SixIsland_PokemonCenter_1F_EventScript_RivalScene::
# 23 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 24 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 25 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 26 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 27 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 28 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 29 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 30 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 31 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 32 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	delay 25
# 33 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_RIVAL, SixIsland_PokemonCenter_1F_Movement_RivalApproach
# 34 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 35 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	msgbox SixIsland_PokemonCenter_1F_Text_RivalImpossibleToGetAllMonsAroundHere
# 36 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 37 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SixIsland_PokemonCenter_1F_Movement_PlayerWatchRivalExit
# 38 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_RIVAL, SixIsland_PokemonCenter_1F_Movement_RivalExit
# 39 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 40 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	fadedefaultbgm
# 41 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	playse SE_EXIT
# 42 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	delay 35
# 43 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 44 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 1
# 45 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_FOUR_ISLAND, 1
# 46 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	releaseall
# 47 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	end
# 48 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"

# 49 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
SixIsland_PokemonCenter_1F_Movement_RivalApproach::
# 50 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 51 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 52 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 53 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 54 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 55 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"

# 56 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
SixIsland_PokemonCenter_1F_Movement_RivalExit::
# 57 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 58 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	delay_4
# 59 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 60 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 61 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"

# 62 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
SixIsland_PokemonCenter_1F_Movement_PlayerWatchRivalExit::
# 63 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 64 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 65 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 66 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"

# 67 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
SixIsland_PokemonCenter_1F_EventScript_Nurse::
# 68 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	lock
# 69 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 70 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 71 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	release
# 72 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	end
# 73 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"

# 74 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
SixIsland_PokemonCenter_1F_EventScript_Hiker::
# 75 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	msgbox SixIsland_PokemonCenter_1F_Text_SomethingHiddenOnThisIsland, MSGBOX_NPC
# 76 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	end
# 77 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"

# 78 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
SixIsland_PokemonCenter_1F_EventScript_OldMan::
# 79 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	msgbox SixIsland_PokemonCenter_1F_Text_SomeMonsEvolveByTradingWithHeldItem, MSGBOX_NPC
# 80 "data/maps/SixIsland_PokemonCenter_1F/scripts.pory"
	end
