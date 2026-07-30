# 1 "data/maps/SilphCo_11F/scripts.pory"

# 2 "data/maps/SilphCo_11F/scripts.pory"
.set LOCALID_GIOVANNI, 3
# 3 "data/maps/SilphCo_11F/scripts.pory"
.set LOCALID_GRUNT1,   4
# 4 "data/maps/SilphCo_11F/scripts.pory"
.set LOCALID_GRUNT2,   6
# 5 "data/maps/SilphCo_11F/scripts.pory"
.set LOCALID_GUY,      7
# 6 "data/maps/SilphCo_11F/scripts.pory"
.set LOCALID_MIRAGE,      8
# 7 "data/maps/SilphCo_11F/scripts.pory"

# 8 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_MapScripts::
# 9 "data/maps/SilphCo_11F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_11F_OnLoad
# 10 "data/maps/SilphCo_11F/scripts.pory"
	.byte 0
# 11 "data/maps/SilphCo_11F/scripts.pory"

# 12 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_OnLoad::
# 13 "data/maps/SilphCo_11F/scripts.pory"
	call_if_unset FLAG_SILPH_11F_DOOR, EventScript_Close11FDoor
# 14 "data/maps/SilphCo_11F/scripts.pory"
	end
# 15 "data/maps/SilphCo_11F/scripts.pory"

# 16 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_President::
# 17 "data/maps/SilphCo_11F/scripts.pory"
	lock
# 18 "data/maps/SilphCo_11F/scripts.pory"
	faceplayer
# 19 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_set FLAG_GOT_MASTER_BALL_FROM_SILPH, SilphCo_11F_EventScript_AlreadyGotMasterBall
# 20 "data/maps/SilphCo_11F/scripts.pory"
	checkplayergender
# 21 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, SilphCo_11F_EventScript_PresidentThanksMale
# 22 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, SilphCo_11F_EventScript_PresidentThanksFemale
# 23 "data/maps/SilphCo_11F/scripts.pory"
	checkitemspace ITEM_MASTER_BALL
# 24 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SilphCo_11F_EventScript_NoRoomForMasterBall
# 25 "data/maps/SilphCo_11F/scripts.pory"
	giveitem_msg SilphCo_11F_Text_ObtainedMasterBallFromPresident, ITEM_MASTER_BALL, 1, MUS_OBTAIN_KEY_ITEM
# 26 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
# 27 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_GOT_MASTER_BALL_FROM_SILPH
# 28 "data/maps/SilphCo_11F/scripts.pory"
	release
# 29 "data/maps/SilphCo_11F/scripts.pory"
	end
# 30 "data/maps/SilphCo_11F/scripts.pory"

# 31 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_PresidentThanksMale::
# 32 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearBoy
# 33 "data/maps/SilphCo_11F/scripts.pory"
	return
# 34 "data/maps/SilphCo_11F/scripts.pory"

# 35 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_PresidentThanksFemale::
# 36 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearGirl
# 37 "data/maps/SilphCo_11F/scripts.pory"
	return
# 38 "data/maps/SilphCo_11F/scripts.pory"

# 39 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_NoRoomForMasterBall::
# 40 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_YouHaveNoRoomForThis
# 41 "data/maps/SilphCo_11F/scripts.pory"
	release
# 42 "data/maps/SilphCo_11F/scripts.pory"
	end
# 43 "data/maps/SilphCo_11F/scripts.pory"

# 44 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_AlreadyGotMasterBall::
# 45 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
# 46 "data/maps/SilphCo_11F/scripts.pory"
	release
# 47 "data/maps/SilphCo_11F/scripts.pory"
	end
# 48 "data/maps/SilphCo_11F/scripts.pory"

# 49 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Secretary::
# 50 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForRescuingUs, MSGBOX_NPC
# 51 "data/maps/SilphCo_11F/scripts.pory"
	end
# 52 "data/maps/SilphCo_11F/scripts.pory"

# 53 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_GiovanniTriggerLeft::
# 54 "data/maps/SilphCo_11F/scripts.pory"
	lockall
# 55 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 56 "data/maps/SilphCo_11F/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni
# 57 "data/maps/SilphCo_11F/scripts.pory"
	end
# 58 "data/maps/SilphCo_11F/scripts.pory"

# 59 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_GiovanniTriggerRight::
# 60 "data/maps/SilphCo_11F/scripts.pory"
	lockall
# 61 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 62 "data/maps/SilphCo_11F/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni
# 63 "data/maps/SilphCo_11F/scripts.pory"
	end
# 64 "data/maps/SilphCo_11F/scripts.pory"

# 65 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_BattleGiovanni::
# 66 "data/maps/SilphCo_11F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 67 "data/maps/SilphCo_11F/scripts.pory"
	applymovement LOCALID_GIOVANNI, Common_Movement_WalkInPlaceFasterDown
# 68 "data/maps/SilphCo_11F/scripts.pory"
	waitmovement 0
# 69 "data/maps/SilphCo_11F/scripts.pory"
	delay 25
# 70 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_GiovanniIntro
# 71 "data/maps/SilphCo_11F/scripts.pory"
	closemessage
# 72 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, SilphCo_11F_EventScript_GiovanniApproachLeft
# 73 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, SilphCo_11F_EventScript_GiovanniApproachRight
# 74 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_GIOVANNI
# 75 "data/maps/SilphCo_11F/scripts.pory"
	trainerbattle_no_intro TRAINER_BOSS_GIOVANNI_2, SilphCo_11F_Text_GiovanniDefeat
# 76 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_GiovanniPostBattle
# 77 "data/maps/SilphCo_11F/scripts.pory"
	closemessage
# 78 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 79 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_GIOVANNI
# 80 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_GRUNT1
# 81 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_GRUNT2
# 82 "data/maps/SilphCo_11F/scripts.pory"
	addobject LOCALID_GUY
# 83 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 84 "data/maps/SilphCo_11F/scripts.pory"
	playbgm MUS_PEWTER, 0
# 85 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_MAP_SCENE_SILPH_CO_11F, 1
# 86 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_HIDE_SAFFRON_ROCKETS
# 87 "data/maps/SilphCo_11F/scripts.pory"
	clearflag FLAG_HIDE_SAFFRON_CIVILIANS
# 88 "data/maps/SilphCo_11F/scripts.pory"
	releaseall
# 89 "data/maps/SilphCo_11F/scripts.pory"
	end
# 90 "data/maps/SilphCo_11F/scripts.pory"

# 91 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_GiovanniApproachLeft::
# 92 "data/maps/SilphCo_11F/scripts.pory"
	applymovement LOCALID_GIOVANNI, SilphCo_11F_Movement_GiovanniApproachLeft
# 93 "data/maps/SilphCo_11F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilphCo_11F_Movement_PlayerFaceGiovanni
# 94 "data/maps/SilphCo_11F/scripts.pory"
	waitmovement 0
# 95 "data/maps/SilphCo_11F/scripts.pory"
	return
# 96 "data/maps/SilphCo_11F/scripts.pory"

# 97 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_GiovanniApproachRight::
# 98 "data/maps/SilphCo_11F/scripts.pory"
	applymovement LOCALID_GIOVANNI, SilphCo_11F_Movement_GiovanniApproachRight
# 99 "data/maps/SilphCo_11F/scripts.pory"
	waitmovement 0
# 100 "data/maps/SilphCo_11F/scripts.pory"
	return
# 101 "data/maps/SilphCo_11F/scripts.pory"

# 102 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_WorkerM::
# 103 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_WorkerM, MSGBOX_NPC
# 104 "data/maps/SilphCo_11F/scripts.pory"
	end
# 105 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_WorkerM:
# 106 "data/maps/SilphCo_11F/scripts.pory"
	.string "Excuse me!\p"
# 107 "data/maps/SilphCo_11F/scripts.pory"
	.string "Do you have an appointment to see\n"
# 108 "data/maps/SilphCo_11F/scripts.pory"
	.string "the PRESIDENT?\p"
# 109 "data/maps/SilphCo_11F/scripts.pory"
	.string "Oh, {PLAYER}!\n"
# 110 "data/maps/SilphCo_11F/scripts.pory"
	.string "Sorry, go on ahead.$"
# 111 "data/maps/SilphCo_11F/scripts.pory"

# 112 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Movement_GiovanniApproachLeft::
# 113 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 114 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 115 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 116 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 117 "data/maps/SilphCo_11F/scripts.pory"
	walk_in_place_faster_left
# 118 "data/maps/SilphCo_11F/scripts.pory"
	step_end
# 119 "data/maps/SilphCo_11F/scripts.pory"

# 120 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Movement_GiovanniApproachRight::
# 121 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 122 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 123 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 124 "data/maps/SilphCo_11F/scripts.pory"
	step_end
# 125 "data/maps/SilphCo_11F/scripts.pory"

# 126 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Movement_PlayerFaceGiovanni::
# 127 "data/maps/SilphCo_11F/scripts.pory"
	delay_16
# 128 "data/maps/SilphCo_11F/scripts.pory"
	delay_16
# 129 "data/maps/SilphCo_11F/scripts.pory"
	delay_16
# 130 "data/maps/SilphCo_11F/scripts.pory"
	delay_8
# 131 "data/maps/SilphCo_11F/scripts.pory"
	delay_4
# 132 "data/maps/SilphCo_11F/scripts.pory"
	walk_in_place_faster_right
# 133 "data/maps/SilphCo_11F/scripts.pory"
	step_end
# 134 "data/maps/SilphCo_11F/scripts.pory"

# 135 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_OrbingCheck::
# 136 "data/maps/SilphCo_11F/scripts.pory"
	lock
# 137 "data/maps/SilphCo_11F/scripts.pory"
	faceplayer
# 138 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_set FLAG_CAUGHT_REGISTEEL, SilphCo_11F_EventScript_End
# 139 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_set FLAG_REGISTEEL_CHECKED, SilphCo_11F_EventScript_Orbing
# 140 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_RegiceCheck
# 141 "data/maps/SilphCo_11F/scripts.pory"
	closemessage
# 142 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_0x8005, 1
# 143 "data/maps/SilphCo_11F/scripts.pory"
	special IsWailordInParty
# 144 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SilphCo_11F_EventScript_NoEligiblePkmn
# 145 "data/maps/SilphCo_11F/scripts.pory"
	setvar 0x8004, FAMECHECKER_AGATHA
# 146 "data/maps/SilphCo_11F/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 147 "data/maps/SilphCo_11F/scripts.pory"
	compare VAR_RESULT, TRUE
# 148 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq SilphCo_11F_EventScript_Flag
# 149 "data/maps/SilphCo_11F/scripts.pory"
	release
# 150 "data/maps/SilphCo_11F/scripts.pory"
	end
# 151 "data/maps/SilphCo_11F/scripts.pory"

# 152 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_NoEligiblePkmn::
# 153 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_NoEligiblePkmn
# 154 "data/maps/SilphCo_11F/scripts.pory"
	release
# 155 "data/maps/SilphCo_11F/scripts.pory"
	end
# 156 "data/maps/SilphCo_11F/scripts.pory"

# 157 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Flag::
# 158 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_REGISTEEL_CHECKED
# 159 "data/maps/SilphCo_11F/scripts.pory"
	goto SilphCo_11F_EventScript_Orbing
# 160 "data/maps/SilphCo_11F/scripts.pory"
	end
# 161 "data/maps/SilphCo_11F/scripts.pory"

# 162 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Orbing::
# 163 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_Whitney, MSGBOX_YESNO
# 164 "data/maps/SilphCo_11F/scripts.pory"
	closemessage
# 165 "data/maps/SilphCo_11F/scripts.pory"
	delay 40
# 166 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SilphCo_11F_EventScript_NoWhitney
# 167 "data/maps/SilphCo_11F/scripts.pory"
	trainerbattle_single TRAINER_RS_COOLTRAINER_M, SilphCo_11F_Text_YesWhitney, SilphCo_11F_Text_PostWhitney, SilphCo_11F_EventScript_PostWhitney, NO_MUSIC
# 168 "data/maps/SilphCo_11F/scripts.pory"
	release
# 169 "data/maps/SilphCo_11F/scripts.pory"
	end
# 170 "data/maps/SilphCo_11F/scripts.pory"

# 171 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_PostWhitney::
# 172 "data/maps/SilphCo_11F/scripts.pory"
	special HealPlayerParty
# 173 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_WhitneyPostBattle
# 174 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 175 "data/maps/SilphCo_11F/scripts.pory"
	special QuestLog_CutRecording
# 176 "data/maps/SilphCo_11F/scripts.pory"
	lock
# 177 "data/maps/SilphCo_11F/scripts.pory"
	faceplayer
# 178 "data/maps/SilphCo_11F/scripts.pory"
	setwildbattle SPECIES_REGISTEEL, 70
# 179 "data/maps/SilphCo_11F/scripts.pory"
	waitse
# 180 "data/maps/SilphCo_11F/scripts.pory"
	playmoncry SPECIES_REGISTEEL, CRY_MODE_ENCOUNTER
# 181 "data/maps/SilphCo_11F/scripts.pory"
	waitmessage
# 182 "data/maps/SilphCo_11F/scripts.pory"
	waitmoncry
# 183 "data/maps/SilphCo_11F/scripts.pory"
	delay 10
# 184 "data/maps/SilphCo_11F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 185 "data/maps/SilphCo_11F/scripts.pory"
	waitbuttonpress
# 186 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 187 "data/maps/SilphCo_11F/scripts.pory"
	special StartLegendaryBattle
# 188 "data/maps/SilphCo_11F/scripts.pory"
	waitstate
# 189 "data/maps/SilphCo_11F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 190 "data/maps/SilphCo_11F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 191 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SilphCo_11F_EventScript_DefeatedCelebi
# 192 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SilphCo_11F_EventScript_RanFromCelebi
# 193 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SilphCo_11F_EventScript_RanFromCelebi
# 194 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_CAUGHT_REGISTEEL
# 195 "data/maps/SilphCo_11F/scripts.pory"
	clearflag FLAG_STEEL_TRAINER
# 196 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_EndWhitney
# 197 "data/maps/SilphCo_11F/scripts.pory"
	waitmessage
# 198 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 199 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_MIRAGE
# 200 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 201 "data/maps/SilphCo_11F/scripts.pory"
	release
# 202 "data/maps/SilphCo_11F/scripts.pory"
	end
# 203 "data/maps/SilphCo_11F/scripts.pory"

# 204 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_DefeatedCelebi::
# 205 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_CAUGHT_REGISTEEL
# 206 "data/maps/SilphCo_11F/scripts.pory"
	goto EventScript_RemoveStaticMon
# 207 "data/maps/SilphCo_11F/scripts.pory"
	clearflag FLAG_STEEL_TRAINER
# 208 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_EndWhitney
# 209 "data/maps/SilphCo_11F/scripts.pory"
	waitmessage
# 210 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 211 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_MIRAGE
# 212 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 213 "data/maps/SilphCo_11F/scripts.pory"
	end
# 214 "data/maps/SilphCo_11F/scripts.pory"

# 215 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_RanFromCelebi::
# 216 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGISTEEL
# 217 "data/maps/SilphCo_11F/scripts.pory"
	clearflag FLAG_STEEL_TRAINER
# 218 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_EndWhitney
# 219 "data/maps/SilphCo_11F/scripts.pory"
	waitmessage
# 220 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 221 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_MIRAGE
# 222 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 223 "data/maps/SilphCo_11F/scripts.pory"
	goto EventScript_MonFlewAway
# 224 "data/maps/SilphCo_11F/scripts.pory"
	end
# 225 "data/maps/SilphCo_11F/scripts.pory"

# 226 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_NoWhitney::
# 227 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_NoWhitney
# 228 "data/maps/SilphCo_11F/scripts.pory"
	release
# 229 "data/maps/SilphCo_11F/scripts.pory"
	end
# 230 "data/maps/SilphCo_11F/scripts.pory"

# 231 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_End::
# 232 "data/maps/SilphCo_11F/scripts.pory"
	clearflag FLAG_STEEL_TRAINER
# 233 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_EndWhitney
# 234 "data/maps/SilphCo_11F/scripts.pory"
	waitmessage
# 235 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 236 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_MIRAGE
# 237 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 238 "data/maps/SilphCo_11F/scripts.pory"
	release
# 239 "data/maps/SilphCo_11F/scripts.pory"
	end
# 240 "data/maps/SilphCo_11F/scripts.pory"

# 241 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_NoEligiblePkmn::
# 242 "data/maps/SilphCo_11F/scripts.pory"
	.string "You have not meet the requirements.\p"
# 243 "data/maps/SilphCo_11F/scripts.pory"
	.string "Come back when you do.$"
# 244 "data/maps/SilphCo_11F/scripts.pory"

# 245 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_RegiceCheck::
# 246 "data/maps/SilphCo_11F/scripts.pory"
	.string "Hello there {PLAYER}.\p"
# 247 "data/maps/SilphCo_11F/scripts.pory"
	.string "I am the Steel Mirage Trainer.\p"
# 248 "data/maps/SilphCo_11F/scripts.pory"
	.string "Beat me and you shall face a\n"
# 249 "data/maps/SilphCo_11F/scripts.pory"
	.string "special POKEMON.\p"
# 250 "data/maps/SilphCo_11F/scripts.pory"
	.string "But first, I want to see a\n"
# 251 "data/maps/SilphCo_11F/scripts.pory"
	.string "GIANT WHALE,\l"
# 252 "data/maps/SilphCo_11F/scripts.pory"
	.string "and knowledge on the GHOST HAG.$"
# 253 "data/maps/SilphCo_11F/scripts.pory"

# 254 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_Whitney::
# 255 "data/maps/SilphCo_11F/scripts.pory"
	.string "So, you wish to face me?$"
# 256 "data/maps/SilphCo_11F/scripts.pory"

# 257 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_YesWhitney::
# 258 "data/maps/SilphCo_11F/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 259 "data/maps/SilphCo_11F/scripts.pory"

# 260 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_PostWhitney::
# 261 "data/maps/SilphCo_11F/scripts.pory"
	.string "So you are worthy...$"
# 262 "data/maps/SilphCo_11F/scripts.pory"

# 263 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_WhitneyPostBattle::
# 264 "data/maps/SilphCo_11F/scripts.pory"
	.string "Alright, you have bested me.\p"
# 265 "data/maps/SilphCo_11F/scripts.pory"
	.string "Be prepared to face REGISTEEL!$"
# 266 "data/maps/SilphCo_11F/scripts.pory"

# 267 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_EndWhitney::
# 268 "data/maps/SilphCo_11F/scripts.pory"
	.string "Goodbye.$"
# 269 "data/maps/SilphCo_11F/scripts.pory"

# 270 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_NoWhitney::
# 271 "data/maps/SilphCo_11F/scripts.pory"
	.string "Alright, take your time.$"
# 272 "data/maps/SilphCo_11F/scripts.pory"

# 273 "data/maps/SilphCo_11F/scripts.pory"
@ Unused
# 274 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Monitor::
# 275 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_MonitorHasMonsOnIt, MSGBOX_SIGN
# 276 "data/maps/SilphCo_11F/scripts.pory"
	end
# 277 "data/maps/SilphCo_11F/scripts.pory"

# 278 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_FloorSign::
# 279 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_FloorSign, MSGBOX_SIGN
# 280 "data/maps/SilphCo_11F/scripts.pory"
	end
# 281 "data/maps/SilphCo_11F/scripts.pory"

# 282 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Grunt1::
# 283 "data/maps/SilphCo_11F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_40, SilphCo_11F_Text_Grunt1Intro, SilphCo_11F_Text_Grunt1Defeat
# 284 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 285 "data/maps/SilphCo_11F/scripts.pory"
	end
# 286 "data/maps/SilphCo_11F/scripts.pory"

# 287 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Grunt2::
# 288 "data/maps/SilphCo_11F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_41, SilphCo_11F_Text_Grunt2Intro, SilphCo_11F_Text_Grunt2Defeat
# 289 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 290 "data/maps/SilphCo_11F/scripts.pory"
	end
