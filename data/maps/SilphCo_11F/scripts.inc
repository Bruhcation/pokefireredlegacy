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
.set LOCALID_REGISTEEL, 9
# 8 "data/maps/SilphCo_11F/scripts.pory"

# 9 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_MapScripts::
# 10 "data/maps/SilphCo_11F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_11F_OnLoad
# 11 "data/maps/SilphCo_11F/scripts.pory"
	.byte 0
# 12 "data/maps/SilphCo_11F/scripts.pory"

# 13 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_OnLoad::
# 14 "data/maps/SilphCo_11F/scripts.pory"
	call_if_unset FLAG_SILPH_11F_DOOR, EventScript_Close11FDoor
# 15 "data/maps/SilphCo_11F/scripts.pory"
	end
# 16 "data/maps/SilphCo_11F/scripts.pory"

# 17 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_President::
# 18 "data/maps/SilphCo_11F/scripts.pory"
	lock
# 19 "data/maps/SilphCo_11F/scripts.pory"
	faceplayer
# 20 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_set FLAG_GOT_MASTER_BALL_FROM_SILPH, SilphCo_11F_EventScript_AlreadyGotMasterBall
# 21 "data/maps/SilphCo_11F/scripts.pory"
	checkplayergender
# 22 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, SilphCo_11F_EventScript_PresidentThanksMale
# 23 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, SilphCo_11F_EventScript_PresidentThanksFemale
# 24 "data/maps/SilphCo_11F/scripts.pory"
	checkitemspace ITEM_MASTER_BALL
# 25 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SilphCo_11F_EventScript_NoRoomForMasterBall
# 26 "data/maps/SilphCo_11F/scripts.pory"
	giveitem_msg SilphCo_11F_Text_ObtainedMasterBallFromPresident, ITEM_MASTER_BALL, 1, MUS_OBTAIN_KEY_ITEM
# 27 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
# 28 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_GOT_MASTER_BALL_FROM_SILPH
# 29 "data/maps/SilphCo_11F/scripts.pory"
	release
# 30 "data/maps/SilphCo_11F/scripts.pory"
	end
# 31 "data/maps/SilphCo_11F/scripts.pory"

# 32 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_PresidentThanksMale::
# 33 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearBoy
# 34 "data/maps/SilphCo_11F/scripts.pory"
	return
# 35 "data/maps/SilphCo_11F/scripts.pory"

# 36 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_PresidentThanksFemale::
# 37 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearGirl
# 38 "data/maps/SilphCo_11F/scripts.pory"
	return
# 39 "data/maps/SilphCo_11F/scripts.pory"

# 40 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_NoRoomForMasterBall::
# 41 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_YouHaveNoRoomForThis
# 42 "data/maps/SilphCo_11F/scripts.pory"
	release
# 43 "data/maps/SilphCo_11F/scripts.pory"
	end
# 44 "data/maps/SilphCo_11F/scripts.pory"

# 45 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_AlreadyGotMasterBall::
# 46 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
# 47 "data/maps/SilphCo_11F/scripts.pory"
	release
# 48 "data/maps/SilphCo_11F/scripts.pory"
	end
# 49 "data/maps/SilphCo_11F/scripts.pory"

# 50 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Secretary::
# 51 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForRescuingUs, MSGBOX_NPC
# 52 "data/maps/SilphCo_11F/scripts.pory"
	end
# 53 "data/maps/SilphCo_11F/scripts.pory"

# 54 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_GiovanniTriggerLeft::
# 55 "data/maps/SilphCo_11F/scripts.pory"
	lockall
# 56 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 57 "data/maps/SilphCo_11F/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni
# 58 "data/maps/SilphCo_11F/scripts.pory"
	end
# 59 "data/maps/SilphCo_11F/scripts.pory"

# 60 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_GiovanniTriggerRight::
# 61 "data/maps/SilphCo_11F/scripts.pory"
	lockall
# 62 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 63 "data/maps/SilphCo_11F/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni
# 64 "data/maps/SilphCo_11F/scripts.pory"
	end
# 65 "data/maps/SilphCo_11F/scripts.pory"

# 66 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_BattleGiovanni::
# 67 "data/maps/SilphCo_11F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 68 "data/maps/SilphCo_11F/scripts.pory"
	applymovement LOCALID_GIOVANNI, Common_Movement_WalkInPlaceFasterDown
# 69 "data/maps/SilphCo_11F/scripts.pory"
	waitmovement 0
# 70 "data/maps/SilphCo_11F/scripts.pory"
	delay 25
# 71 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_GiovanniIntro
# 72 "data/maps/SilphCo_11F/scripts.pory"
	closemessage
# 73 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, SilphCo_11F_EventScript_GiovanniApproachLeft
# 74 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, SilphCo_11F_EventScript_GiovanniApproachRight
# 75 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_GIOVANNI
# 76 "data/maps/SilphCo_11F/scripts.pory"
	trainerbattle_no_intro TRAINER_BOSS_GIOVANNI_2, SilphCo_11F_Text_GiovanniDefeat
# 77 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_GiovanniPostBattle
# 78 "data/maps/SilphCo_11F/scripts.pory"
	closemessage
# 79 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 80 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_GIOVANNI
# 81 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_GRUNT1
# 82 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_GRUNT2
# 83 "data/maps/SilphCo_11F/scripts.pory"
	addobject LOCALID_GUY
# 84 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 85 "data/maps/SilphCo_11F/scripts.pory"
	playbgm MUS_PEWTER, 0
# 86 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_MAP_SCENE_SILPH_CO_11F, 1
# 87 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_HIDE_SAFFRON_ROCKETS
# 88 "data/maps/SilphCo_11F/scripts.pory"
	clearflag FLAG_HIDE_SAFFRON_CIVILIANS
# 89 "data/maps/SilphCo_11F/scripts.pory"
	releaseall
# 90 "data/maps/SilphCo_11F/scripts.pory"
	end
# 91 "data/maps/SilphCo_11F/scripts.pory"

# 92 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_GiovanniApproachLeft::
# 93 "data/maps/SilphCo_11F/scripts.pory"
	applymovement LOCALID_GIOVANNI, SilphCo_11F_Movement_GiovanniApproachLeft
# 94 "data/maps/SilphCo_11F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SilphCo_11F_Movement_PlayerFaceGiovanni
# 95 "data/maps/SilphCo_11F/scripts.pory"
	waitmovement 0
# 96 "data/maps/SilphCo_11F/scripts.pory"
	return
# 97 "data/maps/SilphCo_11F/scripts.pory"

# 98 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_GiovanniApproachRight::
# 99 "data/maps/SilphCo_11F/scripts.pory"
	applymovement LOCALID_GIOVANNI, SilphCo_11F_Movement_GiovanniApproachRight
# 100 "data/maps/SilphCo_11F/scripts.pory"
	waitmovement 0
# 101 "data/maps/SilphCo_11F/scripts.pory"
	return
# 102 "data/maps/SilphCo_11F/scripts.pory"

# 103 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_WorkerM::
# 104 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_WorkerM, MSGBOX_NPC
# 105 "data/maps/SilphCo_11F/scripts.pory"
	end
# 106 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_WorkerM:
# 107 "data/maps/SilphCo_11F/scripts.pory"
	.string "Excuse me!\p"
# 108 "data/maps/SilphCo_11F/scripts.pory"
	.string "Do you have an appointment to see\n"
# 109 "data/maps/SilphCo_11F/scripts.pory"
	.string "the PRESIDENT?\p"
# 110 "data/maps/SilphCo_11F/scripts.pory"
	.string "Oh, {PLAYER}!\n"
# 111 "data/maps/SilphCo_11F/scripts.pory"
	.string "Sorry, go on ahead.$"
# 112 "data/maps/SilphCo_11F/scripts.pory"

# 113 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Movement_GiovanniApproachLeft::
# 114 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 115 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 116 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 117 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 118 "data/maps/SilphCo_11F/scripts.pory"
	walk_in_place_faster_left
# 119 "data/maps/SilphCo_11F/scripts.pory"
	step_end
# 120 "data/maps/SilphCo_11F/scripts.pory"

# 121 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Movement_GiovanniApproachRight::
# 122 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 123 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 124 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 125 "data/maps/SilphCo_11F/scripts.pory"
	step_end
# 126 "data/maps/SilphCo_11F/scripts.pory"

# 127 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Movement_PlayerFaceGiovanni::
# 128 "data/maps/SilphCo_11F/scripts.pory"
	delay_16
# 129 "data/maps/SilphCo_11F/scripts.pory"
	delay_16
# 130 "data/maps/SilphCo_11F/scripts.pory"
	delay_16
# 131 "data/maps/SilphCo_11F/scripts.pory"
	delay_8
# 132 "data/maps/SilphCo_11F/scripts.pory"
	delay_4
# 133 "data/maps/SilphCo_11F/scripts.pory"
	walk_in_place_faster_right
# 134 "data/maps/SilphCo_11F/scripts.pory"
	step_end
# 135 "data/maps/SilphCo_11F/scripts.pory"

# 136 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_OrbingCheck::
# 137 "data/maps/SilphCo_11F/scripts.pory"
	lock
# 138 "data/maps/SilphCo_11F/scripts.pory"
	faceplayer
# 139 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_set FLAG_CAUGHT_REGISTEEL, SilphCo_11F_EventScript_End
# 140 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_set FLAG_REGISTEEL_CHECKED, SilphCo_11F_EventScript_Orbing
# 141 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_RegiceCheck
# 142 "data/maps/SilphCo_11F/scripts.pory"
	closemessage
# 143 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_0x8005, 1
# 144 "data/maps/SilphCo_11F/scripts.pory"
	special IsWailordInParty
# 145 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SilphCo_11F_EventScript_NoEligiblePkmn
# 146 "data/maps/SilphCo_11F/scripts.pory"
	setvar 0x8004, FAMECHECKER_AGATHA
# 147 "data/maps/SilphCo_11F/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 148 "data/maps/SilphCo_11F/scripts.pory"
	compare VAR_RESULT, TRUE
# 149 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq SilphCo_11F_EventScript_Flag
# 150 "data/maps/SilphCo_11F/scripts.pory"
	release
# 151 "data/maps/SilphCo_11F/scripts.pory"
	end
# 152 "data/maps/SilphCo_11F/scripts.pory"

# 153 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_NoEligiblePkmn::
# 154 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_NoEligiblePkmn
# 155 "data/maps/SilphCo_11F/scripts.pory"
	release
# 156 "data/maps/SilphCo_11F/scripts.pory"
	end
# 157 "data/maps/SilphCo_11F/scripts.pory"

# 158 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Flag::
# 159 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_REGISTEEL_CHECKED
# 160 "data/maps/SilphCo_11F/scripts.pory"
	goto SilphCo_11F_EventScript_Orbing
# 161 "data/maps/SilphCo_11F/scripts.pory"
	end
# 162 "data/maps/SilphCo_11F/scripts.pory"

# 163 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Orbing::
# 164 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_Whitney, MSGBOX_YESNO
# 165 "data/maps/SilphCo_11F/scripts.pory"
	closemessage
# 166 "data/maps/SilphCo_11F/scripts.pory"
	delay 40
# 167 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SilphCo_11F_EventScript_NoWhitney
# 168 "data/maps/SilphCo_11F/scripts.pory"
	trainerbattle_single TRAINER_HARD, SilphCo_11F_Text_YesWhitney, SilphCo_11F_Text_PostWhitney, SilphCo_11F_EventScript_PostWhitney, NO_MUSIC
# 169 "data/maps/SilphCo_11F/scripts.pory"
	release
# 170 "data/maps/SilphCo_11F/scripts.pory"
	end
# 171 "data/maps/SilphCo_11F/scripts.pory"

# 172 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_PostWhitney::
# 173 "data/maps/SilphCo_11F/scripts.pory"
	special HealPlayerParty
# 174 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_WhitneyPostBattle
# 175 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 176 "data/maps/SilphCo_11F/scripts.pory"
	special QuestLog_CutRecording
# 177 "data/maps/SilphCo_11F/scripts.pory"
	lock
# 178 "data/maps/SilphCo_11F/scripts.pory"
	faceplayer
# 179 "data/maps/SilphCo_11F/scripts.pory"
	setwildbattle SPECIES_REGISTEEL, 70
# 180 "data/maps/SilphCo_11F/scripts.pory"
	waitse
# 181 "data/maps/SilphCo_11F/scripts.pory"
	playmoncry SPECIES_REGISTEEL, CRY_MODE_ENCOUNTER
# 182 "data/maps/SilphCo_11F/scripts.pory"
	waitmessage
# 183 "data/maps/SilphCo_11F/scripts.pory"
	waitmoncry
# 184 "data/maps/SilphCo_11F/scripts.pory"
	delay 10
# 185 "data/maps/SilphCo_11F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 186 "data/maps/SilphCo_11F/scripts.pory"
	waitbuttonpress
# 187 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 188 "data/maps/SilphCo_11F/scripts.pory"
	special StartLegendaryBattle
# 189 "data/maps/SilphCo_11F/scripts.pory"
	waitstate
# 190 "data/maps/SilphCo_11F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 191 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_REGISTEEL
# 192 "data/maps/SilphCo_11F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 193 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SilphCo_11F_EventScript_DefeatedCelebi
# 194 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SilphCo_11F_EventScript_RanFromCelebi
# 195 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SilphCo_11F_EventScript_RanFromCelebi
# 196 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_CAUGHT_REGISTEEL
# 197 "data/maps/SilphCo_11F/scripts.pory"
	clearflag FLAG_STEEL_TRAINER
# 198 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_EndWhitney
# 199 "data/maps/SilphCo_11F/scripts.pory"
	waitmessage
# 200 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 201 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_MIRAGE
# 202 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 203 "data/maps/SilphCo_11F/scripts.pory"
	release
# 204 "data/maps/SilphCo_11F/scripts.pory"
	end
# 205 "data/maps/SilphCo_11F/scripts.pory"

# 206 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_DefeatedCelebi::
# 207 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_CAUGHT_REGISTEEL
# 208 "data/maps/SilphCo_11F/scripts.pory"
	goto EventScript_RemoveStaticMon
# 209 "data/maps/SilphCo_11F/scripts.pory"
	clearflag FLAG_STEEL_TRAINER
# 210 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_EndWhitney
# 211 "data/maps/SilphCo_11F/scripts.pory"
	waitmessage
# 212 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 213 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_MIRAGE
# 214 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 215 "data/maps/SilphCo_11F/scripts.pory"
	end
# 216 "data/maps/SilphCo_11F/scripts.pory"

# 217 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_RanFromCelebi::
# 218 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGISTEEL
# 219 "data/maps/SilphCo_11F/scripts.pory"
	clearflag FLAG_STEEL_TRAINER
# 220 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_EndWhitney
# 221 "data/maps/SilphCo_11F/scripts.pory"
	waitmessage
# 222 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 223 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_MIRAGE
# 224 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 225 "data/maps/SilphCo_11F/scripts.pory"
	goto EventScript_MonFlewAway
# 226 "data/maps/SilphCo_11F/scripts.pory"
	end
# 227 "data/maps/SilphCo_11F/scripts.pory"

# 228 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_NoWhitney::
# 229 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_NoWhitney
# 230 "data/maps/SilphCo_11F/scripts.pory"
	release
# 231 "data/maps/SilphCo_11F/scripts.pory"
	end
# 232 "data/maps/SilphCo_11F/scripts.pory"

# 233 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Registeel::
# 234 "data/maps/SilphCo_11F/scripts.pory"
	lock
# 235 "data/maps/SilphCo_11F/scripts.pory"
	faceplayer
# 236 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_Registeel, MSGBOX_NPC
# 237 "data/maps/SilphCo_11F/scripts.pory"
	release
# 238 "data/maps/SilphCo_11F/scripts.pory"
	end
# 239 "data/maps/SilphCo_11F/scripts.pory"

# 240 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_Registeel::
# 241 "data/maps/SilphCo_11F/scripts.pory"
	.string "REGISTEEL!$"
# 242 "data/maps/SilphCo_11F/scripts.pory"

# 243 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_End::
# 244 "data/maps/SilphCo_11F/scripts.pory"
	clearflag FLAG_STEEL_TRAINER
# 245 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_EndWhitney
# 246 "data/maps/SilphCo_11F/scripts.pory"
	waitmessage
# 247 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 248 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_MIRAGE
# 249 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 250 "data/maps/SilphCo_11F/scripts.pory"
	release
# 251 "data/maps/SilphCo_11F/scripts.pory"
	end
# 252 "data/maps/SilphCo_11F/scripts.pory"

# 253 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_NoEligiblePkmn::
# 254 "data/maps/SilphCo_11F/scripts.pory"
	.string "You have not meet the requirements.\p"
# 255 "data/maps/SilphCo_11F/scripts.pory"
	.string "Come back when you do.$"
# 256 "data/maps/SilphCo_11F/scripts.pory"

# 257 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_RegiceCheck::
# 258 "data/maps/SilphCo_11F/scripts.pory"
	.string "Hello there {PLAYER}.\p"
# 259 "data/maps/SilphCo_11F/scripts.pory"
	.string "I am the Steel Mirage Trainer.\p"
# 260 "data/maps/SilphCo_11F/scripts.pory"
	.string "Beat me and you shall face a\n"
# 261 "data/maps/SilphCo_11F/scripts.pory"
	.string "special POKEMON.\p"
# 262 "data/maps/SilphCo_11F/scripts.pory"
	.string "But first, I want to see a\n"
# 263 "data/maps/SilphCo_11F/scripts.pory"
	.string "GIANT WHALE,\l"
# 264 "data/maps/SilphCo_11F/scripts.pory"
	.string "and knowledge on the GHOST HAG.$"
# 265 "data/maps/SilphCo_11F/scripts.pory"

# 266 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_Whitney::
# 267 "data/maps/SilphCo_11F/scripts.pory"
	.string "So, you wish to face me?$"
# 268 "data/maps/SilphCo_11F/scripts.pory"

# 269 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_YesWhitney::
# 270 "data/maps/SilphCo_11F/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 271 "data/maps/SilphCo_11F/scripts.pory"

# 272 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_PostWhitney::
# 273 "data/maps/SilphCo_11F/scripts.pory"
	.string "So you are worthy...$"
# 274 "data/maps/SilphCo_11F/scripts.pory"

# 275 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_WhitneyPostBattle::
# 276 "data/maps/SilphCo_11F/scripts.pory"
	.string "Alright, you have bested me.\p"
# 277 "data/maps/SilphCo_11F/scripts.pory"
	.string "Be prepared to face REGISTEEL!$"
# 278 "data/maps/SilphCo_11F/scripts.pory"

# 279 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_EndWhitney::
# 280 "data/maps/SilphCo_11F/scripts.pory"
	.string "Goodbye.$"
# 281 "data/maps/SilphCo_11F/scripts.pory"

# 282 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Text_NoWhitney::
# 283 "data/maps/SilphCo_11F/scripts.pory"
	.string "Alright, take your time.$"
# 284 "data/maps/SilphCo_11F/scripts.pory"

# 285 "data/maps/SilphCo_11F/scripts.pory"
@ Unused
# 286 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Monitor::
# 287 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_MonitorHasMonsOnIt, MSGBOX_SIGN
# 288 "data/maps/SilphCo_11F/scripts.pory"
	end
# 289 "data/maps/SilphCo_11F/scripts.pory"

# 290 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_FloorSign::
# 291 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_FloorSign, MSGBOX_SIGN
# 292 "data/maps/SilphCo_11F/scripts.pory"
	end
# 293 "data/maps/SilphCo_11F/scripts.pory"

# 294 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Grunt1::
# 295 "data/maps/SilphCo_11F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_40, SilphCo_11F_Text_Grunt1Intro, SilphCo_11F_Text_Grunt1Defeat
# 296 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 297 "data/maps/SilphCo_11F/scripts.pory"
	end
# 298 "data/maps/SilphCo_11F/scripts.pory"

# 299 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Grunt2::
# 300 "data/maps/SilphCo_11F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_41, SilphCo_11F_Text_Grunt2Intro, SilphCo_11F_Text_Grunt2Defeat
# 301 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 302 "data/maps/SilphCo_11F/scripts.pory"
	end
