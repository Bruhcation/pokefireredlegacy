# 1 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 2 "data/maps/PalletTown_RivalsHouse/scripts.pory"
.equ LOCALID_DAISY,    1
# 3 "data/maps/PalletTown_RivalsHouse/scripts.pory"
.equ LOCALID_TOWN_MAP, 2
# 4 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 5 "data/maps/PalletTown_RivalsHouse/scripts.pory"
.equ RECEIVED_TOWN_MAP, VAR_TEMP_1
# 6 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 7 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_MapScripts::
# 8 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_RivalsHouse_OnTransition
# 9 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.byte 0
# 10 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 11 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_OnTransition::
# 12 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_unset FLAG_SHOW_RIVAL_STARTER, PalletTown_RivalsHouse_HideMon
# 13 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	call_if_lt VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_MoveDaisyToTable
# 14 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	call_if_ge VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_AlreadyReceivedTownMap
# 15 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 16 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 17 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_HideMon::
# 18 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	setflag FLAG_CHARIZARD
# 19 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	setflag FLAG_BLASTOISE
# 20 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	setflag FLAG_VENUSAUR
# 21 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	return
# 22 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 23 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_MoveDaisyToTable::
# 24 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	setobjectmovementtype LOCALID_DAISY, MOVEMENT_TYPE_FACE_RIGHT
# 25 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	setobjectxyperm LOCALID_DAISY, 5, 4
# 26 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	return
# 27 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 28 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_AlreadyReceivedTownMap::
# 29 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	setvar RECEIVED_TOWN_MAP, TRUE
# 30 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	return
# 31 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 32 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_Daisy::
# 33 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	lock
# 34 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	faceplayer
# 35 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	famechecker FAMECHECKER_DAISY, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 36 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_set FLAG_GOT_HM01, PalletTown_RivalsHouse_EventScript_GroomMon
# 37 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq RECEIVED_TOWN_MAP, TRUE, PalletTown_RivalsHouse_EventScript_PleaseGiveMonsRest
# 38 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_ExplainTownMap
# 39 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1, PalletTown_RivalsHouse_EventScript_GiveTownMap
# 40 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_RivalsHouse_EventScript_HeardBattledRival
# 41 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_HiBrothersAtLab
# 42 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	closemessage
# 43 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_FaceOriginalDirection
# 44 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitmovement 0
# 45 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 46 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 47 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 48 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_HeardBattledRival::
# 49 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_HeardYouBattledRival
# 50 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 51 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 52 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 53 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_GroomMon::
# 54 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 55 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	special QuestLog_CutRecording
# 56 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_lt VAR_MASSAGE_COOLDOWN_STEP_COUNTER, 250, PalletTown_RivalsHouse_EventScript_RateMonFriendship
# 57 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LikeMeToGroomMon, MSGBOX_YESNO
# 58 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_RivalsHouse_EventScript_DeclineGrooming
# 59 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_GroomWhichOne
# 60 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	special ChoosePartyMon
# 61 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitstate
# 62 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	lock
# 63 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	faceplayer
# 64 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, PalletTown_RivalsHouse_EventScript_DeclineGrooming
# 65 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	specialvar VAR_RESULT, GetPartyMonSpecies
# 66 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, PalletTown_RivalsHouse_EventScript_CantGroomEgg
# 67 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LookingNiceInNoTime
# 68 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	closemessage
# 69 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 70 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	playfanfare MUS_HEAL
# 71 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitfanfare
# 72 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	setvar VAR_0x8006, FAMECHECKER_DAISY
# 73 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	special CheckFilledFameCheckerFor0x8006
# 74 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PalletTown_RivalsHouse_EventScript_GroomMonUltra
# 75 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	special DaisyMassageServices
# 76 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 77 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	special BufferMonNickname
# 78 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ThereYouGoAllDone
# 79 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1, PalletTown_RivalsHouse_EventScript_ForgotTownMap
# 80 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 81 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 82 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 83 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_GroomMonUltra::
# 84 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	special DaisyMassageServicesMax
# 85 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 86 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	special BufferMonNickname
# 87 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ThereYouGoAllDoneUltra
# 88 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1, PalletTown_RivalsHouse_EventScript_ForgotTownMap
# 89 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 90 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 91 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 92 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_CantGroomEgg::
# 93 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_CantGroomAnEgg
# 94 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1, PalletTown_RivalsHouse_EventScript_ForgotTownMap
# 95 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 96 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 97 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 98 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_DeclineGrooming::
# 99 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontNeedAnyGrooming
# 100 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1, PalletTown_RivalsHouse_EventScript_ForgotTownMap
# 101 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 102 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 103 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 104 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_RateMonFriendship::
# 105 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_MayISeeFirstMon
# 106 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendship
# 107 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	switch VAR_RESULT
# 108 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	case 0, PalletTown_RivalsHouse_EventScript_MonFriendshipLowest
# 109 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	case 1, PalletTown_RivalsHouse_EventScript_MonFriendshipLower
# 110 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	case 2, PalletTown_RivalsHouse_EventScript_MonFriendshipLow
# 111 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	case 3, PalletTown_RivalsHouse_EventScript_MonFriendshipMid
# 112 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	case 4, PalletTown_RivalsHouse_EventScript_MonFriendshipHigh
# 113 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	case 5, PalletTown_RivalsHouse_EventScript_MonFriendshipHigher
# 114 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	case 6, PalletTown_RivalsHouse_EventScript_MonFriendshipHighest
# 115 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 116 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 117 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipLowest::
# 118 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_WhyWouldMonHateYouSoMuch
# 119 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1, PalletTown_RivalsHouse_EventScript_ForgotTownMap
# 120 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 121 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 122 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 123 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipLower::
# 124 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontLikeWayItGlaresAtYou
# 125 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1, PalletTown_RivalsHouse_EventScript_ForgotTownMap
# 126 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 127 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 128 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 129 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipLow::
# 130 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_NotFamiliarWithYouYet
# 131 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1, PalletTown_RivalsHouse_EventScript_ForgotTownMap
# 132 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 133 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 134 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 135 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipMid::
# 136 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsWarmingUpToYou
# 137 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1, PalletTown_RivalsHouse_EventScript_ForgotTownMap
# 138 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 139 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 140 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 141 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipHigh::
# 142 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsQuiteFriendly
# 143 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1, PalletTown_RivalsHouse_EventScript_ForgotTownMap
# 144 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 145 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 146 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 147 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipHigher::
# 148 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItLooksVeryHappy
# 149 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1, PalletTown_RivalsHouse_EventScript_ForgotTownMap
# 150 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 151 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 152 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 153 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_MonFriendshipHighest::
# 154 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_CouldntLoveYouMore
# 155 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1, PalletTown_RivalsHouse_EventScript_ForgotTownMap
# 156 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 157 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 158 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 159 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_PleaseGiveMonsRest::
# 160 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_PleaseGiveMonsRest
# 161 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 162 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 163 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 164 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_ForgotTownMap::
# 165 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ForgotTownMap
# 166 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	closemessage
# 167 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	checkitemspace ITEM_TOWN_MAP
# 168 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_RivalsHouse_EventScript_NoRoomForTownMap
# 169 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_WalkInPlaceFasterRight
# 170 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitmovement 0
# 171 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	removeobject LOCALID_TOWN_MAP
# 172 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 173 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	delay 15
# 174 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_FacePlayer
# 175 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitmovement 0
# 176 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	delay 12
# 177 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	giveitem_msg PalletTown_RivalsHouse_Text_ReceivedTownMapFromDaisy, ITEM_TOWN_MAP, 1, MUS_OBTAIN_KEY_ITEM
# 178 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, PalletTown_RivalsHouse_EventScript_ExplainTownMap
# 179 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 180 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 181 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 182 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_GiveTownMap::
# 183 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ErrandForGrandpaThisWillHelp
# 184 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	closemessage
# 185 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	checkitemspace ITEM_TOWN_MAP
# 186 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_RivalsHouse_EventScript_NoRoomForTownMap
# 187 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_WalkInPlaceFasterRight
# 188 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitmovement 0
# 189 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	removeobject LOCALID_TOWN_MAP
# 190 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 191 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	delay 15
# 192 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	applymovement LOCALID_DAISY, Common_Movement_FacePlayer
# 193 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitmovement 0
# 194 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	delay 12
# 195 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	giveitem_msg PalletTown_RivalsHouse_Text_ReceivedTownMapFromDaisy, ITEM_TOWN_MAP, 1, MUS_OBTAIN_KEY_ITEM
# 196 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 197 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 198 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 199 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_NoRoomForTownMap::
# 200 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_DontHaveSpaceForThis
# 201 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 202 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 203 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 204 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_ExplainTownMap::
# 205 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ExplainTownMap
# 206 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 207 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 208 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 209 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_TownMap::
# 210 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ItsBigMapOfKanto, MSGBOX_NPC
# 211 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 212 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 213 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_Bookshelf::
# 214 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_ShelvesCrammedFullOfBooks, MSGBOX_SIGN
# 215 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 216 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 217 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_Picture::
# 218 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_LovelyAndSweetClefairy, MSGBOX_SIGN
# 219 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 220 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 221 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_Charizard::
# 222 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	lock
# 223 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	faceplayer
# 224 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitse
# 225 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	playmoncry SPECIES_CHARIZARD, CRY_MODE_NORMAL
# 226 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_Charizard, MSGBOX_NPC
# 227 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitmoncry
# 228 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 229 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 230 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 231 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_Blastoise::
# 232 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	lock
# 233 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	faceplayer
# 234 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitse
# 235 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	playmoncry SPECIES_BLASTOISE, CRY_MODE_NORMAL
# 236 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_Blastoise, MSGBOX_NPC
# 237 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitmoncry
# 238 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 239 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 240 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 241 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_EventScript_Venusaur::
# 242 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	lock
# 243 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	faceplayer
# 244 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitse
# 245 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	playmoncry SPECIES_VENUSAUR, CRY_MODE_NORMAL
# 246 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	msgbox PalletTown_RivalsHouse_Text_Venusaur, MSGBOX_NPC
# 247 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	waitmoncry
# 248 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	release
# 249 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	end
# 250 "data/maps/PalletTown_RivalsHouse/scripts.pory"

# 251 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_Text_Charizard::
# 252 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "Zard!$"
# 253 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_Text_Blastoise::
# 254 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "Blastoise!$"
# 255 "data/maps/PalletTown_RivalsHouse/scripts.pory"
PalletTown_RivalsHouse_Text_Venusaur::
# 256 "data/maps/PalletTown_RivalsHouse/scripts.pory"
	.string "Saur!$"
