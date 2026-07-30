# 1 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
TwoIsland_PokemonCenter_1F_MapScripts::
# 3 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_PokemonCenter_1F_OnTransition
# 4 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
TwoIsland_PokemonCenter_1F_OnTransition::
# 7 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_TWO_ISLAND
# 8 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	end
# 9 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
TwoIsland_PokemonCenter_1F_EventScript_Nurse::
# 11 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	lock
# 12 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 13 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 14 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	release
# 15 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	end
# 16 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
TwoIsland_PokemonCenter_1F_EventScript_GBAKid::
# 18 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	msgbox TwoIsland_PokemonCenter_1F_Text_HaveYouVisitedGameCorner, MSGBOX_NPC
# 19 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
TwoIsland_PokemonCenter_1F_EventScript_BugCatcher::
# 22 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	msgbox TwoIsland_PokemonCenter_1F_Text_OldLadyLivesOutOnCape, MSGBOX_NPC
# 23 "data/maps/TwoIsland_PokemonCenter_1F/scripts.pory"
	end
