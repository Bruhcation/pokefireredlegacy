# 1 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
ViridianCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
ViridianCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_VIRIDIAN_CITY
# 8 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	end
# 9 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
ViridianCity_PokemonCenter_1F_EventScript_Nurse::
# 11 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	lock
# 12 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 13 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 14 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	release
# 15 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	end
# 16 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
ViridianCity_PokemonCenter_1F_EventScript_Boy::
# 18 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_PokeCenterInEveryTown, MSGBOX_NPC
# 19 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
ViridianCity_PokemonCenter_1F_EventScript_Gentleman::
# 22 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_FeelFreeToUsePC, MSGBOX_NPC
# 23 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	end
# 24 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"

# 25 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
ViridianCity_PokemonCenter_1F_EventScript_Youngster::
# 26 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_PokeCentersHealMons, MSGBOX_NPC
# 27 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	end
# 28 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
ViridianCity_PokemonCenter_1F_EventScript_Busy::
# 30 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_PokeCenterBusy, MSGBOX_NPC
# 31 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	end
