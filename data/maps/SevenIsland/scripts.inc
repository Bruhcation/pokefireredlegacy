# 1 "data/maps/SevenIsland/scripts.pory"

# 2 "data/maps/SevenIsland/scripts.pory"
SevenIsland_MapScripts::
# 3 "data/maps/SevenIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_OnTransition
# 4 "data/maps/SevenIsland/scripts.pory"
	.byte 0
# 5 "data/maps/SevenIsland/scripts.pory"

# 6 "data/maps/SevenIsland/scripts.pory"
SevenIsland_OnTransition::
# 7 "data/maps/SevenIsland/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SEVEN_ISLAND
# 8 "data/maps/SevenIsland/scripts.pory"
	end
# 9 "data/maps/SevenIsland/scripts.pory"

# 10 "data/maps/SevenIsland/scripts.pory"
SevenIsland_EventScript_IslandSign::
# 11 "data/maps/SevenIsland/scripts.pory"
	msgbox SevenIsland_Text_IslandSign, MSGBOX_SIGN
# 12 "data/maps/SevenIsland/scripts.pory"
	end
# 13 "data/maps/SevenIsland/scripts.pory"

# 14 "data/maps/SevenIsland/scripts.pory"
SevenIsland_EventScript_OldWoman::
# 15 "data/maps/SevenIsland/scripts.pory"
	msgbox SevenIsland_Text_IslandsMadeInSevenDays, MSGBOX_NPC
# 16 "data/maps/SevenIsland/scripts.pory"
	end
# 17 "data/maps/SevenIsland/scripts.pory"

# 18 "data/maps/SevenIsland/scripts.pory"
SevenIsland_EventScript_Scientist::
# 19 "data/maps/SevenIsland/scripts.pory"
	msgbox SevenIsland_Text_IslandVirtuallyUntouched, MSGBOX_NPC
# 20 "data/maps/SevenIsland/scripts.pory"
	end
# 21 "data/maps/SevenIsland/scripts.pory"

# 22 "data/maps/SevenIsland/scripts.pory"
SevenIsland_EventScript_Guy::
# 23 "data/maps/SevenIsland/scripts.pory"
	msgbox SevenIsland_Text_Guy, MSGBOX_NPC
# 24 "data/maps/SevenIsland/scripts.pory"
	end
# 25 "data/maps/SevenIsland/scripts.pory"

# 26 "data/maps/SevenIsland/scripts.pory"
SevenIsland_Text_Guy::
# 27 "data/maps/SevenIsland/scripts.pory"
	.string "ARMSTRONG is pretty invincible.\p"
# 28 "data/maps/SevenIsland/scripts.pory"
	.string "I battled him but could not\n"
# 29 "data/maps/SevenIsland/scripts.pory"
	.string "hurt his POKéMON at all.\p"
# 30 "data/maps/SevenIsland/scripts.pory"
	.string "Training in the TANOBY RUINS\n"
# 31 "data/maps/SevenIsland/scripts.pory"
	.string "made him the man he is.$"
