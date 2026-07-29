# 1 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 2 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_MapScripts::
# 3 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.byte 0
# 4 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 5 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji::
# 6 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 7 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 8 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_set FLAG_GOT_POKE_FLUTE, LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute
# 9 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_IdLikeYouToHaveThis
# 10 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	checkitemspace ITEM_POKE_FLUTE
# 11 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LavenderTown_VolunteerPokemonHouse_EventScript_NoRoomForPokeFlute
# 12 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	setflag FLAG_GOT_POKE_FLUTE
# 13 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	giveitem_msg LavenderTown_VolunteerPokemonHouse_Text_ReceivedPokeFluteFromMrFuji, ITEM_POKE_FLUTE, 1, MUS_OBTAIN_KEY_ITEM
# 14 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_ExplainPokeFlute
# 15 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 16 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 17 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 18 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_SoulDewCheck::
# 19 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_set FLAG_GOT_SOUL_DEW, LavenderTown_VolunteerPokemonHouse_EventScript_End
# 20 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	setvar VAR_0x8004, FAMECHECKER_MRFUJI
# 21 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 22 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LavenderTown_VolunteerPokemonHouse_EventScript_SoulDewGiven
# 23 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_HasPokeFluteHelpedYou
# 24 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 25 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 26 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 27 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_End::
# 28 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 29 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 30 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 31 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_SoulDewGiven::
# 32 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_ThankYouForHelping
# 33 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	checkitemspace ITEM_SOUL_DEW
# 34 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	giveitem ITEM_SOUL_DEW
# 35 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_Restaurant_EventScript_NoRoomForCoinCase
# 36 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	setflag FLAG_GOT_SOUL_DEW
# 37 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	clearflag FLAG_SECOND_SOUL_DEW
# 38 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_ThankYouForHelping2
# 39 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 40 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 41 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 42 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_FameCheckerNotEnough::
# 43 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "PLACEHOLDER.$"
# 44 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 45 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_GotDew::
# 46 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "{PLAYER} received the SOUL DEW!$"
# 47 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 48 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_ThankYouForHelping::
# 49 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "Woah, I saw that you completed\n"
# 50 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "my entry on the FAMECHECKER.\p"
# 51 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "I appreciate your enthusiasm,\n"
# 52 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "and hope you are more willing\l"
# 53 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "to treat POKEMON much more better\l"
# 54 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "than before!\p"
# 55 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "Well, for you enthusiasm, I found\n"
# 56 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "a special POKEMON Item\l"
# 57 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "in my research!$"
# 58 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 59 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_ThankYouForHelping2::
# 60 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "It's belongs to the\n"
# 61 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "Legendary POKEMONS,\l"
# 62 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "LATIOS and LATIAS.\p"
# 63 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "They left it behind and I\n"
# 64 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "couldn't give it back,\l"
# 65 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "So I'll let you return it to them!$"
# 66 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 67 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute::
# 68 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_HasPokeFluteHelpedYou
# 69 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_unset FLAG_JIRACHI_WISH, LavenderTown_VolunteerPokemonHouse_EventScript_SoulDewCheck
# 70 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 71 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 72 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 73 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_NoRoomForPokeFlute::
# 74 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MustMakeRoomForThis
# 75 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 76 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 77 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 78 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_LittleGirl::
# 79 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 80 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 81 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, 0
# 82 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiLooksAfterOrphanedMons
# 83 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 84 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 85 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 86 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_LittleBoy::
# 87 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MonsNiceToHug, MSGBOX_NPC
# 88 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 89 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 90 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Youngster::
# 91 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 92 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 93 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_set FLAG_RESCUED_MR_FUJI, LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack
# 94 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_WhereDidMrFujiGo
# 95 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 96 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 97 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 98 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack::
# 99 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiWasPrayingForCubonesMother
# 100 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 101 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 102 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 103 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Nidorino::
# 104 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 105 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 106 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitse
# 107 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	playmoncry SPECIES_NIDORINO, CRY_MODE_NORMAL
# 108 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Nidorino
# 109 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitmoncry
# 110 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 111 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 112 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 113 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Psyduck::
# 114 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 115 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 116 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitse
# 117 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 118 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Psyduck
# 119 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitmoncry
# 120 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 121 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 122 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 123 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_PokemonFanMagazine::
# 124 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lockall
# 125 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, 2
# 126 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_GrandPrizeDrawingClipped
# 127 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	releaseall
# 128 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 129 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 130 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Bookshelf::
# 131 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_PokemonMagazinesLineShelf, MSGBOX_SIGN
# 132 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
