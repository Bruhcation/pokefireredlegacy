# 1 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"

# 2 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
PewterCity_PokemonCenter_2F_MapScripts::
# 3 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CableClub_OnFrame
# 4 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CableClub_OnWarp
# 5 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 6 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
# 7 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
	.byte 0
# 8 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"

# 9 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
@ The below 3 are unused and leftover from RS
# 10 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
PewterCity_PokemonCenter_2F_EventScript_Colosseum::
# 11 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_Colosseum
# 12 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
	end
# 13 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"

# 14 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
PewterCity_PokemonCenter_2F_EventScript_TradeCenter::
# 15 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_TradeCenter
# 16 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
	end
# 17 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"

# 18 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
PewterCity_PokemonCenter_2F_EventScript_RecordCorner::
# 19 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_RecordCorner
# 20 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
	end
# 21 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"

# 22 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
PewterCity_PokemonCenter_2F_EventScript_IVCheck::
# 23 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
	lock
# 24 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
	faceplayer
# 25 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
	call EventScript_IVChecker
# 26 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
	release
# 27 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
	end
# 28 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
PewterCity_PokemonCenter_2F_EventScript_EVCheck::
# 29 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
	lock
# 30 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
	faceplayer
# 31 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
	call EventScript_EVChecker
# 32 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
	release
# 33 "data/maps/PewterCity_PokemonCenter_2F/scripts.pory"
	end
