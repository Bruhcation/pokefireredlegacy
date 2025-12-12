# 1 "data/maps/SSAnne_Deck/scripts.pory"

# 2 "data/maps/SSAnne_Deck/scripts.pory"
SSAnne_Deck_MapScripts::
# 3 "data/maps/SSAnne_Deck/scripts.pory"
	.byte 0
# 4 "data/maps/SSAnne_Deck/scripts.pory"

# 5 "data/maps/SSAnne_Deck/scripts.pory"
SSAnne_Deck_EventScript_Youngster::
# 6 "data/maps/SSAnne_Deck/scripts.pory"
	msgbox SSAnne_Deck_Text_ShipDepartingSoon, MSGBOX_NPC
# 7 "data/maps/SSAnne_Deck/scripts.pory"
	end
# 8 "data/maps/SSAnne_Deck/scripts.pory"

# 9 "data/maps/SSAnne_Deck/scripts.pory"
SSAnne_Deck_EventScript_BaldingMan::
# 10 "data/maps/SSAnne_Deck/scripts.pory"
	msgbox SSAnne_Deck_Text_FeelSeasick, MSGBOX_NPC
# 11 "data/maps/SSAnne_Deck/scripts.pory"
	end
# 12 "data/maps/SSAnne_Deck/scripts.pory"

# 13 "data/maps/SSAnne_Deck/scripts.pory"
SSAnne_Deck_EventScript_Sailor::
# 14 "data/maps/SSAnne_Deck/scripts.pory"
	msgbox SSAnne_Deck_Text_ScrubbingDecksHardWork, MSGBOX_NPC
# 15 "data/maps/SSAnne_Deck/scripts.pory"
	end
# 16 "data/maps/SSAnne_Deck/scripts.pory"

# 17 "data/maps/SSAnne_Deck/scripts.pory"
SSAnne_Deck_EventScript_Donator::
# 18 "data/maps/SSAnne_Deck/scripts.pory"
	goto_if_set FLAG_APART_GAME, SSAnne_Deck_EventScript_Donator2
# 19 "data/maps/SSAnne_Deck/scripts.pory"
	msgbox SSAnne_Deck_Text_ItsApartGame, MSGBOX_NPC
# 20 "data/maps/SSAnne_Deck/scripts.pory"
	checkitem ITEM_PEARL
# 21 "data/maps/SSAnne_Deck/scripts.pory"
	giveitem ITEM_PEARL
# 22 "data/maps/SSAnne_Deck/scripts.pory"
	setflag FLAG_APART_GAME
# 23 "data/maps/SSAnne_Deck/scripts.pory"
	release
# 24 "data/maps/SSAnne_Deck/scripts.pory"
	end
# 25 "data/maps/SSAnne_Deck/scripts.pory"

# 26 "data/maps/SSAnne_Deck/scripts.pory"
SSAnne_Deck_EventScript_Donator2::
# 27 "data/maps/SSAnne_Deck/scripts.pory"
	msgbox SSAnne_Deck_Text_ItsApartGame, MSGBOX_NPC
# 28 "data/maps/SSAnne_Deck/scripts.pory"
	release
# 29 "data/maps/SSAnne_Deck/scripts.pory"
	end
# 30 "data/maps/SSAnne_Deck/scripts.pory"

# 31 "data/maps/SSAnne_Deck/scripts.pory"
SSAnne_Deck_EventScript_Edmond::
# 32 "data/maps/SSAnne_Deck/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_EDMOND, SSAnne_Deck_Text_EdmondIntro, SSAnne_Deck_Text_EdmondDefeat
# 33 "data/maps/SSAnne_Deck/scripts.pory"
	msgbox SSAnne_Deck_Text_EdmondPostBattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/SSAnne_Deck/scripts.pory"
	end
# 35 "data/maps/SSAnne_Deck/scripts.pory"

# 36 "data/maps/SSAnne_Deck/scripts.pory"
SSAnne_Deck_EventScript_Trevor::
# 37 "data/maps/SSAnne_Deck/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_TREVOR, SSAnne_Deck_Text_TrevorIntro, SSAnne_Deck_Text_TrevorDefeat
# 38 "data/maps/SSAnne_Deck/scripts.pory"
	msgbox SSAnne_Deck_Text_TrevorPostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/SSAnne_Deck/scripts.pory"
	end
