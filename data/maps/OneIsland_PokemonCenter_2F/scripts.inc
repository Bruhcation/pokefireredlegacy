# 1 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"

# 2 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
OneIsland_PokemonCenter_2F_MapScripts::
# 3 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CableClub_OnFrame
# 4 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CableClub_OnWarp
# 5 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 6 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
# 7 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	.byte 0
# 8 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"

# 9 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
OneIsland_PokemonCenter_2F_EventScript_IVCheck::
# 10 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	lock
# 11 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	faceplayer
# 12 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	call EventScript_IVChecker
# 13 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	release
# 14 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	end
# 15 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	
# 16 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
OneIsland_PokemonCenter_2F_EventScript_EVCheck::
# 17 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	lock
# 18 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	faceplayer
# 19 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	call EventScript_EVChecker
# 20 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	release
# 21 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	end
# 22 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"

# 23 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"

# 24 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
@ The below 3 are unused and leftover from RS
# 25 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
OneIsland_PokemonCenter_2F_EventScript_Colosseum::
# 26 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_Colosseum
# 27 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	end
# 28 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"

# 29 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
OneIsland_PokemonCenter_2F_EventScript_TradeCenter::
# 30 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_TradeCenter
# 31 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	end
# 32 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"

# 33 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
OneIsland_PokemonCenter_2F_EventScript_RecordCorner::
# 34 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	call CableClub_EventScript_RecordCorner
# 35 "data/maps/OneIsland_PokemonCenter_2F/scripts.pory"
	end
