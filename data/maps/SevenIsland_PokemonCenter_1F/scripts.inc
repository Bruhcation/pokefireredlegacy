# 1 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
SevenIsland_PokemonCenter_1F_MapScripts::
# 3 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_PokemonCenter_1F_OnTransition
# 4 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
SevenIsland_PokemonCenter_1F_OnTransition::
# 7 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_SEVEN_ISLAND
# 8 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	end
# 9 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
SevenIsland_PokemonCenter_1F_EventScript_Nurse::
# 11 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	lock
# 12 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 13 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 14 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	release
# 15 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	end
# 16 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
SevenIsland_PokemonCenter_1F_EventScript_OldMan::
# 18 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	msgbox SevenIsland_PokemonCenter_1F_Text_EventsDependingOnConnections, MSGBOX_NPC
# 19 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
SevenIsland_PokemonCenter_1F_EventScript_Sailor::
# 22 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	msgbox SevenIsland_PokemonCenter_1F_Text_DidYouRideSeagallopHere, MSGBOX_NPC
# 23 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
SevenIsland_PokemonCenter_1F_EventScript_Beauty::
# 26 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	msgbox SevenIsland_PokemonCenter_1F_Text_CheckOutTrainerTower, MSGBOX_NPC
# 27 "data/maps/SevenIsland_PokemonCenter_1F/scripts.pory"
	end
