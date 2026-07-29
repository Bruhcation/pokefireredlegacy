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
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_EventScript_AgreeSailToOneIsland
# 110 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_EventScript_DeclineSailToOneIsland
# 111 "data/maps/CinnabarIsland/scripts.pory"
	end
# 112 "data/maps/CinnabarIsland/scripts.pory"

# 113 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillFacePlayer1::
# 114 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterUp
# 115 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 116 "data/maps/CinnabarIsland/scripts.pory"
	return
# 117 "data/maps/CinnabarIsland/scripts.pory"

# 118 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillFacePlayer2::
# 119 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, Common_Movement_WalkInPlaceFasterLeft
# 120 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 121 "data/maps/CinnabarIsland/scripts.pory"
	return
# 122 "data/maps/CinnabarIsland/scripts.pory"

# 123 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillApproachPlayer1::
# 124 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillApproachPlayer1
# 125 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 126 "data/maps/CinnabarIsland/scripts.pory"
	return
# 127 "data/maps/CinnabarIsland/scripts.pory"

# 128 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillApproachPlayer2::
# 129 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillApproachPlayer2
# 130 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 131 "data/maps/CinnabarIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 132 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 133 "data/maps/CinnabarIsland/scripts.pory"
	return
# 134 "data/maps/CinnabarIsland/scripts.pory"

# 135 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_AgreeSailToOneIsland::
# 136 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_AllRightLetsGo
# 137 "data/maps/CinnabarIsland/scripts.pory"
	closemessage
# 138 "data/maps/CinnabarIsland/scripts.pory"
	call CinnabarIsland_EventScript_SailToOneIsland
# 139 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
# 140 "data/maps/CinnabarIsland/scripts.pory"
	end
# 141 "data/maps/CinnabarIsland/scripts.pory"

# 142 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_DeclineSailToOneIsland::
# 143 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_IllBeWaitingInPokeCenter
# 144 "data/maps/CinnabarIsland/scripts.pory"
	closemessage
# 145 "data/maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BillExitToPokeCenter
# 146 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BillReturnToPokeCenter
# 147 "data/maps/CinnabarIsland/scripts.pory"
	removeobject LOCALID_BILL
# 148 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 2
# 149 "data/maps/CinnabarIsland/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_POKECENTER_BILL
# 150 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
# 151 "data/maps/CinnabarIsland/scripts.pory"
	end
# 152 "data/maps/CinnabarIsland/scripts.pory"

# 153 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillExitToPokeCenter::
# 154 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillExitToPokeCenter
# 155 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 156 "data/maps/CinnabarIsland/scripts.pory"
	return
# 157 "data/maps/CinnabarIsland/scripts.pory"

# 158 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillExitToPokeCenter::
# 159 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 160 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 161 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 162 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 163 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 164 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 165 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 166 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 167 "data/maps/CinnabarIsland/scripts.pory"

# 168 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BillReturnToPokeCenter::
# 169 "data/maps/CinnabarIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Movement_PlayerWatchBillExit
# 170 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillApproachDoor
# 171 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 172 "data/maps/CinnabarIsland/scripts.pory"
	opendoor 19, 12
# 173 "data/maps/CinnabarIsland/scripts.pory"
	waitdooranim
# 174 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillReEnterPokeCenter
# 175 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 176 "data/maps/CinnabarIsland/scripts.pory"
	closedoor 19, 12
# 177 "data/maps/CinnabarIsland/scripts.pory"
	waitdooranim
# 178 "data/maps/CinnabarIsland/scripts.pory"
	return
# 179 "data/maps/CinnabarIsland/scripts.pory"

# 180 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_PlayerWatchBillExit::
# 181 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 182 "data/maps/CinnabarIsland/scripts.pory"
	walk_in_place_faster_right
# 183 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 184 "data/maps/CinnabarIsland/scripts.pory"

# 185 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillApproachDoor::
# 186 "data/maps/CinnabarIsland/scripts.pory"
	delay_16
# 187 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 188 "data/maps/CinnabarIsland/scripts.pory"
	walk_in_place_faster_up
# 189 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 190 "data/maps/CinnabarIsland/scripts.pory"

# 191 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillReEnterPokeCenter::
# 192 "data/maps/CinnabarIsland/scripts.pory"
	walk_up
# 193 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 194 "data/maps/CinnabarIsland/scripts.pory"
	set_invisible
# 195 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 196 "data/maps/CinnabarIsland/scripts.pory"

# 197 "data/maps/CinnabarIsland/scripts.pory"
@ Can be triggered outside, or after talking to Bill in the poke center
# 198 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_SailToOneIsland::
# 199 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_ApproachShore
# 200 "data/maps/CinnabarIsland/scripts.pory"
	addobject LOCALID_SEAGALLOP
# 201 "data/maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BoatArrive
# 202 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BoatArriveExitedPokeCenter
# 203 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_MyPalsBoatArrived
# 204 "data/maps/CinnabarIsland/scripts.pory"
	closemessage
# 205 "data/maps/CinnabarIsland/scripts.pory"
	call_if_unset FLAG_TEMP_2, CinnabarIsland_EventScript_BoardBoat
# 206 "data/maps/CinnabarIsland/scripts.pory"
	call_if_set FLAG_TEMP_2, CinnabarIsland_EventScript_BoardBoatExitedPokeCenter
# 207 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 2
# 208 "data/maps/CinnabarIsland/scripts.pory"
	removeobject LOCALID_BILL
# 209 "data/maps/CinnabarIsland/scripts.pory"
	delay 40
# 210 "data/maps/CinnabarIsland/scripts.pory"
	setflag FLAG_HIDE_CINNABAR_SEAGALLOP
# 211 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 1
# 212 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_CINNABAR_ISLAND
# 213 "data/maps/CinnabarIsland/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_ONE_ISLAND
# 214 "data/maps/CinnabarIsland/scripts.pory"
	goto EventScript_SetSail
# 215 "data/maps/CinnabarIsland/scripts.pory"
	end
# 216 "data/maps/CinnabarIsland/scripts.pory"

# 217 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_ApproachShore::
# 218 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_ApproachShore
# 219 "data/maps/CinnabarIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Movement_ApproachShore
# 220 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 221 "data/maps/CinnabarIsland/scripts.pory"
	return
# 222 "data/maps/CinnabarIsland/scripts.pory"

# 223 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BoatArrive::
# 224 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillFaceBoat
# 225 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_SEAGALLOP, CinnabarIsland_Movement_BoatArrive
# 226 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 227 "data/maps/CinnabarIsland/scripts.pory"
	return
# 228 "data/maps/CinnabarIsland/scripts.pory"

# 229 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BoatArriveExitedPokeCenter::
# 230 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_SEAGALLOP, CinnabarIsland_Movement_BoatArrive
# 231 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 232 "data/maps/CinnabarIsland/scripts.pory"
	return
# 233 "data/maps/CinnabarIsland/scripts.pory"

# 234 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BoardBoat::
# 235 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillBoardBoat
# 236 "data/maps/CinnabarIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Movement_PlayerBoardBoat
# 237 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 238 "data/maps/CinnabarIsland/scripts.pory"
	return
# 239 "data/maps/CinnabarIsland/scripts.pory"

# 240 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_BoardBoatExitedPokeCenter::
# 241 "data/maps/CinnabarIsland/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_Movement_BillBoardBoatFromShore
# 242 "data/maps/CinnabarIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Movement_PlayerBoardBoatFromShore
# 243 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 244 "data/maps/CinnabarIsland/scripts.pory"
	return
# 245 "data/maps/CinnabarIsland/scripts.pory"

# 246 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_Fisherman::
# 247 "data/maps/CinnabarIsland/scripts.pory"
	call CinnabarIsland_EventScript_FishermanCheckFishingRod
# 248 "data/maps/CinnabarIsland/scripts.pory"
	call CinnabarIsland_EventScript_FishermanCheckPokeballs
# 249 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_Fishing, MSGBOX_NPC
# 250 "data/maps/CinnabarIsland/scripts.pory"
	release
# 251 "data/maps/CinnabarIsland/scripts.pory"
	end
# 252 "data/maps/CinnabarIsland/scripts.pory"

# 253 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_FishermanCheckFishingRod::
# 254 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_OLD_ROD
# 255 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 256 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_GOOD_ROD
# 257 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 258 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_SUPER_ROD
# 259 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 260 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_NoFishingRod, MSGBOX_DEFAULT
# 261 "data/maps/CinnabarIsland/scripts.pory"
	giveitem ITEM_OLD_ROD
# 262 "data/maps/CinnabarIsland/scripts.pory"
	setflag FLAG_GOT_OLD_ROD
# 263 "data/maps/CinnabarIsland/scripts.pory"
	return
# 264 "data/maps/CinnabarIsland/scripts.pory"

# 265 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_FishermanCheckPokeballs::
# 266 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_MASTER_BALL
# 267 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 268 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_ULTRA_BALL
# 269 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 270 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_GREAT_BALL
# 271 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 272 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_POKE_BALL
# 273 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 274 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_NET_BALL
# 275 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 276 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_DIVE_BALL
# 277 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 278 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_NEST_BALL
# 279 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 280 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_REPEAT_BALL
# 281 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 282 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_TIMER_BALL
# 283 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 284 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_LUXURY_BALL
# 285 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 286 "data/maps/CinnabarIsland/scripts.pory"
	checkitem ITEM_PREMIER_BALL
# 287 "data/maps/CinnabarIsland/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_EventScript_Return
# 288 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_NoPokeballs, MSGBOX_DEFAULT
# 289 "data/maps/CinnabarIsland/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 290 "data/maps/CinnabarIsland/scripts.pory"

# 291 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_Return::
# 292 "data/maps/CinnabarIsland/scripts.pory"
	return
# 293 "data/maps/CinnabarIsland/scripts.pory"

# 294 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BoatArrive::
# 295 "data/maps/CinnabarIsland/scripts.pory"
	delay_16
# 296 "data/maps/CinnabarIsland/scripts.pory"
	delay_16
# 297 "data/maps/CinnabarIsland/scripts.pory"
	walk_fast_left
# 298 "data/maps/CinnabarIsland/scripts.pory"
	walk_fast_left
# 299 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 300 "data/maps/CinnabarIsland/scripts.pory"
	walk_slower_left
# 301 "data/maps/CinnabarIsland/scripts.pory"
	walk_slower_left
# 302 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 303 "data/maps/CinnabarIsland/scripts.pory"

# 304 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillBoardBoat::
# 305 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 306 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 307 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 308 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 309 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 310 "data/maps/CinnabarIsland/scripts.pory"
	set_invisible
# 311 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 312 "data/maps/CinnabarIsland/scripts.pory"

# 313 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillApproachPlayer1::
# 314 "data/maps/CinnabarIsland/scripts.pory"
	walk_up
# 315 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 316 "data/maps/CinnabarIsland/scripts.pory"

# 317 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillApproachPlayer2::
# 318 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 319 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 320 "data/maps/CinnabarIsland/scripts.pory"
	walk_left
# 321 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 322 "data/maps/CinnabarIsland/scripts.pory"

# 323 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillFaceBoat::
# 324 "data/maps/CinnabarIsland/scripts.pory"
	delay_16
# 325 "data/maps/CinnabarIsland/scripts.pory"
	delay_16
# 326 "data/maps/CinnabarIsland/scripts.pory"
	delay_8
# 327 "data/maps/CinnabarIsland/scripts.pory"
	walk_in_place_faster_right
# 328 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 329 "data/maps/CinnabarIsland/scripts.pory"

# 330 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_ApproachShore::
# 331 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 332 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 333 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 334 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 335 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 336 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 337 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 338 "data/maps/CinnabarIsland/scripts.pory"

# 339 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_BillBoardBoatFromShore::
# 340 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 341 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 342 "data/maps/CinnabarIsland/scripts.pory"
	set_invisible
# 343 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 344 "data/maps/CinnabarIsland/scripts.pory"

# 345 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_PlayerBoardBoat::
# 346 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 347 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 348 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 349 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 350 "data/maps/CinnabarIsland/scripts.pory"
	walk_in_place_faster_right
# 351 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 352 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 353 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 354 "data/maps/CinnabarIsland/scripts.pory"
	set_invisible
# 355 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 356 "data/maps/CinnabarIsland/scripts.pory"

# 357 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_PlayerBoardBoatFromShore::
# 358 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 359 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 360 "data/maps/CinnabarIsland/scripts.pory"
	walk_right
# 361 "data/maps/CinnabarIsland/scripts.pory"
	delay_4
# 362 "data/maps/CinnabarIsland/scripts.pory"
	set_invisible
# 363 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 364 "data/maps/CinnabarIsland/scripts.pory"

# 365 "data/maps/CinnabarIsland/scripts.pory"
@ Triggered when VAR_TEMP_1 is 0
# 366 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_GymDoorLocked::
# 367 "data/maps/CinnabarIsland/scripts.pory"
	lockall
# 368 "data/maps/CinnabarIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 369 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 370 "data/maps/CinnabarIsland/scripts.pory"
	delay 20
# 371 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_DoorIsLocked
# 372 "data/maps/CinnabarIsland/scripts.pory"
	closemessage
# 373 "data/maps/CinnabarIsland/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Movement_ForcePlayerFromDoor
# 374 "data/maps/CinnabarIsland/scripts.pory"
	waitmovement 0
# 375 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
# 376 "data/maps/CinnabarIsland/scripts.pory"
	end
# 377 "data/maps/CinnabarIsland/scripts.pory"

# 378 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_Movement_ForcePlayerFromDoor::
# 379 "data/maps/CinnabarIsland/scripts.pory"
	walk_down
# 380 "data/maps/CinnabarIsland/scripts.pory"
	step_end
# 381 "data/maps/CinnabarIsland/scripts.pory"

# 382 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_Woman::
# 383 "data/maps/CinnabarIsland/scripts.pory"
	lock
# 384 "data/maps/CinnabarIsland/scripts.pory"
	faceplayer
# 385 "data/maps/CinnabarIsland/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 3
# 386 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_BlaineLivedHereSinceBeforeLab
# 387 "data/maps/CinnabarIsland/scripts.pory"
	release
# 388 "data/maps/CinnabarIsland/scripts.pory"
	end
# 389 "data/maps/CinnabarIsland/scripts.pory"

# 390 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_OldMan::
# 391 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_ScientistsExperimentInMansion, MSGBOX_NPC
# 392 "data/maps/CinnabarIsland/scripts.pory"
	end
# 393 "data/maps/CinnabarIsland/scripts.pory"

# 394 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_Scientist::
# 395 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_ScientistVolcano, MSGBOX_NPC
# 396 "data/maps/CinnabarIsland/scripts.pory"
	end	
# 397 "data/maps/CinnabarIsland/scripts.pory"

# 398 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_IslandSign::
# 399 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_IslandSign, MSGBOX_SIGN
# 400 "data/maps/CinnabarIsland/scripts.pory"
	end
# 401 "data/maps/CinnabarIsland/scripts.pory"

# 402 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_PokemonLabSign::
# 403 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_PokemonLab, MSGBOX_SIGN
# 404 "data/maps/CinnabarIsland/scripts.pory"
	end
# 405 "data/maps/CinnabarIsland/scripts.pory"

# 406 "data/maps/CinnabarIsland/scripts.pory"
CinnabarIsland_EventScript_GymSign::
# 407 "data/maps/CinnabarIsland/scripts.pory"
	lockall
# 408 "data/maps/CinnabarIsland/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 0
# 409 "data/maps/CinnabarIsland/scripts.pory"
	msgbox CinnabarIsland_Text_GymSign
# 410 "data/maps/CinnabarIsland/scripts.pory"
	releaseall
# 411 "data/maps/CinnabarIsland/scripts.pory"
	end
