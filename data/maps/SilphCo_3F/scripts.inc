# 1 "data/maps/SilphCo_3F/scripts.pory"

# 2 "data/maps/SilphCo_3F/scripts.pory"
SilphCo_3F_MapScripts::
# 3 "data/maps/SilphCo_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_3F_OnLoad
# 4 "data/maps/SilphCo_3F/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_3F/scripts.pory"

# 6 "data/maps/SilphCo_3F/scripts.pory"
SilphCo_3F_OnLoad::
# 7 "data/maps/SilphCo_3F/scripts.pory"
	call_if_unset FLAG_SILPH_3F_DOOR_1, EventScript_Close3FDoor1
# 8 "data/maps/SilphCo_3F/scripts.pory"
	call_if_unset FLAG_SILPH_3F_DOOR_2, EventScript_Close3FDoor2
# 9 "data/maps/SilphCo_3F/scripts.pory"
	end
# 10 "data/maps/SilphCo_3F/scripts.pory"

# 11 "data/maps/SilphCo_3F/scripts.pory"
SilphCo_3F_EventScript_WorkerM::
# 12 "data/maps/SilphCo_3F/scripts.pory"
	lock
# 13 "data/maps/SilphCo_3F/scripts.pory"
	faceplayer
# 14 "data/maps/SilphCo_3F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_3F_EventScript_WorkerMRocketsGone
# 15 "data/maps/SilphCo_3F/scripts.pory"
	msgbox SilphCo_3F_Text_WhatAmIToDo
# 16 "data/maps/SilphCo_3F/scripts.pory"
	release
# 17 "data/maps/SilphCo_3F/scripts.pory"
	end
# 18 "data/maps/SilphCo_3F/scripts.pory"

# 19 "data/maps/SilphCo_3F/scripts.pory"
SilphCo_3F_EventScript_WorkerMRocketsGone::
# 20 "data/maps/SilphCo_3F/scripts.pory"
	msgbox SilphCo_3F_Text_YouAndYourMonsSavedUs
# 21 "data/maps/SilphCo_3F/scripts.pory"
	release
# 22 "data/maps/SilphCo_3F/scripts.pory"
	end
# 23 "data/maps/SilphCo_3F/scripts.pory"

# 24 "data/maps/SilphCo_3F/scripts.pory"
SilphCo_3F_EventScript_FloorSign::
# 25 "data/maps/SilphCo_3F/scripts.pory"
	msgbox SilphCo_3F_Text_FloorSign, MSGBOX_SIGN
# 26 "data/maps/SilphCo_3F/scripts.pory"
	end
# 27 "data/maps/SilphCo_3F/scripts.pory"

# 28 "data/maps/SilphCo_3F/scripts.pory"
SilphCo_3F_EventScript_Jose::
# 29 "data/maps/SilphCo_3F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_JOSE, SilphCo_3F_Text_JoseIntro, SilphCo_3F_Text_JoseDefeat
# 30 "data/maps/SilphCo_3F/scripts.pory"
	msgbox SilphCo_3F_Text_JosePostBattle, MSGBOX_AUTOCLOSE
# 31 "data/maps/SilphCo_3F/scripts.pory"
	end
# 32 "data/maps/SilphCo_3F/scripts.pory"

# 33 "data/maps/SilphCo_3F/scripts.pory"
SilphCo_3F_EventScript_Grunt::
# 34 "data/maps/SilphCo_3F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_25, SilphCo_3F_Text_GruntIntro, SilphCo_3F_Text_GruntDefeat
# 35 "data/maps/SilphCo_3F/scripts.pory"
	msgbox SilphCo_3F_Text_GruntPostBattle, MSGBOX_AUTOCLOSE
# 36 "data/maps/SilphCo_3F/scripts.pory"
	end
# 37 "data/maps/SilphCo_3F/scripts.pory"
SilphCo_3F_EventScript_WorkerMWalking:: @ 81616F5
# 38 "data/maps/SilphCo_3F/scripts.pory"
	msgbox SilphCo_3F_Text_WorkerMWalking, MSGBOX_NPC
# 39 "data/maps/SilphCo_3F/scripts.pory"
	end
# 40 "data/maps/SilphCo_3F/scripts.pory"
SilphCo_3F_Text_WorkerMWalking:
# 41 "data/maps/SilphCo_3F/scripts.pory"
	.string "Sometimes, when I get stuck on\n"
# 42 "data/maps/SilphCo_3F/scripts.pory"
	.string "a problem, I stroll the office.\p"
# 43 "data/maps/SilphCo_3F/scripts.pory"
	.string "If you put on a serious face and\n"
# 44 "data/maps/SilphCo_3F/scripts.pory"
	.string "walk fast, people think you're\l"
# 45 "data/maps/SilphCo_3F/scripts.pory"
	.string "doing something important!$"
# 46 "data/maps/SilphCo_3F/scripts.pory"
SilphCo_3F_EventScript_WorkerF:: @ 81616F5
# 47 "data/maps/SilphCo_3F/scripts.pory"
	msgbox SilphCo_3F_Text_WorkerF, MSGBOX_NPC
# 48 "data/maps/SilphCo_3F/scripts.pory"
	end
# 49 "data/maps/SilphCo_3F/scripts.pory"
SilphCo_3F_Text_WorkerF:
# 50 "data/maps/SilphCo_3F/scripts.pory"
	.string "To be honest, I kind of miss\n"
# 51 "data/maps/SilphCo_3F/scripts.pory"
	.string "TEAM ROCKET.\p"
# 52 "data/maps/SilphCo_3F/scripts.pory"
	.string "It was scary, but at least I\n"
# 53 "data/maps/SilphCo_3F/scripts.pory"
	.string "had an excuse to not work.$"
# 54 "data/maps/SilphCo_3F/scripts.pory"
SilphCo_3F_EventScript_Scientist::
# 55 "data/maps/SilphCo_3F/scripts.pory"
	msgbox SilphCo_3F_Text_Scientist
# 56 "data/maps/SilphCo_3F/scripts.pory"
	release
# 57 "data/maps/SilphCo_3F/scripts.pory"
	msgbox SilphCo_3F_Text_Scientist2, MSGBOX_NPC
# 58 "data/maps/SilphCo_3F/scripts.pory"
	turnobject 7, DIR_NORTH
# 59 "data/maps/SilphCo_3F/scripts.pory"
	end
# 60 "data/maps/SilphCo_3F/scripts.pory"
SilphCo_3F_Text_Scientist:
# 61 "data/maps/SilphCo_3F/scripts.pory"
	.string "Uh huh…\n"
# 62 "data/maps/SilphCo_3F/scripts.pory"
	.string "No, of course not!\l"
# 63 "data/maps/SilphCo_3F/scripts.pory"
	.string "There's no way that'd work…\p"
# 64 "data/maps/SilphCo_3F/scripts.pory"
	.string "…Unless…\p"
# 65 "data/maps/SilphCo_3F/scripts.pory"
	.string "I have to run this by the team.\n"
# 66 "data/maps/SilphCo_3F/scripts.pory"
	.string "I'll call you back.$"
# 67 "data/maps/SilphCo_3F/scripts.pory"
SilphCo_3F_Text_Scientist2::
# 68 "data/maps/SilphCo_3F/scripts.pory"
	.string "Excuse me, I have to make\n"
# 69 "data/maps/SilphCo_3F/scripts.pory"
	.string "another phone call.$"
