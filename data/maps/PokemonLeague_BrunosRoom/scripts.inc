# 1 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 2 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
.set LOCALID_BRUNO, 1
# 3 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 4 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_MapScripts::
# 5 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_BrunosRoom_OnResume
# 6 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_BrunosRoom_OnLoad
# 7 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_BrunosRoom_OnWarp
# 8 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_BrunosRoom_OnFrame
# 9 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	.byte 0
# 10 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 11 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_OnResume::
# 12 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setvar VAR_0x8004, 1
# 13 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 14 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 15 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 16 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_OnLoad::
# 17 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_EventScript_SetDoorOpen
# 18 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_MAP_SCENE_POKEMON_LEAGUE, 2, PokemonLeague_BrunosRoom_EventScript_CloseEntry
# 19 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 20 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 21 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_CloseEntry::
# 22 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
# 23 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 24 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 25 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_SetDoorOpen::
# 26 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
# 27 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 28 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 29 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_OnWarp::
# 30 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_BrunosRoom_EventScript_TurnPlayerNorth
# 31 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	.2byte 0
# 32 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 33 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_TurnPlayerNorth::
# 34 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 35 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 36 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 37 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_OnFrame::
# 38 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 1, PokemonLeague_BrunosRoom_EventScript_EnterRoom
# 39 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	.2byte 0
# 40 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 41 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_EnterRoom::
# 42 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	lockall
# 43 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 44 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 2
# 45 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	releaseall
# 46 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 47 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 48 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Bruno::
# 49 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	lock
# 50 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	faceplayer
# 51 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	famechecker FAMECHECKER_BRUNO, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 52 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_EventScript_PostBattle
# 53 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 0
# 54 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 1
# 55 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_BrunosRoom_EventScript_Intro
# 56 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_BrunosRoom_EventScript_RematchIntro
# 57 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setflag FLAG_TEMP_3
# 58 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setflag FLAG_TEMP_5
# 59 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_BrunosRoom_EventScript_Battle
# 60 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_BrunosRoom_EventScript_Rematch
# 61 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	clearflag FLAG_TEMP_5
# 62 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_BrunosRoom_EventScript_DefeatedBruno
# 63 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_BrunosRoom_EventScript_DefeatedBruno2
# 64 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 65 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 66 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Intro::
# 67 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_Intro
# 68 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 69 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 70 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_RematchIntro::
# 71 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_RematchIntro
# 72 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 73 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 74 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Battle::
# 75 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_BRUNO, PokemonLeague_BrunosRoom_Text_Defeat
# 76 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 77 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 78 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Rematch::
# 79 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_BRUNO_2, PokemonLeague_BrunosRoom_Text_Defeat2
# 80 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 81 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 82 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_PostBattle::
# 83 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_PostBattle
# 84 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	closemessage
# 85 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight
# 86 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft
# 87 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 88 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 89 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	release
# 90 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 91 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 92 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_DefeatedBruno::
# 93 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setflag FLAG_DEFEATED_BRUNO
# 94 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setflag FLAG_BRUNOCAP
# 95 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 96 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_PostBattle
# 97 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	closemessage
# 98 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight
# 99 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft
# 100 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 101 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 102 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	release
# 103 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 104 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 105 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_DefeatedBruno2::
# 106 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setflag FLAG_DEFEATED_BRUNO
# 107 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 108 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_PostBattle2
# 109 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	closemessage
# 110 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight
# 111 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft
# 112 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 113 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 114 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	release
# 115 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 116 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 117 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft::
# 118 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterLeft
# 119 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	waitmovement 0
# 120 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 121 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 122 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight::
# 123 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterRight
# 124 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	waitmovement 0
# 125 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 126 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 127 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown::
# 128 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterDown
# 129 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	waitmovement 0
# 130 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
