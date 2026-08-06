# 1 "data/maps/CinnabarIsland/scripts.pory"

# 2 "data/maps/CinnabarIsland/scripts.pory"
.equ LOCALID_BILL, 3
# 3 "data/maps/CinnabarIsland/scripts.pory"
.equ LOCALID_SEAGALLOP, 4
# 4 "data/maps/CinnabarIsland/scripts.pory"

# 5 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_MapScripts::
# 6 "data/maps/CinnabarIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_OnTransition
# 7 "data/maps/CinnabarIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CinnabarIsland_OnFrame
# 8 "data/maps/CinnabarIsland/scripts.pory"
	.byte 0
# 9 "data/maps/CinnabarIsland/scripts.pory"

# 10 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_OnTransition::
# 11 "data/maps/CinnabarIsland/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CINNABAR_ISLAND
# 12 "data/maps/CinnabarIsland/scripts.pory"
	call CinnabarIsland_EventScript_CheckUnlockGym
# 13 "data/maps/CinnabarIsland/scripts.pory"
	call_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND, 1, CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland
# 14 "data/maps/CinnabarIsland/scripts.pory"
	call_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND, 3, CinnabarIsland_EventScript_ReadyObjectsReturnFromSeviiIslands
# 15 "data/maps/CinnabarIsland/scripts.pory"
	call_if_eq VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1, CinnabarIsland_EventScript_ReadyObjectsSailToOneIslandFromPokeCenter
# 16 "data/maps/CinnabarIsland/scripts.pory"
	end
# 17 "data/maps/CinnabarIsland/scripts.pory"

# 18 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_ReadyObjectsSailToOneIslandFromPokeCenter::
# 19 "data/maps/CinnabarIsland/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 20 "data/maps/CinnabarIsland/scripts.pory"
	setflag FLAG_TEMP_2
# 21 "data/maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_BILL, 20, 12
# 22 "data/maps/CinnabarIsland/scripts.pory"
	setobjectmovementtype LOCALID_BILL, MOVEMENT_TYPE_FACE_LEFT
# 23 "data/maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_SEAGALLOP, 34, 12
# 24 "data/maps/CinnabarIsland/scripts.pory"
	return
# 25 "data/maps/CinnabarIsland/scripts.pory"

# 26 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_ReadyObjectsSailToOneIsland::
# 27 "data/maps/CinnabarIsland/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 28 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_ge VAR_0x8004, 18, CinnabarIsland_EventScript_MoveSeagallopDown
# 29 "data/maps/CinnabarIsland/scripts.pory"
	setflag FLAG_TEMP_2
# 30 "data/maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_BILL, 18, 12
# 31 "data/maps/CinnabarIsland/scripts.pory"
	setobjectmovementtype LOCALID_BILL, MOVEMENT_TYPE_FACE_UP
# 32 "data/maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_SEAGALLOP, 34, 8
# 33 "data/maps/CinnabarIsland/scripts.pory"
	return
# 34 "data/maps/CinnabarIsland/scripts.pory"

# 35 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_MoveSeagallopDown::
# 36 "data/maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_SEAGALLOP, 34, 8
# 37 "data/maps/CinnabarIsland/scripts.pory"
	return
# 38 "data/maps/CinnabarIsland/scripts.pory"

# 39 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_ReadyObjectsReturnFromSeviiIslands::
# 40 "data/maps/CinnabarIsland/scripts.pory"
	setobjectxyperm OBJ_EVENT_ID_PLAYER, 25, 5
# 41 "data/maps/CinnabarIsland/scripts.pory"
	setobjectmovementtype LOCALID_BILL, MOVEMENT_TYPE_FACE_DOWN
# 42 "data/maps/CinnabarIsland/scripts.pory"
	setobjectxyperm LOCALID_BILL, 25, 6
# 43 "data/maps/CinnabarIsland/scripts.pory"
	setobjectmovementtype LOCALID_BILL, MOVEMENT_TYPE_FACE_UP
# 44 "data/maps/CinnabarIsland/scripts.pory"
	return
# 45 "data/maps/CinnabarIsland/scripts.pory"

# 46 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_CheckUnlockGym::
# 47 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_set FLAG_HIDE_POKEMON_MANSION_B1F_SECRET_KEY, CinnabarIsland_EventScript_UnlockGym
# 48 "data/maps/CinnabarIsland/scripts.pory"
	return
# 49 "data/maps/CinnabarIsland/scripts.pory"

# 50 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_UnlockGym::
# 51 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_TEMP_1, 1
# 52 "data/maps/CinnabarIsland/scripts.pory"
	return
# 53 "data/maps/CinnabarIsland/scripts.pory"

# 54 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_OnFrame::
# 55 "data/maps/CinnabarIsland/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1, CinnabarIsland_EventScript_ExitPokeCenterForOneIsland
# 56 "data/maps/CinnabarIsland/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND, 1, CinnabarIsland_EventScript_BillScene
# 57 "data/maps/CinnabarIsland/scripts.pory"
	map_script_2 VAR_MAP_SCENE_CINNABAR_ISLAND, 3, CinnabarIsland_EventScript_ReturnFromSeviiIslands
# 58 "data/maps/CinnabarIsland/scripts.pory"
	.2byte 0
# 59 "data/maps/CinnabarIsland/scripts.pory"

# 60 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_ExitPokeCenterForOneIsland::
# 61 "data/maps/CinnabarIsland/scripts.pory"
	lockall
# 62 "data/maps/CinnabarIsland/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 63 "data/maps/CinnabarIsland/scripts.pory"
	savebgm MUS_DUMMY
# 64 "data/maps/CinnabarIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 65 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_2, 2
# 66 "data/maps/CinnabarIsland/scripts.pory"
	delay 20
# 67 "data/maps/CinnabarIsland/scripts.pory"
	call CinnabarIsland_EventScript_SailToOneIsland
# 68 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
# 69 "data/maps/CinnabarIsland/scripts.pory"
	end
# 70 "data/maps/CinnabarIsland/scripts.pory"

# 71 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_ReturnFromSeviiIslands::
# 72 "data/maps/CinnabarIsland/scripts.pory"
	lockall
# 73 "data/maps/CinnabarIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 74 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_IfYouHaveTriPassYouCanGoAgain
# 75 "data/maps/CinnabarIsland/scripts.pory"
	closemessage
# 76 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillExit
# 77 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 78 "data/maps/CinnabarIsland/scripts.pory"
	removeobject LOCALID_BILL
# 79 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 4
# 80 "data/maps/CinnabarIsland/scripts.pory"
	setflag FLAG_HIDE_TWO_ISLAND_GAME_CORNER_LOSTELLE
# 81 "data/maps/CinnabarIsland/scripts.pory"
	clearflag FLAG_HIDE_LOSTELLE_IN_HER_HOME
# 82 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
# 83 "data/maps/CinnabarIsland/scripts.pory"
	end
# 84 "data/maps/CinnabarIsland/scripts.pory"

# 85 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillExit::
# 86 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 87 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 88 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 89 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 90 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 91 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 92 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 93 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 94 "data/maps/CinnabarIsland/scripts.pory"

# 95 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillScene::
# 96 "data/maps/CinnabarIsland/scripts.pory"
	lockall
# 97 "data/maps/CinnabarIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 98 "data/maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BillFacePlayer1
# 99 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillFacePlayer2
# 100 "data/maps/CinnabarIsland/scripts.pory"
	playse SE_PIN
# 101 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_ExclamationMark
# 102 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 103 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_Delay48
# 104 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 105 "data/maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BillApproachPlayer1
# 106 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillApproachPlayer2
# 107 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_HeyIfItIsntPlayer
# 108 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_ComeWithMeToOneIsland, MSGBOX_YESNO
# 109 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_EventScript_AreYouSureSailToOneIsland
# 110 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_EventScript_DeclineSailToOneIsland
# 111 "data/maps/CinnabarIsland/scripts.pory"
	end
# 112 "data/maps/CinnabarIsland/scripts.pory"

# 113 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_AreYouSureSailToOneIsland::
# 114 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_AreYouSureSailToOneIsland, MSGBOX_YESNO
# 115 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_EventScript_AgreeSailToOneIsland
# 116 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_EventScript_DeclineSailToOneIsland
# 117 "data/maps/CinnabarIsland/scripts.pory"
	end
# 118 "data/maps/CinnabarIsland/scripts.pory"

# 119 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillFacePlayer1::
# 120 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterUp
# 121 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 122 "data/maps/CinnabarIsland/scripts.pory"
	return
# 123 "data/maps/CinnabarIsland/scripts.pory"

# 124 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillFacePlayer2::
# 125 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterLeft
# 126 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 127 "data/maps/CinnabarIsland/scripts.pory"
	return
# 128 "data/maps/CinnabarIsland/scripts.pory"

# 129 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillApproachPlayer1::
# 130 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillApproachPlayer1
# 131 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 132 "data/maps/CinnabarIsland/scripts.pory"
	return
# 133 "data/maps/CinnabarIsland/scripts.pory"

# 134 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillApproachPlayer2::
# 135 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillApproachPlayer2
# 136 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 137 "data/maps/CinnabarIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 138 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 139 "data/maps/CinnabarIsland/scripts.pory"
	return
# 140 "data/maps/CinnabarIsland/scripts.pory"

# 141 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_AgreeSailToOneIsland::
# 142 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_AllRightLetsGo
# 143 "data/maps/CinnabarIsland/scripts.pory"
	closemessage
# 144 "data/maps/CinnabarIsland/scripts.pory"
	call CinnabarIsland_EventScript_SailToOneIsland
# 145 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
# 146 "data/maps/CinnabarIsland/scripts.pory"
	end
# 147 "data/maps/CinnabarIsland/scripts.pory"

# 148 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_DeclineSailToOneIsland::
# 149 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_IllBeWaitingInPokeCenter
# 150 "data/maps/CinnabarIsland/scripts.pory"
	closemessage
# 151 "data/maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BillExitToPokeCenter
# 152 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillReturnToPokeCenter
# 153 "data/maps/CinnabarIsland/scripts.pory"
	removeobject LOCALID_BILL
# 154 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 2
# 155 "data/maps/CinnabarIsland/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_POKECENTER_BILL
# 156 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
# 157 "data/maps/CinnabarIsland/scripts.pory"
	end
# 158 "data/maps/CinnabarIsland/scripts.pory"

# 159 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillExitToPokeCenter::
# 160 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillExitToPokeCenter
# 161 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 162 "data/maps/CinnabarIsland/scripts.pory"
	return
# 163 "data/maps/CinnabarIsland/scripts.pory"

# 164 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillExitToPokeCenter::
# 165 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 166 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 167 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 168 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 169 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 170 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 171 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 172 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 173 "data/maps/CinnabarIsland/scripts.pory"

# 174 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillReturnToPokeCenter::
# 175 "data/maps/CinnabarIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Movement_PlayerWatchBillExit
# 176 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillApproachDoor
# 177 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 178 "data/maps/CinnabarIsland/scripts.pory"
	opendoor 19, 12
# 179 "data/maps/CinnabarIsland/scripts.pory"
	waitdooranim
# 180 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillReEnterPokeCenter
# 181 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 182 "data/maps/CinnabarIsland/scripts.pory"
	closedoor 19, 12
# 183 "data/maps/CinnabarIsland/scripts.pory"
	waitdooranim
# 184 "data/maps/CinnabarIsland/scripts.pory"
	return
# 185 "data/maps/CinnabarIsland/scripts.pory"

# 186 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_PlayerWatchBillExit::
# 187 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 188 "data/maps/CinnabarIsland/scripts.pory"
	walk_in_place_faster_right
# 189 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 190 "data/maps/CinnabarIsland/scripts.pory"

# 191 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillApproachDoor::
# 192 "data/maps/CinnabarIsland/scripts.pory"
	delay_16
# 193 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 194 "data/maps/CinnabarIsland/scripts.pory"
	walk_in_place_faster_up
# 195 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 196 "data/maps/CinnabarIsland/scripts.pory"

# 197 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillReEnterPokeCenter::
# 198 "data/maps/CinnabarIsland/scripts.pory"
	walk_up
# 199 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 200 "data/maps/CinnabarIsland/scripts.pory"
	set_invisible
# 201 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 202 "data/maps/CinnabarIsland/scripts.pory"

# 203 "data/maps/CinnabarIsland/scripts.pory"
@ Can be triggered outside, or after talking to Bill in the poke center
# 204 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland::
# 205 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_ApproachShore
# 206 "data/maps/CinnabarIsland/scripts.pory"
	addobject LOCALID_SEAGALLOP
# 207 "data/maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BoatArrive
# 208 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BoatArriveExitedPokeCenter
# 209 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_MyPalsBoatArrived
# 210 "data/maps/CinnabarIsland/scripts.pory"
	closemessage
# 211 "data/maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BoardBoat
# 212 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BoardBoatExitedPokeCenter
# 213 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 2
# 214 "data/maps/CinnabarIsland/scripts.pory"
	removeobject LOCALID_BILL
# 215 "data/maps/CinnabarIsland/scripts.pory"
	delay 40
# 216 "data/maps/CinnabarIsland/scripts.pory"
	setflag FLAG_HIDE_CINNABAR_SEAGALLOP
# 217 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 1
# 218 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_CINNABAR_ISLAND
# 219 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_ONE_ISLAND
# 220 "data/maps/CinnabarIsland/scripts.pory"
	goto EventScript_SetSail
# 221 "data/maps/CinnabarIsland/scripts.pory"
	end
# 222 "data/maps/CinnabarIsland/scripts.pory"

# 223 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_ApproachShore::
# 224 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_ApproachShore
# 225 "data/maps/CinnabarIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Movement_ApproachShore
# 226 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 227 "data/maps/CinnabarIsland/scripts.pory"
	return
# 228 "data/maps/CinnabarIsland/scripts.pory"

# 229 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BoatArrive::
# 230 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillFaceBoat
# 231 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_SEAGALLOP, CinnabarIsland_Movement_BoatArrive
# 232 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 233 "data/maps/CinnabarIsland/scripts.pory"
	return
# 234 "data/maps/CinnabarIsland/scripts.pory"

# 235 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BoatArriveExitedPokeCenter::
# 236 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_SEAGALLOP, CinnabarIsland_Movement_BoatArrive
# 237 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 238 "data/maps/CinnabarIsland/scripts.pory"
	return
# 239 "data/maps/CinnabarIsland/scripts.pory"

# 240 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BoardBoat::
# 241 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillBoardBoat
# 242 "data/maps/CinnabarIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Movement_PlayerBoardBoat
# 243 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 244 "data/maps/CinnabarIsland/scripts.pory"
	return
# 245 "data/maps/CinnabarIsland/scripts.pory"

# 246 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BoardBoatExitedPokeCenter::
# 247 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillBoardBoatFromShore
# 248 "data/maps/CinnabarIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Movement_PlayerBoardBoatFromShore
# 249 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 250 "data/maps/CinnabarIsland/scripts.pory"
	return
# 251 "data/maps/CinnabarIsland/scripts.pory"

# 252 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_Fisherman::
# 253 "data/maps/CinnabarIsland/scripts.pory"
	call CinnabarIsland_EventScript_FishermanCheckFishingRod
# 254 "data/maps/CinnabarIsland/scripts.pory"
	call CinnabarIsland_EventScript_FishermanCheckPokeballs
# 255 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_Fishing, MSGBOX_NPC
# 256 "data/maps/CinnabarIsland/scripts.pory"
	release
# 257 "data/maps/CinnabarIsland/scripts.pory"
	end
# 258 "data/maps/CinnabarIsland/scripts.pory"

# 259 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_FishermanCheckFishingRod::
# 260 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_OLD_ROD
# 261 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 262 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_GOOD_ROD
# 263 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 264 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_SUPER_ROD
# 265 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 266 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_NoFishingRod, MSGBOX_DEFAULT
# 267 "data/maps/CinnabarIsland/scripts.pory"
	giveitem ITEM_OLD_ROD
# 268 "data/maps/CinnabarIsland/scripts.pory"
	setflag FLAG_GOT_OLD_ROD
# 269 "data/maps/CinnabarIsland/scripts.pory"
	return
# 270 "data/maps/CinnabarIsland/scripts.pory"

# 271 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_FishermanCheckPokeballs::
# 272 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_MASTER_BALL
# 273 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 274 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_ULTRA_BALL
# 275 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 276 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_GREAT_BALL
# 277 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 278 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_POKE_BALL
# 279 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 280 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_NET_BALL
# 281 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 282 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_DIVE_BALL
# 283 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 284 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_NEST_BALL
# 285 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 286 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_REPEAT_BALL
# 287 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 288 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_TIMER_BALL
# 289 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 290 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_LUXURY_BALL
# 291 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 292 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_PREMIER_BALL
# 293 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 294 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_NoPokeballs, MSGBOX_DEFAULT
# 295 "data/maps/CinnabarIsland/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 296 "data/maps/CinnabarIsland/scripts.pory"

# 297 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_Return::
# 298 "data/maps/CinnabarIsland/scripts.pory"
	return
# 299 "data/maps/CinnabarIsland/scripts.pory"

# 300 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BoatArrive::
# 301 "data/maps/CinnabarIsland/scripts.pory"
	delay_16
# 302 "data/maps/CinnabarIsland/scripts.pory"
	delay_16
# 303 "data/maps/CinnabarIsland/scripts.pory"
	walk_fast_left
# 304 "data/maps/CinnabarIsland/scripts.pory"
	walk_fast_left
# 305 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 306 "data/maps/CinnabarIsland/scripts.pory"
	walk_slower_left
# 307 "data/maps/CinnabarIsland/scripts.pory"
	walk_slower_left
# 308 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 309 "data/maps/CinnabarIsland/scripts.pory"

# 310 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillBoardBoat::
# 311 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 312 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 313 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 314 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 315 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 316 "data/maps/CinnabarIsland/scripts.pory"
	set_invisible
# 317 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 318 "data/maps/CinnabarIsland/scripts.pory"

# 319 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillApproachPlayer1::
# 320 "data/maps/CinnabarIsland/scripts.pory"
	walk_up
# 321 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 322 "data/maps/CinnabarIsland/scripts.pory"

# 323 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillApproachPlayer2::
# 324 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 325 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 326 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 327 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 328 "data/maps/CinnabarIsland/scripts.pory"

# 329 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillFaceBoat::
# 330 "data/maps/CinnabarIsland/scripts.pory"
	delay_16
# 331 "data/maps/CinnabarIsland/scripts.pory"
	delay_16
# 332 "data/maps/CinnabarIsland/scripts.pory"
	delay_8
# 333 "data/maps/CinnabarIsland/scripts.pory"
	walk_in_place_faster_right
# 334 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 335 "data/maps/CinnabarIsland/scripts.pory"

# 336 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_ApproachShore::
# 337 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 338 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 339 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 340 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 341 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 342 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 343 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 344 "data/maps/CinnabarIsland/scripts.pory"

# 345 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillBoardBoatFromShore::
# 346 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 347 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 348 "data/maps/CinnabarIsland/scripts.pory"
	set_invisible
# 349 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 350 "data/maps/CinnabarIsland/scripts.pory"

# 351 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_PlayerBoardBoat::
# 352 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 353 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 354 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 355 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 356 "data/maps/CinnabarIsland/scripts.pory"
	walk_in_place_faster_right
# 357 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 358 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 359 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 360 "data/maps/CinnabarIsland/scripts.pory"
	set_invisible
# 361 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 362 "data/maps/CinnabarIsland/scripts.pory"

# 363 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_PlayerBoardBoatFromShore::
# 364 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 365 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 366 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 367 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 368 "data/maps/CinnabarIsland/scripts.pory"
	set_invisible
# 369 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 370 "data/maps/CinnabarIsland/scripts.pory"

# 371 "data/maps/CinnabarIsland/scripts.pory"
@ Triggered when VAR_TEMP_1 is 0
# 372 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_GymDoorLocked::
# 373 "data/maps/CinnabarIsland/scripts.pory"
	lockall
# 374 "data/maps/CinnabarIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 375 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 376 "data/maps/CinnabarIsland/scripts.pory"
	delay 20
# 377 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_DoorIsLocked
# 378 "data/maps/CinnabarIsland/scripts.pory"
	closemessage
# 379 "data/maps/CinnabarIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Movement_ForcePlayerFromDoor
# 380 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 381 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
# 382 "data/maps/CinnabarIsland/scripts.pory"
	end
# 383 "data/maps/CinnabarIsland/scripts.pory"

# 384 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_ForcePlayerFromDoor::
# 385 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 386 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 387 "data/maps/CinnabarIsland/scripts.pory"

# 388 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_Woman::
# 389 "data/maps/CinnabarIsland/scripts.pory"
	lock
# 390 "data/maps/CinnabarIsland/scripts.pory"
	faceplayer
# 391 "data/maps/CinnabarIsland/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 3
# 392 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_BlaineLivedHereSinceBeforeLab
# 393 "data/maps/CinnabarIsland/scripts.pory"
	release
# 394 "data/maps/CinnabarIsland/scripts.pory"
	end
# 395 "data/maps/CinnabarIsland/scripts.pory"

# 396 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_OldMan::
# 397 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_ScientistsExperimentInMansion, MSGBOX_NPC
# 398 "data/maps/CinnabarIsland/scripts.pory"
	end
# 399 "data/maps/CinnabarIsland/scripts.pory"

# 400 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_Scientist::
# 401 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_ScientistVolcano, MSGBOX_NPC
# 402 "data/maps/CinnabarIsland/scripts.pory"
	end	
# 403 "data/maps/CinnabarIsland/scripts.pory"

# 404 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_IslandSign::
# 405 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_IslandSign, MSGBOX_SIGN
# 406 "data/maps/CinnabarIsland/scripts.pory"
	end
# 407 "data/maps/CinnabarIsland/scripts.pory"

# 408 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_PokemonLabSign::
# 409 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_PokemonLab, MSGBOX_SIGN
# 410 "data/maps/CinnabarIsland/scripts.pory"
	end
# 411 "data/maps/CinnabarIsland/scripts.pory"

# 412 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_GymSign::
# 413 "data/maps/CinnabarIsland/scripts.pory"
	lockall
# 414 "data/maps/CinnabarIsland/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 0
# 415 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_GymSign
# 416 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
# 417 "data/maps/CinnabarIsland/scripts.pory"
	end
# 418 "data/maps/CinnabarIsland/scripts.pory"

# 419 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_ScientistsExperimentInMansionStaryu::
# 420 "data/maps/CinnabarIsland/scripts.pory"
	lock
# 421 "data/maps/CinnabarIsland/scripts.pory"
	faceplayer
# 422 "data/maps/CinnabarIsland/scripts.pory"
	playmoncry SPECIES_STARYU, 0
# 423 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_ScientistsExperimentInMansionStaryu
# 424 "data/maps/CinnabarIsland/scripts.pory"
	waitmoncry
# 425 "data/maps/CinnabarIsland/scripts.pory"
	release
# 426 "data/maps/CinnabarIsland/scripts.pory"
	end
