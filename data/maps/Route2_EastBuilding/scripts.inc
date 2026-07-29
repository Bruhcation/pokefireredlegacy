# 1 "data/maps/Route2_EastBuilding/scripts.pory"

# 2 "data/maps/Route2_EastBuilding/scripts.pory"
.equ REQUIRED_OWNED_MONS, 20
# 3 "data/maps/Route2_EastBuilding/scripts.pory"
Route2_EastBuilding_MapScripts::
# 4 "data/maps/Route2_EastBuilding/scripts.pory"
	.byte 0
# 5 "data/maps/Route2_EastBuilding/scripts.pory"

# 6 "data/maps/Route2_EastBuilding/scripts.pory"
Route2_EastBuilding_EventScript_Aide::
# 7 "data/maps/Route2_EastBuilding/scripts.pory"
	lock
# 8 "data/maps/Route2_EastBuilding/scripts.pory"
	faceplayer
# 9 "data/maps/Route2_EastBuilding/scripts.pory"
	call Route2_EastBuilding_EventScript_GetAideRequestInfo
# 10 "data/maps/Route2_EastBuilding/scripts.pory"
	goto_if_set FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE, Route2_EastBuilding_EventScript_AlreadyGotEverstone
# 11 "data/maps/Route2_EastBuilding/scripts.pory"
	msgbox Route2_EastBuilding_Text_GiveEverstoneIfCaught20Mons, MSGBOX_YESNO
# 12 "data/maps/Route2_EastBuilding/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
# 13 "data/maps/Route2_EastBuilding/scripts.pory"
	setvar VAR_0x8004, 0
# 14 "data/maps/Route2_EastBuilding/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 15 "data/maps/Route2_EastBuilding/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 16 "data/maps/Route2_EastBuilding/scripts.pory"
	call Route2_EastBuilding_EventScript_GetAideRequestInfo
# 17 "data/maps/Route2_EastBuilding/scripts.pory"
	goto_if_lt VAR_0x8006, REQUIRED_OWNED_MONS, Aide_EventScript_HaventCaughtEnough
# 18 "data/maps/Route2_EastBuilding/scripts.pory"
	msgbox Route2_EastBuilding_Text_GreatHereYouGo
# 19 "data/maps/Route2_EastBuilding/scripts.pory"
	checkitemspace ITEM_HM06
# 20 "data/maps/Route2_EastBuilding/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Aide_EventScript_NoRoomForItem
# 21 "data/maps/Route2_EastBuilding/scripts.pory"
	giveitem_msg Route2_EastBuilding_Text_ReceivedEverstoneFromAide, ITEM_HM06
# 22 "data/maps/Route2_EastBuilding/scripts.pory"
	setflag FLAG_GOT_EVERSTONE_FROM_OAKS_AIDE
# 23 "data/maps/Route2_EastBuilding/scripts.pory"
	msgbox Route2_EastBuilding_Text_ExplainEverstone
# 24 "data/maps/Route2_EastBuilding/scripts.pory"
	release
# 25 "data/maps/Route2_EastBuilding/scripts.pory"
	end
# 26 "data/maps/Route2_EastBuilding/scripts.pory"

# 27 "data/maps/Route2_EastBuilding/scripts.pory"
Route2_EastBuilding_EventScript_AlreadyGotEverstone::
# 28 "data/maps/Route2_EastBuilding/scripts.pory"
	msgbox Route2_EastBuilding_Text_ExplainEverstone
# 29 "data/maps/Route2_EastBuilding/scripts.pory"
	release
# 30 "data/maps/Route2_EastBuilding/scripts.pory"
	end
# 31 "data/maps/Route2_EastBuilding/scripts.pory"

# 32 "data/maps/Route2_EastBuilding/scripts.pory"
Route2_EastBuilding_EventScript_GetAideRequestInfo::
# 33 "data/maps/Route2_EastBuilding/scripts.pory"
	buffernumberstring STR_VAR_1, REQUIRED_OWNED_MONS
# 34 "data/maps/Route2_EastBuilding/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_HM06
# 35 "data/maps/Route2_EastBuilding/scripts.pory"
	return
# 36 "data/maps/Route2_EastBuilding/scripts.pory"

# 37 "data/maps/Route2_EastBuilding/scripts.pory"
Route2_EastBuilding_EventScript_Rocker::
# 38 "data/maps/Route2_EastBuilding/scripts.pory"
	msgbox Route2_EastBuilding_Text_CanGetThroughRockTunnel, MSGBOX_NPC
# 39 "data/maps/Route2_EastBuilding/scripts.pory"
	end
