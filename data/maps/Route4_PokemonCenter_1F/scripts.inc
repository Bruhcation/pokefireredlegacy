# 1 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
.equ MAGIKARP_PRICE, 500
# 3 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_MapScripts::
# 5 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route4_PokemonCenter_1F_OnTransition
# 6 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	.byte 0
# 7 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 8 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_OnTransition::
# 9 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROUTE4_POKEMON_CENTER_1F
# 10 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_ROUTE4
# 11 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 12 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_Boy::
# 14 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_CanHaveSixMonsWithYou, MSGBOX_NPC
# 15 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 16 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 17 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_Breeder::
# 19 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_BabyMons, MSGBOX_NPC
# 20 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_Gentleman::
# 24 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	lock
# 25 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_TeamRocketAttacksCerulean
# 26 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
# 27 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 28 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 29 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_MagikarpSalesman::
# 30 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	lock
# 31 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	faceplayer
# 32 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BOUGHT_MAGIKARP, Route4_PokemonCenter_1F_EventScript_AlreadyBoughtMagikarp
# 33 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	showmoneybox 0, 0
# 34 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	checkplayergender
# 35 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route4_PokemonCenter_1F_EventScript_AskBuyMagikarpMale
# 36 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route4_PokemonCenter_1F_EventScript_AskBuyMagikarpFemale
# 37 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 38 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 39 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_AskBuyMagikarpMale::
# 40 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_LaddieBuyMagikarpForJust500, MSGBOX_YESNO
# 41 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp
# 42 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 43 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 44 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_AskBuyMagikarpFemale::
# 45 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_SweetieBuyMagikarpForJust500, MSGBOX_YESNO
# 46 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp
# 47 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 48 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 49 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TryBuyMagikarp::
# 50 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route4_PokemonCenter_1F_EventScript_DeclineMagikarp
# 51 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	checkmoney MAGIKARP_PRICE
# 52 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route4_PokemonCenter_1F_EventScript_NotEnoughMoney
# 53 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 54 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MAGIKARP
# 55 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	givemon SPECIES_MAGIKARP, 5
# 56 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route4_PokemonCenter_1F_EventScript_BuyMagikarpParty
# 57 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route4_PokemonCenter_1F_EventScript_BuyMagikarpPC
# 58 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 2, Route4_PokemonCenter_1F_EventScript_NoRoomForMagikarp
# 59 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 60 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 61 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_BuyMagikarpParty::
# 62 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	call Route4_PokemonCenter_1F_EventScript_PayForMagikarp
# 63 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 64 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route4_PokemonCenter_1F_EventScript_EndPurchaseMagikarp
# 65 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 66 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 67 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 68 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	special ChangePokemonNickname
# 69 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	waitstate
# 70 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_BoughtMagikarp
# 71 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 72 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 73 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_BuyMagikarpPC::
# 74 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	call Route4_PokemonCenter_1F_EventScript_PayForMagikarp
# 75 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 76 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route4_PokemonCenter_1F_EventScript_TransferMagikarpCloseMoneyBox
# 77 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 78 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 79 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	special ChangeBoxPokemonNickname
# 80 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	waitstate
# 81 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	lock
# 82 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	faceplayer
# 83 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_TransferMagikarp
# 84 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 85 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 86 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TransferMagikarpCloseMoneyBox::
# 87 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	call EventScript_TransferredToPC
# 88 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_EndPurchaseMagikarp
# 89 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 90 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 91 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_TransferMagikarp::
# 92 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	call EventScript_TransferredToPC
# 93 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_BoughtMagikarp
# 94 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 95 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 96 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_EndPurchaseMagikarp::
# 97 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 98 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	goto Route4_PokemonCenter_1F_EventScript_BoughtMagikarp
# 99 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 100 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 101 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_BoughtMagikarp::
# 102 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	setflag FLAG_BOUGHT_MAGIKARP
# 103 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
# 104 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 105 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 106 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_PayForMagikarp::
# 107 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	removemoney MAGIKARP_PRICE
# 108 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	updatemoneybox
# 109 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 110 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	message Route4_PokemonCenter_1F_Text_PaidOutrageouslyForMagikarp
# 111 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	waitmessage
# 112 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 113 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MAGIKARP
# 114 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	return
# 115 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 116 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_DeclineMagikarp::
# 117 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_OnlyDoingThisAsFavorToYou
# 118 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 119 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
# 120 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 121 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 122 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_NotEnoughMoney::
# 123 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_YoullNeedMoreMoney
# 124 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 125 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
# 126 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 127 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 128 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_AlreadyBoughtMagikarp::
# 129 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_IDontGiveRefunds
# 130 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
# 131 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 132 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 133 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_NoRoomForMagikarp::
# 134 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 135 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_NoRoomForMorePokemon
# 136 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	hidemoneybox
# 137 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
# 138 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 139 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 140 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_Nurse::
# 141 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	lock
# 142 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	faceplayer
# 143 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 144 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
# 145 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 146 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 147 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_Youngster::
# 148 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_ShouldStoreMonsUsingPC, MSGBOX_NPC
# 149 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
# 150 "data/maps/Route4_PokemonCenter_1F/scripts.pory"

# 151 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
Route4_PokemonCenter_1F_EventScript_Newspaper::
# 152 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	lock
# 153 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	msgbox Route4_PokemonCenter_1F_Text_ItsANewspaper
# 154 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	release
# 155 "data/maps/Route4_PokemonCenter_1F/scripts.pory"
	end
