# 1 "data/maps/SixIsland/scripts.pory"

# 2 "data/maps/SixIsland/scripts.pory"
SixIsland_MapScripts::
# 3 "data/maps/SixIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_OnTransition
# 4 "data/maps/SixIsland/scripts.pory"
	.byte 0
# 5 "data/maps/SixIsland/scripts.pory"

# 6 "data/maps/SixIsland/scripts.pory"
SixIsland_OnTransition::
# 7 "data/maps/SixIsland/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SIX_ISLAND
# 8 "data/maps/SixIsland/scripts.pory"
	call_if_eq VAR_MAP_SCENE_SIX_ISLAND_POKEMON_CENTER_1F, 1, SixIsland_EventScript_ShowRival
# 9 "data/maps/SixIsland/scripts.pory"
	end
# 10 "data/maps/SixIsland/scripts.pory"

# 11 "data/maps/SixIsland/scripts.pory"
SixIsland_EventScript_ShowRival::
# 12 "data/maps/SixIsland/scripts.pory"
	setflag FLAG_FIND_BLUE_LOL
# 13 "data/maps/SixIsland/scripts.pory"
	return
# 14 "data/maps/SixIsland/scripts.pory"

# 15 "data/maps/SixIsland/scripts.pory"
SixIsland_EventScript_Hiker::
# 16 "data/maps/SixIsland/scripts.pory"
	msgbox SixIsland_Text_ThatWayToWaterPathRuinValley, MSGBOX_NPC
# 17 "data/maps/SixIsland/scripts.pory"
	end
# 18 "data/maps/SixIsland/scripts.pory"

# 19 "data/maps/SixIsland/scripts.pory"
SixIsland_EventScript_Boy::
# 20 "data/maps/SixIsland/scripts.pory"
	msgbox SixIsland_Text_SkyAtNightIsFantastic, MSGBOX_NPC
# 21 "data/maps/SixIsland/scripts.pory"
	end
# 22 "data/maps/SixIsland/scripts.pory"

# 23 "data/maps/SixIsland/scripts.pory"
SixIsland_EventScript_Boy2::
# 24 "data/maps/SixIsland/scripts.pory"
	msgbox SixIsland_Text_Blue, MSGBOX_NPC
# 25 "data/maps/SixIsland/scripts.pory"
	end
# 26 "data/maps/SixIsland/scripts.pory"

# 27 "data/maps/SixIsland/scripts.pory"
SixIsland_EventScript_Boy3::
# 28 "data/maps/SixIsland/scripts.pory"
	msgbox SixIsland_Text_Blue2, MSGBOX_NPC
# 29 "data/maps/SixIsland/scripts.pory"
	end
# 30 "data/maps/SixIsland/scripts.pory"

# 31 "data/maps/SixIsland/scripts.pory"
SixIsland_Text_Blue::
# 32 "data/maps/SixIsland/scripts.pory"
    .string "Hey! Isn't that {RIVAL}\n"
# 33 "data/maps/SixIsland/scripts.pory"
    .string "in that POKECENTER!$"
# 34 "data/maps/SixIsland/scripts.pory"

# 35 "data/maps/SixIsland/scripts.pory"
SixIsland_Text_Blue2::
# 36 "data/maps/SixIsland/scripts.pory"
    .string "I heard {RIVAL} used\n"
# 37 "data/maps/SixIsland/scripts.pory"
    .string "to be the CHAMPION.$"
# 38 "data/maps/SixIsland/scripts.pory"

# 39 "data/maps/SixIsland/scripts.pory"
SixIsland_EventScript_IslandSign::
# 40 "data/maps/SixIsland/scripts.pory"
	msgbox SixIsland_Text_IslandSign, MSGBOX_SIGN
# 41 "data/maps/SixIsland/scripts.pory"
	end
