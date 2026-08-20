# 1 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 2 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
.equ LOCALID_ROCKET1, 1
# 3 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
.equ LOCALID_ROCKET2, 2
# 4 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
.equ LOCALID_LORELEI, 3
# 5 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
.equ LOCALID_ROCKET3, 4
# 6 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 7 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_MapScripts::
# 8 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_IcefallCave_Back_OnTransition
# 9 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	.byte 0
# 10 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 11 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_OnTransition::
# 12 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	call_if_eq VAR_MAP_SCENE_ICEFALL_CAVE_BACK, 1, FourIsland_IcefallCave_Back_EventScript_HideLorelei
# 13 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
# 14 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 15 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_HideLorelei::
# 16 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setflag FLAG_HIDE_ICEFALL_CAVE_LORELEI
# 17 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	return
# 18 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 19 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_LoreleiRocketsScene::
# 20 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	lockall
# 21 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 22 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiKeepHandsOffMons
# 23 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ROCKET1, FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown
# 24 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 25 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 26 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_ShutItLadyLeaveUsBe
# 27 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	closemessage
# 28 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	playse SE_PIN
# 29 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_LORELEI, Common_Movement_ExclamationMark
# 30 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 31 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_LORELEI, Common_Movement_WalkInPlaceFasterDown
# 32 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 33 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_LORELEI, Common_Movement_Delay48
# 34 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 35 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 36 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiPlayerHelpMeKickPoachersOut
# 37 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	closemessage
# 38 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_LORELEI, Common_Movement_WalkInPlaceFasterRight
# 39 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 40 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay 18
# 41 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_LORELEI, Common_Movement_WalkInPlaceFasterDown
# 42 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 43 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay 35
# 44 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ROCKET3, FourIsland_IcefallCave_Back_Movement_Rocket3FaceLorelei
# 45 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_LORELEI, FourIsland_IcefallCave_Back_Movement_LoreleiToRockets
# 46 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FourIsland_IcefallCave_Back_Movement_PlayerToRockets
# 47 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 48 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ROCKET2, FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown
# 49 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 50 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	playbgm MUS_ENCOUNTER_ROCKET, 0
# 51 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 52 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_GruntIntro
# 53 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ROCKET3
# 54 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_PROTON, FourIsland_IcefallCave_Back_Text_GruntDefeat
# 55 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_LORELEI, FourIsland_IcefallCave_Back_Movement_WalkInPlaceUp
# 56 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 57 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 58 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_LoreleiWhereHaveYouTakenMons
# 59 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 60 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_NotTellingYouThat
# 61 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 62 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	message FourIsland_IcefallCave_Back_Text_LoreleiWellDeepFreezeYou
# 63 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmessage
# 64 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitse
# 65 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	playmoncry SPECIES_LAPRAS, CRY_MODE_ENCOUNTER
# 66 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitbuttonpress
# 67 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmoncry
# 68 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ROCKET1, FourIsland_IcefallCave_Back_Movement_Rocket1ReactToThreat
# 69 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 70 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 71 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_OkayRocketWareHouseFiveIsland
# 72 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	closemessage
# 73 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_LORELEI, FourIsland_IcefallCave_Back_Movement_LoreleiWatchRocketsExit
# 74 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, FourIsland_IcefallCave_Back_Movement_PlayerWatchRocketsExit
# 75 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ROCKET1, FourIsland_IcefallCave_Back_Movement_Rocket1Exit
# 76 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ROCKET2, FourIsland_IcefallCave_Back_Movement_Rocket2Exit
# 77 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_ROCKET3, FourIsland_IcefallCave_Back_Movement_Rocket3Exit
# 78 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 79 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	removeobject LOCALID_ROCKET1
# 80 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	removeobject LOCALID_ROCKET2
# 81 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	removeobject LOCALID_ROCKET3
# 82 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay 50
# 83 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement LOCALID_LORELEI, FourIsland_IcefallCave_Back_Movement_LoreleiWalkToPlayer
# 84 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 85 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 86 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	waitmovement 0
# 87 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 88 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_ThankYouThisIsAwful
# 89 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setflag FLAG_HIDE_RUIN_VALLEY_SCIENTIST
# 90 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	clearflag FLAG_ADMIN_PETROL
# 91 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	clearflag FLAG_HIDE_LORELEI_IN_HER_HOUSE
# 92 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setvar VAR_MAP_SCENE_ICEFALL_CAVE_BACK, 1
# 93 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	releaseall
# 94 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
# 95 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 96 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_PlayerToRockets::
# 97 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_up
# 98 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_up
# 99 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_right
# 100 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_up
# 101 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 102 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 103 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_PlayerWatchRocketsExit::
# 104 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 105 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_faster_left
# 106 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 107 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 108 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_faster_down
# 109 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 110 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 111 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_WalkInPlaceDown::
# 112 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_down
# 113 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 114 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 115 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_UnusedPushRight::
# 116 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	lock_facing_direction
# 117 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_right
# 118 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	unlock_facing_direction
# 119 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 120 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 121 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket1ReactToThreat::
# 122 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_fast_down
# 123 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 124 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 125 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket1Exit::
# 126 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_right
# 127 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_down
# 128 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 129 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 130 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 131 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 132 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 133 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 134 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 135 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 136 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 137 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket2Exit::
# 138 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 139 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_left
# 140 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_down
# 141 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 142 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 143 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 144 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 145 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 146 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 147 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 148 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 149 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 150 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket3Exit::
# 151 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 152 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_down
# 153 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 154 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_down
# 155 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_right
# 156 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_right
# 157 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 158 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 159 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 160 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 161 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_fast_down
# 162 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 163 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 164 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_Rocket3FaceLorelei::
# 165 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 166 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_8
# 167 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_faster_right
# 168 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 169 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 170 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_UnusedWalkLeft::
# 171 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_left
# 172 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_left
# 173 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 174 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 175 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_LoreleiToRockets::
# 176 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_left
# 177 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_up
# 178 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 179 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 180 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_WalkInPlaceUp::
# 181 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_up
# 182 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 183 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 184 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_LoreleiWatchRocketsExit::
# 185 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_8
# 186 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_faster_right
# 187 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 188 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	delay_16
# 189 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_in_place_faster_down
# 190 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 191 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 192 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_Movement_LoreleiWalkToPlayer::
# 193 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	walk_right
# 194 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	step_end
# 195 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 196 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_Lorelei::
# 197 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_ThankYouThisIsAwful, MSGBOX_NPC
# 198 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
# 199 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 200 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_Pryce::
# 201 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	lock
# 202 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	faceplayer
# 203 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	goto_if_set FLAG_PRYCE_DEFEATED, FourIsland_IcefallCave_Back_EventScript_RematchPryce
# 204 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_Pryce, MSGBOX_YESNO
# 205 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FourIsland_IcefallCave_Back_EventScript_NoPryce
# 206 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	trainerbattle_single TRAINER_PRYCE, FourIsland_IcefallCave_Back_Text_YesPryce, FourIsland_IcefallCave_Back_Text_PryceDefeat, FourIsland_IcefallCave_Back_EventScript_PostPryce, NO_MUSIC
# 207 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	release
# 208 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
# 209 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 210 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_PostPryce::
# 211 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_PrycePostBattle
# 212 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	setflag FLAG_PRYCE_DEFEATED
# 213 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	cleartrainerflag TRAINER_PRYCE
# 214 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	release
# 215 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
# 216 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 217 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_CantRematchPryce::
# 218 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_PrycePostBattle
# 219 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	release
# 220 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
# 221 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 222 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_NoPryce::
# 223 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_NoPryce
# 224 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	release
# 225 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
# 226 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 227 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_RematchPryce::
# 228 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_RematchPryce, MSGBOX_YESNO
# 229 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FourIsland_IcefallCave_Back_EventScript_NoPryce
# 230 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	trainerbattle_single TRAINER_PRYCE, FourIsland_IcefallCave_Back_Text_YesRematchPryce, FourIsland_IcefallCave_Back_Text_RematchPryceDefeat, FourIsland_IcefallCave_Back_EventScript_PostRematchPryce, NO_MUSIC
# 231 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	release
# 232 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
# 233 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"

# 234 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
FourIsland_IcefallCave_Back_EventScript_PostRematchPryce::
# 235 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	msgbox FourIsland_IcefallCave_Back_Text_RematchPryceDefeat
# 236 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	cleartrainerflag TRAINER_PRYCE
# 237 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	release
# 238 "data/maps/FourIsland_IcefallCave_Back/scripts.pory"
	end
