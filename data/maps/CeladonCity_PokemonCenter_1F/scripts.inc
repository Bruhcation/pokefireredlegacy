# 1 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
CeladonCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
CeladonCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_CELADON_CITY
# 8 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	end
# 9 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
CeladonCity_PokemonCenter_1F_EventScript_Nurse::
# 11 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	lock
# 12 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 13 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 14 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	release
# 15 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	end
# 16 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
CeladonCity_PokemonCenter_1F_EventScript_Gentleman::
# 18 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	msgbox CeladonCity_PokemonCenter_1F_Text_PokeFluteAwakensSleepingMons, MSGBOX_NPC
# 19 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
CeladonCity_PokemonCenter_1F_EventScript_CooltrainerF::
# 22 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	msgbox CeladonCity_PokemonCenter_1F_Text_RodeHereFromFuchsia, MSGBOX_NPC
# 23 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
CeladonCity_PokemonCenter_1F_EventScript_Youngster::
# 26 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	msgbox CeladonCity_PokemonCenter_1F_Text_GoToCyclingRoadIfIHadBike, MSGBOX_NPC
# 27 "data/maps/CeladonCity_PokemonCenter_1F/scripts.pory"
	end
