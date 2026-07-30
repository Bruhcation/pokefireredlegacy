# 1 "data/maps/PokemonLeague_HallOfFame/scripts.pory"

# 2 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
.set LOCALID_PROF_OAK, 1
# 3 "data/maps/PokemonLeague_HallOfFame/scripts.pory"

# 4 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
PokemonLeague_HallOfFame_MapScripts::
# 5 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_HallOfFame_OnFrame
# 6 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_HallOfFame_OnWarp
# 7 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	.byte 0
# 8 "data/maps/PokemonLeague_HallOfFame/scripts.pory"

# 9 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
PokemonLeague_HallOfFame_OnWarp::
# 10 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_HallOfFame_EventScript_TurnPlayerNorth
# 11 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	.2byte 0
# 12 "data/maps/PokemonLeague_HallOfFame/scripts.pory"

# 13 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
PokemonLeague_HallOfFame_EventScript_TurnPlayerNorth::
# 14 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 15 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	end
# 16 "data/maps/PokemonLeague_HallOfFame/scripts.pory"

# 17 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
PokemonLeague_HallOfFame_OnFrame::
# 18 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_HallOfFame_EventScript_EnterRoom
# 19 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	.2byte 0
# 20 "data/maps/PokemonLeague_HallOfFame/scripts.pory"

# 21 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
PokemonLeague_HallOfFame_EventScript_EnterRoom::
# 22 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	lockall
# 23 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	setflag FLAG_IS_CHAMPION
# 24 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 25 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_HallOfFame_Movement_EnterRoom
# 26 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	waitmovement 0
# 27 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterLeft
# 28 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 29 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	waitmovement 0
# 30 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	delay 18
# 31 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_HallOfFame_EventScript_OakCongratulations
# 32 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_HallOfFame_EventScript_OakCongratulations2
# 33 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	closemessage
# 34 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 35 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 36 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	waitmovement 0
# 37 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	delay 20
# 38 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 39 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 40 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	delay 40
# 41 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	setvar VAR_TEMP_1, 1
# 42 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	call EventScript_SetDefeatedEliteFourFlagsVars
# 43 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	clearflag FLAG_MOM_CHAMP
# 44 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	setrespawn SPAWN_PALLET_TOWN
# 45 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 46 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	special EnterHallOfFame
# 47 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	waitstate
# 48 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	releaseall
# 49 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	end
# 50 "data/maps/PokemonLeague_HallOfFame/scripts.pory"

# 51 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
PokemonLeague_HallOfFame_EventScript_OakCongratulations::
# 52 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	msgbox PokemonLeague_HallOfFame_Text_OakCongratulations
# 53 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	return
# 54 "data/maps/PokemonLeague_HallOfFame/scripts.pory"

# 55 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
PokemonLeague_HallOfFame_EventScript_OakCongratulations2::
# 56 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	msgbox PokemonLeague_HallOfFame_Text_OakCongratulations2
# 57 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	return
# 58 "data/maps/PokemonLeague_HallOfFame/scripts.pory"

# 59 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
PokemonLeague_HallOfFame_Movement_EnterRoom::
# 60 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 61 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 62 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 63 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 64 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 65 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 66 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 67 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	walk_up
# 68 "data/maps/PokemonLeague_HallOfFame/scripts.pory"
	step_end
