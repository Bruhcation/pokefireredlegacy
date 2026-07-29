# 1 "data/maps/PalletTown/scripts.pory"

# 2 "data/maps/PalletTown/scripts.pory"
.equ LOCALID_SIGN_LADY, 1
# 3 "data/maps/PalletTown/scripts.pory"
.equ LOCALID_PROF_OAK,  3
# 4 "data/maps/PalletTown/scripts.pory"

# 5 "data/maps/PalletTown/scripts.pory"
.equ SIGN_LADY_READY, VAR_TEMP_2
# 6 "data/maps/PalletTown/scripts.pory"

# 7 "data/maps/PalletTown/scripts.pory"
PalletTown_MapScripts::
# 8 "data/maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_OnTransition
# 9 "data/maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_OnFrame
# 10 "data/maps/PalletTown/scripts.pory"
	.byte 0
# 11 "data/maps/PalletTown/scripts.pory"

# 12 "data/maps/PalletTown/scripts.pory"
PalletTown_OnTransition::
# 13 "data/maps/PalletTown/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_PALLET_TOWN
# 14 "data/maps/PalletTown/scripts.pory"
	call_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_TryReadySignLady
# 15 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 0, PalletTown_EventScript_SetSignLadyPos
# 16 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_SetSignLadyDone
# 17 "data/maps/PalletTown/scripts.pory"
	end
# 18 "data/maps/PalletTown/scripts.pory"

# 19 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_TryReadySignLady::
# 20 "data/maps/PalletTown/scripts.pory"
	goto_if_unset FLAG_OPENED_START_MENU, EventScript_Return
# 21 "data/maps/PalletTown/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, EventScript_Return
# 22 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 23 "data/maps/PalletTown/scripts.pory"
	return
# 24 "data/maps/PalletTown/scripts.pory"

# 25 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SetSignLadyDone::
# 26 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2
# 27 "data/maps/PalletTown/scripts.pory"
	return
# 28 "data/maps/PalletTown/scripts.pory"

# 29 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SetSignLadyPos::
# 30 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_MoveSignLadyToRouteEntrance
# 31 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_SIGN_LADY, 5, 15
# 32 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_SIGN_LADY, MOVEMENT_TYPE_FACE_UP
# 33 "data/maps/PalletTown/scripts.pory"
	return
# 34 "data/maps/PalletTown/scripts.pory"

# 35 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_MoveSignLadyToRouteEntrance::
# 36 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_SIGN_LADY, 12, 2
# 37 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_SIGN_LADY, MOVEMENT_TYPE_FACE_DOWN
# 38 "data/maps/PalletTown/scripts.pory"
	setvar SIGN_LADY_READY, TRUE
# 39 "data/maps/PalletTown/scripts.pory"
	return
# 40 "data/maps/PalletTown/scripts.pory"

# 41 "data/maps/PalletTown/scripts.pory"
PalletTown_OnFrame::
# 42 "data/maps/PalletTown/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_OAK, 2, PalletTown_EventScript_OakRatingScene
# 43 "data/maps/PalletTown/scripts.pory"
	.2byte 0
# 44 "data/maps/PalletTown/scripts.pory"

# 45 "data/maps/PalletTown/scripts.pory"
@ Oak approaches player after exiting their house post Elite Four to check if they should receieve the National Dex
# 46 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakRatingScene::
# 47 "data/maps/PalletTown/scripts.pory"
	lockall
# 48 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 49 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PROF_OAK, 14, 14
# 50 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PROF_OAK, MOVEMENT_TYPE_FACE_LEFT
# 51 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_PROF_OAK
# 52 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToPlayersDoor
# 53 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 54 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_IS_CHAMPION
# 55 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_ADMIN
# 56 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_ADMIN2
# 57 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_JANINE
# 58 "data/maps/PalletTown/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_EventScript_NotBeenToOneIslandYet
# 59 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakLetMeSeePokedex
# 60 "data/maps/PalletTown/scripts.pory"
	setvar VAR_0x8004, 0
# 61 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_OAK
# 62 "data/maps/PalletTown/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 63 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 64 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 65 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 66 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 67 "data/maps/PalletTown/scripts.pory"
	goto_if_lt VAR_0x8009, 1, PalletTown_EventScript_NotEnoughMonsForNationalDex
# 68 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXImpressiveFollowMe
# 69 "data/maps/PalletTown/scripts.pory"
	closemessage
# 70 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 71 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabFromHouse
# 72 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToLabFromHouse
# 73 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 74 "data/maps/PalletTown/scripts.pory"
	opendoor 16, 13
# 75 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 76 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterLab
# 77 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 78 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 79 "data/maps/PalletTown/scripts.pory"
	closedoor 16, 13
# 80 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 81 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7
# 82 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 83 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 84 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 85 "data/maps/PalletTown/scripts.pory"
	waitstate
# 86 "data/maps/PalletTown/scripts.pory"
	releaseall
# 87 "data/maps/PalletTown/scripts.pory"
	end
# 88 "data/maps/PalletTown/scripts.pory"

# 89 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_EndOakRatingScene::
# 90 "data/maps/PalletTown/scripts.pory"
	closemessage
# 91 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakExit
# 92 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 93 "data/maps/PalletTown/scripts.pory"
	removeobject LOCALID_PROF_OAK
# 94 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 95 "data/maps/PalletTown/scripts.pory"
	releaseall
# 96 "data/maps/PalletTown/scripts.pory"
	end
# 97 "data/maps/PalletTown/scripts.pory"

# 98 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_NotEnoughMonsForNationalDex::
# 99 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXPuttingInHonestEffort
# 100 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
# 101 "data/maps/PalletTown/scripts.pory"
	end
# 102 "data/maps/PalletTown/scripts.pory"

# 103 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_NotBeenToOneIslandYet::
# 104 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakYouEnjoyingTraveling
# 105 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
# 106 "data/maps/PalletTown/scripts.pory"
	end
# 107 "data/maps/PalletTown/scripts.pory"

# 108 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToPlayersDoor::
# 109 "data/maps/PalletTown/scripts.pory"
	walk_left
# 110 "data/maps/PalletTown/scripts.pory"
	walk_left
# 111 "data/maps/PalletTown/scripts.pory"
	walk_left
# 112 "data/maps/PalletTown/scripts.pory"
	walk_up
# 113 "data/maps/PalletTown/scripts.pory"
	walk_up
# 114 "data/maps/PalletTown/scripts.pory"
	walk_up
# 115 "data/maps/PalletTown/scripts.pory"
	walk_up
# 116 "data/maps/PalletTown/scripts.pory"
	walk_up
# 117 "data/maps/PalletTown/scripts.pory"
	walk_left
# 118 "data/maps/PalletTown/scripts.pory"
	walk_left
# 119 "data/maps/PalletTown/scripts.pory"
	walk_left
# 120 "data/maps/PalletTown/scripts.pory"
	walk_left
# 121 "data/maps/PalletTown/scripts.pory"
	walk_left
# 122 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 123 "data/maps/PalletTown/scripts.pory"
	step_end
# 124 "data/maps/PalletTown/scripts.pory"

# 125 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakExit::
# 126 "data/maps/PalletTown/scripts.pory"
	walk_right
# 127 "data/maps/PalletTown/scripts.pory"
	walk_right
# 128 "data/maps/PalletTown/scripts.pory"
	walk_right
# 129 "data/maps/PalletTown/scripts.pory"
	walk_right
# 130 "data/maps/PalletTown/scripts.pory"
	walk_right
# 131 "data/maps/PalletTown/scripts.pory"
	walk_down
# 132 "data/maps/PalletTown/scripts.pory"
	walk_down
# 133 "data/maps/PalletTown/scripts.pory"
	walk_down
# 134 "data/maps/PalletTown/scripts.pory"
	walk_down
# 135 "data/maps/PalletTown/scripts.pory"
	walk_down
# 136 "data/maps/PalletTown/scripts.pory"
	walk_right
# 137 "data/maps/PalletTown/scripts.pory"
	walk_right
# 138 "data/maps/PalletTown/scripts.pory"
	walk_right
# 139 "data/maps/PalletTown/scripts.pory"
	step_end
# 140 "data/maps/PalletTown/scripts.pory"

# 141 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabFromHouse::
# 142 "data/maps/PalletTown/scripts.pory"
	walk_right
# 143 "data/maps/PalletTown/scripts.pory"
	walk_right
# 144 "data/maps/PalletTown/scripts.pory"
	walk_right
# 145 "data/maps/PalletTown/scripts.pory"
	walk_right
# 146 "data/maps/PalletTown/scripts.pory"
	walk_right
# 147 "data/maps/PalletTown/scripts.pory"
	walk_down
# 148 "data/maps/PalletTown/scripts.pory"
	walk_down
# 149 "data/maps/PalletTown/scripts.pory"
	walk_down
# 150 "data/maps/PalletTown/scripts.pory"
	walk_down
# 151 "data/maps/PalletTown/scripts.pory"
	walk_down
# 152 "data/maps/PalletTown/scripts.pory"
	walk_right
# 153 "data/maps/PalletTown/scripts.pory"
	walk_right
# 154 "data/maps/PalletTown/scripts.pory"
	walk_right
# 155 "data/maps/PalletTown/scripts.pory"
	walk_right
# 156 "data/maps/PalletTown/scripts.pory"
	walk_right
# 157 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 158 "data/maps/PalletTown/scripts.pory"
	step_end
# 159 "data/maps/PalletTown/scripts.pory"

# 160 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabFromHouse::
# 161 "data/maps/PalletTown/scripts.pory"
	walk_down
# 162 "data/maps/PalletTown/scripts.pory"
	walk_right
# 163 "data/maps/PalletTown/scripts.pory"
	walk_right
# 164 "data/maps/PalletTown/scripts.pory"
	walk_right
# 165 "data/maps/PalletTown/scripts.pory"
	walk_right
# 166 "data/maps/PalletTown/scripts.pory"
	walk_right
# 167 "data/maps/PalletTown/scripts.pory"
	walk_down
# 168 "data/maps/PalletTown/scripts.pory"
	walk_down
# 169 "data/maps/PalletTown/scripts.pory"
	walk_down
# 170 "data/maps/PalletTown/scripts.pory"
	walk_down
# 171 "data/maps/PalletTown/scripts.pory"
	walk_down
# 172 "data/maps/PalletTown/scripts.pory"
	walk_right
# 173 "data/maps/PalletTown/scripts.pory"
	walk_right
# 174 "data/maps/PalletTown/scripts.pory"
	walk_right
# 175 "data/maps/PalletTown/scripts.pory"
	walk_right
# 176 "data/maps/PalletTown/scripts.pory"
	step_end
# 177 "data/maps/PalletTown/scripts.pory"

# 178 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakTriggerLeft::
# 179 "data/maps/PalletTown/scripts.pory"
	lockall
# 180 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 0
# 181 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
# 182 "data/maps/PalletTown/scripts.pory"
	end
# 183 "data/maps/PalletTown/scripts.pory"

# 184 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakTriggerRight::
# 185 "data/maps/PalletTown/scripts.pory"
	lockall
# 186 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 187 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
# 188 "data/maps/PalletTown/scripts.pory"
	end
# 189 "data/maps/PalletTown/scripts.pory"

# 190 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakTrigger::
# 191 "data/maps/PalletTown/scripts.pory"
	famechecker FAMECHECKER_OAK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 192 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 193 "data/maps/PalletTown/scripts.pory"
	delay 30
# 194 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_OAK, 0
# 195 "data/maps/PalletTown/scripts.pory"
	message PalletTown_Text_OakDontGoOut
# 196 "data/maps/PalletTown/scripts.pory"
	waitmessage
# 197 "data/maps/PalletTown/scripts.pory"
	delay 85
# 198 "data/maps/PalletTown/scripts.pory"
	closemessage
# 199 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 200 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 201 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 202 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 203 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 204 "data/maps/PalletTown/scripts.pory"
	delay 30
# 205 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_PROF_OAK
# 206 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakEnterLeft
# 207 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakEnterRight
# 208 "data/maps/PalletTown/scripts.pory"
	delay 30
# 209 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakGrassUnsafeNeedMon
# 210 "data/maps/PalletTown/scripts.pory"
	closemessage
# 211 "data/maps/PalletTown/scripts.pory"
	delay 30
# 212 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakLeadPlayerToLabLeft
# 213 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakLeadPlayerToLabRight
# 214 "data/maps/PalletTown/scripts.pory"
	opendoor 16, 13
# 215 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 216 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterLab
# 217 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 218 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 219 "data/maps/PalletTown/scripts.pory"
	closedoor 16, 13
# 220 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 221 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
# 222 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 223 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
# 224 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 225 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 226 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 227 "data/maps/PalletTown/scripts.pory"
	waitstate
# 228 "data/maps/PalletTown/scripts.pory"
	releaseall
# 229 "data/maps/PalletTown/scripts.pory"
	end
# 230 "data/maps/PalletTown/scripts.pory"

# 231 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakEnterLeft::
# 232 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterLeft
# 233 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 234 "data/maps/PalletTown/scripts.pory"
	return
# 235 "data/maps/PalletTown/scripts.pory"

# 236 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakEnterRight::
# 237 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterRight
# 238 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 239 "data/maps/PalletTown/scripts.pory"
	return
# 240 "data/maps/PalletTown/scripts.pory"

# 241 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakLeadPlayerToLabLeft::
# 242 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToLabLeft
# 243 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabLeft
# 244 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 245 "data/maps/PalletTown/scripts.pory"
	return
# 246 "data/maps/PalletTown/scripts.pory"

# 247 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakLeadPlayerToLabRight::
# 248 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToLabRight
# 249 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabRight
# 250 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 251 "data/maps/PalletTown/scripts.pory"
	return
# 252 "data/maps/PalletTown/scripts.pory"

# 253 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLeft::
# 254 "data/maps/PalletTown/scripts.pory"
	walk_up
# 255 "data/maps/PalletTown/scripts.pory"
	walk_up
# 256 "data/maps/PalletTown/scripts.pory"
	walk_right
# 257 "data/maps/PalletTown/scripts.pory"
	walk_up
# 258 "data/maps/PalletTown/scripts.pory"
	walk_up
# 259 "data/maps/PalletTown/scripts.pory"
	walk_right
# 260 "data/maps/PalletTown/scripts.pory"
	walk_up
# 261 "data/maps/PalletTown/scripts.pory"
	walk_up
# 262 "data/maps/PalletTown/scripts.pory"
	step_end
# 263 "data/maps/PalletTown/scripts.pory"

# 264 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterRight::
# 265 "data/maps/PalletTown/scripts.pory"
	walk_right
# 266 "data/maps/PalletTown/scripts.pory"
	walk_up
# 267 "data/maps/PalletTown/scripts.pory"
	walk_up
# 268 "data/maps/PalletTown/scripts.pory"
	walk_right
# 269 "data/maps/PalletTown/scripts.pory"
	walk_up
# 270 "data/maps/PalletTown/scripts.pory"
	walk_up
# 271 "data/maps/PalletTown/scripts.pory"
	walk_right
# 272 "data/maps/PalletTown/scripts.pory"
	walk_up
# 273 "data/maps/PalletTown/scripts.pory"
	walk_up
# 274 "data/maps/PalletTown/scripts.pory"
	step_end
# 275 "data/maps/PalletTown/scripts.pory"

# 276 "data/maps/PalletTown/scripts.pory"
	.macro walk_to_lab
# 277 "data/maps/PalletTown/scripts.pory"
	walk_left
# 278 "data/maps/PalletTown/scripts.pory"
	walk_down
# 279 "data/maps/PalletTown/scripts.pory"
	walk_down
# 280 "data/maps/PalletTown/scripts.pory"
	walk_down
# 281 "data/maps/PalletTown/scripts.pory"
	walk_down
# 282 "data/maps/PalletTown/scripts.pory"
	walk_down
# 283 "data/maps/PalletTown/scripts.pory"
	walk_down
# 284 "data/maps/PalletTown/scripts.pory"
	walk_down
# 285 "data/maps/PalletTown/scripts.pory"
	walk_down
# 286 "data/maps/PalletTown/scripts.pory"
	walk_down
# 287 "data/maps/PalletTown/scripts.pory"
	walk_down
# 288 "data/maps/PalletTown/scripts.pory"
	walk_down
# 289 "data/maps/PalletTown/scripts.pory"
	walk_right
# 290 "data/maps/PalletTown/scripts.pory"
	walk_right
# 291 "data/maps/PalletTown/scripts.pory"
	walk_right
# 292 "data/maps/PalletTown/scripts.pory"
	walk_right
# 293 "data/maps/PalletTown/scripts.pory"
	.endm
# 294 "data/maps/PalletTown/scripts.pory"

# 295 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabLeft::
# 296 "data/maps/PalletTown/scripts.pory"
	walk_down
# 297 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 298 "data/maps/PalletTown/scripts.pory"
	walk_right
# 299 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 300 "data/maps/PalletTown/scripts.pory"
	step_end
# 301 "data/maps/PalletTown/scripts.pory"

# 302 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabRight::
# 303 "data/maps/PalletTown/scripts.pory"
	walk_down
# 304 "data/maps/PalletTown/scripts.pory"
	walk_left
# 305 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 306 "data/maps/PalletTown/scripts.pory"
	walk_right
# 307 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 308 "data/maps/PalletTown/scripts.pory"
	step_end
# 309 "data/maps/PalletTown/scripts.pory"

# 310 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLab::
# 311 "data/maps/PalletTown/scripts.pory"
	walk_up
# 312 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 313 "data/maps/PalletTown/scripts.pory"
	step_end
# 314 "data/maps/PalletTown/scripts.pory"

# 315 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabLeft::
# 316 "data/maps/PalletTown/scripts.pory"
	walk_down
# 317 "data/maps/PalletTown/scripts.pory"
	walk_down
# 318 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 319 "data/maps/PalletTown/scripts.pory"
	step_end
# 320 "data/maps/PalletTown/scripts.pory"

# 321 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabRight::
# 322 "data/maps/PalletTown/scripts.pory"
	walk_down
# 323 "data/maps/PalletTown/scripts.pory"
	walk_down
# 324 "data/maps/PalletTown/scripts.pory"
	walk_left
# 325 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 326 "data/maps/PalletTown/scripts.pory"
	step_end
# 327 "data/maps/PalletTown/scripts.pory"

# 328 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerEnterLab::
# 329 "data/maps/PalletTown/scripts.pory"
	walk_right
# 330 "data/maps/PalletTown/scripts.pory"
	walk_up
# 331 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 332 "data/maps/PalletTown/scripts.pory"
	step_end
# 333 "data/maps/PalletTown/scripts.pory"

# 334 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLady::
# 335 "data/maps/PalletTown/scripts.pory"
	lock
# 336 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2, PalletTown_EventScript_SignLadyDone
# 337 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_SignLadyJustShowedSign
# 338 "data/maps/PalletTown/scripts.pory"
	goto_if_eq SIGN_LADY_READY, TRUE, PalletTown_EventScript_SignLadyStartShowSign
# 339 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_TEMP_2, PalletTown_EventScript_SignLadyGoReadSign
# 340 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_HmmIsThatRight
# 341 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_FacePlayer
# 342 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 343 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 344 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_ExclamationMark
# 345 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 346 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_Delay48
# 347 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 348 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OhLookLook
# 349 "data/maps/PalletTown/scripts.pory"
	closemessage
# 350 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayRight
# 351 "data/maps/PalletTown/scripts.pory"
	call_if_ne VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayLeft
# 352 "data/maps/PalletTown/scripts.pory"
	copyobjectxytoperm LOCALID_SIGN_LADY
# 353 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_TEMP_2
# 354 "data/maps/PalletTown/scripts.pory"
	release
# 355 "data/maps/PalletTown/scripts.pory"
	end
# 356 "data/maps/PalletTown/scripts.pory"

# 357 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyMoveOutOfWayRight::
# 358 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayRight
# 359 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 360 "data/maps/PalletTown/scripts.pory"
	return
# 361 "data/maps/PalletTown/scripts.pory"

# 362 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyMoveOutOfWayLeft::
# 363 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayLeft
# 364 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 365 "data/maps/PalletTown/scripts.pory"
	return
# 366 "data/maps/PalletTown/scripts.pory"

# 367 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyDone::
# 368 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_FacePlayer
# 369 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 370 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RaisingMonsToo
# 371 "data/maps/PalletTown/scripts.pory"
	release
# 372 "data/maps/PalletTown/scripts.pory"
	end
# 373 "data/maps/PalletTown/scripts.pory"

# 374 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyGoReadSign::
# 375 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_FacePlayer
# 376 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 377 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_ReadItReadIt
# 378 "data/maps/PalletTown/scripts.pory"
	release
# 379 "data/maps/PalletTown/scripts.pory"
	end
# 380 "data/maps/PalletTown/scripts.pory"

# 381 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyJustShowedSign::
# 382 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_FacePlayer
# 383 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 384 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_SignsAreUsefulArentThey
# 385 "data/maps/PalletTown/scripts.pory"
	release
# 386 "data/maps/PalletTown/scripts.pory"
	end
# 387 "data/maps/PalletTown/scripts.pory"

# 388 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayRight::
# 389 "data/maps/PalletTown/scripts.pory"
	walk_right
# 390 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_left
# 391 "data/maps/PalletTown/scripts.pory"
	step_end
# 392 "data/maps/PalletTown/scripts.pory"

# 393 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayLeft::
# 394 "data/maps/PalletTown/scripts.pory"
	walk_left
# 395 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_right
# 396 "data/maps/PalletTown/scripts.pory"
	step_end
# 397 "data/maps/PalletTown/scripts.pory"

# 398 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_FatMan::
# 399 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CanStoreItemsAndMonsInPC, MSGBOX_NPC
# 400 "data/maps/PalletTown/scripts.pory"
	end
# 401 "data/maps/PalletTown/scripts.pory"

# 402 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OaksLabSign::
# 403 "data/maps/PalletTown/scripts.pory"
	lockall
# 404 "data/maps/PalletTown/scripts.pory"
	famechecker FAMECHECKER_OAK, 0
# 405 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakPokemonResearchLab
# 406 "data/maps/PalletTown/scripts.pory"
	releaseall
# 407 "data/maps/PalletTown/scripts.pory"
	end
# 408 "data/maps/PalletTown/scripts.pory"

# 409 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_PlayersHouseSign::
# 410 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PlayersHouse, MSGBOX_SIGN
# 411 "data/maps/PalletTown/scripts.pory"
	end
# 412 "data/maps/PalletTown/scripts.pory"

# 413 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_RivalsHouseSign::
# 414 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RivalsHouse, MSGBOX_SIGN
# 415 "data/maps/PalletTown/scripts.pory"
	end
# 416 "data/maps/PalletTown/scripts.pory"

# 417 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_TownSign::
# 418 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_TownSign, MSGBOX_SIGN
# 419 "data/maps/PalletTown/scripts.pory"
	end
# 420 "data/maps/PalletTown/scripts.pory"

# 421 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_TrainerTips::
# 422 "data/maps/PalletTown/scripts.pory"
	lockall
# 423 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenu
# 424 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 425 "data/maps/PalletTown/scripts.pory"
	releaseall
# 426 "data/maps/PalletTown/scripts.pory"
	end
# 427 "data/maps/PalletTown/scripts.pory"

# 428 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyTrigger::
# 429 "data/maps/PalletTown/scripts.pory"
	lockall
# 430 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_WalkInPlaceFasterRight
# 431 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 432 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 433 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 434 "data/maps/PalletTown/scripts.pory"
	releaseall
# 435 "data/maps/PalletTown/scripts.pory"
	end
# 436 "data/maps/PalletTown/scripts.pory"

# 437 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyShowSign::
# 438 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 439 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_LookCopiedTrainerTipsSign
# 440 "data/maps/PalletTown/scripts.pory"
	closemessage
# 441 "data/maps/PalletTown/scripts.pory"
	delay 20
# 442 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 443 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_OPENED_START_MENU
# 444 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 445 "data/maps/PalletTown/scripts.pory"
	setvar SIGN_LADY_READY, FALSE
# 446 "data/maps/PalletTown/scripts.pory"
	special SetWalkingIntoSignVars
# 447 "data/maps/PalletTown/scripts.pory"
	special DisableMsgBoxWalkaway
# 448 "data/maps/PalletTown/scripts.pory"
	signmsg
# 449 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenuCopy
# 450 "data/maps/PalletTown/scripts.pory"
	normalmsg
# 451 "data/maps/PalletTown/scripts.pory"
	return
# 452 "data/maps/PalletTown/scripts.pory"

# 453 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyStartShowSign::
# 454 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_FacePlayer
# 455 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 456 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 457 "data/maps/PalletTown/scripts.pory"
	release
# 458 "data/maps/PalletTown/scripts.pory"
	end
# 459 "data/maps/PalletTown/scripts.pory"

# 460 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_Science::
# 461 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_EventScript_Hoenn
# 462 "data/maps/PalletTown/scripts.pory"
	waitmessage
# 463 "data/maps/PalletTown/scripts.pory"
	setvar VAR_0x8004, SPECIES_TREECKO
# 464 "data/maps/PalletTown/scripts.pory"
	special SetSeenMon
# 465 "data/maps/PalletTown/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 466 "data/maps/PalletTown/scripts.pory"
	waitbuttonpress
# 467 "data/maps/PalletTown/scripts.pory"
	hidemonpic
# 468 "data/maps/PalletTown/scripts.pory"
	setvar VAR_0x8004, SPECIES_TORCHIC
# 469 "data/maps/PalletTown/scripts.pory"
	special SetSeenMon
# 470 "data/maps/PalletTown/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 471 "data/maps/PalletTown/scripts.pory"
	waitbuttonpress
# 472 "data/maps/PalletTown/scripts.pory"
	hidemonpic
# 473 "data/maps/PalletTown/scripts.pory"
	setvar VAR_0x8004, SPECIES_MUDKIP
# 474 "data/maps/PalletTown/scripts.pory"
	special SetSeenMon
# 475 "data/maps/PalletTown/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 476 "data/maps/PalletTown/scripts.pory"
	waitbuttonpress
# 477 "data/maps/PalletTown/scripts.pory"
	hidemonpic
# 478 "data/maps/PalletTown/scripts.pory"
	releaseall
# 479 "data/maps/PalletTown/scripts.pory"
	end
# 480 "data/maps/PalletTown/scripts.pory"

# 481 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_Hoenn::
# 482 "data/maps/PalletTown/scripts.pory"
	.string "I've have came here to KANTO\n"
# 483 "data/maps/PalletTown/scripts.pory"
	.string "to show PROFESSOR OAK\l"
# 484 "data/maps/PalletTown/scripts.pory"
	.string "some special POKEMON from\l"
# 485 "data/maps/PalletTown/scripts.pory"
	.string "the HOENN region.\p"
# 486 "data/maps/PalletTown/scripts.pory"
	.string "I'll lend you a look\n"
# 487 "data/maps/PalletTown/scripts.pory"
	.string "of them!$"
