# 1 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 5 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 6 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_OnTransition::
# 7 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_PEWTER_CITY
# 8 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	end
# 9 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 10 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_Nurse::
# 11 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	lock
# 12 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 13 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 14 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
# 15 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	end
# 16 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_Gentleman::
# 18 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TeamRocketMtMoonImOnPhone, MSGBOX_NPC
# 19 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_Jigglypuff::
# 22 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	lock
# 23 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 24 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	fadeoutbgm 0
# 25 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	playbgm MUS_JIGGLYPUFF, 0
# 26 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	message PewterCity_PokemonCenter_1F_Text_Jigglypuff
# 27 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 28 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	delay 455
# 29 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	playbgm MUS_POKE_CENTER, 1
# 30 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
# 31 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	end
# 32 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 33 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_Youngster::
# 34 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_WhenJiggylypuffSingsMonsGetDrowsy, MSGBOX_NPC
# 35 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_GBAKid1::
# 38 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	lock
# 39 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TradingMyClefairyForPikachu
# 40 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	release
# 41 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	end
# 42 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"

# 43 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
PewterCity_PokemonCenter_1F_EventScript_GBAKid2::
# 44 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	msgbox PewterCity_PokemonCenter_1F_Text_TradingPikachuWithKid, MSGBOX_NPC
# 45 "data/maps/PewterCity_PokemonCenter_1F/scripts.pory"
	end
