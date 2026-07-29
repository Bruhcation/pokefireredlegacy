# 1 "data/maps/VermilionCity_House1/scripts.pory"

# 2 "data/maps/VermilionCity_House1/scripts.pory"
VermilionCity_House1_MapScripts::
# 3 "data/maps/VermilionCity_House1/scripts.pory"
	.byte 0
# 4 "data/maps/VermilionCity_House1/scripts.pory"

# 5 "data/maps/VermilionCity_House1/scripts.pory"
VermilionCity_House1_EventScript_FishingGurusBrother::
# 6 "data/maps/VermilionCity_House1/scripts.pory"
	lock
# 7 "data/maps/VermilionCity_House1/scripts.pory"
	faceplayer
# 8 "data/maps/VermilionCity_House1/scripts.pory"
	goto_if_set FLAG_GOT_GOOD_ROD, VermilionCity_House1_EventScript_AlreadyGotGoodRod
# 9 "data/maps/VermilionCity_House1/scripts.pory"
	msgbox VermilionCity_House1_Text_DoYouLikeToFish, MSGBOX_YESNO
# 10 "data/maps/VermilionCity_House1/scripts.pory"
	goto_if_eq VAR_RESULT, YES, VermilionCity_House1_EventScript_GiveGoodRod
# 11 "data/maps/VermilionCity_House1/scripts.pory"
	msgbox VermilionCity_House1_Text_OhThatsDisappointing
# 12 "data/maps/VermilionCity_House1/scripts.pory"
	release
# 13 "data/maps/VermilionCity_House1/scripts.pory"
	end
# 14 "data/maps/VermilionCity_House1/scripts.pory"

# 15 "data/maps/VermilionCity_House1/scripts.pory"
VermilionCity_House1_EventScript_AlreadyGotGoodRod::
# 16 "data/maps/VermilionCity_House1/scripts.pory"
	msgbox VermilionCity_House1_Text_HowAreTheFishBiting
# 17 "data/maps/VermilionCity_House1/scripts.pory"
	release
# 18 "data/maps/VermilionCity_House1/scripts.pory"
	end
# 19 "data/maps/VermilionCity_House1/scripts.pory"

# 20 "data/maps/VermilionCity_House1/scripts.pory"
VermilionCity_House1_EventScript_GiveGoodRod::
# 21 "data/maps/VermilionCity_House1/scripts.pory"
	msgbox VermilionCity_House1_Text_LikeYourStyleTakeThis
# 22 "data/maps/VermilionCity_House1/scripts.pory"
	checkitemspace ITEM_GOOD_ROD
# 23 "data/maps/VermilionCity_House1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, VermilionCity_House1_EventScript_NoRoomForGoodRod
# 24 "data/maps/VermilionCity_House1/scripts.pory"
	giveitem_msg VermilionCity_House1_Text_ReceivedGoodRod, ITEM_GOOD_ROD
# 25 "data/maps/VermilionCity_House1/scripts.pory"
	msgbox VermilionCity_House1_Text_GoodRodCanCatchBetterMons
# 26 "data/maps/VermilionCity_House1/scripts.pory"
	setflag FLAG_GOT_GOOD_ROD
# 27 "data/maps/VermilionCity_House1/scripts.pory"
	release
# 28 "data/maps/VermilionCity_House1/scripts.pory"
	end
# 29 "data/maps/VermilionCity_House1/scripts.pory"

# 30 "data/maps/VermilionCity_House1/scripts.pory"
VermilionCity_House1_EventScript_NoRoomForGoodRod::
# 31 "data/maps/VermilionCity_House1/scripts.pory"
	msgbox VermilionCity_House1_Text_YouHaveNoRoomForGift
# 32 "data/maps/VermilionCity_House1/scripts.pory"
	release
# 33 "data/maps/VermilionCity_House1/scripts.pory"
	end
