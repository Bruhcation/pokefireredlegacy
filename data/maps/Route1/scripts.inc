# 1 "data/maps/Route1/scripts.pory"

# 2 "data/maps/Route1/scripts.pory"
Route1_MapScripts::
# 3 "data/maps/Route1/scripts.pory"
	.byte 0
# 4 "data/maps/Route1/scripts.pory"

# 5 "data/maps/Route1/scripts.pory"
Route1_EventScript_MartClerk::
# 6 "data/maps/Route1/scripts.pory"
	lock
# 7 "data/maps/Route1/scripts.pory"
	faceplayer
# 8 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_AlreadyGotPotion
# 9 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_WorkAtPokeMartTakeSample
# 10 "data/maps/Route1/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 11 "data/maps/Route1/scripts.pory"
	checkitemspace ITEM_POTION
# 12 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 13 "data/maps/Route1/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_POTION
# 14 "data/maps/Route1/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 15 "data/maps/Route1/scripts.pory"
	message Text_ObtainedTheX
# 16 "data/maps/Route1/scripts.pory"
	waitmessage
# 17 "data/maps/Route1/scripts.pory"
	waitfanfare
# 18 "data/maps/Route1/scripts.pory"
	additem ITEM_POTION
# 19 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_PutPotionAway
# 20 "data/maps/Route1/scripts.pory"
	call EventScript_RestorePrevTextColor
# 21 "data/maps/Route1/scripts.pory"
	setflag FLAG_GOT_POTION_ON_ROUTE_1
# 22 "data/maps/Route1/scripts.pory"
	release
# 23 "data/maps/Route1/scripts.pory"
	end
# 24 "data/maps/Route1/scripts.pory"

# 25 "data/maps/Route1/scripts.pory"
Route1_EventScript_AlreadyGotPotion::
# 26 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
# 27 "data/maps/Route1/scripts.pory"
	release
# 28 "data/maps/Route1/scripts.pory"
	end
# 29 "data/maps/Route1/scripts.pory"

# 30 "data/maps/Route1/scripts.pory"
Route1_EventScript_Boy::
# 31 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
# 32 "data/maps/Route1/scripts.pory"
	end
# 33 "data/maps/Route1/scripts.pory"

# 34 "data/maps/Route1/scripts.pory"
Route1_EventScript_RouteSign::
# 35 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
# 36 "data/maps/Route1/scripts.pory"
	end
# 37 "data/maps/Route1/scripts.pory"

# 38 "data/maps/Route1/scripts.pory"
Route1_EventScript_Oak::
# 39 "data/maps/Route1/scripts.pory"
	lock
# 40 "data/maps/Route1/scripts.pory"
	faceplayer
# 41 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_Oak, MSGBOX_YESNO
# 42 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route1_EventScript_NoOak
# 43 "data/maps/Route1/scripts.pory"
	setvar VAR_FORCEANIM, 1
# 44 "data/maps/Route1/scripts.pory"
	trainerbattle_single TRAINER_OAK, Route1_Text_YesOak, Route1_Text_OakDefeat, Route1_EventScript_PostOak, NO_MUSIC
# 45 "data/maps/Route1/scripts.pory"
	release
# 46 "data/maps/Route1/scripts.pory"
	end
# 47 "data/maps/Route1/scripts.pory"

# 48 "data/maps/Route1/scripts.pory"
Route1_EventScript_PostOak::
# 49 "data/maps/Route1/scripts.pory"
	setvar VAR_FORCEANIM, 0
# 50 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_OakPostBattle
# 51 "data/maps/Route1/scripts.pory"
	setflag FLAG_OAK_DEFEATED
# 52 "data/maps/Route1/scripts.pory"
	setflag FLAG_HIDE_OAK
# 53 "data/maps/Route1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 54 "data/maps/Route1/scripts.pory"
	removeobject 3
# 55 "data/maps/Route1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 56 "data/maps/Route1/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 57 "data/maps/Route1/scripts.pory"
	release
# 58 "data/maps/Route1/scripts.pory"
	end
# 59 "data/maps/Route1/scripts.pory"

# 60 "data/maps/Route1/scripts.pory"
Route1_EventScript_NoOak::
# 61 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_NoOak
# 62 "data/maps/Route1/scripts.pory"
	release
# 63 "data/maps/Route1/scripts.pory"
	end
