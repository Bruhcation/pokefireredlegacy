# 1 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
SaffronCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
SaffronCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_SAFFRON_CITY
# 8 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	end
# 9 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
SaffronCity_PokemonCenter_1F_EventScript_Nurse::
# 11 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	lock
# 12 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 13 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 14 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	release
# 15 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	end
# 16 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
SaffronCity_PokemonCenter_1F_EventScript_Gentleman::
# 18 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_SilphCoVictimOfFame, MSGBOX_NPC
# 19 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
SaffronCity_PokemonCenter_1F_EventScript_Woman::
# 22 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_GrowthRatesDifferBySpecies, MSGBOX_NPC
# 23 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
SaffronCity_PokemonCenter_1F_EventScript_Youngster::
# 26 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	lock
# 27 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 28 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SILPH_CO_11F, 1, SaffronCity_PokemonCenter_1F_EventScript_YoungsterRocketsGone
# 29 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_GreatIfEliteFourCameBeatRockets
# 30 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	release
# 31 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	end
# 32 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"

# 33 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
SaffronCity_PokemonCenter_1F_EventScript_YoungsterRocketsGone::
# 34 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	msgbox SaffronCity_PokemonCenter_1F_Text_TeamRocketTookOff
# 35 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	release
# 36 "data/maps/SaffronCity_PokemonCenter_1F/scripts.pory"
	end
