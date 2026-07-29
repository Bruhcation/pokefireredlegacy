# 1 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
CeruleanCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
CeruleanCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_CERULEAN_CITY
# 8 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	end
# 9 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
CeruleanCity_PokemonCenter_1F_EventScript_Nurse::
# 11 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	lock
# 12 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 13 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 14 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	release
# 15 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	end
# 16 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
CeruleanCity_PokemonCenter_1F_EventScript_Gentleman::
# 18 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_EveryoneCallsBillPokemaniac, MSGBOX_NPC
# 19 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
CeruleanCity_PokemonCenter_1F_EventScript_Rocker::
# 22 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_BillDoesWhateverForRareMons, MSGBOX_NPC
# 23 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
CeruleanCity_PokemonCenter_1F_EventScript_Youngster::
# 26 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	lock
# 27 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 28 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	famechecker FAMECHECKER_BILL, 1
# 29 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_BillCollectsRareMons
# 30 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	release
# 31 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	end
# 32 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"

# 33 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
CeruleanCity_PokemonCenter_1F_EventScript_Lass::
# 34 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	msgbox CeruleanCity_PokemonCenter_1F_Text_TryTradingUpstairs, MSGBOX_NPC
# 35 "data/maps/CeruleanCity_PokemonCenter_1F/scripts.pory"
	end
