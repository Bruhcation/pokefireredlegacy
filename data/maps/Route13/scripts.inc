# 1 "data/maps/Route13/scripts.pory"

# 2 "data/maps/Route13/scripts.pory"
Route13_MapScripts::
# 3 "data/maps/Route13/scripts.pory"
	.byte 0
# 4 "data/maps/Route13/scripts.pory"

# 5 "data/maps/Route13/scripts.pory"
Route13_EventScript_TrainerTips1::
# 6 "data/maps/Route13/scripts.pory"
	msgbox Route13_Text_LookToLeftOfThatPost, MSGBOX_SIGN
# 7 "data/maps/Route13/scripts.pory"
	end
# 8 "data/maps/Route13/scripts.pory"

# 9 "data/maps/Route13/scripts.pory"
Route13_EventScript_TrainerTips2::
# 10 "data/maps/Route13/scripts.pory"
	msgbox Route13_Text_SelectToSwitchItems, MSGBOX_SIGN
# 11 "data/maps/Route13/scripts.pory"
	end
# 12 "data/maps/Route13/scripts.pory"

# 13 "data/maps/Route13/scripts.pory"
Route13_EventScript_RouteSign::
# 14 "data/maps/Route13/scripts.pory"
	msgbox Route13_Text_RouteSign, MSGBOX_SIGN
# 15 "data/maps/Route13/scripts.pory"
	end
# 16 "data/maps/Route13/scripts.pory"

# 17 "data/maps/Route13/scripts.pory"
Route13_EventScript_FluteGuy::
# 18 "data/maps/Route13/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 19 "data/maps/Route13/scripts.pory"
	lock
# 20 "data/maps/Route13/scripts.pory"
	faceplayer
# 21 "data/maps/Route13/scripts.pory"
	message Route13_Text_MayIHelpYou
# 22 "data/maps/Route13/scripts.pory"
	waitmessage
# 23 "data/maps/Route13/scripts.pory"
	pokemart Route13_Flute_Items
# 24 "data/maps/Route13/scripts.pory"
	msgbox Route13_Text_PleaseComeAgain
# 25 "data/maps/Route13/scripts.pory"
	release
# 26 "data/maps/Route13/scripts.pory"
	end
# 27 "data/maps/Route13/scripts.pory"

# 28 "data/maps/Route13/scripts.pory"
	.align 2
# 29 "data/maps/Route13/scripts.pory"
Route13_Flute_Items::
# 30 "data/maps/Route13/scripts.pory"
	.2byte ITEM_BLUE_FLUTE
# 31 "data/maps/Route13/scripts.pory"
	.2byte ITEM_RED_FLUTE
# 32 "data/maps/Route13/scripts.pory"
	.2byte ITEM_YELLOW_FLUTE
# 33 "data/maps/Route13/scripts.pory"
	.2byte ITEM_NONE
# 34 "data/maps/Route13/scripts.pory"
	release
# 35 "data/maps/Route13/scripts.pory"
	end
# 36 "data/maps/Route13/scripts.pory"

# 37 "data/maps/Route13/scripts.pory"
Route13_EventScript_Whitney::
# 38 "data/maps/Route13/scripts.pory"
	lock
# 39 "data/maps/Route13/scripts.pory"
	faceplayer
# 40 "data/maps/Route13/scripts.pory"
	goto_if_set FLAG_WHITNEY_DEFEATED, Route13_EventScript_RematchWhitney
# 41 "data/maps/Route13/scripts.pory"
	msgbox Route13_Text_Whitney, MSGBOX_YESNO
# 42 "data/maps/Route13/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route13_EventScript_NoWhitney
# 43 "data/maps/Route13/scripts.pory"
	trainerbattle_single TRAINER_WHITNEY, Route13_Text_YesWhitney, Route13_Text_WhitneyDefeat, Route13_EventScript_PostWhitney, NO_MUSIC
# 44 "data/maps/Route13/scripts.pory"
	release
# 45 "data/maps/Route13/scripts.pory"
	end
# 46 "data/maps/Route13/scripts.pory"

# 47 "data/maps/Route13/scripts.pory"
Route13_EventScript_PostWhitney::
# 48 "data/maps/Route13/scripts.pory"
	msgbox Route13_Text_WhitneyPostBattle
# 49 "data/maps/Route13/scripts.pory"
	setflag FLAG_WHITNEY_DEFEATED
# 50 "data/maps/Route13/scripts.pory"
	cleartrainerflag TRAINER_WHITNEY
# 51 "data/maps/Route13/scripts.pory"
	release
# 52 "data/maps/Route13/scripts.pory"
	end
# 53 "data/maps/Route13/scripts.pory"

# 54 "data/maps/Route13/scripts.pory"
Route13_EventScript_NoWhitney::
# 55 "data/maps/Route13/scripts.pory"
	msgbox Route13_Text_NoWhitney
# 56 "data/maps/Route13/scripts.pory"
	release
# 57 "data/maps/Route13/scripts.pory"
	end
# 58 "data/maps/Route13/scripts.pory"

# 59 "data/maps/Route13/scripts.pory"
Route13_EventScript_RematchWhitney::
# 60 "data/maps/Route13/scripts.pory"
	msgbox Route13_Text_RematchWhitney, MSGBOX_YESNO
# 61 "data/maps/Route13/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route13_EventScript_NoWhitney
# 62 "data/maps/Route13/scripts.pory"
	trainerbattle_single TRAINER_WHITNEY, Route13_Text_YesRematchWhitney, Route13_Text_RematchWhitneyDefeat, Route13_EventScript_PostRematchWhitney, NO_MUSIC
# 63 "data/maps/Route13/scripts.pory"
	release
# 64 "data/maps/Route13/scripts.pory"
	end
# 65 "data/maps/Route13/scripts.pory"

# 66 "data/maps/Route13/scripts.pory"
Route13_EventScript_PostRematchWhitney::
# 67 "data/maps/Route13/scripts.pory"
	msgbox Route13_Text_RematchWhitneyDefeat
# 68 "data/maps/Route13/scripts.pory"
	cleartrainerflag TRAINER_WHITNEY
# 69 "data/maps/Route13/scripts.pory"
	release
# 70 "data/maps/Route13/scripts.pory"
	end
