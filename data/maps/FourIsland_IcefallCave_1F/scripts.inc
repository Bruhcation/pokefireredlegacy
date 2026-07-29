# 1 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"

# 2 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
FourIsland_IcefallCave_1F_MapScripts::
# 3 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FourIsland_IcefallCave_1F_OnResume
# 4 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FourIsland_IcefallCave_1F_OnLoad
# 5 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, FourIsland_IcefallCave_1F_OnFrame
# 6 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	.byte 0
# 7 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"

# 8 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
FourIsland_IcefallCave_1F_OnResume::
# 9 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	setstepcallback STEP_CB_ICE
# 10 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	end
# 11 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"

# 12 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
FourIsland_IcefallCave_1F_OnLoad::
# 13 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	special SetIcefallCaveCrackedIceMetatiles
# 14 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	end
# 15 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"

# 16 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
FourIsland_IcefallCave_1F_OnFrame::
# 17 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, FourIsland_IcefallCave_1F_EventScript_FallDownHole
# 18 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	.2byte 0
# 19 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"

# 20 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
FourIsland_IcefallCave_1F_EventScript_Gym3::
# 21 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	trainerbattle_single TRAINER_RS_YOUNGSTER, FourIsland_IcefallCave_1F_Text_Rocket1Intro, FourIsland_IcefallCave_1F_Text_Rocket1Defeat
# 22 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	msgbox FourIsland_IcefallCave_1F_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	end
# 24 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"

# 25 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
FourIsland_IcefallCave_1F_Text_Rocket1Intro::
# 26 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	.string "I've cracked the code!\n"
# 27 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	.string "You're trying to fight\l"
# 28 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	.string "the MASTER.$"
# 29 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"

# 30 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
FourIsland_IcefallCave_1F_Text_Rocket1Defeat::
# 31 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	.string "You broke the ice here!$"
# 32 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"

# 33 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
FourIsland_IcefallCave_1F_Text_Rocket1PostBattle::
# 34 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	.string "The MASTER is further\n"
# 35 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	.string "into the cave, I hope you\l"
# 36 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	.string "have all the might\l"
# 37 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	.string "to fight him!$"
# 38 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"

# 39 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
FourIsland_IcefallCave_1F_EventScript_FallDownHole::
# 40 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	lockall
# 41 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	delay 20
# 42 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FourIsland_IcefallCave_1F_Movement_SetInvisible
# 43 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	waitmovement 0
# 44 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	playse SE_FALL
# 45 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	delay 60
# 46 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	warphole MAP_FOUR_ISLAND_ICEFALL_CAVE_B1F
# 47 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	waitstate
# 48 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	releaseall
# 49 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	end
# 50 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"

# 51 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
FourIsland_IcefallCave_1F_Movement_SetInvisible::
# 52 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	set_invisible
# 53 "data/maps/FourIsland_IcefallCave_1F/scripts.pory"
	step_end
