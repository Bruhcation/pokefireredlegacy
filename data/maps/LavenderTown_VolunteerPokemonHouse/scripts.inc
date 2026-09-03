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
	msgbox LavenderTown_VolunteerPokemonHouse_Text_ThankYouForHelping2
# 38 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 39 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 40 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 41 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_FameCheckerNotEnough::
# 42 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "PLACEHOLDER.$"
# 43 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 44 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_GotDew::
# 45 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "{PLAYER} received the SOUL DEW!$"
# 46 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 47 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_ThankYouForHelping::
# 48 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "Woah, I saw that you completed\n"
# 49 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "my entry on the FAMECHECKER.\p"
# 50 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "I appreciate your enthusiasm,\n"
# 51 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "and hope you are more willing\l"
# 52 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "to treat POKEMON much more better\l"
# 53 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "than before!\p"
# 54 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "Well, for you enthusiasm, I found\n"
# 55 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "a special POKEMON Item\l"
# 56 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "in my research!$"
# 57 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 58 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_Text_ThankYouForHelping2::
# 59 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "It's belongs to the\n"
# 60 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "Legendary POKEMONS,\l"
# 61 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "LATIOS and LATIAS.\p"
# 62 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "They left it behind and I\n"
# 63 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "couldn't give it back,\l"
# 64 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "So I'll let you return it to them!$"
# 65 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 66 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute::
# 67 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_unset FLAG_JIRACHI_WISH, LavenderTown_VolunteerPokemonHouse_EventScript_SoulDewCheck
# 68 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_HasPokeFluteHelpedYou
# 69 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 70 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 71 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 72 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_NoRoomForPokeFlute::
# 73 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MustMakeRoomForThis
# 74 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 75 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 76 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 77 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_LittleGirl::
# 78 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 79 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 80 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, 0
# 81 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiLooksAfterOrphanedMons
# 82 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 83 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 84 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 85 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_LittleBoy::
# 86 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MonsNiceToHug, MSGBOX_NPC
# 87 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 88 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 89 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Youngster::
# 90 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 91 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 92 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_set FLAG_RESCUED_MR_FUJI, LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack
# 93 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_WhereDidMrFujiGo
# 94 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 95 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 96 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 97 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack::
# 98 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiWasPrayingForCubonesMother
# 99 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 100 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 101 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 102 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Nidorino::
# 103 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 104 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 105 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitse
# 106 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	playmoncry SPECIES_NIDORINO, CRY_MODE_NORMAL
# 107 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Nidorino
# 108 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitmoncry
# 109 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 110 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 111 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 112 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Psyduck::
# 113 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 114 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 115 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitse
# 116 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 117 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Psyduck
# 118 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitmoncry
# 119 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 120 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 121 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 122 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_PokemonFanMagazine::
# 123 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lockall
# 124 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, 2
# 125 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_GrandPrizeDrawingClipped
# 126 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	releaseall
# 127 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 128 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 129 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Bookshelf::
# 130 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_PokemonMagazinesLineShelf, MSGBOX_SIGN
# 131 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
