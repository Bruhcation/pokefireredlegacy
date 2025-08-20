# 1 "data/maps/OneIsland_House2/scripts.pory"

# 2 "data/maps/OneIsland_House2/scripts.pory"
OneIsland_House2_MapScripts::
# 3 "data/maps/OneIsland_House2/scripts.pory"
	.byte 0
# 4 "data/maps/OneIsland_House2/scripts.pory"

# 5 "data/maps/OneIsland_House2/scripts.pory"
OneIsland_House2_EventScript_Lass::
# 6 "data/maps/OneIsland_House2/scripts.pory"
	msgbox OneIsland_House2_Text_IWantToStayHereForever, MSGBOX_NPC
# 7 "data/maps/OneIsland_House2/scripts.pory"
	end
# 8 "data/maps/OneIsland_House2/scripts.pory"

# 9 "data/maps/OneIsland_House2/scripts.pory"
OneIsland_House2_EventScript_Elyssa::
# 10 "data/maps/OneIsland_House2/scripts.pory"
	lock
# 11 "data/maps/OneIsland_House2/scripts.pory"
	faceplayer
# 12 "data/maps/OneIsland_House2/scripts.pory"
	goto_if_set FLAG_HIDE_POSTGAME_GOSSIPERS, OneIsland_House2_EventScript_Busy
# 13 "data/maps/OneIsland_House2/scripts.pory"
	msgbox Trade_Text_ThanksMan
# 14 "data/maps/OneIsland_House2/scripts.pory"
	setvar VAR_0x8004, SPECIES_CYNDAQUIL
# 15 "data/maps/OneIsland_House2/scripts.pory"
	special SetSeenMon
# 16 "data/maps/OneIsland_House2/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 17 "data/maps/OneIsland_House2/scripts.pory"
	waitbuttonpress
# 18 "data/maps/OneIsland_House2/scripts.pory"
	hidemonpic
# 19 "data/maps/OneIsland_House2/scripts.pory"
	release
# 20 "data/maps/OneIsland_House2/scripts.pory"
	end
# 21 "data/maps/OneIsland_House2/scripts.pory"

# 22 "data/maps/OneIsland_House2/scripts.pory"
Trade_Text_ThanksMan::
# 23 "data/maps/OneIsland_House2/scripts.pory"
	.string "Hey! I took a picture of\n"
# 24 "data/maps/OneIsland_House2/scripts.pory"
	.string "this POKEMON I found on\l"
# 25 "data/maps/OneIsland_House2/scripts.pory"
	.string "these islands!\p"
# 26 "data/maps/OneIsland_House2/scripts.pory"
	.string "It rare's and looks\n"
# 27 "data/maps/OneIsland_House2/scripts.pory"
	.string "very cute!\p"
# 28 "data/maps/OneIsland_House2/scripts.pory"
	.string "Take a look!$"
# 29 "data/maps/OneIsland_House2/scripts.pory"

# 30 "data/maps/OneIsland_House2/scripts.pory"
OneIsland_House2_EventScript_Busy::
# 31 "data/maps/OneIsland_House2/scripts.pory"
	msgbox OneIsland_House2_Text_Busy, MSGBOX_NPC
# 32 "data/maps/OneIsland_House2/scripts.pory"
	end
# 33 "data/maps/OneIsland_House2/scripts.pory"

# 34 "data/maps/OneIsland_House2/scripts.pory"
OneIsland_House2_EventScript_DeclineTrade::
# 35 "data/maps/OneIsland_House2/scripts.pory"
	msgbox Trade_Text_WellIfYouDontWantTo
# 36 "data/maps/OneIsland_House2/scripts.pory"
	release
# 37 "data/maps/OneIsland_House2/scripts.pory"
	end
# 38 "data/maps/OneIsland_House2/scripts.pory"

# 39 "data/maps/OneIsland_House2/scripts.pory"
OneIsland_House2_EventScript_NotRequestedMon::
# 40 "data/maps/OneIsland_House2/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 41 "data/maps/OneIsland_House2/scripts.pory"
	msgbox Trade_Text_ThisIsntMon
# 42 "data/maps/OneIsland_House2/scripts.pory"
	release
# 43 "data/maps/OneIsland_House2/scripts.pory"
	end
# 44 "data/maps/OneIsland_House2/scripts.pory"

# 45 "data/maps/OneIsland_House2/scripts.pory"
OneIsland_House2_EventScript_AlreadyTraded::
# 46 "data/maps/OneIsland_House2/scripts.pory"
	msgbox Trade_Text_IsntMyOldMonGreat
# 47 "data/maps/OneIsland_House2/scripts.pory"
	release
# 48 "data/maps/OneIsland_House2/scripts.pory"
	end
# 49 "data/maps/OneIsland_House2/scripts.pory"

# 50 "data/maps/OneIsland_House2/scripts.pory"
OneIsland_House2_Text_Busy::
# 51 "data/maps/OneIsland_House2/scripts.pory"
	.string "I'm quite busy at the moment.\n"
# 52 "data/maps/OneIsland_House2/scripts.pory"
	.string "However, when I'm done.\p"
# 53 "data/maps/OneIsland_House2/scripts.pory"
	.string "I would like to show\n"
# 54 "data/maps/OneIsland_House2/scripts.pory"
	.string "you something.\p"
# 55 "data/maps/OneIsland_House2/scripts.pory"
	.string "Go on with your day and\n"
# 56 "data/maps/OneIsland_House2/scripts.pory"
	.string "Visit me later.$"
