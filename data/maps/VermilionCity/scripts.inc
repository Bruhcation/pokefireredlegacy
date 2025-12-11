# 1 "data/maps/VermilionCity/scripts.pory"

# 2 "data/maps/VermilionCity/scripts.pory"
.equ LOCALID_FERRY_SAILOR, 6
# 3 "data/maps/VermilionCity/scripts.pory"

# 4 "data/maps/VermilionCity/scripts.pory"
VermilionCity_MapScripts::
# 5 "data/maps/VermilionCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_OnTransition
# 6 "data/maps/VermilionCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VermilionCity_OnFrame
# 7 "data/maps/VermilionCity/scripts.pory"
	.byte 0
# 8 "data/maps/VermilionCity/scripts.pory"

# 9 "data/maps/VermilionCity/scripts.pory"
VermilionCity_OnFrame::
# 10 "data/maps/VermilionCity/scripts.pory"
	map_script_2 VAR_MAP_SCENE_VERMILION_CITY, 2, VermilionCity_EventScript_ExitSSAnne
# 11 "data/maps/VermilionCity/scripts.pory"
	.2byte 0
# 12 "data/maps/VermilionCity/scripts.pory"

# 13 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_ExitSSAnne::
# 14 "data/maps/VermilionCity/scripts.pory"
	lockall
# 15 "data/maps/VermilionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Movement_ExitSSAnne
# 16 "data/maps/VermilionCity/scripts.pory"
	waitmovement 0
# 17 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_MAP_SCENE_VERMILION_CITY, 3
# 18 "data/maps/VermilionCity/scripts.pory"
	releaseall
# 19 "data/maps/VermilionCity/scripts.pory"
	end
# 20 "data/maps/VermilionCity/scripts.pory"

# 21 "data/maps/VermilionCity/scripts.pory"
VermilionCity_Movement_ExitSSAnne::
# 22 "data/maps/VermilionCity/scripts.pory"
	walk_up
# 23 "data/maps/VermilionCity/scripts.pory"
	walk_up
# 24 "data/maps/VermilionCity/scripts.pory"
	step_end
# 25 "data/maps/VermilionCity/scripts.pory"

# 26 "data/maps/VermilionCity/scripts.pory"
VermilionCity_OnTransition::
# 27 "data/maps/VermilionCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VERMILION_CITY
# 28 "data/maps/VermilionCity/scripts.pory"
	call_if_set FLAG_TALKED_TO_OAKS_AIDE_IN_VERMILION, VermilionCity_EventScript_HideOaksAide
# 29 "data/maps/VermilionCity/scripts.pory"
	end
# 30 "data/maps/VermilionCity/scripts.pory"

# 31 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_HideOaksAide::
# 32 "data/maps/VermilionCity/scripts.pory"
	setflag FLAG_HIDE_VERMILION_CITY_OAKS_AIDE
# 33 "data/maps/VermilionCity/scripts.pory"
	return
# 34 "data/maps/VermilionCity/scripts.pory"

# 35 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_Woman::
# 36 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_GrimerMultipliesInSludge, MSGBOX_NPC
# 37 "data/maps/VermilionCity/scripts.pory"
	end
# 38 "data/maps/VermilionCity/scripts.pory"

# 39 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_Scientist::
# 40 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_Scientist, MSGBOX_NPC
# 41 "data/maps/VermilionCity/scripts.pory"
	end
# 42 "data/maps/VermilionCity/scripts.pory"

# 43 "data/maps/VermilionCity/scripts.pory"
VermilionCity_Text_Scientist::
# 44 "data/maps/VermilionCity/scripts.pory"
	.string "Some POKéMON from the\n"
# 45 "data/maps/VermilionCity/scripts.pory"
	.string "neighboring Region followed\l"
# 46 "data/maps/VermilionCity/scripts.pory"
	.string "the SS ANNE to VERMILION.\p"
# 47 "data/maps/VermilionCity/scripts.pory"
	.string "Although,\n"
# 48 "data/maps/VermilionCity/scripts.pory"
	.string "we likely won't reach them\l"
# 49 "data/maps/VermilionCity/scripts.pory"
	.string "before the ship departs and\l"
# 50 "data/maps/VermilionCity/scripts.pory"
	.string "the pier closes.$"
# 51 "data/maps/VermilionCity/scripts.pory"

# 52 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_OldMan1::
# 53 "data/maps/VermilionCity/scripts.pory"
	lock
# 54 "data/maps/VermilionCity/scripts.pory"
	faceplayer
# 55 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VERMILION_CITY, 3, VermilionCity_EventScript_OldMan1SSAnneLeft
# 56 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_DidYouSeeSSAnneInHarbor
# 57 "data/maps/VermilionCity/scripts.pory"
	release
# 58 "data/maps/VermilionCity/scripts.pory"
	end
# 59 "data/maps/VermilionCity/scripts.pory"

# 60 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_OldMan1SSAnneLeft::
# 61 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_SSAnneHasDepartedForYear
# 62 "data/maps/VermilionCity/scripts.pory"
	release
# 63 "data/maps/VermilionCity/scripts.pory"
	end
# 64 "data/maps/VermilionCity/scripts.pory"

# 65 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_FerrySailor::
# 66 "data/maps/VermilionCity/scripts.pory"
	lock
# 67 "data/maps/VermilionCity/scripts.pory"
	faceplayer
# 68 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VERMILION_CITY, 3, VermilionCity_EventScript_CheckSeagallopPresent
# 69 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_WelcomeToTheSSAnne
# 70 "data/maps/VermilionCity/scripts.pory"
	release
# 71 "data/maps/VermilionCity/scripts.pory"
	end
# 72 "data/maps/VermilionCity/scripts.pory"

# 73 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CheckHasMysticTicket::
# 74 "data/maps/VermilionCity/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_NAVEL_ROCK, EventScript_SetResultFalse
# 75 "data/maps/VermilionCity/scripts.pory"
	checkitem ITEM_MYSTIC_TICKET
# 76 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SetResultFalse
# 77 "data/maps/VermilionCity/scripts.pory"
	goto EventScript_SetResultTrue
# 78 "data/maps/VermilionCity/scripts.pory"
	end
# 79 "data/maps/VermilionCity/scripts.pory"

# 80 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CheckHasAuroraTicket::
# 81 "data/maps/VermilionCity/scripts.pory"
	goto_if_unset FLAG_ENABLE_SHIP_BIRTH_ISLAND, EventScript_SetResultFalse
# 82 "data/maps/VermilionCity/scripts.pory"
	checkitem ITEM_AURORA_TICKET
# 83 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_SetResultFalse
# 84 "data/maps/VermilionCity/scripts.pory"
	goto EventScript_SetResultTrue
# 85 "data/maps/VermilionCity/scripts.pory"
	end
# 86 "data/maps/VermilionCity/scripts.pory"

# 87 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CheckSeagallopPresent::
# 88 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 89 "data/maps/VermilionCity/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, VermilionCity_EventScript_ChooseSeagallopDestRainbowPass
# 90 "data/maps/VermilionCity/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1, VermilionCity_EventScript_ChooseSeagallopDestTriPass
# 91 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_TheShipSetSail
# 92 "data/maps/VermilionCity/scripts.pory"
	release
# 93 "data/maps/VermilionCity/scripts.pory"
	end
# 94 "data/maps/VermilionCity/scripts.pory"

# 95 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_ChooseSeagallopDestRainbowPass::
# 96 "data/maps/VermilionCity/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 97 "data/maps/VermilionCity/scripts.pory"
	special QuestLog_CutRecording
# 98 "data/maps/VermilionCity/scripts.pory"
	call VermilionCity_EventScript_CheckHasMysticTicket
# 99 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VermilionCity_EventScript_HasMysticTicket
# 100 "data/maps/VermilionCity/scripts.pory"
	call VermilionCity_EventScript_CheckHasAuroraTicket
# 101 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VermilionCity_EventScript_HasAuroraTicket
# 102 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 103 "data/maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_BoardSeagallopRainbowPass
# 104 "data/maps/VermilionCity/scripts.pory"
	waitmessage
# 105 "data/maps/VermilionCity/scripts.pory"
	goto EventScript_SeviiDestinationsPage1
# 106 "data/maps/VermilionCity/scripts.pory"
	end
# 107 "data/maps/VermilionCity/scripts.pory"

# 108 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_HasMysticTicket::
# 109 "data/maps/VermilionCity/scripts.pory"
	call VermilionCity_EventScript_CheckHasAuroraTicket
# 110 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VermilionCity_EventScript_HasMysticAndAuroraTickets
# 111 "data/maps/VermilionCity/scripts.pory"
	call_if_unset FLAG_SHOWN_MYSTIC_TICKET, VermilionCity_EventScript_ShowMysticTicket
# 112 "data/maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_BoardSeagallopFerry
# 113 "data/maps/VermilionCity/scripts.pory"
	waitmessage
# 114 "data/maps/VermilionCity/scripts.pory"
	multichoice 17, 6, MULTICHOICE_SEVII_NAVEL, FALSE
# 115 "data/maps/VermilionCity/scripts.pory"
	switch VAR_RESULT
# 116 "data/maps/VermilionCity/scripts.pory"
	case 0, EventScript_SeviiDestinationsPage1
# 117 "data/maps/VermilionCity/scripts.pory"
	case 1, EventScript_SailToNavelRock
# 118 "data/maps/VermilionCity/scripts.pory"
	case 2, EventScript_CancelSail
# 119 "data/maps/VermilionCity/scripts.pory"
	case 127, EventScript_CancelSail
# 120 "data/maps/VermilionCity/scripts.pory"
	end
# 121 "data/maps/VermilionCity/scripts.pory"

# 122 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_ShowMysticTicket::
# 123 "data/maps/VermilionCity/scripts.pory"
	setflag FLAG_SHOWN_MYSTIC_TICKET
# 124 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_OhMysticTicketTakeYouToNavelRock
# 125 "data/maps/VermilionCity/scripts.pory"
	return
# 126 "data/maps/VermilionCity/scripts.pory"

# 127 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_HasAuroraTicket::
# 128 "data/maps/VermilionCity/scripts.pory"
	call_if_unset FLAG_SHOWN_AURORA_TICKET, VermilionCity_EventScript_ShowAuroraTicket
# 129 "data/maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_BoardSeagallopFerry
# 130 "data/maps/VermilionCity/scripts.pory"
	waitmessage
# 131 "data/maps/VermilionCity/scripts.pory"
	multichoice 13, 6, MULTICHOICE_SEVII_BIRTH, FALSE
# 132 "data/maps/VermilionCity/scripts.pory"
	switch VAR_RESULT
# 133 "data/maps/VermilionCity/scripts.pory"
	case 0, EventScript_SeviiDestinationsPage1
# 134 "data/maps/VermilionCity/scripts.pory"
	case 1, EventScript_SailToBirthIsland
# 135 "data/maps/VermilionCity/scripts.pory"
	case 2, EventScript_CancelSail
# 136 "data/maps/VermilionCity/scripts.pory"
	case 127, EventScript_CancelSail
# 137 "data/maps/VermilionCity/scripts.pory"
	end
# 138 "data/maps/VermilionCity/scripts.pory"

# 139 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_ShowAuroraTicket::
# 140 "data/maps/VermilionCity/scripts.pory"
	setflag FLAG_SHOWN_AURORA_TICKET
# 141 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_OhAuroraTicketTakeYouToBirthIsland
# 142 "data/maps/VermilionCity/scripts.pory"
	return
# 143 "data/maps/VermilionCity/scripts.pory"

# 144 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_HasMysticAndAuroraTickets::
# 145 "data/maps/VermilionCity/scripts.pory"
	call_if_unset FLAG_SHOWN_MYSTIC_TICKET, VermilionCity_EventScript_ShowMysticTicket
# 146 "data/maps/VermilionCity/scripts.pory"
	call_if_unset FLAG_SHOWN_AURORA_TICKET, VermilionCity_EventScript_ShowAuroraTicket
# 147 "data/maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_BoardSeagallopFerry
# 148 "data/maps/VermilionCity/scripts.pory"
	waitmessage
# 149 "data/maps/VermilionCity/scripts.pory"
	multichoice 13, 5, MULTICHOICE_SEVII_NAVEL_BIRTH, FALSE
# 150 "data/maps/VermilionCity/scripts.pory"
	switch VAR_RESULT
# 151 "data/maps/VermilionCity/scripts.pory"
	case 0, EventScript_SeviiDestinationsPage1
# 152 "data/maps/VermilionCity/scripts.pory"
	case 1, EventScript_SailToNavelRock
# 153 "data/maps/VermilionCity/scripts.pory"
	case 2, EventScript_SailToBirthIsland
# 154 "data/maps/VermilionCity/scripts.pory"
	case 3, EventScript_CancelSail
# 155 "data/maps/VermilionCity/scripts.pory"
	case 127, EventScript_CancelSail
# 156 "data/maps/VermilionCity/scripts.pory"
	end
# 157 "data/maps/VermilionCity/scripts.pory"

# 158 "data/maps/VermilionCity/scripts.pory"
EventScript_SailToNavelRock::
# 159 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_Seagallop10Departing
# 160 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 161 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_NAVEL_ROCK
# 162 "data/maps/VermilionCity/scripts.pory"
	goto EventScript_SetSail
# 163 "data/maps/VermilionCity/scripts.pory"
	end
# 164 "data/maps/VermilionCity/scripts.pory"

# 165 "data/maps/VermilionCity/scripts.pory"
EventScript_SailToBirthIsland::
# 166 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_Seagallop12Departing
# 167 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 168 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_BIRTH_ISLAND
# 169 "data/maps/VermilionCity/scripts.pory"
	goto EventScript_SetSail
# 170 "data/maps/VermilionCity/scripts.pory"
	end
# 171 "data/maps/VermilionCity/scripts.pory"

# 172 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_ChooseSeagallopDestTriPass::
# 173 "data/maps/VermilionCity/scripts.pory"
	message VermilionCity_Text_BoardSeagallopTriPass
# 174 "data/maps/VermilionCity/scripts.pory"
	waitmessage
# 175 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 176 "data/maps/VermilionCity/scripts.pory"
	multichoice 19, 5, MULTICHOICE_SEAGALLOP_123, FALSE
# 177 "data/maps/VermilionCity/scripts.pory"
	switch VAR_RESULT
# 178 "data/maps/VermilionCity/scripts.pory"
	case 0, EventScript_SailToOneIsland2
# 179 "data/maps/VermilionCity/scripts.pory"
	case 1, EventScript_SailToTwoIsland2
# 180 "data/maps/VermilionCity/scripts.pory"
	case 2, EventScript_SailToThreeIsland2
# 181 "data/maps/VermilionCity/scripts.pory"
	case 3, EventScript_CancelSail
# 182 "data/maps/VermilionCity/scripts.pory"
	case 127, EventScript_CancelSail
# 183 "data/maps/VermilionCity/scripts.pory"
	end
# 184 "data/maps/VermilionCity/scripts.pory"

# 185 "data/maps/VermilionCity/scripts.pory"
@ Unreachable
# 186 "data/maps/VermilionCity/scripts.pory"
Vermilion_EventScript_Unused::
# 187 "data/maps/VermilionCity/scripts.pory"
	release
# 188 "data/maps/VermilionCity/scripts.pory"
	end
# 189 "data/maps/VermilionCity/scripts.pory"

# 190 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CheckTicketLeft::
# 191 "data/maps/VermilionCity/scripts.pory"
	lockall
# 192 "data/maps/VermilionCity/scripts.pory"
	goto VermilionCity_EventScript_CheckTicket
# 193 "data/maps/VermilionCity/scripts.pory"
	end
# 194 "data/maps/VermilionCity/scripts.pory"

# 195 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CheckTicketRight::
# 196 "data/maps/VermilionCity/scripts.pory"
	lockall
# 197 "data/maps/VermilionCity/scripts.pory"
	goto VermilionCity_EventScript_CheckTicket
# 198 "data/maps/VermilionCity/scripts.pory"
	end
# 199 "data/maps/VermilionCity/scripts.pory"

# 200 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_ExitedTicketCheck::
# 201 "data/maps/VermilionCity/scripts.pory"
	lockall
# 202 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 0
# 203 "data/maps/VermilionCity/scripts.pory"
	releaseall
# 204 "data/maps/VermilionCity/scripts.pory"
	end
# 205 "data/maps/VermilionCity/scripts.pory"

# 206 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CheckTicket::
# 207 "data/maps/VermilionCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 208 "data/maps/VermilionCity/scripts.pory"
	applymovement LOCALID_FERRY_SAILOR, Common_Movement_WalkInPlaceFasterLeft
# 209 "data/maps/VermilionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 210 "data/maps/VermilionCity/scripts.pory"
	waitmovement 0
# 211 "data/maps/VermilionCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VERMILION_CITY, 3, VermilionCity_EventScript_CheckSeagallopPresentTrigger
# 212 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_DoYouHaveATicket
# 213 "data/maps/VermilionCity/scripts.pory"
	goto_if_unset FLAG_GOT_SS_TICKET, VermilionCity_EventScript_DontHaveSSTicket
# 214 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_FlashedSSTicket
# 215 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 1
# 216 "data/maps/VermilionCity/scripts.pory"
	releaseall
# 217 "data/maps/VermilionCity/scripts.pory"
	end
# 218 "data/maps/VermilionCity/scripts.pory"

# 219 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_DontHaveSSTicket::
# 220 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_DontHaveNeededSSTicket
# 221 "data/maps/VermilionCity/scripts.pory"
	closemessage
# 222 "data/maps/VermilionCity/scripts.pory"
	goto VermilionCity_EventScript_WalkUpPier
# 223 "data/maps/VermilionCity/scripts.pory"
	end
# 224 "data/maps/VermilionCity/scripts.pory"

# 225 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CheckSeagallopPresentTrigger::
# 226 "data/maps/VermilionCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 227 "data/maps/VermilionCity/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, VermilionCity_EventScript_ChooseSeagallopDestRainbowPass
# 228 "data/maps/VermilionCity/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1, VermilionCity_EventScript_ChooseSeagallopDestTriPass
# 229 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_TheShipSetSail
# 230 "data/maps/VermilionCity/scripts.pory"
	closemessage
# 231 "data/maps/VermilionCity/scripts.pory"
	goto VermilionCity_EventScript_WalkUpPier
# 232 "data/maps/VermilionCity/scripts.pory"
	end
# 233 "data/maps/VermilionCity/scripts.pory"

# 234 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_Sailor::
# 235 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_SSAnneVisitsOnceAYear, MSGBOX_NPC
# 236 "data/maps/VermilionCity/scripts.pory"
	end
# 237 "data/maps/VermilionCity/scripts.pory"

# 238 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_OaksAide::
# 239 "data/maps/VermilionCity/scripts.pory"
	lock
# 240 "data/maps/VermilionCity/scripts.pory"
	faceplayer
# 241 "data/maps/VermilionCity/scripts.pory"
	setflag FLAG_TALKED_TO_OAKS_AIDE_IN_VERMILION
# 242 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_Route2AideHasPackageForYou
# 243 "data/maps/VermilionCity/scripts.pory"
	release
# 244 "data/maps/VermilionCity/scripts.pory"
	end
# 245 "data/maps/VermilionCity/scripts.pory"

# 246 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_OldMan2::
# 247 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_BuildingOnThisLand, MSGBOX_NPC
# 248 "data/maps/VermilionCity/scripts.pory"
	end
# 249 "data/maps/VermilionCity/scripts.pory"

# 250 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_GymChallenger::
# 251 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_Challenger, MSGBOX_NPC
# 252 "data/maps/VermilionCity/scripts.pory"
	end
# 253 "data/maps/VermilionCity/scripts.pory"

# 254 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_Machop::
# 255 "data/maps/VermilionCity/scripts.pory"
	lock
# 256 "data/maps/VermilionCity/scripts.pory"
	faceplayer
# 257 "data/maps/VermilionCity/scripts.pory"
	waitse
# 258 "data/maps/VermilionCity/scripts.pory"
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
# 259 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_Machop
# 260 "data/maps/VermilionCity/scripts.pory"
	waitmoncry
# 261 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_MachopStompingLandFlat
# 262 "data/maps/VermilionCity/scripts.pory"
	release
# 263 "data/maps/VermilionCity/scripts.pory"
	end
# 264 "data/maps/VermilionCity/scripts.pory"

# 265 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_CitySign::
# 266 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_CitySign, MSGBOX_SIGN
# 267 "data/maps/VermilionCity/scripts.pory"
	end
# 268 "data/maps/VermilionCity/scripts.pory"

# 269 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_SnorlaxNotice::
# 270 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_SnorlaxBlockingRoute12, MSGBOX_SIGN
# 271 "data/maps/VermilionCity/scripts.pory"
	end
# 272 "data/maps/VermilionCity/scripts.pory"

# 273 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_PokemonFanClubSign::
# 274 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 275 "data/maps/VermilionCity/scripts.pory"
	end
# 276 "data/maps/VermilionCity/scripts.pory"

# 277 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_GymSign::
# 278 "data/maps/VermilionCity/scripts.pory"
	lockall
# 279 "data/maps/VermilionCity/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 0
# 280 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_GymSign
# 281 "data/maps/VermilionCity/scripts.pory"
	releaseall
# 282 "data/maps/VermilionCity/scripts.pory"
	end
# 283 "data/maps/VermilionCity/scripts.pory"

# 284 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_HarborSign::
# 285 "data/maps/VermilionCity/scripts.pory"
	msgbox VermilionCity_Text_VermilionHarbor, MSGBOX_SIGN
# 286 "data/maps/VermilionCity/scripts.pory"
	end
# 287 "data/maps/VermilionCity/scripts.pory"

# 288 "data/maps/VermilionCity/scripts.pory"
VermilionCity_EventScript_Psyduck::
# 289 "data/maps/VermilionCity/scripts.pory"
	lock
# 290 "data/maps/VermilionCity/scripts.pory"
	faceplayer
# 291 "data/maps/VermilionCity/scripts.pory"
	waitse
# 292 "data/maps/VermilionCity/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 293 "data/maps/VermilionCity/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Psyduck
# 294 "data/maps/VermilionCity/scripts.pory"
	waitmoncry
# 295 "data/maps/VermilionCity/scripts.pory"
	release
# 296 "data/maps/VermilionCity/scripts.pory"
	end
