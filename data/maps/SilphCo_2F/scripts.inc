# 1 "data/maps/SilphCo_2F/scripts.pory"

# 2 "data/maps/SilphCo_2F/scripts.pory"
SilphCo_2F_MapScripts::
# 3 "data/maps/SilphCo_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_2F_OnLoad
# 4 "data/maps/SilphCo_2F/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_2F/scripts.pory"

# 6 "data/maps/SilphCo_2F/scripts.pory"
SilphCo_2F_OnLoad::
# 7 "data/maps/SilphCo_2F/scripts.pory"
	call_if_unset FLAG_SILPH_2F_DOOR_1, EventScript_Close2FDoor1
# 8 "data/maps/SilphCo_2F/scripts.pory"
	call_if_unset FLAG_SILPH_2F_DOOR_2, EventScript_Close2FDoor2
# 9 "data/maps/SilphCo_2F/scripts.pory"
	end
# 10 "data/maps/SilphCo_2F/scripts.pory"

# 11 "data/maps/SilphCo_2F/scripts.pory"
SilphCo_2F_EventScript_ThunderWaveTutor::
# 12 "data/maps/SilphCo_2F/scripts.pory"
	goto EventScript_ThunderWaveTutor
# 13 "data/maps/SilphCo_2F/scripts.pory"
	end
# 14 "data/maps/SilphCo_2F/scripts.pory"

# 15 "data/maps/SilphCo_2F/scripts.pory"
SilphCo_2F_EventScript_FloorSign::
# 16 "data/maps/SilphCo_2F/scripts.pory"
	msgbox SilphCo_2F_Text_FloorSign, MSGBOX_SIGN
# 17 "data/maps/SilphCo_2F/scripts.pory"
	end
# 18 "data/maps/SilphCo_2F/scripts.pory"

# 19 "data/maps/SilphCo_2F/scripts.pory"
SilphCo_2F_EventScript_Connor::
# 20 "data/maps/SilphCo_2F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_CONNOR, SilphCo_2F_Text_ConnorIntro, SilphCo_2F_Text_ConnorDefeat
# 21 "data/maps/SilphCo_2F/scripts.pory"
	msgbox SilphCo_2F_Text_ConnorPostBattle, MSGBOX_AUTOCLOSE
# 22 "data/maps/SilphCo_2F/scripts.pory"
	end
# 23 "data/maps/SilphCo_2F/scripts.pory"

# 24 "data/maps/SilphCo_2F/scripts.pory"
SilphCo_2F_EventScript_Jerry::
# 25 "data/maps/SilphCo_2F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_JERRY, SilphCo_2F_Text_JerryIntro, SilphCo_2F_Text_JerryDefeat
# 26 "data/maps/SilphCo_2F/scripts.pory"
	msgbox SilphCo_2F_Text_JerryPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/SilphCo_2F/scripts.pory"
	end
# 28 "data/maps/SilphCo_2F/scripts.pory"

# 29 "data/maps/SilphCo_2F/scripts.pory"
SilphCo_2F_EventScript_Grunt1::
# 30 "data/maps/SilphCo_2F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_23, SilphCo_2F_Text_Grunt1Intro, SilphCo_2F_Text_Grunt1Defeat
# 31 "data/maps/SilphCo_2F/scripts.pory"
	msgbox SilphCo_2F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 32 "data/maps/SilphCo_2F/scripts.pory"
	end
# 33 "data/maps/SilphCo_2F/scripts.pory"

# 34 "data/maps/SilphCo_2F/scripts.pory"
SilphCo_2F_EventScript_Grunt2::
# 35 "data/maps/SilphCo_2F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_24, SilphCo_2F_Text_Grunt2Intro, SilphCo_2F_Text_Grunt2Defeat
# 36 "data/maps/SilphCo_2F/scripts.pory"
	msgbox SilphCo_2F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/SilphCo_2F/scripts.pory"
	end
# 38 "data/maps/SilphCo_2F/scripts.pory"

# 39 "data/maps/SilphCo_2F/scripts.pory"
SilphCo_2F_EventScript_Scientist::
# 40 "data/maps/SilphCo_2F/scripts.pory"
	msgbox SilphCo_2F_Text_Scientist, MSGBOX_NPC
# 41 "data/maps/SilphCo_2F/scripts.pory"
	end
# 42 "data/maps/SilphCo_2F/scripts.pory"
SilphCo_2F_Text_Scientist:
# 43 "data/maps/SilphCo_2F/scripts.pory"
	.string "Now that we're not working on the\n"
# 44 "data/maps/SilphCo_2F/scripts.pory"
	.string "MASTER BALL anymore, we're pivoting\l"
# 45 "data/maps/SilphCo_2F/scripts.pory"
	.string "to other projects.$"
# 46 "data/maps/SilphCo_2F/scripts.pory"
SilphCo_2F_EventScript_WorkerF1::
# 47 "data/maps/SilphCo_2F/scripts.pory"
	msgbox SilphCo_2F_Text_WorkerF1, MSGBOX_NPC
# 48 "data/maps/SilphCo_2F/scripts.pory"
	end
# 49 "data/maps/SilphCo_2F/scripts.pory"
SilphCo_2F_Text_WorkerF1:
# 50 "data/maps/SilphCo_2F/scripts.pory"
	.string "Maybe our next product can be a\n"
# 51 "data/maps/SilphCo_2F/scripts.pory"
	.string "security system to keep people\l"
# 52 "data/maps/SilphCo_2F/scripts.pory"
	.string "like TEAM ROCKET out!$"
# 53 "data/maps/SilphCo_2F/scripts.pory"
SilphCo_2F_EventScript_WorkerF2::
# 54 "data/maps/SilphCo_2F/scripts.pory"
	msgbox SilphCo_2F_Text_WorkerF2, MSGBOX_NPC
# 55 "data/maps/SilphCo_2F/scripts.pory"
	end
# 56 "data/maps/SilphCo_2F/scripts.pory"
SilphCo_2F_Text_WorkerF2:
# 57 "data/maps/SilphCo_2F/scripts.pory"
	.string "Programming is hard work!\p"
# 58 "data/maps/SilphCo_2F/scripts.pory"
	.string "Can you imagine how difficult\n"
# 59 "data/maps/SilphCo_2F/scripts.pory"
	.string "coding a PORYGON would be?\p"
# 60 "data/maps/SilphCo_2F/scripts.pory"
	.string "To create a POKéMON out of\n"
# 61 "data/maps/SilphCo_2F/scripts.pory"
	.string "code like that…\l"
# 62 "data/maps/SilphCo_2F/scripts.pory"
	.string "It's unbelievable!$"
# 63 "data/maps/SilphCo_2F/scripts.pory"
SilphCo_2F_EventScript_Woman::
# 64 "data/maps/SilphCo_2F/scripts.pory"
	msgbox SilphCo_2F_Text_Woman, MSGBOX_NPC
# 65 "data/maps/SilphCo_2F/scripts.pory"
	end
# 66 "data/maps/SilphCo_2F/scripts.pory"
SilphCo_2F_Text_Woman:
# 67 "data/maps/SilphCo_2F/scripts.pory"
	.string "We're constantly in and out of\n"
# 68 "data/maps/SilphCo_2F/scripts.pory"
	.string "meetings all day long.\p"
# 69 "data/maps/SilphCo_2F/scripts.pory"
	.string "I wish they would just let me\n"
# 70 "data/maps/SilphCo_2F/scripts.pory"
	.string "work in peace…$"
# 71 "data/maps/SilphCo_2F/scripts.pory"
SilphCo_2F_EventScript_WorkerM::
# 72 "data/maps/SilphCo_2F/scripts.pory"
	msgbox SilphCo_2F_Text_WorkerM, MSGBOX_NPC
# 73 "data/maps/SilphCo_2F/scripts.pory"
	end
# 74 "data/maps/SilphCo_2F/scripts.pory"
SilphCo_2F_Text_WorkerM:
# 75 "data/maps/SilphCo_2F/scripts.pory"
	.string "…\p"
# 76 "data/maps/SilphCo_2F/scripts.pory"
	.string "He's asleep on the job!$"
