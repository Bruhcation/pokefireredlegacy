# 1 "data/maps/SilphCo_11F/scripts.pory"

# 2 "data/maps/SilphCo_11F/scripts.pory"
.set LOCALID_GIOVANNI, 3
# 3 "data/maps/SilphCo_11F/scripts.pory"
.set LOCALID_GRUNT1,   4
# 4 "data/maps/SilphCo_11F/scripts.pory"
.set LOCALID_GRUNT2,   6
# 5 "data/maps/SilphCo_11F/scripts.pory"

# 6 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_MapScripts::
# 7 "data/maps/SilphCo_11F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_11F_OnLoad
# 8 "data/maps/SilphCo_11F/scripts.pory"
	.byte 0
# 9 "data/maps/SilphCo_11F/scripts.pory"

# 10 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_OnLoad::
# 11 "data/maps/SilphCo_11F/scripts.pory"
	call_if_unset FLAG_SILPH_11F_DOOR, EventScript_Close11FDoor
# 12 "data/maps/SilphCo_11F/scripts.pory"
	end
# 13 "data/maps/SilphCo_11F/scripts.pory"

# 14 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_President::
# 15 "data/maps/SilphCo_11F/scripts.pory"
	lock
# 16 "data/maps/SilphCo_11F/scripts.pory"
	faceplayer
# 17 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_set FLAG_GOT_MASTER_BALL_FROM_SILPH, SilphCo_11F_EventScript_AlreadyGotMasterBall
# 18 "data/maps/SilphCo_11F/scripts.pory"
	checkplayergender
# 19 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, SilphCo_11F_EventScript_PresidentThanksMale
# 20 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, SilphCo_11F_EventScript_PresidentThanksFemale
# 21 "data/maps/SilphCo_11F/scripts.pory"
	checkitemspace ITEM_MASTER_BALL
# 22 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SilphCo_11F_EventScript_NoRoomForMasterBall
# 23 "data/maps/SilphCo_11F/scripts.pory"
	giveitem_msg SilphCo_11F_Text_ObtainedMasterBallFromPresident, ITEM_MASTER_BALL, 1, MUS_OBTAIN_KEY_ITEM
# 24 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
# 25 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_GOT_MASTER_BALL_FROM_SILPH
# 26 "data/maps/SilphCo_11F/scripts.pory"
	release
# 27 "data/maps/SilphCo_11F/scripts.pory"
	end
# 28 "data/maps/SilphCo_11F/scripts.pory"

# 29 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_PresidentThanksMale::
# 30 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearBoy
# 31 "data/maps/SilphCo_11F/scripts.pory"
	return
# 32 "data/maps/SilphCo_11F/scripts.pory"

# 33 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_PresidentThanksFemale::
# 34 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearGirl
# 35 "data/maps/SilphCo_11F/scripts.pory"
	return
# 36 "data/maps/SilphCo_11F/scripts.pory"

# 37 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_NoRoomForMasterBall::
# 38 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_YouHaveNoRoomForThis
# 39 "data/maps/SilphCo_11F/scripts.pory"
	release
# 40 "data/maps/SilphCo_11F/scripts.pory"
	end
# 41 "data/maps/SilphCo_11F/scripts.pory"

# 42 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_AlreadyGotMasterBall::
# 43 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
# 44 "data/maps/SilphCo_11F/scripts.pory"
	release
# 45 "data/maps/SilphCo_11F/scripts.pory"
	end
# 46 "data/maps/SilphCo_11F/scripts.pory"

# 47 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Secretary::
# 48 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForRescuingUs, MSGBOX_NPC
# 49 "data/maps/SilphCo_11F/scripts.pory"
	end
# 50 "data/maps/SilphCo_11F/scripts.pory"

# 51 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_GiovanniTriggerLeft::
# 52 "data/maps/SilphCo_11F/scripts.pory"
	lockall
# 53 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 54 "data/maps/SilphCo_11F/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni
# 55 "data/maps/SilphCo_11F/scripts.pory"
	end
# 56 "data/maps/SilphCo_11F/scripts.pory"

# 57 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_GiovanniTriggerRight::
# 58 "data/maps/SilphCo_11F/scripts.pory"
	lockall
# 59 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 60 "data/maps/SilphCo_11F/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni
# 61 "data/maps/SilphCo_11F/scripts.pory"
	end
# 62 "data/maps/SilphCo_11F/scripts.pory"

# 63 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_BattleGiovanni::
# 64 "data/maps/SilphCo_11F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 65 "data/maps/SilphCo_11F/scripts.pory"
	applymovement LOCALID_GIOVANNI, Common_Movement_WalkInPlaceFasterDown
# 66 "data/maps/SilphCo_11F/scripts.pory"
	waitmovement 0
# 67 "data/maps/SilphCo_11F/scripts.pory"
	delay 25
# 68 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_GiovanniIntro
# 69 "data/maps/SilphCo_11F/scripts.pory"
	closemessage
# 70 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, SilphCo_11F_EventScript_GiovanniApproachLeft
# 71 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, SilphCo_11F_EventScript_GiovanniApproachRight
# 72 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_GIOVANNI
# 73 "data/maps/SilphCo_11F/scripts.pory"
	trainerbattle_no_intro TRAINER_BOSS_GIOVANNI_2, SilphCo_11F_Text_GiovanniDefeat
# 74 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_GiovanniPostBattle
# 75 "data/maps/SilphCo_11F/scripts.pory"
	closemessage
# 76 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 77 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_GIOVANNI
# 78 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_GRUNT1
# 79 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_GRUNT2
# 80 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 81 "data/maps/SilphCo_11F/scripts.pory"
	playbgm MUS_PEWTER, 0
# 82 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_MAP_SCENE_SILPH_CO_11F, 1
# 83 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_HIDE_SAFFRON_ROCKETS
# 84 "data/maps/SilphCo_11F/scripts.pory"
	clearflag FLAG_HIDE_SAFFRON_CIVILIANS
# 85 "data/maps/SilphCo_11F/scripts.pory"
	releaseall
# 86 "data/maps/SilphCo_11F/scripts.pory"
	end
# 87 "data/maps/SilphCo_11F/scripts.pory"

# 88 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_GiovanniApproachLeft::
# 89 "data/maps/SilphCo_11F/scripts.pory"
	applymovement LOCALID_GIOVANNI, SilphCo_11F_Movement_GiovanniApproachLeft
# 90 "data/maps/SilphCo_11F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilphCo_11F_Movement_PlayerFaceGiovanni
# 91 "data/maps/SilphCo_11F/scripts.pory"
	waitmovement 0
# 92 "data/maps/SilphCo_11F/scripts.pory"
	return
# 93 "data/maps/SilphCo_11F/scripts.pory"

# 94 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_GiovanniApproachRight::
# 95 "data/maps/SilphCo_11F/scripts.pory"
	applymovement LOCALID_GIOVANNI, SilphCo_11F_Movement_GiovanniApproachRight
# 96 "data/maps/SilphCo_11F/scripts.pory"
	waitmovement 0
# 97 "data/maps/SilphCo_11F/scripts.pory"
	return
# 98 "data/maps/SilphCo_11F/scripts.pory"

# 99 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_WorkerM::
# 100 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_WorkerM, MSGBOX_NPC
# 101 "data/maps/SilphCo_11F/scripts.pory"
	end
# 102 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_WorkerM:
# 103 "data/maps/SilphCo_11F/scripts.pory"
	.string "Excuse me!\p"
# 104 "data/maps/SilphCo_11F/scripts.pory"
	.string "Do you have an appointment to see\n"
# 105 "data/maps/SilphCo_11F/scripts.pory"
	.string "the PRESIDENT?\p"
# 106 "data/maps/SilphCo_11F/scripts.pory"
	.string "Oh, {PLAYER}!\n"
# 107 "data/maps/SilphCo_11F/scripts.pory"
	.string "Sorry, go on ahead.$"
# 108 "data/maps/SilphCo_11F/scripts.pory"

# 109 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Movement_GiovanniApproachLeft::
# 110 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 111 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 112 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 113 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 114 "data/maps/SilphCo_11F/scripts.pory"
	walk_in_place_faster_left
# 115 "data/maps/SilphCo_11F/scripts.pory"
	step_end
# 116 "data/maps/SilphCo_11F/scripts.pory"

# 117 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Movement_GiovanniApproachRight::
# 118 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 119 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 120 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 121 "data/maps/SilphCo_11F/scripts.pory"
	step_end
# 122 "data/maps/SilphCo_11F/scripts.pory"

# 123 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Movement_PlayerFaceGiovanni::
# 124 "data/maps/SilphCo_11F/scripts.pory"
	delay_16
# 125 "data/maps/SilphCo_11F/scripts.pory"
	delay_16
# 126 "data/maps/SilphCo_11F/scripts.pory"
	delay_16
# 127 "data/maps/SilphCo_11F/scripts.pory"
	delay_8
# 128 "data/maps/SilphCo_11F/scripts.pory"
	delay_4
# 129 "data/maps/SilphCo_11F/scripts.pory"
	walk_in_place_faster_right
# 130 "data/maps/SilphCo_11F/scripts.pory"
	step_end
# 131 "data/maps/SilphCo_11F/scripts.pory"

# 132 "data/maps/SilphCo_11F/scripts.pory"
@ Unused
# 133 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Monitor::
# 134 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_MonitorHasMonsOnIt, MSGBOX_SIGN
# 135 "data/maps/SilphCo_11F/scripts.pory"
	end
# 136 "data/maps/SilphCo_11F/scripts.pory"

# 137 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_FloorSign::
# 138 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_FloorSign, MSGBOX_SIGN
# 139 "data/maps/SilphCo_11F/scripts.pory"
	end
# 140 "data/maps/SilphCo_11F/scripts.pory"

# 141 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Grunt1::
# 142 "data/maps/SilphCo_11F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_40, SilphCo_11F_Text_Grunt1Intro, SilphCo_11F_Text_Grunt1Defeat
# 143 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 144 "data/maps/SilphCo_11F/scripts.pory"
	end
# 145 "data/maps/SilphCo_11F/scripts.pory"

# 146 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Grunt2::
# 147 "data/maps/SilphCo_11F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_41, SilphCo_11F_Text_Grunt2Intro, SilphCo_11F_Text_Grunt2Defeat
# 148 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 149 "data/maps/SilphCo_11F/scripts.pory"
	end
