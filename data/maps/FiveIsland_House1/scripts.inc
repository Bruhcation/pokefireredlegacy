# 1 "data/maps/FiveIsland_House1/scripts.pory"

# 2 "data/maps/FiveIsland_House1/scripts.pory"
FiveIsland_House1_MapScripts::
# 3 "data/maps/FiveIsland_House1/scripts.pory"
	.byte 0
# 4 "data/maps/FiveIsland_House1/scripts.pory"

# 5 "data/maps/FiveIsland_House1/scripts.pory"
FiveIsland_House1_EventScript_Woman::
# 6 "data/maps/FiveIsland_House1/scripts.pory"
	msgbox FiveIsland_House1_Text_HusbandWentOffFishing, MSGBOX_NPC
# 7 "data/maps/FiveIsland_House1/scripts.pory"
	end
# 8 "data/maps/FiveIsland_House1/scripts.pory"

# 9 "data/maps/FiveIsland_House1/scripts.pory"
FiveIsland_House1_EventScript_Elyssa::
# 10 "data/maps/FiveIsland_House1/scripts.pory"
	lock
# 11 "data/maps/FiveIsland_House1/scripts.pory"
	faceplayer
# 12 "data/maps/FiveIsland_House1/scripts.pory"
	msgbox Trade_Text_ThanksMan
# 13 "data/maps/FiveIsland_House1/scripts.pory"
	setvar VAR_0x8004, SPECIES_TOTODILE
# 14 "data/maps/FiveIsland_House1/scripts.pory"
	special SetSeenMon
# 15 "data/maps/FiveIsland_House1/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 16 "data/maps/FiveIsland_House1/scripts.pory"
	waitbuttonpress
# 17 "data/maps/FiveIsland_House1/scripts.pory"
	hidemonpic	
# 18 "data/maps/FiveIsland_House1/scripts.pory"
	release
# 19 "data/maps/FiveIsland_House1/scripts.pory"
	end
# 20 "data/maps/FiveIsland_House1/scripts.pory"

# 21 "data/maps/FiveIsland_House1/scripts.pory"
FiveIsland_House1_EventScript_DeclineTrade::
# 22 "data/maps/FiveIsland_House1/scripts.pory"
	msgbox Trade_Text_WellIfYouDontWantTo
# 23 "data/maps/FiveIsland_House1/scripts.pory"
	release
# 24 "data/maps/FiveIsland_House1/scripts.pory"
	end
# 25 "data/maps/FiveIsland_House1/scripts.pory"

# 26 "data/maps/FiveIsland_House1/scripts.pory"
FiveIsland_House1_EventScript_NotRequestedMon::
# 27 "data/maps/FiveIsland_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 28 "data/maps/FiveIsland_House1/scripts.pory"
	msgbox Trade_Text_ThisIsntMon
# 29 "data/maps/FiveIsland_House1/scripts.pory"
	release
# 30 "data/maps/FiveIsland_House1/scripts.pory"
	end
# 31 "data/maps/FiveIsland_House1/scripts.pory"

# 32 "data/maps/FiveIsland_House1/scripts.pory"
FiveIsland_House1_EventScript_AlreadyTraded::
# 33 "data/maps/FiveIsland_House1/scripts.pory"
	msgbox Trade_Text_IsntMyOldMonGreat
# 34 "data/maps/FiveIsland_House1/scripts.pory"
	release
# 35 "data/maps/FiveIsland_House1/scripts.pory"
	end
