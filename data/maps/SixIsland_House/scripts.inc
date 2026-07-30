# 1 "data/maps/SixIsland_House/scripts.pory"

# 2 "data/maps/SixIsland_House/scripts.pory"
SixIsland_House_MapScripts::
# 3 "data/maps/SixIsland_House/scripts.pory"
	.byte 0
# 4 "data/maps/SixIsland_House/scripts.pory"

# 5 "data/maps/SixIsland_House/scripts.pory"
SixIsland_House_EventScript_OldMan::
# 6 "data/maps/SixIsland_House/scripts.pory"
	msgbox SixIsland_House_Text_GoodPlaceForNatureAndHistory, MSGBOX_NPC
# 7 "data/maps/SixIsland_House/scripts.pory"
	end
# 8 "data/maps/SixIsland_House/scripts.pory"

# 9 "data/maps/SixIsland_House/scripts.pory"
SixIsland_House_EventScript_Elyssa::
# 10 "data/maps/SixIsland_House/scripts.pory"
	lock
# 11 "data/maps/SixIsland_House/scripts.pory"
	faceplayer
# 12 "data/maps/SixIsland_House/scripts.pory"
	msgbox Trade_Text_ThanksMan
# 13 "data/maps/SixIsland_House/scripts.pory"
	setvar VAR_0x8004, SPECIES_CHIKORITA
# 14 "data/maps/SixIsland_House/scripts.pory"
	special SetSeenMon
# 15 "data/maps/SixIsland_House/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 16 "data/maps/SixIsland_House/scripts.pory"
	waitbuttonpress
# 17 "data/maps/SixIsland_House/scripts.pory"
	hidemonpic
# 18 "data/maps/SixIsland_House/scripts.pory"
	release
# 19 "data/maps/SixIsland_House/scripts.pory"
	end
# 20 "data/maps/SixIsland_House/scripts.pory"

# 21 "data/maps/SixIsland_House/scripts.pory"
SixIsland_House_EventScript_DeclineTrade::
# 22 "data/maps/SixIsland_House/scripts.pory"
	msgbox Trade_Text_WellIfYouDontWantTo
# 23 "data/maps/SixIsland_House/scripts.pory"
	release
# 24 "data/maps/SixIsland_House/scripts.pory"
	end
# 25 "data/maps/SixIsland_House/scripts.pory"

# 26 "data/maps/SixIsland_House/scripts.pory"
SixIsland_House_EventScript_NotRequestedMon::
# 27 "data/maps/SixIsland_House/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 28 "data/maps/SixIsland_House/scripts.pory"
	msgbox Trade_Text_ThisIsntMon
# 29 "data/maps/SixIsland_House/scripts.pory"
	release
# 30 "data/maps/SixIsland_House/scripts.pory"
	end
# 31 "data/maps/SixIsland_House/scripts.pory"

# 32 "data/maps/SixIsland_House/scripts.pory"
SixIsland_House_EventScript_AlreadyTraded::
# 33 "data/maps/SixIsland_House/scripts.pory"
	msgbox Trade_Text_IsntMyOldMonGreat
# 34 "data/maps/SixIsland_House/scripts.pory"
	release
# 35 "data/maps/SixIsland_House/scripts.pory"
	end
