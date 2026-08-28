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
	lock
# 31 "data/maps/Route17/scripts.pory"
	faceplayer
# 32 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_Paxton, MSGBOX_YESNO
# 33 "data/maps/Route17/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route17_EventScript_NoPaxton
# 34 "data/maps/Route17/scripts.pory"
	trainerbattle_single TRAINER_PAXTON_UNUSED, Route17_Text_YesPaxton, Route17_Text_PaxtonDefeat, Route17_EventScript_PostPaxton, NO_MUSIC
# 35 "data/maps/Route17/scripts.pory"
	release
# 36 "data/maps/Route17/scripts.pory"
	end
# 37 "data/maps/Route17/scripts.pory"

# 38 "data/maps/Route17/scripts.pory"
Route17_EventScript_PostPaxton::
# 39 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_PaxtonPostBattle
# 40 "data/maps/Route17/scripts.pory"
	cleartrainerflag TRAINER_PAXTON_UNUSED
# 41 "data/maps/Route17/scripts.pory"
	release
# 42 "data/maps/Route17/scripts.pory"
	end
# 43 "data/maps/Route17/scripts.pory"

# 44 "data/maps/Route17/scripts.pory"
Route17_EventScript_NoPaxton::
# 45 "data/maps/Route17/scripts.pory"
	msgbox Route17_Text_NoPaxton
# 46 "data/maps/Route17/scripts.pory"
	release
# 47 "data/maps/Route17/scripts.pory"
	end
