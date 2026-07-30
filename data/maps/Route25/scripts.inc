# 1 "data/maps/Route25/scripts.pory"

# 2 "data/maps/Route25/scripts.pory"
Route25_MapScripts::
# 3 "data/maps/Route25/scripts.pory"
	.byte 0
# 4 "data/maps/Route25/scripts.pory"

# 5 "data/maps/Route25/scripts.pory"
Route25_EventScript_SeaCottageSign::
# 6 "data/maps/Route25/scripts.pory"
	msgbox Route25_Text_SeaCottageSign, MSGBOX_SIGN
# 7 "data/maps/Route25/scripts.pory"
	end
# 8 "data/maps/Route25/scripts.pory"

# 9 "data/maps/Route25/scripts.pory"
Route25_EventScript_Man::
# 10 "data/maps/Route25/scripts.pory"
	msgbox Route25_Text_AreYouHereAlone, MSGBOX_NPC
# 11 "data/maps/Route25/scripts.pory"
	end
# 12 "data/maps/Route25/scripts.pory"

# 13 "data/maps/Route25/scripts.pory"
Route25_EventScript_Will::
# 14 "data/maps/Route25/scripts.pory"
	lock
# 15 "data/maps/Route25/scripts.pory"
	faceplayer
# 16 "data/maps/Route25/scripts.pory"
	goto_if_set FLAG_DEFEATED_WILL, Route25_EventScript_RematchWill
# 17 "data/maps/Route25/scripts.pory"
	msgbox Route25_Text_Will, MSGBOX_YESNO
# 18 "data/maps/Route25/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route25_EventScript_NoWill
# 19 "data/maps/Route25/scripts.pory"
	trainerbattle_single TRAINER_WILL, Route25_Text_YesWill, Route25_Text_WillDefeat, Route25_EventScript_PostWill, NO_MUSIC
# 20 "data/maps/Route25/scripts.pory"
	release
# 21 "data/maps/Route25/scripts.pory"
	end
# 22 "data/maps/Route25/scripts.pory"

# 23 "data/maps/Route25/scripts.pory"
Route25_EventScript_PostWill::
# 24 "data/maps/Route25/scripts.pory"
	msgbox Route25_Text_WillPostBattle
# 25 "data/maps/Route25/scripts.pory"
	setflag FLAG_DEFEATED_WILL
# 26 "data/maps/Route25/scripts.pory"
	cleartrainerflag TRAINER_WILL
# 27 "data/maps/Route25/scripts.pory"
	giveitem ITEM_BLACK_FLUTE
# 28 "data/maps/Route25/scripts.pory"
	release
# 29 "data/maps/Route25/scripts.pory"
	end
# 30 "data/maps/Route25/scripts.pory"

# 31 "data/maps/Route25/scripts.pory"
Route25_EventScript_NoWill::
# 32 "data/maps/Route25/scripts.pory"
	msgbox Route25_Text_NoWill
# 33 "data/maps/Route25/scripts.pory"
	release
# 34 "data/maps/Route25/scripts.pory"
	end
# 35 "data/maps/Route25/scripts.pory"

# 36 "data/maps/Route25/scripts.pory"
Route25_EventScript_RematchWill::
# 37 "data/maps/Route25/scripts.pory"
	msgbox Route25_Text_RematchWill, MSGBOX_YESNO
# 38 "data/maps/Route25/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route25_EventScript_NoWill
# 39 "data/maps/Route25/scripts.pory"
	trainerbattle_single TRAINER_WILL, Route25_Text_YesWill, Route25_Text_RematchWillDefeat, Route25_EventScript_PostRematchWill, NO_MUSIC
# 40 "data/maps/Route25/scripts.pory"
	release
# 41 "data/maps/Route25/scripts.pory"
	end
# 42 "data/maps/Route25/scripts.pory"

# 43 "data/maps/Route25/scripts.pory"
Route25_EventScript_PostRematchWill::
# 44 "data/maps/Route25/scripts.pory"
	msgbox Route25_Text_PostRematchWill
# 45 "data/maps/Route25/scripts.pory"
	cleartrainerflag TRAINER_WILL
# 46 "data/maps/Route25/scripts.pory"
	release
# 47 "data/maps/Route25/scripts.pory"
	end
