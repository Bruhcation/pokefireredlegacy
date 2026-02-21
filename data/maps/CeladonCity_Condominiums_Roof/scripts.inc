# 1 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 2 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_MapScripts::
# 3 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 5 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_EventScript_Sign::
# 6 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	msgbox CeladonCity_Condominiums_Roof_Text_IKnowEverything, MSGBOX_SIGN
# 7 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	end
# 8 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 9 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_EventScript_Whitney::
# 10 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	lock
# 11 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	faceplayer
# 12 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	goto_if_set TRAINER_RS_POKEMANIAC, CeladonCity_Condominiums_Roof_EventScript_PostWhitney
# 13 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	goto_if_set FLAG_PIKER_DEFEATED, CeladonCity_Condominiums_Roof_EventScript_EndWhitney
# 14 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	msgbox CeladonCity_Condominiums_Roof_Text_Whitney, MSGBOX_YESNO
# 15 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_Condominiums_Roof_EventScript_NoWhitney
# 16 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	trainerbattle_single TRAINER_RS_POKEMANIAC, CeladonCity_Condominiums_Roof_Text_YesWhitney, CeladonCity_Condominiums_Roof_Text_WhitneyDefeat, CeladonCity_Condominiums_Roof_EventScript_PostWhitney, NO_MUSIC
# 17 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	release
# 18 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	end
# 19 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 20 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_EventScript_PostWhitney::
# 21 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	msgbox CeladonCity_Condominiums_Roof_Text_WhitneyPostBattle
# 22 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	giveitem ITEM_SOUL_DEW
# 23 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route12_FishingHouse_EventScript_NoRoomForNetBall
# 24 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	setflag FLAG_PIKER_DEFEATED
# 25 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	release
# 26 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	end
# 27 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 28 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_EventScript_EndWhitney::
# 29 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	msgbox CeladonCity_Condominiums_Roof_Text_WhitneyPostBattle
# 30 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	release
# 31 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	end
# 32 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 33 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 34 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_EventScript_NoWhitney::
# 35 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	msgbox CeladonCity_Condominiums_Roof_Text_NoWhitney
# 36 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	release
# 37 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	end
# 38 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 39 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_Text_Whitney::
# 40 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "Hey! What are you doing here!\n"
# 41 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "I may be rich but I like\l"
# 42 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "to sit here on the roof\l"
# 43 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "and do nothing!\p"
# 44 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "It is not of your buisness!\n"
# 45 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "Or are you look for my SOUL DEW?$"
# 46 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 47 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_Text_ReceivedSoulDew::
# 48 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "{PLAYER} received the SOUL DEW!$"
# 49 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 50 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_Text_NoWhitney::
# 51 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "Ok, go away.$"
# 52 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 53 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_Text_YesWhitney::
# 54 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "Well you are not going to get it!\n"
# 55 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "At least not without a fight!$"
# 56 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	
# 57 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_Text_WhitneyDefeat::
# 58 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "Welp.$"
# 59 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"

# 60 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
CeladonCity_Condominiums_Roof_Text_WhitneyPostBattle::
# 61 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "Welp I got a lot of money\n"
# 62 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "to buy some more SOUL DEWS.\p"
# 63 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "I don't even have a LATIOS\n"
# 64 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "or LATIAS to use it on.\p"
# 65 "data/maps/CeladonCity_Condominiums_Roof/scripts.pory"
	.string "Now, LEAVE ME ALONE!$"
