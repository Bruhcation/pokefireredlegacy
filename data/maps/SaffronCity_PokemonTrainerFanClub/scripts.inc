# 1 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 2 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
.set LOCALID_BATTLE_GIRL, 1
# 3 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
.set LOCALID_LITTLE_GIRL, 2
# 4 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
.set LOCALID_YOUNGSTER,   3
# 5 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
.set LOCALID_GENTLEMAN,   4
# 6 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
.set LOCALID_WOMAN,       5
# 7 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
.set LOCALID_ROCKER,      6
# 8 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
.set LOCALID_BEAUTY,      7
# 9 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
.set LOCALID_BLACK_BELT,  8
# 10 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 11 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_MapScripts::
# 12 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SaffronCity_PokemonTrainerFanClub_OnFrame
# 13 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_PokemonTrainerFanClub_OnTransition
# 14 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	.byte 0
# 15 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 16 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_OnFrame::
# 17 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 1, SaffronCity_PokemonTrainerFanClub_EventScript_MeetFirstFans
# 18 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	.2byte 0
# 19 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 20 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MeetFirstFans::
# 21 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lockall
# 22 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 23 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_BATTLE_GIRL, Common_Movement_WalkInPlaceFasterDown
# 24 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 25 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	playse SE_PIN
# 26 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_BATTLE_GIRL, Common_Movement_ExclamationMark
# 27 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 28 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_BATTLE_GIRL, Common_Movement_Delay48
# 29 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 30 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HuhYou
# 31 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	closemessage
# 32 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	applymovement LOCALID_BATTLE_GIRL, SaffronCity_PokemonTrainerFanClub_Movement_FanApproachPlayer
# 33 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 34 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 35 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	waitmovement 0
# 36 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YourePlayerWereYourFansNow
# 37 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 2
# 38 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	releaseall
# 39 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 40 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 41 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Movement_FanApproachPlayer::
# 42 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	delay_16
# 43 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	delay_8
# 44 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 45 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	delay_16
# 46 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 47 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	delay_8
# 48 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_left
# 49 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 50 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 51 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
@ Unused, leftover from RS
# 52 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_FanApproachPlayer::
# 53 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	delay_8
# 54 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_down
# 55 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 56 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 57 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 58 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_left
# 59 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_left
# 60 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 61 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 62 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
@ Unused, leftover from RS
# 63 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlWatchPlayer::
# 64 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 65 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 66 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 67 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 68 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_left
# 69 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_down
# 70 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 71 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 72 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
@ Unused, leftover from RS
# 73 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlMoveCloserToPlayer::
# 74 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_down
# 75 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_right
# 76 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 77 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 78 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
@ Unused, leftover from RS
# 79 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
LilycoveCity_PokemonTrainerFanClub_Movement_LittleGirlHideFromPlayer::
# 80 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	jump_in_place_right
# 81 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_up
# 82 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_up
# 83 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_fast_right
# 84 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	walk_in_place_faster_down
# 85 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	step_end
# 86 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 87 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_OnTransition::
# 88 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 1, SaffronCity_PokemonTrainerFanClub_EventScript_SetMemberPosForFirstMeeting
# 89 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 2, SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions
# 90 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 91 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 92 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_UpdateFanMemberPositions::
# 93 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_TryLoseFansFromPlayTime
# 94 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 95 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 96 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable
# 97 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 98 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 99 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable
# 100 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 101 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 102 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable
# 103 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 104 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 105 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 106 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 107 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 108 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 109 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 110 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 111 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
# 112 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 113 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 114 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 115 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 116 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 117 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
# 118 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 119 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 120 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember1ToFarTable::
# 121 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_BATTLE_GIRL, 5, 2
# 122 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_BATTLE_GIRL, MOVEMENT_TYPE_FACE_UP
# 123 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	return
# 124 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 125 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember2ToFarTable::
# 126 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_YOUNGSTER, 7, 4
# 127 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_YOUNGSTER, MOVEMENT_TYPE_FACE_LEFT
# 128 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	return
# 129 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 130 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember3ToFarTable::
# 131 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_GENTLEMAN, 2, 2
# 132 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_GENTLEMAN, MOVEMENT_TYPE_FACE_UP
# 133 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	return
# 134 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 135 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable::
# 136 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_LITTLE_GIRL, 3, 4
# 137 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_LITTLE_GIRL, MOVEMENT_TYPE_FACE_RIGHT
# 138 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	return
# 139 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 140 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable::
# 141 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_ROCKER, 4, 6
# 142 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_ROCKER, MOVEMENT_TYPE_FACE_UP
# 143 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	return
# 144 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 145 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable::
# 146 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_WOMAN, 10, 3
# 147 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_WOMAN, MOVEMENT_TYPE_FACE_UP
# 148 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	return
# 149 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 150 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable::
# 151 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_BEAUTY, 7, 5
# 152 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_BEAUTY, MOVEMENT_TYPE_FACE_LEFT
# 153 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	return
# 154 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 155 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable::
# 156 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectxyperm LOCALID_BLACK_BELT, 9, 6
# 157 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setobjectmovementtype LOCALID_BLACK_BELT, MOVEMENT_TYPE_FACE_LEFT
# 158 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	return
# 159 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 160 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_SetMemberPosForFirstMeeting::
# 161 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember4ToFarTable
# 162 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember5ToFarTable
# 163 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember6ToFarTable
# 164 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember7ToFarTable
# 165 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	call SaffronCity_PokemonTrainerFanClub_EventScript_MoveMember8ToFarTable
# 166 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 167 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 168 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirl::
# 169 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 170 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 171 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER1
# 172 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 173 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayerNotChampion
# 174 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 175 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan
# 176 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 177 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyNonFan
# 178 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WasYourFanNotAnymore
# 179 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 180 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 181 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 182 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayersFan::
# 183 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 184 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyFan
# 185 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_AlwaysCheerForYou
# 186 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 187 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 188 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 189 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyFan::
# 190 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_IllAlwaysBelieveInYou
# 191 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 192 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 193 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 194 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlOnlyNonFan::
# 195 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryonesYourFanButICantBe
# 196 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 197 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 198 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 199 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BattleGirlPlayerNotChampion::
# 200 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TrainersCoolWhenBattling
# 201 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 202 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 203 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 204 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirl::
# 205 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 206 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 207 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER4
# 208 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 209 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion
# 210 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 211 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan
# 212 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 213 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan
# 214 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeSabrina
# 215 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 216 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 217 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 218 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayersFan::
# 219 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 220 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan
# 221 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WantToBeLikeYouOneDay
# 222 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 223 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 224 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 225 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyFan::
# 226 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryoneButMeStoppedBeingYourFan
# 227 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 228 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 229 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 230 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlOnlyNonFan::
# 231 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingSabrinasFan
# 232 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 233 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 234 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 235 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_LittleGirlPlayerNotChampion::
# 236 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CanIBecomeCoolTrainerOneDay
# 237 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 238 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 239 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 240 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Youngster::
# 241 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 242 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 243 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER2
# 244 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 245 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayerNotChampion
# 246 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 247 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan
# 248 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 249 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyNonFan
# 250 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksMyHero
# 251 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 252 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 253 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 254 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayersFan::
# 255 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 256 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyFan
# 257 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CanYouAutographShorts
# 258 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 259 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 260 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 261 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyFan::
# 262 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_CountingOnYou
# 263 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 264 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 265 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 266 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterOnlyNonFan::
# 267 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksFanToBitterEnd
# 268 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 269 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 270 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 271 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_YoungsterPlayerNotChampion::
# 272 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BrocksLastWordOnCool
# 273 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 274 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 275 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 276 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Gentleman::
# 277 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 278 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 279 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER3
# 280 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 281 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_SAFFRON_CITY_POKEMON_TRAINER_FAN_CLUB, 0, SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayerNotChampion
# 282 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 283 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan
# 284 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 285 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyNonFan
# 286 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HmmAndYouAre
# 287 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_unset FLAG_ORBING, SaffronCity_PokemonTrainerFanClub_EventScript_Orb
# 288 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 289 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 290 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 291 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Orb::
# 292 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_set FLAG_JIRACHI_WISH_GOT, SaffronCity_PokemonTrainerFanClub_EventScript_Orbing
# 293 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	return
# 294 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 295 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Orbing::
# 296 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_Orb
# 297 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 298 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 299 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	giveitem ITEM_BLUE_ORB
# 300 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	waitmessage
# 301 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	waitfanfare 
# 302 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_Orb2
# 303 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setflag FLAG_ORBING
# 304 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 305 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 306 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 307 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_Orb::
# 308 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	.string "Oh, seems like you have gotten\n"
# 309 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	.string "quite popular for your battles\l"
# 310 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	.string "between formidable trainers!\p"
# 311 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	.string "And for that I got you this Trophy,\n"
# 312 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	.string "An orb that represent's your\l"
# 313 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	.string "battle skills and whatnot!$"
# 314 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 315 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_Text_Orb2::
# 316 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	.string "That orb may lead to\n"
# 317 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	.string "other places, maybe where\l"
# 318 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	.string "such artifacts would lie.\p"
# 319 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	.string "But for now,\n"
# 320 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	.string "Continue to Grow!$"
# 321 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 322 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayersFan::
# 323 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 324 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyFan
# 325 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_HadPleasureOfWatchingYouBattle
# 326 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_unset FLAG_ORBING, SaffronCity_PokemonTrainerFanClub_EventScript_Orb
# 327 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 328 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 329 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 330 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyFan::
# 331 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_NeverSeenTrainerOfYourMagnificence
# 332 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_unset FLAG_ORBING, SaffronCity_PokemonTrainerFanClub_EventScript_Orb
# 333 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 334 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 335 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 336 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanOnlyNonFan::
# 337 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YouveStillAWaysToGo
# 338 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 339 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 340 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 341 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_GentlemanPlayerNotChampion::
# 342 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YoullBeTalkedAboutIfYouKeepWinning
# 343 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 344 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 345 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 346 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Woman::
# 347 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 348 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 349 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER6
# 350 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 351 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 352 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan
# 353 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 354 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan
# 355 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TrainerHasBeenOnFire
# 356 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 357 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 358 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 359 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_WomanPlayersFan::
# 360 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 361 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan
# 362 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_AdoreWayYouBattle
# 363 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 364 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 365 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 366 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyFan::
# 367 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImYourNumberOneFan
# 368 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 369 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 370 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 371 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_WomanOnlyNonFan::
# 372 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_EveryoneTalksAboutYou
# 373 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 374 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 375 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 376 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Rocker::
# 377 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 378 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 379 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER5
# 380 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 381 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 382 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan
# 383 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 384 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyNonFan
# 385 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_LoveWayTrainerTalks
# 386 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 387 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 388 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 389 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_RockerPlayersFan::
# 390 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 391 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyFan
# 392 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_TheWayYouBattleIsCool
# 393 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 394 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 395 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 396 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyFan::
# 397 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImOnlyOneLeftOfYourFans
# 398 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 399 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 400 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 401 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_RockerOnlyNonFan::
# 402 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImLoneTrainerFan
# 403 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 404 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 405 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 406 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_Beauty::
# 407 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 408 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 409 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER7
# 410 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 411 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 412 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan
# 413 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 414 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyNonFan
# 415 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WhyCantOthersSeeMastersDignity
# 416 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 417 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 418 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 419 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BeautyPlayersFan::
# 420 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 421 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyFan
# 422 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YouReallyAreAmazing
# 423 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 424 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 425 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 426 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyFan::
# 427 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_ImYourOnlyFan
# 428 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 429 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 430 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 431 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BeautyOnlyNonFan::
# 432 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_BelieveInMasterWithAllMyHeart
# 433 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 434 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 435 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 436 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBelt::
# 437 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	lock
# 438 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	faceplayer
# 439 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	setvar VAR_0x8004, FANCLUB_MEMBER8
# 440 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	special Script_BufferFanClubTrainerName
# 441 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_IsFanClubMemberFanOfPlayer
# 442 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan
# 443 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 444 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, (NUM_TRAINER_FAN_CLUB_MEMBERS - 1), SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyNonFan
# 445 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_OnlyMasterHasMyRespect
# 446 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 447 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 448 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 449 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltPlayersFan::
# 450 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	specialvar VAR_RESULT, Script_GetNumFansOfPlayerInTrainerFanClub
# 451 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyFan
# 452 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_YourBattleStyleIsEducational
# 453 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 454 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 455 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 456 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyFan::
# 457 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_WontStopBeingYourFan
# 458 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 459 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
# 460 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"

# 461 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
SaffronCity_PokemonTrainerFanClub_EventScript_BlackBeltOnlyNonFan::
# 462 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	msgbox SaffronCity_PokemonTrainerFanClub_Text_NeverBeFanOfAnyoneButMaster
# 463 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	release
# 464 "data/maps/SaffronCity_PokemonTrainerFanClub/scripts.pory"
	end
