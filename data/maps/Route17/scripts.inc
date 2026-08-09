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
	msgbox Route17_Text_Paxton
# 31 "data/maps/Route17/scripts.pory"
	release
# 32 "data/maps/Route17/scripts.pory"
	end
# 33 "data/maps/Route17/scripts.pory"

# 34 "data/maps/Route17/scripts.pory"
Route17_EventScript_PostPaxton::
# 35 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_PaxtonPostBattle
# 36 "data/maps/Route17/scripts.pory"
	cleartrainerflag TRAINER_GUITARIST
# 37 "data/maps/Route17/scripts.pory"
	release
# 38 "data/maps/Route17/scripts.pory"
	end
# 39 "data/maps/Route17/scripts.pory"

# 40 "data/maps/Route17/scripts.pory"
Route17_EventScript_NoPaxton::
# 41 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_NoPaxton
# 42 "data/maps/Route17/scripts.pory"
	release
# 43 "data/maps/Route17/scripts.pory"
	end
