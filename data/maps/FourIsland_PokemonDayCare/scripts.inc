# 1 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 2 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
.set LOCALID_DAYCARE_WOMAN, 1
# 3 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 4 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_MapScripts::
# 5 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FourIsland_PokemonDayCare_OnLoad
# 6 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	.byte 0
# 7 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 8 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_OnLoad::
# 9 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special CheckBeatJohto
# 10 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FourIsland_PokemonDayCare_EventScript_ShowClerk
# 11 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 12 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 13 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_ShowClerk::
# 14 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	clearflag FLAG_SHOPJOHTO
# 15 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 16 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 17 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_DaycareWoman::
# 18 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 19 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	lock
# 20 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	faceplayer
# 21 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 22 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_EGG_WAITING, FourIsland_PokemonDayCare_EggWaiting
# 23 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_OneMonInDaycare
# 24 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_TWO_MONS, FourIsland_PokemonDayCare_TwoMonsInDaycare
# 25 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WouldYouLikeUsToRaiseMon, MSGBOX_YESNO
# 26 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_GiveMonToRaise
# 27 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_FineThenComeAgain
# 28 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 29 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 30 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 31 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_GiveMonToRaise::
# 32 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, CountPartyNonEggMons
# 33 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, 1, FourIsland_PokemonDayCare_OnlyOneMonInParty
# 34 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WhichMonShouldWeRaise
# 35 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	fadescreen FADE_TO_BLACK
# 36 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special ChooseSendDaycareMon
# 37 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitstate
# 38 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, FourIsland_PokemonDayCare_ComeAgain
# 39 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
# 40 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, 0, FourIsland_PokemonDayCare_OnlyOneAliveMonInParty
# 41 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
# 42 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitse
# 43 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	playmoncry VAR_0x8005, CRY_MODE_NORMAL
# 44 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WellRaiseYourMon
# 45 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitmoncry
# 46 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special StoreSelectedPokemonInDaycare
# 47 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	incrementgamestat GAME_STAT_USED_DAYCARE
# 48 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 49 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_CanRaiseOneMore
# 50 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 51 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 52 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 53 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_ComeAgain::
# 54 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_ComeAgain
# 55 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 56 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 57 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 58 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_CanRaiseOneMore::
# 59 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 60 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_GiveMonToRaise
# 61 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 62 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 63 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 64 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_OnlyOneMonInParty::
# 65 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_YouHaveJustOneMon
# 66 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 67 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 68 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 69 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_OnlyOneAliveMonInParty::
# 70 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WhatWillYouBattleWith
# 71 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 72 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 73 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 74 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EggWaiting::
# 75 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_HusbandWasLookingForYou
# 76 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 77 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 78 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 79 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_MonHasGrownXLevels::
# 80 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_YourMonHasGrownXLevels
# 81 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	return
# 82 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 83 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_DisplayLevelsGained::
# 84 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, GetNumLevelsGainedFromDaycare
# 85 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call_if_ne VAR_RESULT, 0, FourIsland_PokemonDayCare_MonHasGrownXLevels
# 86 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	return
# 87 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 88 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_OneMonInDaycare::
# 89 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_GoodToSeeYou
# 90 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	setvar VAR_0x8004, 0
# 91 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 92 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_WeCanRaiseOneMore, MSGBOX_YESNO
# 93 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_GiveMonToRaise
# 94 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 95 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_TryRetrieveMon
# 96 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 97 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 98 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 99 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_TryRetrieveMon::
# 100 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 101 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FourIsland_PokemonDayCare_NoRoomInParty
# 102 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 103 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	setvar VAR_0x8004, 0
# 104 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_CostPrompt
# 105 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special ShowDaycareLevelMenu
# 106 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitstate
# 107 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 108 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_EXITED_LEVEL_MENU, FourIsland_PokemonDayCare_ComeAgain
# 109 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_CostPrompt
# 110 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 111 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 112 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_CostPrompt::
# 113 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special GetDaycareCost
# 114 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_ItWillCostX, MSGBOX_YESNO
# 115 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_CheckEnoughMoney
# 116 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 117 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 118 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 119 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_CheckEnoughMoney::
# 120 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
# 121 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FourIsland_PokemonDayCare_RetrieveMon
# 122 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_NotEnoughMoney
# 123 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 124 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 125 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 126 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_RetrieveMon::
# 127 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	applymovement LOCALID_DAYCARE_WOMAN, FourIsland_PokemonDayCare_Movement_RetrieveMon
# 128 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitmovement 0
# 129 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 130 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special SubtractMoneyFromVar0x8005
# 131 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	playse SE_RS_SHOP
# 132 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_HeresYourMon
# 133 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitse
# 134 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	playmoncry VAR_RESULT, CRY_MODE_NORMAL
# 135 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 136 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_TookBackMon
# 137 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call EventScript_RestorePrevTextColor
# 138 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitmoncry
# 139 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, GetDaycareState
# 140 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, FourIsland_PokemonDayCare_AskRetrieveOtherMon
# 141 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 142 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 143 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 144 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_AskRetrieveOtherMon::
# 145 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_TakeOtherOneBackToo, MSGBOX_YESNO
# 146 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_TryRetrieveMon
# 147 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_ComeAgain
# 148 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 149 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 150 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_NoRoomInParty::
# 151 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_YourPartyIsFull
# 152 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 153 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 154 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 155 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_EggGentleman::
# 156 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 157 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special QuestLog_CutRecording
# 158 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	lock
# 159 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	faceplayer
# 160 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_set FLAG_GOT_SUDO_EGG, FourIsland_PokemonDayCare_EventScript_PostEggComment
# 161 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_SUDO_EGG, FourIsland_PokemonDayCare_EventScript_ReturnForEgg
# 162 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox FourIsland_PokemonDayCare_Text_LetMeTakeLookAtMons
# 163 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_EventScript_LeadMonMaxFriendship
# 164 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 165 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 166 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 167 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_LeadMonMaxFriendship::
# 168 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox FourIsland_PokemonDayCare_Text_TreatMonRightHaveThis
# 169 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_EventScript_TryGiveEgg
# 170 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 171 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 172 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_TryGiveEgg::
# 173 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	getpartysize
# 174 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FourIsland_PokemonDayCare_EventScript_NoRoomForEgg
# 175 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	setflag FLAG_GOT_SUDO_EGG
# 176 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	setflag FLAG_SHINY_CREATION
# 177 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	giveegg SPECIES_SUDOWOODO
# 178 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 179 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 180 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	message FourIsland_PokemonDayCare_Text_ReceivedEggFromMan
# 181 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitfanfare
# 182 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitmessage
# 183 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call EventScript_RestorePrevTextColor
# 184 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_EventScript_PostEggComment
# 185 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 186 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 187 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_PostEggComment::
# 188 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox FourIsland_PokemonDayCare_Text_GladIMetSomeoneLikeYou
# 189 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 190 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 191 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 192 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_NoRoomForEgg::
# 193 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_SUDO_EGG
# 194 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox FourIsland_PokemonDayCare_Text_DontHaveSpaceInYourParty
# 195 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 196 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 197 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 198 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_ReturnForEgg::
# 199 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto FourIsland_PokemonDayCare_EventScript_TryGiveEgg
# 200 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 201 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 202 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Text_LetMeTakeLookAtMons::
# 203 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "Hello there, CHAMP!\p"  
# 204 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "I was just coming here to pick\n"  
# 205 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "up my SUDOWOODO,\l"  
# 206 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "but to my surprise, she's laid\l"  
# 207 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "a whole bunch of EGGS!\p" 
# 208 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "I don't have space for all\n"  
# 209 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "of them, so I want to\l"  
# 210 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "offload some.$"  
# 211 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 212 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Text_HmmISeeIsee::
# 213 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "Ah, hmm…\n"
# 214 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "I see, I see…$"
# 215 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 216 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Text_TreatMonRightHaveThis::
# 217 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "I'm sure the CHAMPION of\n"  
# 218 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "KANTO will have no problem\l"  
# 219 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "raising this EGG!\p"  
# 220 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 221 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Text_ReceivedEggFromMan::
# 222 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "{PLAYER} received an EGG\n"
# 223 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "from the man!$"
# 224 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 225 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Text_DontHaveSpaceInYourParty::
# 226 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "…Unfortunately, you don't have\n"
# 227 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "space for this in your party.\p"
# 228 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "You'd better come back for it\n"
# 229 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "another time.$"
# 230 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 231 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
@ Unused
# 232 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Text_YouveComeBackForTheEgg::
# 233 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "やあ\n"
# 234 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "タマゴを　もらいに\l"
# 235 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "きて　くれたんだね$"
# 236 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 237 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Text_GladIMetSomeoneLikeYou::
# 238 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "I'm glad to give you\n"  
# 239 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "this EGG, CHAMPION.\p"  
# 240 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "Hope you like SUDOWOODO!$"  
# 241 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 242 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Text_CuteMonRemindsMeOfDaisy::
# 243 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "Oh, hello.\n"
# 244 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "That's a cute {STR_VAR_2}.\p"
# 245 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "Seeing it reminds me of a sweet \n"
# 246 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "little girl I met while traveling.\p"
# 247 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "She was gently grooming POKéMON…\n"
# 248 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "She was a little angel.\p"
# 249 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "That little girl's name…\n"
# 250 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
    .string "I think it was DAISY.$"
# 251 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 252 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_Movement_RetrieveMon::
# 253 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 254 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 255 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	face_right
# 256 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 257 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 258 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	face_left
# 259 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 260 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 261 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	face_up
# 262 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	walk_slower_up
# 263 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	set_invisible
# 264 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 265 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 266 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 267 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 268 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	delay_16
# 269 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	face_down
# 270 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	set_visible
# 271 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	walk_slower_down
# 272 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	step_end
# 273 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 274 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
@ Unused. Possibly a commented script, or a typo end added to the above Movement script
# 275 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_UnusedEnd::
# 276 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 277 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 278 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_TwoMonsInDaycare::
# 279 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_GoodToSeeYou
# 280 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	setvar VAR_0x8004, 0
# 281 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 282 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	setvar VAR_0x8004, 1
# 283 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	call FourIsland_PokemonDayCare_DisplayLevelsGained
# 284 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_TakeYourMonBack, MSGBOX_YESNO
# 285 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FourIsland_PokemonDayCare_TryRetrieveMon
# 286 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_ComeAgain
# 287 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 288 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
# 289 "data/maps/FourIsland_PokemonDayCare/scripts.pory"

# 290 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
@ Unused
# 291 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
FourIsland_PokemonDayCare_EventScript_UnusedRetrieveMon::
# 292 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	special ShowDaycareLevelMenu
# 293 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	waitstate
# 294 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	goto_if_eq VAR_RESULT, 2, FourIsland_PokemonDayCare_ComeAgain
# 295 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 296 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	specialvar VAR_RESULT, TakePokemonFromDaycare
# 297 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_HeresYourMon
# 298 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	msgbox DayCare_Text_ComeAgain
# 299 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	release
# 300 "data/maps/FourIsland_PokemonDayCare/scripts.pory"
	end
