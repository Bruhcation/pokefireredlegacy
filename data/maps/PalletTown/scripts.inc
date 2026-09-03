# 1 "data/maps/PalletTown/scripts.pory"

# 2 "data/maps/PalletTown/scripts.pory"
.equ LOCALID_SIGN_LADY, 1
# 3 "data/maps/PalletTown/scripts.pory"
.equ LOCALID_PROF_OAK,  3
# 4 "data/maps/PalletTown/scripts.pory"
.equ LOCALID_ROCK,      5
# 5 "data/maps/PalletTown/scripts.pory"

# 6 "data/maps/PalletTown/scripts.pory"
.equ SIGN_LADY_READY, VAR_TEMP_2
# 7 "data/maps/PalletTown/scripts.pory"

# 8 "data/maps/PalletTown/scripts.pory"
PalletTown_MapScripts::
# 9 "data/maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_OnTransition
# 10 "data/maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_OnFrame
# 11 "data/maps/PalletTown/scripts.pory"
	.byte 0
# 12 "data/maps/PalletTown/scripts.pory"

# 13 "data/maps/PalletTown/scripts.pory"
PalletTown_OnTransition::
# 14 "data/maps/PalletTown/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_PALLET_TOWN
# 15 "data/maps/PalletTown/scripts.pory"
	call_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_TryReadySignLady
# 16 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 0, PalletTown_EventScript_SetSignLadyPos
# 17 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_SetSignLadyDone
# 18 "data/maps/PalletTown/scripts.pory"
	call PalletTown_UpdateRock
# 19 "data/maps/PalletTown/scripts.pory"
	end
# 20 "data/maps/PalletTown/scripts.pory"

# 21 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_TryReadySignLady::
# 22 "data/maps/PalletTown/scripts.pory"
	goto_if_unset FLAG_OPENED_START_MENU, EventScript_Return
# 23 "data/maps/PalletTown/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, EventScript_Return
# 24 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 25 "data/maps/PalletTown/scripts.pory"
	return
# 26 "data/maps/PalletTown/scripts.pory"

# 27 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SetSignLadyDone::
# 28 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2
# 29 "data/maps/PalletTown/scripts.pory"
	return
# 30 "data/maps/PalletTown/scripts.pory"

# 31 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SetSignLadyPos::
# 32 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_MoveSignLadyToRouteEntrance
# 33 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_SIGN_LADY, 5, 15
# 34 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_SIGN_LADY, MOVEMENT_TYPE_FACE_UP
# 35 "data/maps/PalletTown/scripts.pory"
	return
# 36 "data/maps/PalletTown/scripts.pory"

# 37 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_MoveSignLadyToRouteEntrance::
# 38 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_SIGN_LADY, 12, 2
# 39 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_SIGN_LADY, MOVEMENT_TYPE_FACE_DOWN
# 40 "data/maps/PalletTown/scripts.pory"
	setvar SIGN_LADY_READY, TRUE
# 41 "data/maps/PalletTown/scripts.pory"
	return
# 42 "data/maps/PalletTown/scripts.pory"

# 43 "data/maps/PalletTown/scripts.pory"
PalletTown_UpdateRock::
# 44 "data/maps/PalletTown/scripts.pory"
	random 99
# 45 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_RESULT, 67, PalletTown_ShowRock
# 46 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_ROCKBYTHEWATER
# 47 "data/maps/PalletTown/scripts.pory"
	removeobject LOCALID_ROCK
# 48 "data/maps/PalletTown/scripts.pory"
	return
# 49 "data/maps/PalletTown/scripts.pory"

# 50 "data/maps/PalletTown/scripts.pory"
PalletTown_ShowRock::
# 51 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_ROCKBYTHEWATER
# 52 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_ROCK
# 53 "data/maps/PalletTown/scripts.pory"
	end
# 54 "data/maps/PalletTown/scripts.pory"

# 55 "data/maps/PalletTown/scripts.pory"
PalletTown_OnFrame::
# 56 "data/maps/PalletTown/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_OAK, 2, PalletTown_EventScript_OakRatingScene
# 57 "data/maps/PalletTown/scripts.pory"
	.2byte 0
# 58 "data/maps/PalletTown/scripts.pory"

# 59 "data/maps/PalletTown/scripts.pory"
@ Oak approaches player after exiting their house post Elite Four to check if they should receieve the National Dex
# 60 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakRatingScene::
# 61 "data/maps/PalletTown/scripts.pory"
	lockall
# 62 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 63 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PROF_OAK, 14, 14
# 64 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PROF_OAK, MOVEMENT_TYPE_FACE_LEFT
# 65 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_PROF_OAK
# 66 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToPlayersDoor
# 67 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 68 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_IS_CHAMPION
# 69 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_ADMIN
# 70 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_ADMIN2
# 71 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_JANINE
# 72 "data/maps/PalletTown/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_EventScript_NotBeenToOneIslandYet
# 73 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakLetMeSeePokedex
# 74 "data/maps/PalletTown/scripts.pory"
	setvar VAR_0x8004, 0
# 75 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_OAK
# 76 "data/maps/PalletTown/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 77 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 78 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 79 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 80 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 81 "data/maps/PalletTown/scripts.pory"
	goto_if_lt VAR_0x8009, 1, PalletTown_EventScript_NotEnoughMonsForNationalDex
# 82 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXImpressiveFollowMe
# 83 "data/maps/PalletTown/scripts.pory"
	closemessage
# 84 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 85 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabFromHouse
# 86 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToLabFromHouse
# 87 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 88 "data/maps/PalletTown/scripts.pory"
	opendoor 16, 13
# 89 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 90 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterLab
# 91 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 92 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 93 "data/maps/PalletTown/scripts.pory"
	closedoor 16, 13
# 94 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 95 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7
# 96 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 97 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 98 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 99 "data/maps/PalletTown/scripts.pory"
	waitstate
# 100 "data/maps/PalletTown/scripts.pory"
	releaseall
# 101 "data/maps/PalletTown/scripts.pory"
	end
# 102 "data/maps/PalletTown/scripts.pory"

# 103 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_EndOakRatingScene::
# 104 "data/maps/PalletTown/scripts.pory"
	closemessage
# 105 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakExit
# 106 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 107 "data/maps/PalletTown/scripts.pory"
	removeobject LOCALID_PROF_OAK
# 108 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 109 "data/maps/PalletTown/scripts.pory"
	releaseall
# 110 "data/maps/PalletTown/scripts.pory"
	end
# 111 "data/maps/PalletTown/scripts.pory"

# 112 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_NotEnoughMonsForNationalDex::
# 113 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXPuttingInHonestEffort
# 114 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
# 115 "data/maps/PalletTown/scripts.pory"
	end
# 116 "data/maps/PalletTown/scripts.pory"

# 117 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_NotBeenToOneIslandYet::
# 118 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakYouEnjoyingTraveling
# 119 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
# 120 "data/maps/PalletTown/scripts.pory"
	end
# 121 "data/maps/PalletTown/scripts.pory"

# 122 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToPlayersDoor::
# 123 "data/maps/PalletTown/scripts.pory"
	walk_left
# 124 "data/maps/PalletTown/scripts.pory"
	walk_left
# 125 "data/maps/PalletTown/scripts.pory"
	walk_left
# 126 "data/maps/PalletTown/scripts.pory"
	walk_up
# 127 "data/maps/PalletTown/scripts.pory"
	walk_up
# 128 "data/maps/PalletTown/scripts.pory"
	walk_up
# 129 "data/maps/PalletTown/scripts.pory"
	walk_up
# 130 "data/maps/PalletTown/scripts.pory"
	walk_up
# 131 "data/maps/PalletTown/scripts.pory"
	walk_left
# 132 "data/maps/PalletTown/scripts.pory"
	walk_left
# 133 "data/maps/PalletTown/scripts.pory"
	walk_left
# 134 "data/maps/PalletTown/scripts.pory"
	walk_left
# 135 "data/maps/PalletTown/scripts.pory"
	walk_left
# 136 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 137 "data/maps/PalletTown/scripts.pory"
	step_end
# 138 "data/maps/PalletTown/scripts.pory"

# 139 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakExit::
# 140 "data/maps/PalletTown/scripts.pory"
	walk_right
# 141 "data/maps/PalletTown/scripts.pory"
	walk_right
# 142 "data/maps/PalletTown/scripts.pory"
	walk_right
# 143 "data/maps/PalletTown/scripts.pory"
	walk_right
# 144 "data/maps/PalletTown/scripts.pory"
	walk_right
# 145 "data/maps/PalletTown/scripts.pory"
	walk_down
# 146 "data/maps/PalletTown/scripts.pory"
	walk_down
# 147 "data/maps/PalletTown/scripts.pory"
	walk_down
# 148 "data/maps/PalletTown/scripts.pory"
	walk_down
# 149 "data/maps/PalletTown/scripts.pory"
	walk_down
# 150 "data/maps/PalletTown/scripts.pory"
	walk_right
# 151 "data/maps/PalletTown/scripts.pory"
	walk_right
# 152 "data/maps/PalletTown/scripts.pory"
	walk_right
# 153 "data/maps/PalletTown/scripts.pory"
	step_end
# 154 "data/maps/PalletTown/scripts.pory"

# 155 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabFromHouse::
# 156 "data/maps/PalletTown/scripts.pory"
	walk_right
# 157 "data/maps/PalletTown/scripts.pory"
	walk_right
# 158 "data/maps/PalletTown/scripts.pory"
	walk_right
# 159 "data/maps/PalletTown/scripts.pory"
	walk_right
# 160 "data/maps/PalletTown/scripts.pory"
	walk_right
# 161 "data/maps/PalletTown/scripts.pory"
	walk_down
# 162 "data/maps/PalletTown/scripts.pory"
	walk_down
# 163 "data/maps/PalletTown/scripts.pory"
	walk_down
# 164 "data/maps/PalletTown/scripts.pory"
	walk_down
# 165 "data/maps/PalletTown/scripts.pory"
	walk_down
# 166 "data/maps/PalletTown/scripts.pory"
	walk_right
# 167 "data/maps/PalletTown/scripts.pory"
	walk_right
# 168 "data/maps/PalletTown/scripts.pory"
	walk_right
# 169 "data/maps/PalletTown/scripts.pory"
	walk_right
# 170 "data/maps/PalletTown/scripts.pory"
	walk_right
# 171 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 172 "data/maps/PalletTown/scripts.pory"
	step_end
# 173 "data/maps/PalletTown/scripts.pory"

# 174 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabFromHouse::
# 175 "data/maps/PalletTown/scripts.pory"
	walk_down
# 176 "data/maps/PalletTown/scripts.pory"
	walk_right
# 177 "data/maps/PalletTown/scripts.pory"
	walk_right
# 178 "data/maps/PalletTown/scripts.pory"
	walk_right
# 179 "data/maps/PalletTown/scripts.pory"
	walk_right
# 180 "data/maps/PalletTown/scripts.pory"
	walk_right
# 181 "data/maps/PalletTown/scripts.pory"
	walk_down
# 182 "data/maps/PalletTown/scripts.pory"
	walk_down
# 183 "data/maps/PalletTown/scripts.pory"
	walk_down
# 184 "data/maps/PalletTown/scripts.pory"
	walk_down
# 185 "data/maps/PalletTown/scripts.pory"
	walk_down
# 186 "data/maps/PalletTown/scripts.pory"
	walk_right
# 187 "data/maps/PalletTown/scripts.pory"
	walk_right
# 188 "data/maps/PalletTown/scripts.pory"
	walk_right
# 189 "data/maps/PalletTown/scripts.pory"
	walk_right
# 190 "data/maps/PalletTown/scripts.pory"
	step_end
# 191 "data/maps/PalletTown/scripts.pory"

# 192 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakTriggerLeft::
# 193 "data/maps/PalletTown/scripts.pory"
	lockall
# 194 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 0
# 195 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
# 196 "data/maps/PalletTown/scripts.pory"
	end
# 197 "data/maps/PalletTown/scripts.pory"

# 198 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakTriggerRight::
# 199 "data/maps/PalletTown/scripts.pory"
	lockall
# 200 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 201 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
# 202 "data/maps/PalletTown/scripts.pory"
	end
# 203 "data/maps/PalletTown/scripts.pory"

# 204 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakTrigger::
# 205 "data/maps/PalletTown/scripts.pory"
	famechecker FAMECHECKER_OAK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 206 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 207 "data/maps/PalletTown/scripts.pory"
	delay 30
# 208 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_OAK, 0
# 209 "data/maps/PalletTown/scripts.pory"
	message PalletTown_Text_OakDontGoOut
# 210 "data/maps/PalletTown/scripts.pory"
	waitmessage
# 211 "data/maps/PalletTown/scripts.pory"
	delay 85
# 212 "data/maps/PalletTown/scripts.pory"
	closemessage
# 213 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 214 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 215 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 216 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 217 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 218 "data/maps/PalletTown/scripts.pory"
	delay 30
# 219 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_PROF_OAK
# 220 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakEnterLeft
# 221 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakEnterRight
# 222 "data/maps/PalletTown/scripts.pory"
	delay 30
# 223 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakGrassUnsafeNeedMon
# 224 "data/maps/PalletTown/scripts.pory"
	closemessage
# 225 "data/maps/PalletTown/scripts.pory"
	delay 30
# 226 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakLeadPlayerToLabLeft
# 227 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakLeadPlayerToLabRight
# 228 "data/maps/PalletTown/scripts.pory"
	opendoor 16, 13
# 229 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 230 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterLab
# 231 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 232 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 233 "data/maps/PalletTown/scripts.pory"
	closedoor 16, 13
# 234 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 235 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
# 236 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 237 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
# 238 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 239 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 240 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 241 "data/maps/PalletTown/scripts.pory"
	waitstate
# 242 "data/maps/PalletTown/scripts.pory"
	releaseall
# 243 "data/maps/PalletTown/scripts.pory"
	end
# 244 "data/maps/PalletTown/scripts.pory"

# 245 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakEnterLeft::
# 246 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterLeft
# 247 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 248 "data/maps/PalletTown/scripts.pory"
	return
# 249 "data/maps/PalletTown/scripts.pory"

# 250 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakEnterRight::
# 251 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakEnterRight
# 252 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 253 "data/maps/PalletTown/scripts.pory"
	return
# 254 "data/maps/PalletTown/scripts.pory"

# 255 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakLeadPlayerToLabLeft::
# 256 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToLabLeft
# 257 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabLeft
# 258 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 259 "data/maps/PalletTown/scripts.pory"
	return
# 260 "data/maps/PalletTown/scripts.pory"

# 261 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakLeadPlayerToLabRight::
# 262 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PROF_OAK, PalletTown_Movement_OakWalkToLabRight
# 263 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Movement_PlayerWalkToLabRight
# 264 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 265 "data/maps/PalletTown/scripts.pory"
	return
# 266 "data/maps/PalletTown/scripts.pory"

# 267 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLeft::
# 268 "data/maps/PalletTown/scripts.pory"
	walk_up
# 269 "data/maps/PalletTown/scripts.pory"
	walk_up
# 270 "data/maps/PalletTown/scripts.pory"
	walk_right
# 271 "data/maps/PalletTown/scripts.pory"
	walk_up
# 272 "data/maps/PalletTown/scripts.pory"
	walk_up
# 273 "data/maps/PalletTown/scripts.pory"
	walk_right
# 274 "data/maps/PalletTown/scripts.pory"
	walk_up
# 275 "data/maps/PalletTown/scripts.pory"
	walk_up
# 276 "data/maps/PalletTown/scripts.pory"
	step_end
# 277 "data/maps/PalletTown/scripts.pory"

# 278 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterRight::
# 279 "data/maps/PalletTown/scripts.pory"
	walk_right
# 280 "data/maps/PalletTown/scripts.pory"
	walk_up
# 281 "data/maps/PalletTown/scripts.pory"
	walk_up
# 282 "data/maps/PalletTown/scripts.pory"
	walk_right
# 283 "data/maps/PalletTown/scripts.pory"
	walk_up
# 284 "data/maps/PalletTown/scripts.pory"
	walk_up
# 285 "data/maps/PalletTown/scripts.pory"
	walk_right
# 286 "data/maps/PalletTown/scripts.pory"
	walk_up
# 287 "data/maps/PalletTown/scripts.pory"
	walk_up
# 288 "data/maps/PalletTown/scripts.pory"
	step_end
# 289 "data/maps/PalletTown/scripts.pory"

# 290 "data/maps/PalletTown/scripts.pory"
	.macro walk_to_lab
# 291 "data/maps/PalletTown/scripts.pory"
	walk_left
# 292 "data/maps/PalletTown/scripts.pory"
	walk_down
# 293 "data/maps/PalletTown/scripts.pory"
	walk_down
# 294 "data/maps/PalletTown/scripts.pory"
	walk_down
# 295 "data/maps/PalletTown/scripts.pory"
	walk_down
# 296 "data/maps/PalletTown/scripts.pory"
	walk_down
# 297 "data/maps/PalletTown/scripts.pory"
	walk_down
# 298 "data/maps/PalletTown/scripts.pory"
	walk_down
# 299 "data/maps/PalletTown/scripts.pory"
	walk_down
# 300 "data/maps/PalletTown/scripts.pory"
	walk_down
# 301 "data/maps/PalletTown/scripts.pory"
	walk_down
# 302 "data/maps/PalletTown/scripts.pory"
	walk_down
# 303 "data/maps/PalletTown/scripts.pory"
	walk_right
# 304 "data/maps/PalletTown/scripts.pory"
	walk_right
# 305 "data/maps/PalletTown/scripts.pory"
	walk_right
# 306 "data/maps/PalletTown/scripts.pory"
	walk_right
# 307 "data/maps/PalletTown/scripts.pory"
	.endm
# 308 "data/maps/PalletTown/scripts.pory"

# 309 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabLeft::
# 310 "data/maps/PalletTown/scripts.pory"
	walk_down
# 311 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 312 "data/maps/PalletTown/scripts.pory"
	walk_right
# 313 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 314 "data/maps/PalletTown/scripts.pory"
	step_end
# 315 "data/maps/PalletTown/scripts.pory"

# 316 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabRight::
# 317 "data/maps/PalletTown/scripts.pory"
	walk_down
# 318 "data/maps/PalletTown/scripts.pory"
	walk_left
# 319 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 320 "data/maps/PalletTown/scripts.pory"
	walk_right
# 321 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 322 "data/maps/PalletTown/scripts.pory"
	step_end
# 323 "data/maps/PalletTown/scripts.pory"

# 324 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLab::
# 325 "data/maps/PalletTown/scripts.pory"
	walk_up
# 326 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 327 "data/maps/PalletTown/scripts.pory"
	step_end
# 328 "data/maps/PalletTown/scripts.pory"

# 329 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabLeft::
# 330 "data/maps/PalletTown/scripts.pory"
	walk_down
# 331 "data/maps/PalletTown/scripts.pory"
	walk_down
# 332 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 333 "data/maps/PalletTown/scripts.pory"
	step_end
# 334 "data/maps/PalletTown/scripts.pory"

# 335 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabRight::
# 336 "data/maps/PalletTown/scripts.pory"
	walk_down
# 337 "data/maps/PalletTown/scripts.pory"
	walk_down
# 338 "data/maps/PalletTown/scripts.pory"
	walk_left
# 339 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 340 "data/maps/PalletTown/scripts.pory"
	step_end
# 341 "data/maps/PalletTown/scripts.pory"

# 342 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerEnterLab::
# 343 "data/maps/PalletTown/scripts.pory"
	walk_right
# 344 "data/maps/PalletTown/scripts.pory"
	walk_up
# 345 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 346 "data/maps/PalletTown/scripts.pory"
	step_end
# 347 "data/maps/PalletTown/scripts.pory"

# 348 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLady::
# 349 "data/maps/PalletTown/scripts.pory"
	lock
# 350 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2, PalletTown_EventScript_SignLadyDone
# 351 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_SignLadyJustShowedSign
# 352 "data/maps/PalletTown/scripts.pory"
	goto_if_eq SIGN_LADY_READY, TRUE, PalletTown_EventScript_SignLadyStartShowSign
# 353 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_TEMP_2, PalletTown_EventScript_SignLadyGoReadSign
# 354 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_HmmIsThatRight
# 355 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_FacePlayer
# 356 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 357 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 358 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_ExclamationMark
# 359 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 360 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_Delay48
# 361 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 362 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OhLookLook
# 363 "data/maps/PalletTown/scripts.pory"
	closemessage
# 364 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayRight
# 365 "data/maps/PalletTown/scripts.pory"
	call_if_ne VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayLeft
# 366 "data/maps/PalletTown/scripts.pory"
	copyobjectxytoperm LOCALID_SIGN_LADY
# 367 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_TEMP_2
# 368 "data/maps/PalletTown/scripts.pory"
	release
# 369 "data/maps/PalletTown/scripts.pory"
	end
# 370 "data/maps/PalletTown/scripts.pory"

# 371 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyMoveOutOfWayRight::
# 372 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayRight
# 373 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 374 "data/maps/PalletTown/scripts.pory"
	return
# 375 "data/maps/PalletTown/scripts.pory"

# 376 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyMoveOutOfWayLeft::
# 377 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayLeft
# 378 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 379 "data/maps/PalletTown/scripts.pory"
	return
# 380 "data/maps/PalletTown/scripts.pory"

# 381 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyDone::
# 382 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_FacePlayer
# 383 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 384 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RaisingMonsToo
# 385 "data/maps/PalletTown/scripts.pory"
	release
# 386 "data/maps/PalletTown/scripts.pory"
	end
# 387 "data/maps/PalletTown/scripts.pory"

# 388 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyGoReadSign::
# 389 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_FacePlayer
# 390 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 391 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_ReadItReadIt
# 392 "data/maps/PalletTown/scripts.pory"
	release
# 393 "data/maps/PalletTown/scripts.pory"
	end
# 394 "data/maps/PalletTown/scripts.pory"

# 395 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyJustShowedSign::
# 396 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_FacePlayer
# 397 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 398 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_SignsAreUsefulArentThey
# 399 "data/maps/PalletTown/scripts.pory"
	release
# 400 "data/maps/PalletTown/scripts.pory"
	end
# 401 "data/maps/PalletTown/scripts.pory"

# 402 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayRight::
# 403 "data/maps/PalletTown/scripts.pory"
	walk_right
# 404 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_left
# 405 "data/maps/PalletTown/scripts.pory"
	step_end
# 406 "data/maps/PalletTown/scripts.pory"

# 407 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayLeft::
# 408 "data/maps/PalletTown/scripts.pory"
	walk_left
# 409 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_right
# 410 "data/maps/PalletTown/scripts.pory"
	step_end
# 411 "data/maps/PalletTown/scripts.pory"

# 412 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_FatMan::
# 413 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CanStoreItemsAndMonsInPC, MSGBOX_NPC
# 414 "data/maps/PalletTown/scripts.pory"
	end
# 415 "data/maps/PalletTown/scripts.pory"

# 416 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_Rock::
# 417 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_Rock, MSGBOX_SIGN
# 418 "data/maps/PalletTown/scripts.pory"
	end
# 419 "data/maps/PalletTown/scripts.pory"

# 420 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OaksLabSign::
# 421 "data/maps/PalletTown/scripts.pory"
	lockall
# 422 "data/maps/PalletTown/scripts.pory"
	famechecker FAMECHECKER_OAK, 0
# 423 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakPokemonResearchLab
# 424 "data/maps/PalletTown/scripts.pory"
	releaseall
# 425 "data/maps/PalletTown/scripts.pory"
	end
# 426 "data/maps/PalletTown/scripts.pory"

# 427 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_PlayersHouseSign::
# 428 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PlayersHouse, MSGBOX_SIGN
# 429 "data/maps/PalletTown/scripts.pory"
	end
# 430 "data/maps/PalletTown/scripts.pory"

# 431 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_RivalsHouseSign::
# 432 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RivalsHouse, MSGBOX_SIGN
# 433 "data/maps/PalletTown/scripts.pory"
	end
# 434 "data/maps/PalletTown/scripts.pory"

# 435 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_TownSign::
# 436 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_TownSign, MSGBOX_SIGN
# 437 "data/maps/PalletTown/scripts.pory"
	end
# 438 "data/maps/PalletTown/scripts.pory"

# 439 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_TrainerTips::
# 440 "data/maps/PalletTown/scripts.pory"
	lockall
# 441 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenu
# 442 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 443 "data/maps/PalletTown/scripts.pory"
	releaseall
# 444 "data/maps/PalletTown/scripts.pory"
	end
# 445 "data/maps/PalletTown/scripts.pory"

# 446 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyTrigger::
# 447 "data/maps/PalletTown/scripts.pory"
	lockall
# 448 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_WalkInPlaceFasterRight
# 449 "data/maps/PalletTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 450 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 451 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 452 "data/maps/PalletTown/scripts.pory"
	releaseall
# 453 "data/maps/PalletTown/scripts.pory"
	end
# 454 "data/maps/PalletTown/scripts.pory"

# 455 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyShowSign::
# 456 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 457 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_LookCopiedTrainerTipsSign
# 458 "data/maps/PalletTown/scripts.pory"
	closemessage
# 459 "data/maps/PalletTown/scripts.pory"
	delay 20
# 460 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 461 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_OPENED_START_MENU
# 462 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 463 "data/maps/PalletTown/scripts.pory"
	setvar SIGN_LADY_READY, FALSE
# 464 "data/maps/PalletTown/scripts.pory"
	special SetWalkingIntoSignVars
# 465 "data/maps/PalletTown/scripts.pory"
	special DisableMsgBoxWalkaway
# 466 "data/maps/PalletTown/scripts.pory"
	signmsg
# 467 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenuCopy
# 468 "data/maps/PalletTown/scripts.pory"
	normalmsg
# 469 "data/maps/PalletTown/scripts.pory"
	return
# 470 "data/maps/PalletTown/scripts.pory"

# 471 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyStartShowSign::
# 472 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_SIGN_LADY, Common_Movement_FacePlayer
# 473 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 474 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 475 "data/maps/PalletTown/scripts.pory"
	release
# 476 "data/maps/PalletTown/scripts.pory"
	end
# 477 "data/maps/PalletTown/scripts.pory"

# 478 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_Science::
# 479 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_EventScript_Hoenn
# 480 "data/maps/PalletTown/scripts.pory"
	waitmessage
# 481 "data/maps/PalletTown/scripts.pory"
	setvar VAR_0x8004, SPECIES_TREECKO
# 482 "data/maps/PalletTown/scripts.pory"
	special SetSeenMon
# 483 "data/maps/PalletTown/scripts.pory"
	showmonpic SPECIES_TREECKO, 10, 3
# 484 "data/maps/PalletTown/scripts.pory"
	waitbuttonpress
# 485 "data/maps/PalletTown/scripts.pory"
	hidemonpic
# 486 "data/maps/PalletTown/scripts.pory"
	setvar VAR_0x8004, SPECIES_TORCHIC
# 487 "data/maps/PalletTown/scripts.pory"
	special SetSeenMon
# 488 "data/maps/PalletTown/scripts.pory"
	showmonpic SPECIES_TORCHIC, 10, 3
# 489 "data/maps/PalletTown/scripts.pory"
	waitbuttonpress
# 490 "data/maps/PalletTown/scripts.pory"
	hidemonpic
# 491 "data/maps/PalletTown/scripts.pory"
	setvar VAR_0x8004, SPECIES_MUDKIP
# 492 "data/maps/PalletTown/scripts.pory"
	special SetSeenMon
# 493 "data/maps/PalletTown/scripts.pory"
	showmonpic SPECIES_MUDKIP, 10, 3
# 494 "data/maps/PalletTown/scripts.pory"
	waitbuttonpress
# 495 "data/maps/PalletTown/scripts.pory"
	hidemonpic
# 496 "data/maps/PalletTown/scripts.pory"
	releaseall
# 497 "data/maps/PalletTown/scripts.pory"
	end
# 498 "data/maps/PalletTown/scripts.pory"

# 499 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_Hoenn::
# 500 "data/maps/PalletTown/scripts.pory"
	.string "I've have came here to KANTO\n"
# 501 "data/maps/PalletTown/scripts.pory"
	.string "to show PROFESSOR OAK\l"
# 502 "data/maps/PalletTown/scripts.pory"
	.string "some special POKEMON from\l"
# 503 "data/maps/PalletTown/scripts.pory"
	.string "the HOENN region.\p"
# 504 "data/maps/PalletTown/scripts.pory"
	.string "I'll lend you a look\n"
# 505 "data/maps/PalletTown/scripts.pory"
	.string "of them!$"
