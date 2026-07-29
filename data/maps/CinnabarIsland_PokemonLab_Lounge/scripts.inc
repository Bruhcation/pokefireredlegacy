# 1 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 2 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 3 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
.equ CHECKED_MUSHROOMS,  FLAG_TEMP_1
# 4 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
.equ HAS_BIG_MUSHROOM,   FLAG_TEMP_2
# 5 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
.equ HAS_TINY_MUSHROOMS, FLAG_TEMP_3
# 6 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
.equ HAS_BOTH_MUSHROOMS, FLAG_TEMP_4
# 7 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 8 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_MapScripts::
# 9 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	.byte 0
# 10 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 11 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Scientist::
# 12 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_FoundFossilInMtMoon, MSGBOX_NPC
# 13 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 14 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 15 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Clifton::
# 16 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	lock
# 17 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	faceplayer
# 18 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ELECTRODE
# 19 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 20 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_set FLAG_DID_ESPHERE_TRADE, CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonAlreadyTraded
# 21 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_DoYouHaveMonWouldYouTradeForMon, MSGBOX_YESNO
# 22 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonDeclineTrade
# 23 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 24 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonDeclineTrade
# 25 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 26 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonNotRequestedMon
# 27 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call EventScript_DoInGameTrade
# 28 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_Thanks
# 29 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	setflag FLAG_DID_ESPHERE_TRADE
# 30 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
# 31 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 32 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 33 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonDeclineTrade::
# 34 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_WellIfYouDontWantTo
# 35 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
# 36 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 37 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 38 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonNotRequestedMon::
# 39 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 40 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_ThisIsntMon
# 41 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
# 42 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 43 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 44 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_CliftonAlreadyTraded::
# 45 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_HasTradedMonGrownStronger
# 46 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
# 47 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 48 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 49 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_Norma::
# 50 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	lock
# 51 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	faceplayer
# 52 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_TANGELA
# 53 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 54 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 55 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 56 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_set FLAG_DID_TANGENY_TRADE, CinnabarIsland_PokemonLab_Lounge_EventScript_NormaAlreadyTraded
# 57 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_DoYouHaveMonWantToTradeForMon, MSGBOX_YESNO
# 58 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonLab_Lounge_EventScript_NormaDeclineTrade
# 59 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	special ChoosePartyMon
# 60 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	waitstate
# 61 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 62 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, CinnabarIsland_PokemonLab_Lounge_EventScript_NormaDeclineTrade
# 63 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 64 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 65 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 66 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, CinnabarIsland_PokemonLab_Lounge_EventScript_NormaNotRequestedMon
# 67 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 68 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 69 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	special CreateInGameTradePokemon
# 70 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	special DoInGameTradeScene
# 71 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	waitstate
# 72 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_ThanksYoureAPal
# 73 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	setflag FLAG_DID_TANGENY_TRADE
# 74 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
# 75 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 76 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 77 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_NormaDeclineTrade::
# 78 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_ThatsTooBad
# 79 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
# 80 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 81 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 82 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_NormaNotRequestedMon::
# 83 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 84 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_ThisIsNoMon
# 85 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
# 86 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 87 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 88 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_NormaAlreadyTraded::
# 89 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox Trade_Text_HowIsMyOldMon
# 90 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
# 91 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 92 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 93 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_MoveManiac::
# 94 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	clearflag FLAG_EGG_MOVES_TUTOR
# 95 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 96 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	special QuestLog_CutRecording
# 97 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	lock
# 98 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	faceplayer
# 99 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	clearflag HAS_BIG_MUSHROOM
# 100 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	clearflag HAS_TINY_MUSHROOMS
# 101 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	clearflag HAS_BOTH_MUSHROOMS
# 102 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_set CHECKED_MUSHROOMS, CinnabarIsland_PokemonLab_Lounge_EventScript_CheckPlayerHasMushrooms
# 103 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_TeachMonMoveForMushroom
# 104 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	setflag CHECKED_MUSHROOMS
# 105 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_CheckPlayerHasMushrooms
# 106 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 107 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 108 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_CheckPlayerHasMushrooms::
# 109 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	checkitem ITEM_BIG_MUSHROOM
# 110 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, CinnabarIsland_PokemonLab_Lounge_EventScript_SetHasBigMushroom
# 111 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	checkitem ITEM_TINY_MUSHROOM, 2
# 112 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, CinnabarIsland_PokemonLab_Lounge_EventScript_SetHasTinyMushrooms
# 113 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, CinnabarIsland_PokemonLab_Lounge_EventScript_CheckAlsoHasTinyMushrooms
# 114 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_set HAS_TINY_MUSHROOMS, CinnabarIsland_PokemonLab_Lounge_EventScript_CheckAlsoHasBigMushroom
# 115 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_EndTutorMove
# 116 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 117 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 118 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_CheckAlsoHasTinyMushrooms::
# 119 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call_if_set HAS_TINY_MUSHROOMS, CinnabarIsland_PokemonLab_Lounge_EventScript_SetHasBothMushrooms
# 120 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_AskTutorMon
# 121 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 122 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 123 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_CheckAlsoHasBigMushroom::
# 124 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call_if_set HAS_BIG_MUSHROOM, CinnabarIsland_PokemonLab_Lounge_EventScript_SetHasBothMushrooms
# 125 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_AskTutorMon
# 126 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 127 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 128 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_AskTutorMon::
# 129 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_WantMeToTeachMove, MSGBOX_YESNO
# 130 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonLab_Lounge_EventScript_EndTutorMove
# 131 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_ChooseMonToTutor
# 132 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 133 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 134 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_ChooseMonToTutor::
# 135 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_TutorWhichMon
# 136 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	special ChooseMonForMoveRelearner
# 137 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	waitstate
# 138 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, CinnabarIsland_PokemonLab_Lounge_EventScript_EndTutorMove
# 139 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	special IsSelectedMonEgg
# 140 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_PokemonLab_Lounge_EventScript_CantTutorEgg
# 141 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_eq VAR_0x8005, 0, CinnabarIsland_PokemonLab_Lounge_EventScript_NoMoveToTutorMon
# 142 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_ChooseMoveToTeach
# 143 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 144 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 145 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_ChooseMoveToTeach::
# 146 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_TeachWhichMove
# 147 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	special TeachMoveRelearnerMove
# 148 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	waitstate
# 149 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_eq VAR_0x8004, 0, CinnabarIsland_PokemonLab_Lounge_EventScript_ChooseMonToTutor
# 150 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_set HAS_BOTH_MUSHROOMS, CinnabarIsland_PokemonLab_Lounge_EventScript_ChooseMushroom
# 151 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, CinnabarIsland_PokemonLab_Lounge_EventScript_GiveBigMushroom
# 152 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto_if_set HAS_TINY_MUSHROOMS, CinnabarIsland_PokemonLab_Lounge_EventScript_GiveTinyMushrooms
# 153 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 154 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 155 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_GiveBigMushroom::
# 156 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	removeitem ITEM_BIG_MUSHROOM
# 157 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 158 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_HandedOverOneBigMushroom
# 159 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call EventScript_RestorePrevTextColor
# 160 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_EndTutorMove
# 161 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 162 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 163 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_GiveTinyMushrooms::
# 164 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	removeitem ITEM_TINY_MUSHROOM, 2
# 165 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 166 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_HandedOverTwoTinyMushrooms
# 167 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	call EventScript_RestorePrevTextColor
# 168 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_EndTutorMove
# 169 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 170 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 171 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_ChooseMushroom::
# 172 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	message CinnabarIsland_PokemonLab_Lounge_Text_IllNeedMushroomOrTwo
# 173 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	waitmessage
# 174 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	multichoice 0, 0, MULTICHOICE_MUSHROOMS, TRUE
# 175 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	switch VAR_RESULT
# 176 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	case 0, CinnabarIsland_PokemonLab_Lounge_EventScript_GiveTinyMushrooms
# 177 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	case 1, CinnabarIsland_PokemonLab_Lounge_EventScript_GiveBigMushroom
# 178 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 179 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 180 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_NoMoveToTutorMon::
# 181 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_NoMoveICanTeachThatMon
# 182 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_ChooseMonToTutor
# 183 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 184 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 185 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_CantTutorEgg::
# 186 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_CantTeachAnEgg
# 187 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	goto CinnabarIsland_PokemonLab_Lounge_EventScript_ChooseMonToTutor
# 188 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 189 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 190 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_EndTutorMove::
# 191 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	msgbox CinnabarIsland_PokemonLab_Lounge_Text_NeedMushroomOrTwoToLearnMove
# 192 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	release
# 193 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	end
# 194 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 195 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_SetHasBigMushroom::
# 196 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	setflag HAS_BIG_MUSHROOM
# 197 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	return
# 198 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 199 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_SetHasTinyMushrooms::
# 200 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	setflag HAS_TINY_MUSHROOMS
# 201 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	return
# 202 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"

# 203 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
CinnabarIsland_PokemonLab_Lounge_EventScript_SetHasBothMushrooms::
# 204 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	setflag HAS_BOTH_MUSHROOMS
# 205 "data/maps/CinnabarIsland_PokemonLab_Lounge/scripts.pory"
	return
