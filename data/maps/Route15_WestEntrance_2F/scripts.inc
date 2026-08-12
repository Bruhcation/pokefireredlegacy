# 1 "data/maps/Route15_WestEntrance_2F/scripts.pory"

# 2 "data/maps/Route15_WestEntrance_2F/scripts.pory"
.equ REQUIRED_CAUGHT_MONS, 50
# 3 "data/maps/Route15_WestEntrance_2F/scripts.pory"

# 4 "data/maps/Route15_WestEntrance_2F/scripts.pory"
Route15_WestEntrance_2F_MapScripts::
# 5 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	.byte 0
# 6 "data/maps/Route15_WestEntrance_2F/scripts.pory"

# 7 "data/maps/Route15_WestEntrance_2F/scripts.pory"
Route15_WestEntrance_2F_EventScript_LeftBinoculars::
# 8 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	lockall
# 9 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_LargeShiningBird
# 10 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	showmonpic SPECIES_ARTICUNO, 10, 3
# 11 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	delay 20
# 12 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	waitbuttonpress
# 13 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	hidemonpic
# 14 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	setvar VAR_0x8004, SPECIES_ARTICUNO
# 15 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	special SetSeenMon
# 16 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	releaseall
# 17 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	end
# 18 "data/maps/Route15_WestEntrance_2F/scripts.pory"

# 19 "data/maps/Route15_WestEntrance_2F/scripts.pory"
Route15_WestEntrance_2F_EventScript_RightBinoculars::
# 20 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_SmallIslandOnHorizon, MSGBOX_SIGN
# 21 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	end
# 22 "data/maps/Route15_WestEntrance_2F/scripts.pory"

# 23 "data/maps/Route15_WestEntrance_2F/scripts.pory"
Route15_WestEntrance_2F_EventScript_Aide::
# 24 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	lock
# 25 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	faceplayer
# 26 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	call Route15_WestEntrance_2F_EventScript_GetAideRequestInfo
# 27 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	goto_if_set FLAG_GOT_HM08, Route15_WestEntrance_2F_EventScript_AlreadyGotExpShare
# 28 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	goto_if_set FLAG_GOT_EXP_SHARE_FROM_OAKS_AIDE, Route15_WestEntrance_2F_EventScript_AlreadyGotExpShare
# 29 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_GiveItemIfCaughtEnough, MSGBOX_YESNO
# 30 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
# 31 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	setvar VAR_0x8004, 0
# 32 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 33 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 34 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	call Route15_WestEntrance_2F_EventScript_GetAideRequestInfo
# 35 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	goto_if_lt VAR_0x8006, REQUIRED_CAUGHT_MONS, Aide_EventScript_HaventCaughtEnough
# 36 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_GreatHereYouGo
# 37 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	checkitemspace ITEM_HM08
# 38 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Aide_EventScript_NoRoomForItem
# 39 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	giveitem_msg Route15_WestEntrance_2F_Text_ReceivedItemFromAide, ITEM_HM08
# 40 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	setflag FLAG_GOT_EXP_SHARE_FROM_OAKS_AIDE
# 41 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_ExplainExpShare
# 42 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	release
# 43 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	end
# 44 "data/maps/Route15_WestEntrance_2F/scripts.pory"

# 45 "data/maps/Route15_WestEntrance_2F/scripts.pory"
Route15_WestEntrance_2F_EventScript_AlreadyGotExpShare::
# 46 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	goto_if_unset FLAG_GOT_HM08, Route15_WestEntrance_2F_EventScript_HM08Get
# 47 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_ExplainExpShare
# 48 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	release
# 49 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	end
# 50 "data/maps/Route15_WestEntrance_2F/scripts.pory"

# 51 "data/maps/Route15_WestEntrance_2F/scripts.pory"
Route15_WestEntrance_2F_EventScript_HM08Get::
# 52 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_GreatHereYouGo
# 53 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	checkitemspace ITEM_HM08
# 54 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Aide_EventScript_NoRoomForItem
# 55 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	giveitem_msg Route15_WestEntrance_2F_Text_ReceivedItemFromAide, ITEM_HM08
# 56 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	setflag FLAG_GOT_HM08
# 57 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	return
# 58 "data/maps/Route15_WestEntrance_2F/scripts.pory"

# 59 "data/maps/Route15_WestEntrance_2F/scripts.pory"
Route15_WestEntrance_2F_EventScript_GetAideRequestInfo::
# 60 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	buffernumberstring STR_VAR_1, REQUIRED_CAUGHT_MONS
# 61 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_HM08
# 62 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	return
