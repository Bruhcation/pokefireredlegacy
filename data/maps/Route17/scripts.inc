# 1 "data/maps/Route17/scripts.pory"

# 2 "data/maps/Route17/scripts.pory"
Route17_MapScripts::
# 3 "data/maps/Route17/scripts.pory"
	.byte 0
# 4 "data/maps/Route17/scripts.pory"

# 5 "data/maps/Route17/scripts.pory"
Route17_EventScript_ItemsNotice::
# 6 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_WatchOutForDiscardedItems, MSGBOX_SIGN
# 7 "data/maps/Route17/scripts.pory"
	end
# 8 "data/maps/Route17/scripts.pory"

# 9 "data/maps/Route17/scripts.pory"
Route17_EventScript_TrainerTips1::
# 10 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_SameSpeciesGrowDifferentRates, MSGBOX_SIGN
# 11 "data/maps/Route17/scripts.pory"
	end
# 12 "data/maps/Route17/scripts.pory"

# 13 "data/maps/Route17/scripts.pory"
Route17_EventScript_TrainerTips2::
# 14 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_PressBToStayInPlace, MSGBOX_SIGN
# 15 "data/maps/Route17/scripts.pory"
	end
# 16 "data/maps/Route17/scripts.pory"

# 17 "data/maps/Route17/scripts.pory"
Route17_EventScript_RouteSign::
# 18 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_RouteSign, MSGBOX_SIGN
# 19 "data/maps/Route17/scripts.pory"
	end
# 20 "data/maps/Route17/scripts.pory"

# 21 "data/maps/Route17/scripts.pory"
Route17_EventScript_BallsNotice::
# 22 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_DontThrowGameThrowBalls, MSGBOX_SIGN
# 23 "data/maps/Route17/scripts.pory"
	end
# 24 "data/maps/Route17/scripts.pory"

# 25 "data/maps/Route17/scripts.pory"
Route17_EventScript_CyclingRoadSign::
# 26 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_CyclingRoadSign, MSGBOX_SIGN
# 27 "data/maps/Route17/scripts.pory"
	end
# 28 "data/maps/Route17/scripts.pory"

# 29 "data/maps/Route17/scripts.pory"
Route17_EventScript_Paxton::
# 30 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_Paxton, MSGBOX_YESNO
# 31 "data/maps/Route17/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route17_EventScript_NoWhitney
# 32 "data/maps/Route17/scripts.pory"
	trainerbattle_single TRAINER_GUITARIST, Route17_Text_YesWhitney, Route17_Text_WhitneyDefeat, Route17_EventScript_PostWhitney, NO_MUSIC
# 33 "data/maps/Route17/scripts.pory"
	release
# 34 "data/maps/Route17/scripts.pory"
	end
# 35 "data/maps/Route17/scripts.pory"

# 36 "data/maps/Route17/scripts.pory"
Route17_EventScript_PostWhitney::
# 37 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_WhitneyPostBattle
# 38 "data/maps/Route17/scripts.pory"
	cleartrainerflag TRAINER_GUITARIST
# 39 "data/maps/Route17/scripts.pory"
	release
# 40 "data/maps/Route17/scripts.pory"
	end
# 41 "data/maps/Route17/scripts.pory"

# 42 "data/maps/Route17/scripts.pory"
Route17_EventScript_NoWhitney::
# 43 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_NoWhitney
# 44 "data/maps/Route17/scripts.pory"
	release
# 45 "data/maps/Route17/scripts.pory"
	end
