# 1 "data/maps/CeruleanCity/scripts.pory"

# 2 "data/maps/CeruleanCity/scripts.pory"
.set LOCALID_POLICEMAN, 1
# 3 "data/maps/CeruleanCity/scripts.pory"
.set LOCALID_GRUNT,     2
# 4 "data/maps/CeruleanCity/scripts.pory"
.set LOCALID_SLOWBRO,   5
# 5 "data/maps/CeruleanCity/scripts.pory"
.set LOCALID_LASS,      6
# 6 "data/maps/CeruleanCity/scripts.pory"
.set LOCALID_RIVAL,     8
# 7 "data/maps/CeruleanCity/scripts.pory"
.set LOCALID_WOMAN,     11
# 8 "data/maps/CeruleanCity/scripts.pory"

# 9 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_MapScripts::
# 10 "data/maps/CeruleanCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_OnTransition
# 11 "data/maps/CeruleanCity/scripts.pory"
	.byte 0
# 12 "data/maps/CeruleanCity/scripts.pory"

# 13 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_OnTransition::
# 14 "data/maps/CeruleanCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CERULEAN_CITY
# 15 "data/maps/CeruleanCity/scripts.pory"
	call_if_unset FLAG_UNBLOCK_CERULEAN, CeruleanCity_EventScript_BlockExits
# 16 "data/maps/CeruleanCity/scripts.pory"
	call_if_unset FLAG_GOT_FAME_CHECKER, CeruleanCity_EventScript_BlockExits
# 17 "data/maps/CeruleanCity/scripts.pory"
	end
# 18 "data/maps/CeruleanCity/scripts.pory"

# 19 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_BlockExits::
# 20 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_POLICEMAN, 30, 12
# 21 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_SLOWBRO, 26, 31
# 22 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_LASS, 27, 31
# 23 "data/maps/CeruleanCity/scripts.pory"
	return
# 24 "data/maps/CeruleanCity/scripts.pory"

# 25 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalTriggerLeft::
# 26 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 27 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 28 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_Rival
# 29 "data/maps/CeruleanCity/scripts.pory"
	end
# 30 "data/maps/CeruleanCity/scripts.pory"

# 31 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalTriggerMid::
# 32 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 33 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 34 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 23, 0
# 35 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_Rival
# 36 "data/maps/CeruleanCity/scripts.pory"
	end
# 37 "data/maps/CeruleanCity/scripts.pory"

# 38 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalTriggerRight::
# 39 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 40 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 41 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_RIVAL, 24, 0
# 42 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_Rival
# 43 "data/maps/CeruleanCity/scripts.pory"
	end
# 44 "data/maps/CeruleanCity/scripts.pory"

# 45 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Rival::
# 46 "data/maps/CeruleanCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 47 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 2
# 48 "data/maps/CeruleanCity/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 49 "data/maps/CeruleanCity/scripts.pory"
	addobject LOCALID_RIVAL
# 50 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_RIVAL, CeruleanCity_Movement_RivalEnter
# 51 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 52 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_RivalIntro
# 53 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_RIVAL
# 54 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, CeruleanCity_EventScript_RivalSquirtle
# 55 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, CeruleanCity_EventScript_RivalBulbasaur
# 56 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, CeruleanCity_EventScript_RivalCharmander
# 57 "data/maps/CeruleanCity/scripts.pory"
	famechecker FAMECHECKER_BILL, 0
# 58 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_RivalPostBattle
# 59 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 60 "data/maps/CeruleanCity/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 61 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CeruleanCity_EventScript_RivalStartExit
# 62 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CeruleanCity_EventScript_RivalStartExit
# 63 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, CeruleanCity_EventScript_RivalStartExitRight
# 64 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_OhRightLittlePresentAsFavor
# 65 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1
# 66 "data/maps/CeruleanCity/scripts.pory"
	setflag FLAG_GOT_FAME_CHECKER
# 67 "data/maps/CeruleanCity/scripts.pory"
	giveitem ITEM_FAME_CHECKER
# 68 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_ExplainFameCheckerSmellYa
# 69 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 70 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_RIVAL, CeruleanCity_Movement_RivalExit
# 71 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 72 "data/maps/CeruleanCity/scripts.pory"
	fadedefaultbgm
# 73 "data/maps/CeruleanCity/scripts.pory"
	removeobject LOCALID_RIVAL
# 74 "data/maps/CeruleanCity/scripts.pory"
	releaseall
# 75 "data/maps/CeruleanCity/scripts.pory"
	end
# 76 "data/maps/CeruleanCity/scripts.pory"

# 77 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalSquirtle::
# 78 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_SQUIRTLE, CeruleanCity_Text_RivalDefeat
# 79 "data/maps/CeruleanCity/scripts.pory"
	return
# 80 "data/maps/CeruleanCity/scripts.pory"

# 81 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalBulbasaur::
# 82 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_BULBASAUR, CeruleanCity_Text_RivalDefeat
# 83 "data/maps/CeruleanCity/scripts.pory"
	return
# 84 "data/maps/CeruleanCity/scripts.pory"

# 85 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalCharmander::
# 86 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_CHARMANDER, CeruleanCity_Text_RivalDefeat
# 87 "data/maps/CeruleanCity/scripts.pory"
	return
# 88 "data/maps/CeruleanCity/scripts.pory"

# 89 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalStartExit::
# 90 "data/maps/CeruleanCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_Movement_PlayerWatchRivalExit
# 91 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_RIVAL, CeruleanCity_Movement_RivalStartExit
# 92 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 93 "data/maps/CeruleanCity/scripts.pory"
	return
# 94 "data/maps/CeruleanCity/scripts.pory"

# 95 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalStartExitRight::
# 96 "data/maps/CeruleanCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_Movement_PlayerWatchRivalExitRight
# 97 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_RIVAL, CeruleanCity_Movement_RivalStartExitRight
# 98 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 99 "data/maps/CeruleanCity/scripts.pory"
	return
# 100 "data/maps/CeruleanCity/scripts.pory"

# 101 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_PlayerWatchRivalExit::
# 102 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 103 "data/maps/CeruleanCity/scripts.pory"
	delay_8
# 104 "data/maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_right
# 105 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 106 "data/maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_down
# 107 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 108 "data/maps/CeruleanCity/scripts.pory"

# 109 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_PlayerWatchRivalExitRight::
# 110 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 111 "data/maps/CeruleanCity/scripts.pory"
	delay_8
# 112 "data/maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_left
# 113 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 114 "data/maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_down
# 115 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 116 "data/maps/CeruleanCity/scripts.pory"

# 117 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalEnter::
# 118 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 119 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 120 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 121 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 122 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 123 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 124 "data/maps/CeruleanCity/scripts.pory"

# 125 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalStartExit::
# 126 "data/maps/CeruleanCity/scripts.pory"
	walk_right
# 127 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 128 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 129 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 130 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 131 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 132 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 133 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 134 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 135 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 136 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 137 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 138 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 139 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 140 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 141 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 142 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 143 "data/maps/CeruleanCity/scripts.pory"

# 144 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalStartExitRight::
# 145 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 146 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 147 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 148 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 149 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 150 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 151 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 152 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 153 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 154 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 155 "data/maps/CeruleanCity/scripts.pory"
	walk_right
# 156 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 157 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 158 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 159 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 160 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 161 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 162 "data/maps/CeruleanCity/scripts.pory"

# 163 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalExit::
# 164 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 165 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 166 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 167 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 168 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 169 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 170 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 171 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 172 "data/maps/CeruleanCity/scripts.pory"

# 173 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Grunt::
# 174 "data/maps/CeruleanCity/scripts.pory"
	lock
# 175 "data/maps/CeruleanCity/scripts.pory"
	faceplayer
# 176 "data/maps/CeruleanCity/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_EventScript_GruntDefeated
# 177 "data/maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_GruntIntro
# 178 "data/maps/CeruleanCity/scripts.pory"
	waitmessage
# 179 "data/maps/CeruleanCity/scripts.pory"
	playbgm MUS_ENCOUNTER_ROCKET, 0
# 180 "data/maps/CeruleanCity/scripts.pory"
	waitbuttonpress
# 181 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_Text_GruntDefeat
# 182 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 1
# 183 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntDefeated
# 184 "data/maps/CeruleanCity/scripts.pory"
	end
# 185 "data/maps/CeruleanCity/scripts.pory"

# 186 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GruntDefeated::
# 187 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_OkayIllReturnStolenTM
# 188 "data/maps/CeruleanCity/scripts.pory"
	checkitemspace ITEM_TM28
# 189 "data/maps/CeruleanCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_EventScript_NoRoomForTM28
# 190 "data/maps/CeruleanCity/scripts.pory"
	giveitem_msg CeruleanCity_Text_RecoveredTM28FromGrunt, ITEM_TM28
# 191 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_BetterGetMovingBye
# 192 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 193 "data/maps/CeruleanCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 194 "data/maps/CeruleanCity/scripts.pory"
	removeobject LOCALID_GRUNT
# 195 "data/maps/CeruleanCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 196 "data/maps/CeruleanCity/scripts.pory"
	setflag FLAG_GOT_TM28_FROM_ROCKET
# 197 "data/maps/CeruleanCity/scripts.pory"
	release
# 198 "data/maps/CeruleanCity/scripts.pory"
	end
# 199 "data/maps/CeruleanCity/scripts.pory"

# 200 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_NoRoomForTM28::
# 201 "data/maps/CeruleanCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 202 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_MakeRoomForThisCantRun
# 203 "data/maps/CeruleanCity/scripts.pory"
	release
# 204 "data/maps/CeruleanCity/scripts.pory"
	end
# 205 "data/maps/CeruleanCity/scripts.pory"

# 206 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GruntTriggerTop::
# 207 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 208 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 209 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterUp
# 210 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 211 "data/maps/CeruleanCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 212 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 213 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntTrigger
# 214 "data/maps/CeruleanCity/scripts.pory"
	end
# 215 "data/maps/CeruleanCity/scripts.pory"

# 216 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GruntTriggerBottom::
# 217 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 218 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 219 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_GRUNT, Common_Movement_WalkInPlaceFasterDown
# 220 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 221 "data/maps/CeruleanCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 222 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 223 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntTrigger
# 224 "data/maps/CeruleanCity/scripts.pory"
	end
# 225 "data/maps/CeruleanCity/scripts.pory"

# 226 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GruntTrigger::
# 227 "data/maps/CeruleanCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 228 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_GruntIntro
# 229 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_GRUNT
# 230 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_Text_GruntDefeat
# 231 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 1
# 232 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntDefeated
# 233 "data/maps/CeruleanCity/scripts.pory"
	end
# 234 "data/maps/CeruleanCity/scripts.pory"

# 235 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Policeman::
# 236 "data/maps/CeruleanCity/scripts.pory"
	lock
# 237 "data/maps/CeruleanCity/scripts.pory"
	faceplayer
# 238 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_PeopleHereWereRobbed
# 239 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 240 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_POLICEMAN, Common_Movement_FaceOriginalDirection
# 241 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 242 "data/maps/CeruleanCity/scripts.pory"
	release
# 243 "data/maps/CeruleanCity/scripts.pory"
	end
# 244 "data/maps/CeruleanCity/scripts.pory"

# 245 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_LittleBoy::
# 246 "data/maps/CeruleanCity/scripts.pory"
	lock
# 247 "data/maps/CeruleanCity/scripts.pory"
	faceplayer
# 248 "data/maps/CeruleanCity/scripts.pory"
	goto_if_set FLAG_GOT_SS_TICKET, CeruleanCity_EventScript_LittleBoySlowbroMoved
# 249 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_IfSlowbroWasntThereCouldCutTree
# 250 "data/maps/CeruleanCity/scripts.pory"
	release
# 251 "data/maps/CeruleanCity/scripts.pory"
	end
# 252 "data/maps/CeruleanCity/scripts.pory"

# 253 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_LittleBoySlowbroMoved::
# 254 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_YouCanCutDownSmallTrees
# 255 "data/maps/CeruleanCity/scripts.pory"
	release
# 256 "data/maps/CeruleanCity/scripts.pory"
	end
# 257 "data/maps/CeruleanCity/scripts.pory"

# 258 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_BaldingMan::
# 259 "data/maps/CeruleanCity/scripts.pory"
	lock
# 260 "data/maps/CeruleanCity/scripts.pory"
	faceplayer
# 261 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_PokemonEncyclopediaAmusing, MSGBOX_NPC
# 262 "data/maps/CeruleanCity/scripts.pory"
	call CeruleanCity_EventScript_FishermanCheckPokeballs
# 263 "data/maps/CeruleanCity/scripts.pory"
	release
# 264 "data/maps/CeruleanCity/scripts.pory"
	end
# 265 "data/maps/CeruleanCity/scripts.pory"

# 266 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Youngster::
# 267 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_TrainerLifeIsToughIsntIt, MSGBOX_NPC
# 268 "data/maps/CeruleanCity/scripts.pory"
	end
# 269 "data/maps/CeruleanCity/scripts.pory"

# 270 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_CeruleanCaveGuard::
# 271 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_ThisIsCeruleanCave, MSGBOX_NPC
# 272 "data/maps/CeruleanCity/scripts.pory"
	end
# 273 "data/maps/CeruleanCity/scripts.pory"

# 274 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Woman::
# 275 "data/maps/CeruleanCity/scripts.pory"
	lock
# 276 "data/maps/CeruleanCity/scripts.pory"
	faceplayer
# 277 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_WantBrightRedBicycle
# 278 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 279 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_WOMAN, Common_Movement_FaceOriginalDirection
# 280 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 281 "data/maps/CeruleanCity/scripts.pory"
	release
# 282 "data/maps/CeruleanCity/scripts.pory"
	end
# 283 "data/maps/CeruleanCity/scripts.pory"

# 284 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_FishermanCheckPokeballs::
# 285 "data/maps/CeruleanCity/scripts.pory"
	checkitem ITEM_MASTER_BALL
# 286 "data/maps/CeruleanCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CeruleanCity_EventScript_Return
# 287 "data/maps/CeruleanCity/scripts.pory"
	checkitem ITEM_ULTRA_BALL
# 288 "data/maps/CeruleanCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CeruleanCity_EventScript_Return
# 289 "data/maps/CeruleanCity/scripts.pory"
	checkitem ITEM_GREAT_BALL
# 290 "data/maps/CeruleanCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CeruleanCity_EventScript_Return
# 291 "data/maps/CeruleanCity/scripts.pory"
	checkitem ITEM_POKE_BALL
# 292 "data/maps/CeruleanCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CeruleanCity_EventScript_Return
# 293 "data/maps/CeruleanCity/scripts.pory"
	checkitem ITEM_NET_BALL
# 294 "data/maps/CeruleanCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CeruleanCity_EventScript_Return
# 295 "data/maps/CeruleanCity/scripts.pory"
	checkitem ITEM_DIVE_BALL
# 296 "data/maps/CeruleanCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CeruleanCity_EventScript_Return
# 297 "data/maps/CeruleanCity/scripts.pory"
	checkitem ITEM_NEST_BALL
# 298 "data/maps/CeruleanCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CeruleanCity_EventScript_Return
# 299 "data/maps/CeruleanCity/scripts.pory"
	checkitem ITEM_REPEAT_BALL
# 300 "data/maps/CeruleanCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CeruleanCity_EventScript_Return
# 301 "data/maps/CeruleanCity/scripts.pory"
	checkitem ITEM_TIMER_BALL
# 302 "data/maps/CeruleanCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CeruleanCity_EventScript_Return
# 303 "data/maps/CeruleanCity/scripts.pory"
	checkitem ITEM_LUXURY_BALL
# 304 "data/maps/CeruleanCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CeruleanCity_EventScript_Return
# 305 "data/maps/CeruleanCity/scripts.pory"
	checkitem ITEM_PREMIER_BALL
# 306 "data/maps/CeruleanCity/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CeruleanCity_EventScript_Return
# 307 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_NoPokeballs, MSGBOX_DEFAULT
# 308 "data/maps/CeruleanCity/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 309 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Return::
# 310 "data/maps/CeruleanCity/scripts.pory"
	return
# 311 "data/maps/CeruleanCity/scripts.pory"

# 312 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Lass::
# 313 "data/maps/CeruleanCity/scripts.pory"
	lock
# 314 "data/maps/CeruleanCity/scripts.pory"
	random 3
# 315 "data/maps/CeruleanCity/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 316 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroCommand1
# 317 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroCommand2
# 318 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroCommand3
# 319 "data/maps/CeruleanCity/scripts.pory"
	waitmessage
# 320 "data/maps/CeruleanCity/scripts.pory"
	delay 40
# 321 "data/maps/CeruleanCity/scripts.pory"
	playse SE_PIN
# 322 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_SLOWBRO, Common_Movement_QuestionMark
# 323 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 324 "data/maps/CeruleanCity/scripts.pory"
	delay 30
# 325 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroFailed1
# 326 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroFailed2
# 327 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroFailed3
# 328 "data/maps/CeruleanCity/scripts.pory"
	release
# 329 "data/maps/CeruleanCity/scripts.pory"
	end
# 330 "data/maps/CeruleanCity/scripts.pory"

# 331 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroCommand1::
# 332 "data/maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_SlowbroUseSonicboom
# 333 "data/maps/CeruleanCity/scripts.pory"
	return
# 334 "data/maps/CeruleanCity/scripts.pory"

# 335 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroCommand2::
# 336 "data/maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_SlowbroPunch
# 337 "data/maps/CeruleanCity/scripts.pory"
	return
# 338 "data/maps/CeruleanCity/scripts.pory"

# 339 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroCommand3::
# 340 "data/maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_SlowbroWithdraw
# 341 "data/maps/CeruleanCity/scripts.pory"
	return
# 342 "data/maps/CeruleanCity/scripts.pory"

# 343 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroFailed1::
# 344 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroPayAttention
# 345 "data/maps/CeruleanCity/scripts.pory"
	return
# 346 "data/maps/CeruleanCity/scripts.pory"

# 347 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroFailed2::
# 348 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_NoYouBlewItAgain
# 349 "data/maps/CeruleanCity/scripts.pory"
	return
# 350 "data/maps/CeruleanCity/scripts.pory"

# 351 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroFailed3::
# 352 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_HardToControlMonsObedience
# 353 "data/maps/CeruleanCity/scripts.pory"
	return
# 354 "data/maps/CeruleanCity/scripts.pory"

# 355 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Slowbro::
# 356 "data/maps/CeruleanCity/scripts.pory"
	lock
# 357 "data/maps/CeruleanCity/scripts.pory"
	random 4
# 358 "data/maps/CeruleanCity/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 359 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroText1
# 360 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroText2
# 361 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroText3
# 362 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, CeruleanCity_EventScript_SlowbroText4
# 363 "data/maps/CeruleanCity/scripts.pory"
	release
# 364 "data/maps/CeruleanCity/scripts.pory"
	end
# 365 "data/maps/CeruleanCity/scripts.pory"

# 366 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroText1::
# 367 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroTookSnooze
# 368 "data/maps/CeruleanCity/scripts.pory"
	return
# 369 "data/maps/CeruleanCity/scripts.pory"

# 370 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroText2::
# 371 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroLoafingAround
# 372 "data/maps/CeruleanCity/scripts.pory"
	return
# 373 "data/maps/CeruleanCity/scripts.pory"

# 374 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroText3::
# 375 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroTurnedAway
# 376 "data/maps/CeruleanCity/scripts.pory"
	return
# 377 "data/maps/CeruleanCity/scripts.pory"

# 378 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroText4::
# 379 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroIgnoredOrders
# 380 "data/maps/CeruleanCity/scripts.pory"
	return
# 381 "data/maps/CeruleanCity/scripts.pory"

# 382 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_CitySign::
# 383 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_CitySign, MSGBOX_SIGN
# 384 "data/maps/CeruleanCity/scripts.pory"
	end
# 385 "data/maps/CeruleanCity/scripts.pory"

# 386 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_TrainerTips::
# 387 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_TrainerTipsHeldItems, MSGBOX_SIGN
# 388 "data/maps/CeruleanCity/scripts.pory"
	end
# 389 "data/maps/CeruleanCity/scripts.pory"

# 390 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_BikeShopSign::
# 391 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_BikeShopSign, MSGBOX_SIGN
# 392 "data/maps/CeruleanCity/scripts.pory"
	end
# 393 "data/maps/CeruleanCity/scripts.pory"

# 394 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GymSign::
# 395 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 396 "data/maps/CeruleanCity/scripts.pory"
	famechecker FAMECHECKER_MISTY, 0
# 397 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_GymSign
# 398 "data/maps/CeruleanCity/scripts.pory"
	releaseall
# 399 "data/maps/CeruleanCity/scripts.pory"
	end
