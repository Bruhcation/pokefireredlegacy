# 1 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"

# 2 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
CeladonCity_Condominiums_1F_MapScripts::
# 3 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"

# 5 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_TeaWoman::
# 6 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	lock
# 7 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	faceplayer
# 8 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	goto_if_set FLAG_TALKED_TO_TEA_LADY_AFTER_HOF, CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea
# 9 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, CeladonCity_Condominiums_1F_EventScript_TeaWomanMentionDaisy
# 10 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	goto_if_set FLAG_GOT_TEA, CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea
# 11 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_TryThisDrinkInstead
# 12 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	setflag FLAG_GOT_TEA
# 13 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	giveitem ITEM_TEA
# 14 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 15 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_NothingBeatsThirstLikeTea
# 16 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
# 17 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	end
# 18 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"

# 19 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_TeaWomanAfterTea::
# 20 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_MyDearMonsKeepMeCompany
# 21 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 22 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	waitmessage
# 23 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, CeladonCity_Condominiums_1F_EventScript_TeaShop2
# 24 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	pokemart CeladonCity_Condominiums_1F_Herbs
# 25 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox Text_PleaseComeAgain
# 26 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
# 27 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	end
# 28 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"

# 29 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_TeaShop2::
# 30 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	pokemart CeladonCity_Condominiums_1F_Herbs2
# 31 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox Text_PleaseComeAgain
# 32 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
# 33 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	end
# 34 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"

# 35 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.align 2
# 36 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
CeladonCity_Condominiums_1F_Herbs::
# 37 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 38 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 39 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 40 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 41 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.2byte ITEM_NONE
# 42 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
# 43 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	end
# 44 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"

# 45 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.align 2
# 46 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
CeladonCity_Condominiums_1F_Herbs2::
# 47 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 48 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 49 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 50 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 51 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 52 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 53 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	.2byte ITEM_NONE
# 54 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
# 55 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	end
# 56 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"

# 57 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_TeaWomanMentionDaisy::
# 58 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	famechecker FAMECHECKER_DAISY, 4
# 59 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	setflag FLAG_TALKED_TO_TEA_LADY_AFTER_HOF
# 60 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_DaisyComesToBuyTea
# 61 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
# 62 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	end
# 63 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"

# 64 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_Meowth::
# 65 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	lock
# 66 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	faceplayer
# 67 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	waitse
# 68 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 69 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Meowth
# 70 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	waitmoncry
# 71 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
# 72 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	end
# 73 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"

# 74 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_Clefairy::
# 75 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	lock
# 76 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	faceplayer
# 77 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	waitse
# 78 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 79 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Clefairy
# 80 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	waitmoncry
# 81 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
# 82 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	end
# 83 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"

# 84 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_Nidoran::
# 85 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	lock
# 86 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	faceplayer
# 87 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	waitse
# 88 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	playmoncry SPECIES_NIDORAN_F, CRY_MODE_NORMAL
# 89 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Nidoran
# 90 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	waitmoncry
# 91 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	release
# 92 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	end
# 93 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"

# 94 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
CeladonCity_Condominiums_1F_EventScript_SuiteSign::
# 95 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_ManagersSuite, MSGBOX_SIGN
# 96 "data/maps/CeladonCity_Condominiums_1F/scripts.pory"
	end
