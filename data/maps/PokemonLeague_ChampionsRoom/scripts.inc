# 1 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 2 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
.equ LOCALID_RIVAL,    1
# 3 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
.equ LOCALID_PROF_OAK, 2
# 4 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 5 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_MapScripts::
# 6 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_ChampionsRoom_OnWarp
# 7 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_ChampionsRoom_OnResume
# 8 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_ChampionsRoom_OnFrame
# 9 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	.byte 0
# 10 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 11 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_OnResume::
# 12 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setvar VAR_0x8004, 4
# 13 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 14 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerSquirtle
# 15 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerBulbasaur
# 16 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerCharmander
# 17 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	end
# 18 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 19 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerSquirtle::
# 20 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_FIRST_SQUIRTLE, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 21 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_REMATCH_SQUIRTLE, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 22 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 23 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 24 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerBulbasaur::
# 25 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_FIRST_BULBASAUR, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 26 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_REMATCH_BULBASAUR, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 27 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 28 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 29 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_CheckStopTriggerCharmander::
# 30 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_FIRST_CHARMANDER, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 31 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_REMATCH_CHARMANDER, PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 32 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 33 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 34 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger::
# 35 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 36 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 37 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 38 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_OnWarp::
# 39 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_ChampionsRoom_EventScript_TurnPlayerNorth
# 40 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	.2byte 0
# 41 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 42 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_TurnPlayerNorth::
# 43 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 44 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	end
# 45 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 46 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_OnFrame::
# 47 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_ChampionsRoom_EventScript_EnterRoom
# 48 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	.2byte 0
# 49 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 50 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_EnterRoom::
# 51 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	lockall
# 52 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 53 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 54 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerEnter
# 55 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	waitmovement 0
# 56 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay 20
# 57 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_Intro
# 58 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_RematchIntro
# 59 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	goto_if_questlog PokemonLeague_ChampionsRoom_EventScript_QuestLogEnd
# 60 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setflag FLAG_TEMP_3
# 61 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setflag FLAG_TEMP_5
# 62 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	savebgm MUS_VICTORY_GYM_LEADER
# 63 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setvar VAR_FORCEANIM, 1
# 64 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_Battle
# 65 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_Rematch
# 66 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setflag FLAG_TEMP_4
# 67 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	clearflag FLAG_TEMP_5
# 68 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setflag FLAG_DEFEATED_CHAMP
# 69 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setflag FLAG_TEMP_4
# 70 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setvar VAR_FORCEANIM, 0
# 71 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_PostBattle
# 72 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_PostBattle2
# 73 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	playbgm MUS_SLOW_PALLET, 0
# 74 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	addobject LOCALID_PROF_OAK
# 75 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakPlayer
# 76 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	closemessage
# 77 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerWatchOakEnter
# 78 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, PokemonLeague_ChampionsRoom_Movement_RivalWatchOakEnter
# 79 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PROF_OAK, PokemonLeague_ChampionsRoom_Movement_OakEnter
# 80 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	waitmovement 0
# 81 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay 25
# 82 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	specialvar VAR_RESULT, GetStarterSpecies
# 83 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_RESULT
# 84 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_OakCongratulations
# 85 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_OakCongratulations2
# 86 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterRight
# 87 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterLeft
# 88 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	waitmovement 0
# 89 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_OakImDisappointedRival
# 90 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_OakImDisappointedRival2
# 91 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	closemessage
# 92 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 93 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	waitmovement 0
# 94 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay 20
# 95 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_unset FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_OakPlayerComeWithMe
# 96 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, PokemonLeague_ChampionsRoom_EventScript_OakPlayerComeWithMe2
# 97 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	closemessage
# 98 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay 13
# 99 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	applymovement LOCALID_PROF_OAK, PokemonLeague_ChampionsRoom_Movement_OakExit
# 100 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerExit
# 101 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	waitmovement 0
# 102 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	playse SE_EXIT
# 103 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_ChampionsRoom_Movement_PlayerExit2
# 104 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	waitmovement 0
# 105 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 106 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	warp MAP_POKEMON_LEAGUE_HALL_OF_FAME, 5, 12
# 107 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	waitstate
# 108 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	releaseall
# 109 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	end
# 110 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 111 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_QuestLogEnd::
# 112 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call PokemonLeague_ChampionsRoom_EventScript_StopSceneTrigger
# 113 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	releaseall
# 114 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	end
# 115 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 116 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_OakPlayerComeWithMe::
# 117 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakPlayerComeWithMe
# 118 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 119 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 120 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_OakPlayerComeWithMe2::
# 121 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakPlayerComeWithMe2
# 122 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 123 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 124 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_OakImDisappointedRival::
# 125 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakImDisappointedRival
# 126 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 127 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 128 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_OakImDisappointedRival2::
# 129 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakImDisappointedRival2
# 130 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 131 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 132 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_OakCongratulations::
# 133 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakCongratulations
# 134 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 135 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 136 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_OakCongratulations2::
# 137 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_OakCongratulations2
# 138 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 139 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 140 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_PostBattle::
# 141 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_PostBattle
# 142 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 143 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 144 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_PostBattle2::
# 145 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_PostBattle2
# 146 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 147 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 148 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Battle::
# 149 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PokemonLeague_ChampionsRoom_EventScript_BattleSquirtle
# 150 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PokemonLeague_ChampionsRoom_EventScript_BattleBulbasaur
# 151 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PokemonLeague_ChampionsRoom_EventScript_BattleCharmander
# 152 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 153 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 154 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Rematch::
# 155 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PokemonLeague_ChampionsRoom_EventScript_RematchSquirtle
# 156 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PokemonLeague_ChampionsRoom_EventScript_RematchBulbasaur
# 157 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PokemonLeague_ChampionsRoom_EventScript_RematchCharmander
# 158 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 159 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 160 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_Intro::
# 161 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_Intro
# 162 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 163 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 164 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_RematchIntro::
# 165 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Text_RematchIntro
# 166 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 167 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 168 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_BattleSquirtle::
# 169 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_FIRST_SQUIRTLE, PokemonLeague_ChampionsRoom_Text_Defeat
# 170 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 171 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 172 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_BattleBulbasaur::
# 173 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_FIRST_BULBASAUR, PokemonLeague_ChampionsRoom_Text_Defeat
# 174 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 175 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 176 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_BattleCharmander::
# 177 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_FIRST_CHARMANDER, PokemonLeague_ChampionsRoom_Text_Defeat
# 178 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 179 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 180 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_RematchSquirtle::
# 181 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_REMATCH_SQUIRTLE, PokemonLeague_ChampionsRoom_Text_Defeat2
# 182 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setflag FLAG_BLUE_REMATCH_DEFEAT
# 183 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 184 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 185 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_RematchBulbasaur::
# 186 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_REMATCH_BULBASAUR, PokemonLeague_ChampionsRoom_Text_Defeat2
# 187 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setflag FLAG_BLUE_REMATCH_DEFEAT
# 188 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 189 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 190 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_EventScript_RematchCharmander::
# 191 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_REMATCH_CHARMANDER, PokemonLeague_ChampionsRoom_Text_Defeat2
# 192 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	setflag FLAG_BLUE_REMATCH_DEFEAT
# 193 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	return
# 194 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 195 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_PlayerEnter::
# 196 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 197 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 198 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 199 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 200 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 201 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 202 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 203 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 204 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 205 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 206 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	step_end
# 207 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 208 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_PlayerExit::
# 209 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 210 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_left
# 211 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 212 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 213 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 214 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_right
# 215 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 216 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 217 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	step_end
# 218 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_PlayerExit2::
# 219 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 220 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 221 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_8
# 222 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	set_invisible
# 223 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	step_end
# 224 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 225 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_PlayerWatchOakEnter::
# 226 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_8
# 227 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 228 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 229 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 230 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 231 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 232 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 233 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 234 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 235 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_in_place_faster_left
# 236 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	step_end
# 237 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 238 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_OakEnter::
# 239 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 240 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 241 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 242 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 243 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 244 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 245 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 246 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_left
# 247 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 248 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 249 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_in_place_faster_down
# 250 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 251 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	step_end
# 252 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 253 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_OakExit::
# 254 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 255 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 256 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_right
# 257 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 258 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 259 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 260 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_up
# 261 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_8
# 262 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	set_invisible
# 263 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	step_end
# 264 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"

# 265 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
PokemonLeague_ChampionsRoom_Movement_RivalWatchOakEnter::
# 266 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 267 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 268 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 269 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 270 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 271 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 272 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 273 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 274 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	delay_16
# 275 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	walk_in_place_faster_left
# 276 "data/maps/PokemonLeague_ChampionsRoom/scripts.pory"
	step_end
