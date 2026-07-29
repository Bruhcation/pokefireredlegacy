# 1 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
ThreeIsland_PokemonCenter_1F_MapScripts::
# 3 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_PokemonCenter_1F_OnTransition
# 4 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
ThreeIsland_PokemonCenter_1F_OnTransition::
# 7 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_THREE_ISLAND
# 8 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	end
# 9 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
ThreeIsland_PokemonCenter_1F_EventScript_Nurse::
# 11 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	lock
# 12 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 13 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 14 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	release
# 15 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	end
# 16 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
ThreeIsland_PokemonCenter_1F_EventScript_Sailor::
# 18 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	msgbox ThreeIsland_PokemonCenter_1F_Text_ImpossibleToSurfBetweenIslands, MSGBOX_NPC
# 19 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
ThreeIsland_PokemonCenter_1F_EventScript_Lass::
# 22 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	msgbox ThreeIsland_PokemonCenter_1F_Text_AlwaysBerriesInBerryForest, MSGBOX_NPC
# 23 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
ThreeIsland_PokemonCenter_1F_EventScript_Rocker::
# 26 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	msgbox ThreeIsland_PokemonCenter_1F_Text_PCNetworkCanLinkWithKanto, MSGBOX_NPC
# 27 "data/maps/ThreeIsland_PokemonCenter_1F/scripts.pory"
	end
