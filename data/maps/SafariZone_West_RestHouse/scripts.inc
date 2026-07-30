# 1 "data/maps/SafariZone_West_RestHouse/scripts.pory"

# 2 "data/maps/SafariZone_West_RestHouse/scripts.pory"
SafariZone_West_RestHouse_MapScripts::
# 3 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	.byte 0
# 4 "data/maps/SafariZone_West_RestHouse/scripts.pory"

# 5 "data/maps/SafariZone_West_RestHouse/scripts.pory"
SafariZone_West_RestHouse_EventScript_Man::
# 6 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	msgbox SafariZone_West_Text_BaitMakesMonStickAround, MSGBOX_NPC
# 7 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	end
# 8 "data/maps/SafariZone_West_RestHouse/scripts.pory"

# 9 "data/maps/SafariZone_West_RestHouse/scripts.pory"
SafariZone_West_RestHouse_EventScript_Scientist::
# 10 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	msgbox SafariZone_West_Text_RocksMakeMonRunButEasierCatch, MSGBOX_NPC
# 11 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	end
# 12 "data/maps/SafariZone_West_RestHouse/scripts.pory"

# 13 "data/maps/SafariZone_West_RestHouse/scripts.pory"
SafariZone_West_RestHouse_EventScript_CooltrainerF::
# 14 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	msgbox SafariZone_West_Text_HikedLotsDidntSeeMonIWanted, MSGBOX_NPC
# 15 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	end
# 16 "data/maps/SafariZone_West_RestHouse/scripts.pory"

# 17 "data/maps/SafariZone_West_RestHouse/scripts.pory"
SafariZone_West_RestHouse_EventScript_DiveGuy::
# 18 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	lock
# 19 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	faceplayer
# 20 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	goto_if_set FLAG_GOT_HM08, SafariZone_West_RestHouse_EventScript_ExplainDive
# 21 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	msgbox Route19_Text_CongratsYouveWon
# 22 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	checkitemspace ITEM_HM08
# 23 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SafariZone_West_RestHouse_EventScript_NoRoomForHM08
# 24 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	giveitem_msg Route19_Text_ReceivedHM08FromDiveGuy, ITEM_HM08
# 25 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	msgbox Route19_Text_ExplainDive
# 26 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	setflag FLAG_GOT_HM08
# 27 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	release
# 28 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	end
# 29 "data/maps/SafariZone_West_RestHouse/scripts.pory"

# 30 "data/maps/SafariZone_West_RestHouse/scripts.pory"
SafariZone_West_RestHouse_EventScript_NoRoomForHM08::
# 31 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	msgbox Route19_Text_DontHaveRoomForPrize
# 32 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	release
# 33 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	end
# 34 "data/maps/SafariZone_West_RestHouse/scripts.pory"

# 35 "data/maps/SafariZone_West_RestHouse/scripts.pory"
SafariZone_West_RestHouse_EventScript_ExplainDive::
# 36 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	msgbox Route19_Text_ExplainDive
# 37 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	goto_if_unset FLAG_HIDE_FOUR_ISLAND_ICEFALL_CAVE_1F_HM07, SafariZone_West_RestHouse_EventScript_ExplainWaterfall
# 38 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	release
# 39 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	end
# 40 "data/maps/SafariZone_West_RestHouse/scripts.pory"

# 41 "data/maps/SafariZone_West_RestHouse/scripts.pory"
SafariZone_West_RestHouse_EventScript_ExplainWaterfall::
# 42 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	msgbox Route19_Text_ExplainWaterfall
# 43 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	checkitemspace ITEM_HM07
# 44 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SafariZone_West_RestHouse_EventScript_NoRoomForHM08
# 45 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	giveitem_msg Route19_Text_ReceivedHM07FromDiveGuy, ITEM_HM07
# 46 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	msgbox Route19_Text_ExplainWaterfall2
# 47 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	setflag FLAG_HIDE_FOUR_ISLAND_ICEFALL_CAVE_1F_HM07
# 48 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	release
# 49 "data/maps/SafariZone_West_RestHouse/scripts.pory"
	end
