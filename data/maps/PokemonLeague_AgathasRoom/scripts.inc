# 1 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"

# 2 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
PokemonLeague_AgathasRoom_MapScripts::
# 3 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_AgathasRoom_OnResume
# 4 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_AgathasRoom_OnLoad
# 5 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_AgathasRoom_OnWarp
# 6 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_AgathasRoom_OnFrame
# 7 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	.byte 0
# 8 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"

# 9 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
PokemonLeague_AgathasRoom_OnResume::
# 10 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	setvar VAR_0x8004, 2
# 11 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 12 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	end
# 13 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"

# 14 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
PokemonLeague_AgathasRoom_OnLoad::
# 15 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_AGATHA, PokemonLeague_AgathasRoom_EventScript_SetDoorOpen
# 16 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call_if_eq VAR_MAP_SCENE_POKEMON_LEAGUE, 3, PokemonLeague_AgathasRoom_EventScript_CloseEntry
# 17 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	end
# 18 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"

# 19 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_CloseEntry::
# 20 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
# 21 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	return
# 22 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"

# 23 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_SetDoorOpen::
# 24 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
# 25 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	return
# 26 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"

# 27 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
PokemonLeague_AgathasRoom_OnWarp::
# 28 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_AgathasRoom_EventScript_TurnPlayerNorth
# 29 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	.2byte 0
# 30 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"

# 31 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_TurnPlayerNorth::
# 32 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 33 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	end
# 34 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"

# 35 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
PokemonLeague_AgathasRoom_OnFrame::
# 36 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 2, PokemonLeague_AgathasRoom_EventScript_EnterRoom
# 37 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	.2byte 0
# 38 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"

# 39 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_EnterRoom::
# 40 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	lockall
# 41 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 42 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 3
# 43 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	releaseall
# 44 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	end
# 45 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"

# 46 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Agatha::
# 47 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	lock
# 48 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	faceplayer
# 49 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	famechecker FAMECHECKER_AGATHA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 50 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_AGATHA, PokemonLeague_AgathasRoom_EventScript_PostBattle
# 51 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	famechecker FAMECHECKER_AGATHA, 0
# 52 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	famechecker FAMECHECKER_AGATHA, 4
# 53 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	famechecker FAMECHECKER_OAK, 4
# 54 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_AgathasRoom_EventScript_Intro
# 55 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_AgathasRoom_EventScript_RematchIntro
# 56 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	setflag FLAG_TEMP_3
# 57 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	setflag FLAG_TEMP_5
# 58 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_AgathasRoom_EventScript_Battle
# 59 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_AgathasRoom_EventScript_Rematch
# 60 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	clearflag FLAG_TEMP_5
# 61 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_AgathasRoom_EventScript_DefeatedAgatha
# 62 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_AgathasRoom_EventScript_DefeatedAgatha2
# 63 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	end
# 64 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"

# 65 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Intro::
# 66 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_Intro
# 67 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	return
# 68 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"

# 69 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_RematchIntro::
# 70 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_RematchIntro
# 71 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	return
# 72 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"

# 73 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Battle::
# 74 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_AGATHA, PokemonLeague_AgathasRoom_Text_Defeat
# 75 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	return
# 76 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"

# 77 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_Rematch::
# 78 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_AGATHA_2, PokemonLeague_AgathasRoom_Text_Defeat2
# 79 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	return
# 80 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"

# 81 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_PostBattle::
# 82 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_PostBattle
# 83 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	release
# 84 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	end
# 85 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"

# 86 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_DefeatedAgatha::
# 87 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	setflag FLAG_DEFEATED_AGATHA
# 88 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	setflag FLAG_AGATHACAP
# 89 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 90 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_PostBattle
# 91 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	release
# 92 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	end
# 93 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"

# 94 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
PokemonLeague_AgathasRoom_EventScript_DefeatedAgatha2::
# 95 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	setflag FLAG_DEFEATED_AGATHA
# 96 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 97 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	msgbox PokemonLeague_AgathasRoom_Text_PostBattle2
# 98 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	release
# 99 "data/maps/PokemonLeague_AgathasRoom/scripts.pory"
	end
