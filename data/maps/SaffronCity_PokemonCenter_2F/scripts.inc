# 1 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"

# 2 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
SaffronCity_PokemonCenter_2F_MapScripts::
# 3 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CableClub_OnFrame
# 4 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CableClub_OnWarp
# 5 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 6 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
# 7 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
	.byte 0
# 8 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"

# 9 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
SaffronCity_PokemonCenter_2F_EventScript_IVCheck::
# 10 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
	lock
# 11 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
	faceplayer
# 12 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
	call EventScript_IVChecker
# 13 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
	release
# 14 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
	end
# 15 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
SaffronCity_PokemonCenter_2F_EventScript_EVCheck::
# 16 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
	lock
# 17 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
	faceplayer
# 18 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
	call EventScript_EVChecker
# 19 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
	release
# 20 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
	end
# 21 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"

# 22 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
@ The below 3 are unused and leftover from RS
# 23 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
SaffronCity_PokemonCenter_2F_EventScript_Colosseum::
# 24 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_Colosseum
# 25 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
	end
# 26 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"

# 27 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
SaffronCity_PokemonCenter_2F_EventScript_TradeCenter::
# 28 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_TradeCenter
# 29 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
	end
# 30 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"

# 31 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
SaffronCity_PokemonCenter_2F_EventScript_RecordCorner::
# 32 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_RecordCorner
# 33 "data/maps/SaffronCity_PokemonCenter_2F/scripts.pory"
	end
