# 1 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 2 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_MapScripts::
# 3 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 5 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_BaldingMan::
# 6 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_FancyThatPorygon, MSGBOX_NPC
# 7 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 8 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 9 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_OldMan::
# 10 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_RakedItInToday, MSGBOX_NPC
# 11 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 12 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 13 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkMons::
# 14 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	lock
# 15 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	faceplayer
# 16 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase
# 17 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 18 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	showcoinsbox 0, 0
# 19 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes
# 20 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon
# 21 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 22 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 23 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeMon::
# 24 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	message CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize
# 25 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	waitmessage
# 26 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	multichoice 11, 0, MULTICHOICE_GAME_CORNER_POKEMON_PRIZES, FALSE
# 27 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	switch VAR_RESULT
# 28 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case 0, CeladonCity_GameCorner_PrizeRoom_EventScript_Abra
# 29 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case 1, CeladonCity_GameCorner_PrizeRoom_EventScript_Clefairy
# 30 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case 2, CeladonCity_GameCorner_PrizeRoom_EventScript_Kangaskhan
# 31 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case 3, CeladonCity_GameCorner_PrizeRoom_EventScript_Dratini
# 32 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case 4, CeladonCity_GameCorner_PrizeRoom_EventScript_Porygon
# 33 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case 5, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 34 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case 127, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 35 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 36 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 37 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange::
# 38 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	hidecoinsbox 0, 0
# 39 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	release
# 40 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 41 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 42 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_Abra::
# 43 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef FIRERED
# 44 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ABRA
# 45 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 180
# 46 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.else
# 47 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef LEAFGREEN
# 48 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ABRA
# 49 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 180
# 50 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 51 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 52 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 53 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 54 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 55 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_Clefairy::
# 56 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef FIRERED
# 57 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CLEFAIRY
# 58 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 500
# 59 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.else
# 60 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef LEAFGREEN
# 61 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CLEFAIRY
# 62 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 500
# 63 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 64 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 65 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 66 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 67 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 68 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_Kangaskhan::
# 69 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef FIRERED
# 70 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KANGASKHAN
# 71 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 2000
# 72 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.else
# 73 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef LEAFGREEN
# 74 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KANGASKHAN
# 75 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 2000
# 76 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 77 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 78 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 79 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 80 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 81 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_Dratini::
# 82 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef FIRERED
# 83 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_DRATINI
# 84 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 3000
# 85 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.else
# 86 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef LEAFGREEN
# 87 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_DRATINI
# 88 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 3000
# 89 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 90 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 91 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 92 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 93 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 94 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_Porygon::
# 95 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef FIRERED
# 96 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PORYGON
# 97 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 4000
# 98 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.else
# 99 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef LEAFGREEN
# 100 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_PORYGON
# 101 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 4000
# 102 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 103 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 104 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon
# 105 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 106 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 107 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeMon::
# 108 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 109 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_YouWantPrize, MSGBOX_YESNO
# 110 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 111 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	checkcoins VAR_RESULT
# 112 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_lt VAR_RESULT, VAR_TEMP_2, CeladonCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins
# 113 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 114 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	switch VAR_TEMP_1
# 115 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case SPECIES_ABRA,     CeladonCity_GameCorner_PrizeRoom_EventScript_GiveAbra
# 116 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case SPECIES_CLEFAIRY, CeladonCity_GameCorner_PrizeRoom_EventScript_GiveClefairy
# 117 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case SPECIES_DRATINI,  CeladonCity_GameCorner_PrizeRoom_EventScript_GiveDratini
# 118 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case SPECIES_KANGASKHAN,  CeladonCity_GameCorner_PrizeRoom_EventScript_GiveKangaskhan
# 119 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case SPECIES_PORYGON,  CeladonCity_GameCorner_PrizeRoom_EventScript_GivePorygon
# 120 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 121 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 122 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GiveAbra::
# 123 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef FIRERED
# 124 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	givemon VAR_TEMP_1, 15
# 125 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.else
# 126 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef LEAFGREEN
# 127 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	givemon VAR_TEMP_1, 15
# 128 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 129 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 130 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 131 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 132 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 133 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GiveClefairy::
# 134 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef FIRERED
# 135 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	givemon VAR_TEMP_1, 25
# 136 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.else
# 137 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef LEAFGREEN
# 138 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	givemon VAR_TEMP_1, 25
# 139 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 140 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 141 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 142 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 143 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 144 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GiveDratini::
# 145 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef FIRERED
# 146 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	givemon VAR_TEMP_1, 25
# 147 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.else
# 148 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef LEAFGREEN
# 149 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	givemon VAR_TEMP_1, 25
# 150 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 151 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 152 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 153 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 154 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 155 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GiveKangaskhan::
# 156 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	givemon VAR_TEMP_1, 25
# 157 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 158 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 159 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 160 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_GivePorygon::
# 161 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef FIRERED
# 162 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	givemon VAR_TEMP_1, 30
# 163 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.else
# 164 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.ifdef LEAFGREEN
# 165 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	givemon VAR_TEMP_1, 30
# 166 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 167 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	.endif
# 168 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon
# 169 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 170 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 171 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 172 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_CheckReceivedMon::
# 173 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 0, CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty
# 174 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 1, CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC
# 175 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_RESULT, 2, CeladonCity_GameCorner_PrizeRoom_EventScript_PartyFull
# 176 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 177 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 178 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_PartyFull::
# 179 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 180 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox Text_NoMoreRoomForPokemon
# 181 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	hidecoinsbox 0, 0
# 182 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	release
# 183 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 184 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 185 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_NicknamePartyMon::
# 186 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	getpartysize
# 187 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	subvar VAR_RESULT, 1
# 188 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 189 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	call EventScript_ChangePokemonNickname
# 190 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 191 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 192 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 193 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase::
# 194 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 195 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_CoinCaseRequired
# 196 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	release
# 197 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 198 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 199 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins::
# 200 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_NeedMoreCoins
# 201 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 202 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 203 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 204 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonParty::
# 205 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	removecoins VAR_TEMP_2
# 206 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	updatecoinsbox 0, 5
# 207 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 208 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 209 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	message Text_PlayerObtainedTheMon
# 210 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	waitmessage
# 211 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	waitfanfare
# 212 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 213 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CeladonCity_GameCorner_PrizeRoom_EventScript_NicknamePartyMon
# 214 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 215 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 216 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 217 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ReceivedMonPC::
# 218 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	removecoins VAR_TEMP_2
# 219 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	updatecoinsbox 0, 5
# 220 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 221 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 222 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	message Text_PlayerObtainedTheMon
# 223 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	waitmessage
# 224 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	waitfanfare
# 225 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 226 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_GameCorner_PrizeRoom_EventScript_TransferredToPC
# 227 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 228 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TransferredToPC
# 229 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 230 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 231 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TransferredToPC::
# 232 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	call EventScript_TransferredToPC
# 233 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 234 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 235 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 236 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkTMs::
# 237 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	lock
# 238 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	faceplayer
# 239 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase
# 240 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 241 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	showcoinsbox 0, 0
# 242 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes
# 243 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM
# 244 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 245 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 246 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeTM::
# 247 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	message CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize
# 248 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	waitmessage
# 249 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	multichoice 11, 0, MULTICHOICE_GAME_CORNER_TMPRIZES, FALSE
# 250 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	switch VAR_RESULT
# 251 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case 0, CeladonCity_GameCorner_PrizeRoom_EventScript_TM13
# 252 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case 1, CeladonCity_GameCorner_PrizeRoom_EventScript_TM23
# 253 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case 2, CeladonCity_GameCorner_PrizeRoom_EventScript_TM24
# 254 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case 3, CeladonCity_GameCorner_PrizeRoom_EventScript_TM30
# 255 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case 4, CeladonCity_GameCorner_PrizeRoom_EventScript_TM35
# 256 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case 5, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 257 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case 127, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 258 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 259 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 260 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TM13::
# 261 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM13
# 262 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 2500
# 263 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	buffermovename STR_VAR_2, MOVE_ICE_BEAM
# 264 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
# 265 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 266 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 267 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TM23::
# 268 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM23
# 269 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 2000
# 270 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	buffermovename STR_VAR_2, MOVE_IRON_TAIL
# 271 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
# 272 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 273 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 274 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TM24::
# 275 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM24
# 276 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 2500
# 277 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	buffermovename STR_VAR_2, MOVE_THUNDERBOLT
# 278 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
# 279 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 280 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 281 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TM30::
# 282 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM30
# 283 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 3000
# 284 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	buffermovename STR_VAR_2, MOVE_SHADOW_BALL
# 285 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
# 286 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 287 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 288 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TM35::
# 289 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, ITEM_TM35
# 290 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 2500
# 291 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	buffermovename STR_VAR_2, MOVE_FLAMETHROWER
# 292 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM
# 293 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 294 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 295 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeTM::
# 296 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_YouWantTM, MSGBOX_YESNO
# 297 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 298 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize
# 299 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 300 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 301 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem::
# 302 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_1
# 303 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_YouWantPrize, MSGBOX_YESNO
# 304 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 305 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize
# 306 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 307 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 308 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_TryGivePrize::
# 309 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_1
# 310 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	checkcoins VAR_RESULT
# 311 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_lt VAR_RESULT, VAR_TEMP_2, CeladonCity_GameCorner_PrizeRoom_EventScript_NotEnoughCoins
# 312 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	checkitemspace VAR_TEMP_1
# 313 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_GameCorner_PrizeRoom_EventScript_BagFull
# 314 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	removecoins VAR_TEMP_2
# 315 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	updatecoinsbox 0, 5
# 316 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	giveitem VAR_TEMP_1
# 317 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 318 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 319 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 320 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_BagFull::
# 321 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 322 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox Text_TooBadBagFull
# 323 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	hidecoinsbox 0, 0
# 324 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	release
# 325 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 326 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 327 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_PrizeClerkItems::
# 328 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	lock
# 329 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	faceplayer
# 330 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_PrizeRoom_EventScript_NeedCoinCase
# 331 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 332 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	showcoinsbox 0, 0
# 333 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes
# 334 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem
# 335 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 336 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 337 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_ChoosePrizeItem::
# 338 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	message CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize
# 339 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	waitmessage
# 340 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	multichoice 10, 0, MULTICHOICE_GAME_CORNER_BATTLE_ITEM_PRIZES, FALSE
# 341 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	switch VAR_RESULT
# 342 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case 0, CeladonCity_GameCorner_PrizeRoom_EventScript_SmokeBall
# 343 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case 1, CeladonCity_GameCorner_PrizeRoom_EventScript_MiracleSeed
# 344 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case 2, CeladonCity_GameCorner_PrizeRoom_EventScript_Charcoal
# 345 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case 3, CeladonCity_GameCorner_PrizeRoom_EventScript_MysticWater
# 346 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case 4, CeladonCity_GameCorner_PrizeRoom_EventScript_YellowFlute
# 347 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case 5, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 348 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	case 127, CeladonCity_GameCorner_PrizeRoom_EventScript_EndPrizeExchange
# 349 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 350 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 351 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_SmokeBall::
# 352 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, ITEM_SMOKE_BALL
# 353 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 200
# 354 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
# 355 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 356 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 357 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_MiracleSeed::
# 358 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, ITEM_MIRACLE_SEED
# 359 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 500
# 360 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
# 361 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 362 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 363 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_Charcoal::
# 364 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, ITEM_CHARCOAL
# 365 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 500
# 366 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
# 367 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 368 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 369 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_MysticWater::
# 370 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, ITEM_MYSTIC_WATER
# 371 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 500
# 372 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
# 373 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
# 374 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"

# 375 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
CeladonCity_GameCorner_PrizeRoom_EventScript_YellowFlute::
# 376 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_1, ITEM_UP_GRADE
# 377 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	setvar VAR_TEMP_2, 1500
# 378 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	goto CeladonCity_GameCorner_PrizeRoom_EventScript_ConfirmPrizeItem
# 379 "data/maps/CeladonCity_GameCorner_PrizeRoom/scripts.pory"
	end
