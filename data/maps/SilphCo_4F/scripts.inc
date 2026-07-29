# 1 "data/maps/SilphCo_4F/scripts.pory"

# 2 "data/maps/SilphCo_4F/scripts.pory"
SilphCo_4F_MapScripts::
# 3 "data/maps/SilphCo_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_4F_OnLoad
# 4 "data/maps/SilphCo_4F/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_4F/scripts.pory"

# 6 "data/maps/SilphCo_4F/scripts.pory"
SilphCo_4F_OnLoad::
# 7 "data/maps/SilphCo_4F/scripts.pory"
	call_if_unset FLAG_SILPH_4F_DOOR_1, EventScript_Close4FDoor1
# 8 "data/maps/SilphCo_4F/scripts.pory"
	call_if_unset FLAG_SILPH_4F_DOOR_2, EventScript_Close4FDoor2
# 9 "data/maps/SilphCo_4F/scripts.pory"
	end
# 10 "data/maps/SilphCo_4F/scripts.pory"

# 11 "data/maps/SilphCo_4F/scripts.pory"
SilphCo_4F_EventScript_WorkerM::
# 12 "data/maps/SilphCo_4F/scripts.pory"
	lock
# 13 "data/maps/SilphCo_4F/scripts.pory"
	faceplayer
# 14 "data/maps/SilphCo_4F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_4F_EventScript_WorkerMRocketsGone
# 15 "data/maps/SilphCo_4F/scripts.pory"
	msgbox SilphCo_4F_Text_CantYouSeeImHiding
# 16 "data/maps/SilphCo_4F/scripts.pory"
	release
# 17 "data/maps/SilphCo_4F/scripts.pory"
	end
# 18 "data/maps/SilphCo_4F/scripts.pory"

# 19 "data/maps/SilphCo_4F/scripts.pory"
SilphCo_4F_EventScript_WorkerMRocketsGone::
# 20 "data/maps/SilphCo_4F/scripts.pory"
	msgbox SilphCo_4F_Text_TeamRocketIsGone
# 21 "data/maps/SilphCo_4F/scripts.pory"
	release
# 22 "data/maps/SilphCo_4F/scripts.pory"
	end
# 23 "data/maps/SilphCo_4F/scripts.pory"

# 24 "data/maps/SilphCo_4F/scripts.pory"
SilphCo_4F_EventScript_FloorSign::
# 25 "data/maps/SilphCo_4F/scripts.pory"
	msgbox SilphCo_4F_Text_FloorSign, MSGBOX_SIGN
# 26 "data/maps/SilphCo_4F/scripts.pory"
	end
# 27 "data/maps/SilphCo_4F/scripts.pory"

# 28 "data/maps/SilphCo_4F/scripts.pory"
SilphCo_4F_EventScript_Rodney::
# 29 "data/maps/SilphCo_4F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_RODNEY, SilphCo_4F_Text_RodneyIntro, SilphCo_4F_Text_RodneyDefeat
# 30 "data/maps/SilphCo_4F/scripts.pory"
	msgbox SilphCo_4F_Text_RodneyPostBattle, MSGBOX_AUTOCLOSE
# 31 "data/maps/SilphCo_4F/scripts.pory"
	end
# 32 "data/maps/SilphCo_4F/scripts.pory"

# 33 "data/maps/SilphCo_4F/scripts.pory"
SilphCo_4F_EventScript_Grunt1::
# 34 "data/maps/SilphCo_4F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_26, SilphCo_4F_Text_Grunt1Intro, SilphCo_4F_Text_Grunt1Defeat
# 35 "data/maps/SilphCo_4F/scripts.pory"
	msgbox SilphCo_4F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 36 "data/maps/SilphCo_4F/scripts.pory"
	end
# 37 "data/maps/SilphCo_4F/scripts.pory"

# 38 "data/maps/SilphCo_4F/scripts.pory"
SilphCo_4F_EventScript_Grunt2::
# 39 "data/maps/SilphCo_4F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_27, SilphCo_4F_Text_Grunt2Intro, SilphCo_4F_Text_Grunt2Defeat
# 40 "data/maps/SilphCo_4F/scripts.pory"
	msgbox SilphCo_4F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/SilphCo_4F/scripts.pory"
	end
# 42 "data/maps/SilphCo_4F/scripts.pory"

# 43 "data/maps/SilphCo_4F/scripts.pory"
SilphCo_4F_EventScript_BaldingMan::
# 44 "data/maps/SilphCo_4F/scripts.pory"
	msgbox SilphCo_4F_Text_BaldingMan, MSGBOX_NPC
# 45 "data/maps/SilphCo_4F/scripts.pory"
	end
# 46 "data/maps/SilphCo_4F/scripts.pory"
SilphCo_4F_Text_BaldingMan:
# 47 "data/maps/SilphCo_4F/scripts.pory"
	.string "My office mate brings the most\n"
# 48 "data/maps/SilphCo_4F/scripts.pory"
	.string "disgusting-smelling food.\p"
# 49 "data/maps/SilphCo_4F/scripts.pory"
	.string "I wish she would take her lunch\n"
# 50 "data/maps/SilphCo_4F/scripts.pory"
	.string "break somewhere else.$"
# 51 "data/maps/SilphCo_4F/scripts.pory"
SilphCo_4F_EventScript_WorkerF:: 
# 52 "data/maps/SilphCo_4F/scripts.pory"
	msgbox SilphCo_4F_Text_WorkerF, MSGBOX_NPC
# 53 "data/maps/SilphCo_4F/scripts.pory"
	end
# 54 "data/maps/SilphCo_4F/scripts.pory"
SilphCo_4F_Text_WorkerF:
# 55 "data/maps/SilphCo_4F/scripts.pory"
	.string "Between you and me, I'm trying\n"
# 56 "data/maps/SilphCo_4F/scripts.pory"
	.string "to impress my office mate.\p"
# 57 "data/maps/SilphCo_4F/scripts.pory"
	.string "He's due for a promotion, and I\n"
# 58 "data/maps/SilphCo_4F/scripts.pory"
	.string "want to be the first one he thinks\l"
# 59 "data/maps/SilphCo_4F/scripts.pory"
	.string "to promote!$"
# 60 "data/maps/SilphCo_4F/scripts.pory"
SilphCo_4F_EventScript_WorkerM2::
# 61 "data/maps/SilphCo_4F/scripts.pory"
	msgbox SilphCo_4F_Text_WorkerM2, MSGBOX_NPC
# 62 "data/maps/SilphCo_4F/scripts.pory"
	end
# 63 "data/maps/SilphCo_4F/scripts.pory"
SilphCo_4F_Text_WorkerM2:
# 64 "data/maps/SilphCo_4F/scripts.pory"
	.string "I'm on my break, kid.\n"
# 65 "data/maps/SilphCo_4F/scripts.pory"
	.string "I can't give you a tour now.$"
# 66 "data/maps/SilphCo_4F/scripts.pory"
SilphCo_4F_EventScript_Scientist::
# 67 "data/maps/SilphCo_4F/scripts.pory"
	msgbox SilphCo_4F_Text_Scientist, MSGBOX_NPC
# 68 "data/maps/SilphCo_4F/scripts.pory"
	end
# 69 "data/maps/SilphCo_4F/scripts.pory"
SilphCo_4F_Text_Scientist:
# 70 "data/maps/SilphCo_4F/scripts.pory"
	.string "What? Why are you looking at\n"
# 71 "data/maps/SilphCo_4F/scripts.pory"
	.string "me like that?\p"
# 72 "data/maps/SilphCo_4F/scripts.pory"
	.string "There was a TEAM ROCKET SCIENTIST\n"
# 73 "data/maps/SilphCo_4F/scripts.pory"
	.string "in here during the takeover?\p"
# 74 "data/maps/SilphCo_4F/scripts.pory"
	.string "Well, I'm obviously not him.\n"
# 75 "data/maps/SilphCo_4F/scripts.pory"
	.string "We must look completely different.$"
# 76 "data/maps/SilphCo_4F/scripts.pory"
SilphCo_4F_EventScript_Painting::
# 77 "data/maps/SilphCo_4F/scripts.pory"
	goto_if_unset FLAG_HIDE_SAFFRON_CIVILIANS, SilphCo_4F_EventScript_NewPainting
# 78 "data/maps/SilphCo_4F/scripts.pory"
	msgbox SilphCo_4F_Text_NewPainting, MSGBOX_SIGN
# 79 "data/maps/SilphCo_4F/scripts.pory"
	end
# 80 "data/maps/SilphCo_4F/scripts.pory"
SilphCo_4F_EventScript_NewPainting::
# 81 "data/maps/SilphCo_4F/scripts.pory"
	msgbox SilphCo_4F_Text_NewPainting, MSGBOX_SIGN
# 82 "data/maps/SilphCo_4F/scripts.pory"
	end
# 83 "data/maps/SilphCo_4F/scripts.pory"
SilphCo_4F_Text_NewPainting:
# 84 "data/maps/SilphCo_4F/scripts.pory"
	.string "It's a gorgeous painting of a POKéMON\n"
# 85 "data/maps/SilphCo_4F/scripts.pory"
	.string "swimming in an underwater paradise.$"
