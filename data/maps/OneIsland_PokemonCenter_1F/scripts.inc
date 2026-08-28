# 1 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
.equ LOCALID_BILL,  2
# 3 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
.equ LOCALID_CELIO, 3
# 4 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 5 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_MapScripts::
# 6 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_PokemonCenter_1F_OnTransition
# 7 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OneIsland_PokemonCenter_1F_OnLoad
# 8 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OneIsland_PokemonCenter_1F_OnFrame
# 9 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	.byte 0
# 10 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_OnLoad::
# 12 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_ge VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile
# 13 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn
# 14 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 15 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 16 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile::
# 17 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setmetatile 13, 4, METATILE_PokemonCenter_NetworkMachine_Ruby, 1
# 18 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 19 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile::
# 21 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setmetatile 16, 4, METATILE_PokemonCenter_NetworkMachine_Sapphire, 1
# 22 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 23 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn::
# 25 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile
# 26 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setmetatile 14, 4, METATILE_PokemonCenter_NetworkMachine_ScreenLeft_On, 1
# 27 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setmetatile 15, 4, METATILE_PokemonCenter_NetworkMachine_ScreenRight_On, 1
# 28 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 29 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 30 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_OnTransition::
# 31 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_ONE_ISLAND
# 32 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6, OneIsland_PokemonCenter_1F_EventScript_SetCelioQuestDone
# 33 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 0, OneIsland_PokemonCenter_1F_EventScript_SetBillCelioFirstMeetingPos
# 34 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 2, OneIsland_PokemonCenter_1F_EventScript_SetBillCelioReadyToLeavePos
# 35 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 36 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 37 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetCelioQuestDone::
# 38 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 7
# 39 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 40 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 41 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetBillCelioFirstMeetingPos::
# 42 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_BILL, 9, 8
# 43 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_BILL, MOVEMENT_TYPE_FACE_UP
# 44 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_CELIO, 15, 6
# 45 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_CELIO, MOVEMENT_TYPE_FACE_UP
# 46 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 47 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_SetBillCelioReadyToLeavePos::
# 49 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_BILL, 14, 7
# 50 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_BILL, MOVEMENT_TYPE_FACE_LEFT
# 51 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_CELIO, 14, 8
# 52 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setobjectmovementtype LOCALID_CELIO, MOVEMENT_TYPE_FACE_LEFT
# 53 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 54 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 55 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_OnFrame::
# 56 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	map_script_2 VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 0, OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene
# 57 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	.2byte 0
# 58 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 59 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_MeetCelioScene::
# 60 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 61 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 62 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToCelio
# 63 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, OneIsland_PokemonCenter_1F_Movement_BillWalkToCelio
# 64 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 65 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillHeyThereCelio
# 66 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 67 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 68 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 69 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_ExclamationMark
# 70 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 71 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 72 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 73 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_Delay48
# 74 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 75 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioCantBelieveYouCameOut
# 76 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillHowsYourResearchComing
# 77 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterDown
# 78 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 79 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 80 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ThisIsMyBuddyCelio
# 81 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterRight
# 82 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 83 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 84 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 85 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerChamp
# 86 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerNotChamp
# 87 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterDown
# 88 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 89 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioThatsReallyImpressive
# 90 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillBringMeUpToSpeed
# 91 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 92 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 93 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPCsCantLinkWithYours
# 94 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 95 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterUp
# 96 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 97 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillLetMeHelpYou
# 98 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterDown
# 99 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 100 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 101 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 102 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CanYouDeliverThisMeteoritePlayer
# 103 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgreceiveditem OneIsland_PokemonCenter_1F_Text_AcceptedMeteoriteFromBill, ITEM_METEORITE, 1, MUS_OBTAIN_KEY_ITEM
# 104 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	additem ITEM_METEORITE
# 105 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterDown
# 106 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 107 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPleaseTakeThis
# 108 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	giveitem_msg OneIsland_PokemonCenter_1F_Text_ObtainedTriPass, ITEM_TRI_PASS, 1, MUS_OBTAIN_KEY_ITEM
# 109 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetsYouTravelBetweenIslands
# 110 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_ge VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMapPage
# 111 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_lt VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2, OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMap
# 112 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_SEVII_MAP_123
# 113 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillCatchYouLater
# 114 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 115 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterUp
# 116 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 117 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 118 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 119 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_PC_STORAGE_DISABLED
# 120 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_CELEBI
# 121 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 1
# 122 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
# 123 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 124 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 125 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerChamp::
# 126 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsReigningPokemonChamp
# 127 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 128 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 129 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_IntroducePlayerNotChamp::
# 130 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PlayerIsRisingPokemonChamp
# 131 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 132 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 133 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMapPage::
# 134 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 135 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 136 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ReceivedExtraPageForTownMap
# 137 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 138 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 139 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 140 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 141 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 142 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_ReceiveTownMap::
# 143 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_TOWN_MAP
# 144 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 145 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	giveitem_msg OneIsland_PokemonCenter_1F_Text_ReceivedTownMap, ITEM_TOWN_MAP, 1, MUS_OBTAIN_KEY_ITEM
# 146 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 147 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 148 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToCelio::
# 149 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 150 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 151 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 152 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 153 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 154 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 155 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 156 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_up
# 157 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 158 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 159 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_BillWalkToCelio::
# 160 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 161 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 162 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 163 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 164 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 165 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 166 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 167 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 168 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 169 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 170 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
@ Unused
# 171 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_WalkUp:
# 172 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 173 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 174 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 175 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
@ Unused
# 176 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_StepAsideLeft::
# 177 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 178 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 179 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 180 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 181 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Nurse::
# 182 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 183 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 184 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 185 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 186 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 187 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 188 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Bill::
# 189 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 190 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_BillGoTakeStroll
# 191 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_HmmHowAboutLikeThis
# 192 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 193 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 194 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 195 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BillGoTakeStroll::
# 196 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_FacePlayer
# 197 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 198 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_GotPCWorkingStrollAWhileMore
# 199 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 200 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 201 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 202 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Celio::
# 203 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 204 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 205 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 7, OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact
# 206 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6, OneIsland_PokemonCenter_1F_EventScript_CelioJustGivenSapphire
# 207 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_RECOVERED_SAPPHIRE, OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire
# 208 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5, OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass
# 209 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_GOT_RUBY, OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby
# 210 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4, OneIsland_PokemonCenter_1F_EventScript_CelioWaitingForRuby
# 211 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 212 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, OneIsland_PokemonCenter_1F_EventScript_CelioRequestRuby
# 213 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3, OneIsland_PokemonCenter_1F_EventScript_CelioPlayerMissingNationalDex
# 214 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_SorryForBeingPoorHost
# 215 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 216 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FaceOriginalDirection
# 217 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 218 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 219 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 220 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 221 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioGiveBillFact::
# 222 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioHearingRumorsAboutYou
# 223 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	random 3
# 224 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, OneIsland_PokemonCenter_1F_EventScript_BillFact1
# 225 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, OneIsland_PokemonCenter_1F_EventScript_BillFact2
# 226 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	famechecker FAMECHECKER_BILL, 5
# 227 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillCantStomachMilk
# 228 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 229 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 230 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 231 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BillFact1::
# 232 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	famechecker FAMECHECKER_BILL, 3
# 233 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillsFirstMonWasAbra
# 234 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 235 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 236 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 237 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BillFact2::
# 238 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	famechecker FAMECHECKER_BILL, 4
# 239 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillsHometownInGoldenrod
# 240 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 241 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 242 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 243 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioJustGivenSapphire::
# 244 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_WishYouBestOfLuck
# 245 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 246 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 247 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 248 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveCelioSapphire::
# 249 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 250 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 251 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_HandedSapphireToCelio
# 252 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 253 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 254 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 255 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_SAPPHIRE
# 256 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ThankYouGiveMeTime
# 257 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 258 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine
# 259 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 260 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_CLICK
# 261 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetSapphireMetatile
# 262 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special DrawWholeMapView
# 263 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_OkayThisIsGood
# 264 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 265 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 60
# 266 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine
# 267 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 268 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 30
# 269 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine
# 270 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 271 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 40
# 272 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_PC_ON
# 273 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetNetworkMachineOn
# 274 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special DrawWholeMapView
# 275 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_LinkedUpWithLanette
# 276 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 277 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 278 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_ManagedToLinkWithHoennThankYou
# 279 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special SetPostgameFlags
# 280 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_CAN_LINK_WITH_RS
# 281 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_SEVIIGUYS
# 282 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_JOHTO_LEADERS
# 283 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_CERULEAN_CAVE_GUARD
# 284 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_LORELEI_IN_HER_HOUSE
# 285 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_GIOVANNI_ONE
# 286 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 6
# 287 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special InitRoamer
# 288 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 289 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 290 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 291 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass::
# 292 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PassLetYouGetToAllIslands
# 293 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 294 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 295 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 296 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveCelioRuby::
# 297 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_OhThats
# 298 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 299 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 300 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_HandedRubyToCelio
# 301 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 302 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 303 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 304 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 305 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine
# 306 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 307 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_CLICK
# 308 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call OneIsland_PokemonCenter_1F_EventScript_SetRubyMetatile
# 309 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	special DrawWholeMapView
# 310 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 30
# 311 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 312 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 313 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MayIAskOneMoreFavor, MSGBOX_YESNO
# 314 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio
# 315 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass
# 316 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 317 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 318 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio::
# 319 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_PleaseINeedYourHelp, MSGBOX_YESNO
# 320 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_PokemonCenter_1F_EventScript_DeclineHelpCelio
# 321 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass
# 322 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 323 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 324 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_GiveRainbowPass::
# 325 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_AnotherGemstoneInSeviiIslands
# 326 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_RUBY
# 327 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	removeitem ITEM_TRI_PASS
# 328 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 5
# 329 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	additem ITEM_RAINBOW_PASS
# 330 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_SYS_SEVII_MAP_4567
# 331 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_JOHTO_LEADERS
# 332 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 333 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 334 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ReturnedTriPassForRainbowPass
# 335 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 336 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 337 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 338 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	message OneIsland_PokemonCenter_1F_Text_ObtainedExtraMapPage
# 339 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmessage
# 340 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitfanfare
# 341 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_RestorePrevTextColor
# 342 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_ExplainRainbowPass
# 343 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 344 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 345 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioWaitingForRuby::
# 346 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_TryingToFindGem
# 347 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 348 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 349 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 350 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioRequestRuby::
# 351 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioCaughtMoreMonMaybeICanBeUseful
# 352 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 353 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 354 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_YoullBeTradingFromTrainersFarAway
# 355 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_FacePlayer
# 356 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 357 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_NeedsSpecialGemstone
# 358 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_MT_EMBER_EXTERIOR, 1
# 359 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 4
# 360 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 361 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 362 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 363 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_CelioPlayerMissingNationalDex::
# 364 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioImModifyingMyNetworkMachine
# 365 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 366 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 367 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 368 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_CelioCheckMachine::
# 369 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 370 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_8
# 371 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 372 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 373 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 374 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_CelioPutGemInMachine::
# 375 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_up
# 376 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 377 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 378 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 379 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_up
# 380 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 381 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 382 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LittleBoy::
# 383 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CameFromPalletDontKnowIt, MSGBOX_NPC
# 384 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 385 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 386 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_Hiker::
# 387 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_EnormousVolcanoOnIsland, MSGBOX_NPC
# 388 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 389 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 390 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BattleGirl::
# 391 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lock
# 392 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 393 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, OneIsland_PokemonCenter_1F_EventScript_BattleGirlHoennLinked
# 394 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_WishICouldTradeWithBoyfriend
# 395 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 396 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 397 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 398 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_BattleGirlHoennLinked::
# 399 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_TradedWithFarAwayBoyfriend
# 400 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	release
# 401 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 402 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 403 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachine::
# 404 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 405 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithHoenn
# 406 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithKanto
# 407 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineUnderAdjustment
# 408 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
# 409 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 410 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 411 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithKanto::
# 412 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKanto
# 413 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
# 414 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 415 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 416 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_NetworkMachineLinkedWithHoenn::
# 417 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_MachineLinkedWithKantoAndHoenn
# 418 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	releaseall
# 419 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 420 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 421 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerTop::
# 422 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 423 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 424 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 425 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 426 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 427 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidTop::
# 428 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 429 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 2
# 430 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 431 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 432 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 433 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerMidBottom::
# 434 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 435 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 3
# 436 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 437 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 438 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 439 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandTriggerBottom::
# 440 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	lockall
# 441 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_TEMP_1, 4
# 442 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene
# 443 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 444 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 445 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_LeaveOneIslandScene::
# 446 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 447 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 448 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_ExclamationMark
# 449 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 450 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillOhHeyPlayer
# 451 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 452 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillTop
# 453 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidTop
# 454 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidBottom
# 455 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_TEMP_1, 4, OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillBottom
# 456 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 10
# 457 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeGotItDone
# 458 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 459 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 460 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioJobWentQuick
# 461 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterDown
# 462 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 463 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterUp
# 464 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 465 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillYouveLearnedALot
# 466 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioOhReallyEhehe
# 467 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 468 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterLeft
# 469 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 470 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 10
# 471 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 472 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 473 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 15
# 474 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_BillWeShouldHeadBackToKanto
# 475 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 476 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterDown
# 477 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 478 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 15
# 479 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_CELIO, Common_Movement_WalkInPlaceFasterLeft
# 480 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 481 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 482 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 483 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	msgbox OneIsland_PokemonCenter_1F_Text_CelioPromiseIllShowYouAroundSometime
# 484 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 485 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay 25
# 486 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerExit
# 487 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, OneIsland_PokemonCenter_1F_Movement_BillExit
# 488 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 489 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	playse SE_EXIT
# 490 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_ONE_ISLAND_POKECENTER_BILL
# 491 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_POKEMON_CENTER_1F, 3
# 492 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 493 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 3
# 494 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_ONE_ISLAND
# 495 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_CINNABAR_ISLAND
# 496 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	goto EventScript_SetSail
# 497 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	end
# 498 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 499 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillTop::
# 500 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillTop
# 501 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 502 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 503 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 504 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidTop::
# 505 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidTop
# 506 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 507 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 508 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 509 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillMidBottom::
# 510 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidBottom
# 511 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 512 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 513 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 514 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_EventScript_PlayerWalkToBillBottom::
# 515 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillBottom
# 516 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 517 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	return
# 518 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 519 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillTop::
# 520 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 521 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 522 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 523 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 524 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 525 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidTop::
# 526 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 527 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 528 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 529 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillMidBottom::
# 530 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 531 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 532 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 533 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 534 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 535 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerWalkToBillBottom::
# 536 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_right
# 537 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 538 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 539 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_right
# 540 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 541 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 542 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
@ Unused
# 543 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_DelayWalkInPlaceLeft::
# 544 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 545 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 546 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	delay_4
# 547 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_faster_left
# 548 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 549 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 550 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
@ Unused
# 551 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_WalkInPlaceDown::
# 552 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_in_place_fast_down
# 553 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 554 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 555 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_PlayerExit::
# 556 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 557 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 558 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 559 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 560 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 561 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 562 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 563 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"

# 564 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
OneIsland_PokemonCenter_1F_Movement_BillExit::
# 565 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 566 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 567 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 568 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 569 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 570 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 571 "data/maps/OneIsland_PokemonCenter_1F/scripts.pory"
	step_end
