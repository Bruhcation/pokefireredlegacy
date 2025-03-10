# 1 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
FiveIsland_PokemonCenter_1F_MapScripts::
# 3 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_PokemonCenter_1F_OnTransition
# 4 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
FiveIsland_PokemonCenter_1F_OnTransition::
# 7 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_FIVE_ISLAND
# 8 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	end
# 9 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
FiveIsland_PokemonCenter_1F_EventScript_Nurse::
# 11 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	lock
# 12 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 13 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 14 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	release
# 15 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	end
# 16 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
FiveIsland_PokemonCenter_1F_EventScript_Chef::
# 18 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	msgbox FiveIsland_PokemonCenter_1F_Text_OnMyWayToPrepareMeal, MSGBOX_NPC
# 19 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
FiveIsland_PokemonCenter_1F_EventScript_CooltrainerF::
# 22 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	msgbox FiveIsland_PokemonCenter_1F_Text_YoureOnQuestToCatchEveryMon, MSGBOX_NPC
# 23 "data/maps/FiveIsland_PokemonCenter_1F/scripts.pory"
	end
