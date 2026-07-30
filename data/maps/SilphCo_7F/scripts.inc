# 1 "data/maps/SilphCo_7F/scripts.pory"

# 2 "data/maps/SilphCo_7F/scripts.pory"
.set LOCALID_RIVAL,     1
# 3 "data/maps/SilphCo_7F/scripts.pory"
.set LOCALID_WORKER_M2, 8
# 4 "data/maps/SilphCo_7F/scripts.pory"

# 5 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_MapScripts::
# 6 "data/maps/SilphCo_7F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_7F_OnLoad
# 7 "data/maps/SilphCo_7F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SilphCo_7F_OnTransition
# 8 "data/maps/SilphCo_7F/scripts.pory"
	.byte 0
# 9 "data/maps/SilphCo_7F/scripts.pory"

# 10 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_OnLoad::
# 11 "data/maps/SilphCo_7F/scripts.pory"
	call_if_unset FLAG_SILPH_7F_DOOR_1, EventScript_Close7FDoor1
# 12 "data/maps/SilphCo_7F/scripts.pory"
	call_if_unset FLAG_SILPH_7F_DOOR_2, EventScript_Close7FDoor2
# 13 "data/maps/SilphCo_7F/scripts.pory"
	call_if_unset FLAG_SILPH_7F_DOOR_3, EventScript_Close7FDoor3
# 14 "data/maps/SilphCo_7F/scripts.pory"
	end
# 15 "data/maps/SilphCo_7F/scripts.pory"

# 16 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_OnTransition::
# 17 "data/maps/SilphCo_7F/scripts.pory"
	call_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_7F_EventScript_SetObjRocketsGone
# 18 "data/maps/SilphCo_7F/scripts.pory"
	end
# 19 "data/maps/SilphCo_7F/scripts.pory"

# 20 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_SetObjRocketsGone::
# 21 "data/maps/SilphCo_7F/scripts.pory"
	setobjectmovementtype LOCALID_WORKER_M2, MOVEMENT_TYPE_FACE_UP
# 22 "data/maps/SilphCo_7F/scripts.pory"
	return
# 23 "data/maps/SilphCo_7F/scripts.pory"

# 24 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_RivalTriggerTop::
# 25 "data/maps/SilphCo_7F/scripts.pory"
	lockall
# 26 "data/maps/SilphCo_7F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 27 "data/maps/SilphCo_7F/scripts.pory"
	goto SilphCo_7F_EventScript_RivalScene
# 28 "data/maps/SilphCo_7F/scripts.pory"
	end
# 29 "data/maps/SilphCo_7F/scripts.pory"

# 30 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_RivalTriggerBottom::
# 31 "data/maps/SilphCo_7F/scripts.pory"
	lockall
# 32 "data/maps/SilphCo_7F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 33 "data/maps/SilphCo_7F/scripts.pory"
	goto SilphCo_7F_EventScript_RivalScene
# 34 "data/maps/SilphCo_7F/scripts.pory"
	end
# 35 "data/maps/SilphCo_7F/scripts.pory"

# 36 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_RivalScene::
# 37 "data/maps/SilphCo_7F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 38 "data/maps/SilphCo_7F/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 39 "data/maps/SilphCo_7F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 40 "data/maps/SilphCo_7F/scripts.pory"
	waitmovement 0
# 41 "data/maps/SilphCo_7F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 42 "data/maps/SilphCo_7F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 43 "data/maps/SilphCo_7F/scripts.pory"
	waitmovement 0
# 44 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_RivalWhatKeptYou
# 45 "data/maps/SilphCo_7F/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, SilphCo_7F_EventScript_RivalApproachTop
# 46 "data/maps/SilphCo_7F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, SilphCo_7F_EventScript_RivalApproachBottom
# 47 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_RivalIntro
# 48 "data/maps/SilphCo_7F/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_RIVAL
# 49 "data/maps/SilphCo_7F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, SilphCo_7F_EventScript_RivalSquirtle
# 50 "data/maps/SilphCo_7F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, SilphCo_7F_EventScript_RivalBulbasaur
# 51 "data/maps/SilphCo_7F/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, SilphCo_7F_EventScript_RivalCharmander
# 52 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_RivalPostBattle
# 53 "data/maps/SilphCo_7F/scripts.pory"
	closemessage
# 54 "data/maps/SilphCo_7F/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 55 "data/maps/SilphCo_7F/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, SilphCo_7F_EventScript_RivalExitTop
# 56 "data/maps/SilphCo_7F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, SilphCo_7F_EventScript_RivalExitBottom
# 57 "data/maps/SilphCo_7F/scripts.pory"
	playse SE_WARP_IN
# 58 "data/maps/SilphCo_7F/scripts.pory"
	fadedefaultbgm
# 59 "data/maps/SilphCo_7F/scripts.pory"
	removeobject LOCALID_RIVAL
# 60 "data/maps/SilphCo_7F/scripts.pory"
	waitse
# 61 "data/maps/SilphCo_7F/scripts.pory"
	setvar VAR_MAP_SCENE_SILPH_CO_7F, 1
# 62 "data/maps/SilphCo_7F/scripts.pory"
	releaseall
# 63 "data/maps/SilphCo_7F/scripts.pory"
	end
# 64 "data/maps/SilphCo_7F/scripts.pory"

# 65 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_RivalApproachTop::
# 66 "data/maps/SilphCo_7F/scripts.pory"
	closemessage
# 67 "data/maps/SilphCo_7F/scripts.pory"
	applymovement LOCALID_RIVAL, SilphCo_7F_Movement_RivalApproachTop
# 68 "data/maps/SilphCo_7F/scripts.pory"
	waitmovement 0
# 69 "data/maps/SilphCo_7F/scripts.pory"
	return
# 70 "data/maps/SilphCo_7F/scripts.pory"

# 71 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_RivalApproachBottom::
# 72 "data/maps/SilphCo_7F/scripts.pory"
	return
# 73 "data/maps/SilphCo_7F/scripts.pory"

# 74 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_RivalSquirtle::
# 75 "data/maps/SilphCo_7F/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SILPH_SQUIRTLE, SilphCo_7F_Text_RivalDefeat
# 76 "data/maps/SilphCo_7F/scripts.pory"
	return
# 77 "data/maps/SilphCo_7F/scripts.pory"

# 78 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_RivalBulbasaur::
# 79 "data/maps/SilphCo_7F/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SILPH_BULBASAUR, SilphCo_7F_Text_RivalDefeat
# 80 "data/maps/SilphCo_7F/scripts.pory"
	return
# 81 "data/maps/SilphCo_7F/scripts.pory"

# 82 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_RivalCharmander::
# 83 "data/maps/SilphCo_7F/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_SILPH_CHARMANDER, SilphCo_7F_Text_RivalDefeat
# 84 "data/maps/SilphCo_7F/scripts.pory"
	return
# 85 "data/maps/SilphCo_7F/scripts.pory"

# 86 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_RivalExitTop::
# 87 "data/maps/SilphCo_7F/scripts.pory"
	applymovement LOCALID_RIVAL, SilphCo_7F_Movement_RivalExitTop
# 88 "data/maps/SilphCo_7F/scripts.pory"
	waitmovement 0
# 89 "data/maps/SilphCo_7F/scripts.pory"
	return
# 90 "data/maps/SilphCo_7F/scripts.pory"

# 91 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_RivalExitBottom::
# 92 "data/maps/SilphCo_7F/scripts.pory"
	applymovement LOCALID_RIVAL, SilphCo_7F_Movement_RivalExitBottom
# 93 "data/maps/SilphCo_7F/scripts.pory"
	waitmovement 0
# 94 "data/maps/SilphCo_7F/scripts.pory"
	return
# 95 "data/maps/SilphCo_7F/scripts.pory"

# 96 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_Movement_RivalApproachTop::
# 97 "data/maps/SilphCo_7F/scripts.pory"
	walk_up
# 98 "data/maps/SilphCo_7F/scripts.pory"
	step_end
# 99 "data/maps/SilphCo_7F/scripts.pory"

# 100 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_Movement_RivalExitTop::
# 101 "data/maps/SilphCo_7F/scripts.pory"
	walk_right
# 102 "data/maps/SilphCo_7F/scripts.pory"
	walk_right
# 103 "data/maps/SilphCo_7F/scripts.pory"
	walk_right
# 104 "data/maps/SilphCo_7F/scripts.pory"
	walk_up
# 105 "data/maps/SilphCo_7F/scripts.pory"
	delay_16
# 106 "data/maps/SilphCo_7F/scripts.pory"
	step_end
# 107 "data/maps/SilphCo_7F/scripts.pory"

# 108 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_Movement_RivalExitBottom::
# 109 "data/maps/SilphCo_7F/scripts.pory"
	walk_left
# 110 "data/maps/SilphCo_7F/scripts.pory"
	walk_up
# 111 "data/maps/SilphCo_7F/scripts.pory"
	walk_up
# 112 "data/maps/SilphCo_7F/scripts.pory"
	walk_right
# 113 "data/maps/SilphCo_7F/scripts.pory"
	walk_right
# 114 "data/maps/SilphCo_7F/scripts.pory"
	walk_right
# 115 "data/maps/SilphCo_7F/scripts.pory"
	walk_right
# 116 "data/maps/SilphCo_7F/scripts.pory"
	delay_16
# 117 "data/maps/SilphCo_7F/scripts.pory"
	step_end
# 118 "data/maps/SilphCo_7F/scripts.pory"

# 119 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_LaprasGuy::
# 120 "data/maps/SilphCo_7F/scripts.pory"
	lock
# 121 "data/maps/SilphCo_7F/scripts.pory"
	faceplayer
# 122 "data/maps/SilphCo_7F/scripts.pory"
	goto_if_set FLAG_GOT_LAPRAS_FROM_SILPH, SilphCo_7F_EventScript_AlreadyGotLapras
# 123 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_HaveMonForSavingUs
# 124 "data/maps/SilphCo_7F/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LAPRAS
# 125 "data/maps/SilphCo_7F/scripts.pory"
	givemon SPECIES_LAPRAS, 40
# 126 "data/maps/SilphCo_7F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SilphCo_7F_EventScript_ReceiveLaprasParty
# 127 "data/maps/SilphCo_7F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SilphCo_7F_EventScript_ReceiveLaprasPC
# 128 "data/maps/SilphCo_7F/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 129 "data/maps/SilphCo_7F/scripts.pory"
	release
# 130 "data/maps/SilphCo_7F/scripts.pory"
	end
# 131 "data/maps/SilphCo_7F/scripts.pory"

# 132 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_ReceiveLaprasParty::
# 133 "data/maps/SilphCo_7F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 134 "data/maps/SilphCo_7F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 135 "data/maps/SilphCo_7F/scripts.pory"
	message SilphCo_7F_Text_ObtainedLaprasFromEmployee
# 136 "data/maps/SilphCo_7F/scripts.pory"
	waitmessage
# 137 "data/maps/SilphCo_7F/scripts.pory"
	waitfanfare
# 138 "data/maps/SilphCo_7F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LAPRAS
# 139 "data/maps/SilphCo_7F/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 140 "data/maps/SilphCo_7F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SilphCo_7F_EventScript_EndReceiveLapras
# 141 "data/maps/SilphCo_7F/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 142 "data/maps/SilphCo_7F/scripts.pory"
	call EventScript_ChangePokemonNickname
# 143 "data/maps/SilphCo_7F/scripts.pory"
	goto SilphCo_7F_EventScript_EndReceiveLapras
# 144 "data/maps/SilphCo_7F/scripts.pory"
	end
# 145 "data/maps/SilphCo_7F/scripts.pory"

# 146 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_ReceiveLaprasPC::
# 147 "data/maps/SilphCo_7F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 148 "data/maps/SilphCo_7F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 149 "data/maps/SilphCo_7F/scripts.pory"
	message SilphCo_7F_Text_ObtainedLaprasFromEmployee
# 150 "data/maps/SilphCo_7F/scripts.pory"
	waitmessage
# 151 "data/maps/SilphCo_7F/scripts.pory"
	waitfanfare
# 152 "data/maps/SilphCo_7F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LAPRAS
# 153 "data/maps/SilphCo_7F/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 154 "data/maps/SilphCo_7F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SilphCo_7F_EventScript_LaprasTransferredToPC
# 155 "data/maps/SilphCo_7F/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 156 "data/maps/SilphCo_7F/scripts.pory"
	goto SilphCo_7F_EventScript_LaprasTransferredToPC
# 157 "data/maps/SilphCo_7F/scripts.pory"
	end
# 158 "data/maps/SilphCo_7F/scripts.pory"

# 159 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_LaprasTransferredToPC::
# 160 "data/maps/SilphCo_7F/scripts.pory"
	call EventScript_TransferredToPC
# 161 "data/maps/SilphCo_7F/scripts.pory"
	goto SilphCo_7F_EventScript_EndReceiveLapras
# 162 "data/maps/SilphCo_7F/scripts.pory"
	end
# 163 "data/maps/SilphCo_7F/scripts.pory"

# 164 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_EndReceiveLapras::
# 165 "data/maps/SilphCo_7F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 166 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_ExplainLapras
# 167 "data/maps/SilphCo_7F/scripts.pory"
	setflag FLAG_GOT_LAPRAS_FROM_SILPH
# 168 "data/maps/SilphCo_7F/scripts.pory"
	release
# 169 "data/maps/SilphCo_7F/scripts.pory"
	end
# 170 "data/maps/SilphCo_7F/scripts.pory"

# 171 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_AlreadyGotLapras::
# 172 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_RocketBossWentToBoardroom
# 173 "data/maps/SilphCo_7F/scripts.pory"
	release
# 174 "data/maps/SilphCo_7F/scripts.pory"
	end
# 175 "data/maps/SilphCo_7F/scripts.pory"

# 176 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_WorkerM1::
# 177 "data/maps/SilphCo_7F/scripts.pory"
	lock
# 178 "data/maps/SilphCo_7F/scripts.pory"
	faceplayer
# 179 "data/maps/SilphCo_7F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_7F_EventScript_WorkerM1RocketsGone
# 180 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_RocketsAfterMasterBall
# 181 "data/maps/SilphCo_7F/scripts.pory"
	release
# 182 "data/maps/SilphCo_7F/scripts.pory"
	end
# 183 "data/maps/SilphCo_7F/scripts.pory"

# 184 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_WorkerM1RocketsGone::
# 185 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_CanceledMasterBallProject
# 186 "data/maps/SilphCo_7F/scripts.pory"
	release
# 187 "data/maps/SilphCo_7F/scripts.pory"
	end
# 188 "data/maps/SilphCo_7F/scripts.pory"

# 189 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_WorkerM2::
# 190 "data/maps/SilphCo_7F/scripts.pory"
	lock
# 191 "data/maps/SilphCo_7F/scripts.pory"
	faceplayer
# 192 "data/maps/SilphCo_7F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_7F_EventScript_WorkerM2RocketsGone
# 193 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_BadIfTeamRocketTookOver
# 194 "data/maps/SilphCo_7F/scripts.pory"
	release
# 195 "data/maps/SilphCo_7F/scripts.pory"
	end
# 196 "data/maps/SilphCo_7F/scripts.pory"

# 197 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_WorkerM2RocketsGone::
# 198 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_WowYouChasedOffTeamRocket
# 199 "data/maps/SilphCo_7F/scripts.pory"
	release
# 200 "data/maps/SilphCo_7F/scripts.pory"
	end
# 201 "data/maps/SilphCo_7F/scripts.pory"

# 202 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_WorkerF::
# 203 "data/maps/SilphCo_7F/scripts.pory"
	lock
# 204 "data/maps/SilphCo_7F/scripts.pory"
	faceplayer
# 205 "data/maps/SilphCo_7F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_7F_EventScript_WorkerFRocketsGone
# 206 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_ReallyDangerousHere
# 207 "data/maps/SilphCo_7F/scripts.pory"
	release
# 208 "data/maps/SilphCo_7F/scripts.pory"
	end
# 209 "data/maps/SilphCo_7F/scripts.pory"

# 210 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_WorkerFRocketsGone::
# 211 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_ThankYouSoMuch
# 212 "data/maps/SilphCo_7F/scripts.pory"
	release
# 213 "data/maps/SilphCo_7F/scripts.pory"
	end
# 214 "data/maps/SilphCo_7F/scripts.pory"

# 215 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_FloorSign::
# 216 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_FloorSign, MSGBOX_SIGN
# 217 "data/maps/SilphCo_7F/scripts.pory"
	end
# 218 "data/maps/SilphCo_7F/scripts.pory"

# 219 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_Joshua::
# 220 "data/maps/SilphCo_7F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_JOSHUA, SilphCo_7F_Text_JoshuaIntro, SilphCo_7F_Text_JoshuaDefeat
# 221 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_JoshuaPostBattle, MSGBOX_AUTOCLOSE
# 222 "data/maps/SilphCo_7F/scripts.pory"
	end
# 223 "data/maps/SilphCo_7F/scripts.pory"

# 224 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_Grunt1::
# 225 "data/maps/SilphCo_7F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_33, SilphCo_7F_Text_Grunt1Intro, SilphCo_7F_Text_Grunt1Defeat
# 226 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 227 "data/maps/SilphCo_7F/scripts.pory"
	end
# 228 "data/maps/SilphCo_7F/scripts.pory"

# 229 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_Grunt2::
# 230 "data/maps/SilphCo_7F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_34, SilphCo_7F_Text_Grunt2Intro, SilphCo_7F_Text_Grunt2Defeat
# 231 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 232 "data/maps/SilphCo_7F/scripts.pory"
	end
# 233 "data/maps/SilphCo_7F/scripts.pory"

# 234 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_Grunt3::
# 235 "data/maps/SilphCo_7F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_35, SilphCo_7F_Text_Grunt3Intro, SilphCo_7F_Text_Grunt3Defeat
# 236 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 237 "data/maps/SilphCo_7F/scripts.pory"
	end
# 238 "data/maps/SilphCo_7F/scripts.pory"

# 239 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_WorkerBro:: 
# 240 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_WorkerBro, MSGBOX_NPC
# 241 "data/maps/SilphCo_7F/scripts.pory"
	end
# 242 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_Text_WorkerBro:
# 243 "data/maps/SilphCo_7F/scripts.pory"
	.string "I am one of the four SILPH\n"
# 244 "data/maps/SilphCo_7F/scripts.pory"
    .string "BROTHERS!\p"
# 245 "data/maps/SilphCo_7F/scripts.pory"
	.string "I make sure the company servers\n"
# 246 "data/maps/SilphCo_7F/scripts.pory"
	.string "are working properly!$"
# 247 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_WorkerFPhone:: 
# 248 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_WorkerFPhone
# 249 "data/maps/SilphCo_7F/scripts.pory"
	release
# 250 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_WorkerFPhone2, MSGBOX_NPC
# 251 "data/maps/SilphCo_7F/scripts.pory"
	turnobject 13, DIR_NORTH
# 252 "data/maps/SilphCo_7F/scripts.pory"
	end
# 253 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_Text_WorkerFPhone:
# 254 "data/maps/SilphCo_7F/scripts.pory"
	.string "Have you tried doing what I\n"
# 255 "data/maps/SilphCo_7F/scripts.pory"
    .string "suggested earlier?\p"
# 256 "data/maps/SilphCo_7F/scripts.pory"
	.string "I'm telling you it'd work.\n"
# 257 "data/maps/SilphCo_7F/scripts.pory"
	.string "Okay, call me back.$"
# 258 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_Text_WorkerFPhone2:
# 259 "data/maps/SilphCo_7F/scripts.pory"
	.string "My coworker downstairs asks\n"
# 260 "data/maps/SilphCo_7F/scripts.pory"
	.string "me for help all the time.\p"
# 261 "data/maps/SilphCo_7F/scripts.pory"
	.string "I usually figure out the\n"
# 262 "data/maps/SilphCo_7F/scripts.pory"
	.string "solution pretty quickly…\p"
# 263 "data/maps/SilphCo_7F/scripts.pory"
	.string "But does he ever listen to\n"
# 264 "data/maps/SilphCo_7F/scripts.pory"
	.string "me the first time?\p"
# 265 "data/maps/SilphCo_7F/scripts.pory"
	.string "No!\n"
# 266 "data/maps/SilphCo_7F/scripts.pory"
	.string "Of course not!$"
# 267 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_Painting::
# 268 "data/maps/SilphCo_7F/scripts.pory"
	goto_if_unset FLAG_HIDE_SAFFRON_CIVILIANS, SilphCo_7F_EventScript_NewPainting
# 269 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_NewPainting, MSGBOX_SIGN
# 270 "data/maps/SilphCo_7F/scripts.pory"
	end
# 271 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_EventScript_NewPainting::
# 272 "data/maps/SilphCo_7F/scripts.pory"
	msgbox SilphCo_7F_Text_NewPainting, MSGBOX_SIGN
# 273 "data/maps/SilphCo_7F/scripts.pory"
	end
# 274 "data/maps/SilphCo_7F/scripts.pory"
SilphCo_7F_Text_NewPainting:
# 275 "data/maps/SilphCo_7F/scripts.pory"
	.string "It's a gorgeous painting of a bird\n"
# 276 "data/maps/SilphCo_7F/scripts.pory"
	.string "POKéMON darting between the trees.$"
