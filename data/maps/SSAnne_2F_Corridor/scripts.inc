# 1 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 2 "data/maps/SSAnne_2F_Corridor/scripts.pory"
.set LOCALID_RIVAL, 1
# 3 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 4 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_MapScripts::
# 5 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	.byte 0
# 6 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 7 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTriggerLeft::
# 8 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	lockall
# 9 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	setvar VAR_TEMP_1, 0
# 10 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger
# 11 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	end
# 12 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 13 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTriggerMid::
# 14 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	lockall
# 15 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	setvar VAR_TEMP_1, 1
# 16 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger
# 17 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	end
# 18 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 19 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTriggerRight::
# 20 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	lockall
# 21 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	setvar VAR_TEMP_1, 2
# 22 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	goto SSAnne_2F_Corridor_EventScript_RivalTrigger
# 23 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	end
# 24 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 25 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalTrigger::
# 26 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 27 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	playse SE_EXIT
# 28 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay 5
# 29 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 30 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	addobject LOCALID_RIVAL
# 31 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay 10
# 32 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 33 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	waitmovement 0
# 34 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay 20
# 35 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, SSAnne_2F_Corridor_EventScript_RivalApproachLeft
# 36 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, SSAnne_2F_Corridor_EventScript_RivalApproachMid
# 37 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, SSAnne_2F_Corridor_EventScript_RivalApproachRight
# 38 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	msgbox SSAnne_2F_Corridor_Text_RivalIntro
# 39 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_RIVAL
# 40 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, SSAnne_2F_Corridor_EventScript_RivalSquirtle
# 41 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, SSAnne_2F_Corridor_EventScript_RivalBulbasaur
# 42 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, SSAnne_2F_Corridor_EventScript_RivalCharmander
# 43 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	msgbox SSAnne_2F_Corridor_Text_RivalPostBattle
# 44 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	setflag FLAG_BEAT_SS_RIVAL
# 45 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	closemessage
# 46 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay 10
# 47 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 48 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, SSAnne_2F_Corridor_EventScript_RivalExitLeft
# 49 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, SSAnne_2F_Corridor_EventScript_RivalExitMid
# 50 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, SSAnne_2F_Corridor_EventScript_RivalExitRight
# 51 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	fadedefaultbgm
# 52 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	removeobject LOCALID_RIVAL
# 53 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	setvar VAR_MAP_SCENE_S_S_ANNE_2F_CORRIDOR, 1
# 54 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	clearflag FLAG_HIDE_PSYDUCK
# 55 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	releaseall
# 56 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	end
# 57 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 58 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalApproachLeft::
# 59 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_RIVAL, SSAnne_2F_Corridor_Movement_RivalApproachLeft
# 60 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	waitmovement 0
# 61 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	return
# 62 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 63 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalApproachMid::
# 64 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_RIVAL, SSAnne_2F_Corridor_Movement_RivalApproachMid
# 65 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSAnne_2F_Corridor_Movement_PlayerFaceRivalMid
# 66 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	waitmovement 0
# 67 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	return
# 68 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 69 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalApproachRight::
# 70 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSAnne_2F_Corridor_Movement_PlayerFaceRivalRight
# 71 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_RIVAL, SSAnne_2F_Corridor_Movement_RivalApproachRight
# 72 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	waitmovement 0
# 73 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	return
# 74 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 75 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalSquirtle::
# 76 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SS_ANNE_SQUIRTLE, SSAnne_2F_Corridor_Text_RivalDefeat
# 77 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	return
# 78 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 79 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalBulbasaur::
# 80 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SS_ANNE_BULBASAUR, SSAnne_2F_Corridor_Text_RivalDefeat
# 81 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	return
# 82 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 83 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalCharmander::
# 84 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SS_ANNE_CHARMANDER, SSAnne_2F_Corridor_Text_RivalDefeat
# 85 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	return
# 86 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 87 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalExitLeft::
# 88 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_RIVAL, SSAnne_2F_Corridor_Movement_RivalExitLeft
# 89 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	waitmovement 0
# 90 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	return
# 91 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 92 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalExitMid::
# 93 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_RIVAL, SSAnne_2F_Corridor_Movement_RivalExitMid
# 94 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	waitmovement 0
# 95 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	return
# 96 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 97 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_RivalExitRight::
# 98 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	applymovement LOCALID_RIVAL, SSAnne_2F_Corridor_Movement_RivalExitRight
# 99 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	waitmovement 0
# 100 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	return
# 101 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 102 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_PlayerFaceRivalRight::
# 103 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 104 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 105 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 106 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 107 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_in_place_faster_left
# 108 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	step_end
# 109 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 110 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_PlayerFaceRivalMid::
# 111 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 112 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 113 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 114 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay_16
# 115 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_in_place_faster_left
# 116 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	step_end
# 117 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 118 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalApproachLeft::
# 119 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 120 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 121 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 122 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	step_end
# 123 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 124 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalApproachMid::
# 125 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 126 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 127 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 128 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 129 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_in_place_faster_right
# 130 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	step_end
# 131 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 132 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalApproachRight::
# 133 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 134 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 135 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 136 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 137 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_right
# 138 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	delay_4
# 139 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	step_end
# 140 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 141 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalExitLeft::
# 142 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_right
# 143 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 144 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 145 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 146 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 147 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 148 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 149 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 150 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	step_end
# 151 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 152 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalExitMid::
# 153 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 154 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 155 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 156 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 157 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 158 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 159 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 160 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	step_end
# 161 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 162 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_Movement_RivalExitRight::
# 163 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 164 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 165 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 166 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 167 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 168 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 169 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	walk_down
# 170 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	step_end
# 171 "data/maps/SSAnne_2F_Corridor/scripts.pory"

# 172 "data/maps/SSAnne_2F_Corridor/scripts.pory"
SSAnne_2F_Corridor_EventScript_Sailor::
# 173 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	msgbox SSAnne_2F_Corridor_Text_ThisShipIsLuxuryLiner, MSGBOX_NPC
# 174 "data/maps/SSAnne_2F_Corridor/scripts.pory"
	end
