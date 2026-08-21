# 1 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 2 "data/maps/SeafoamIslands_B3F/scripts.pory"
.equ NUM_BOULDERS_PRESENT, VAR_TEMP_2
# 3 "data/maps/SeafoamIslands_B3F/scripts.pory"
.set LOCALID_MIRAGE, 8
# 4 "data/maps/SeafoamIslands_B3F/scripts.pory"
.set LOCALID_REGICE, 9
# 5 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 6 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_MapScripts::
# 7 "data/maps/SeafoamIslands_B3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeafoamIslands_B3F_OnTransition
# 8 "data/maps/SeafoamIslands_B3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SeafoamIslands_B3F_OnFrame
# 9 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.byte 0
# 10 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 11 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_OnTransition::
# 12 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_unset FLAG_STOPPED_SEAFOAM_B3F_CURRENT, SeafoamIslands_B3F_EventScript_CheckStoppedCurrent
# 13 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_set FLAG_STOPPED_SEAFOAM_B3F_CURRENT, SeafoamIslands_B3F_EventScript_SetNoCurrentLayout
# 14 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 15 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 16 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_CheckStoppedCurrent::
# 17 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar NUM_BOULDERS_PRESENT, 0
# 18 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_1, SeafoamIslands_B3F_EventScript_AddBoulderPresent
# 19 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_2, SeafoamIslands_B3F_EventScript_AddBoulderPresent
# 20 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_eq NUM_BOULDERS_PRESENT, 2, SeafoamIslands_B3F_EventScript_StoppedCurrent
# 21 "data/maps/SeafoamIslands_B3F/scripts.pory"
	return
# 22 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 23 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_StoppedCurrent::
# 24 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setflag FLAG_STOPPED_SEAFOAM_B3F_CURRENT
# 25 "data/maps/SeafoamIslands_B3F/scripts.pory"
	return
# 26 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 27 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_SetNoCurrentLayout::
# 28 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setmaplayoutindex LAYOUT_SEAFOAM_ISLANDS_B3F_CURRENT_STOPPED
# 29 "data/maps/SeafoamIslands_B3F/scripts.pory"
	return
# 30 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 31 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_OnFrame::
# 32 "data/maps/SeafoamIslands_B3F/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, SeafoamIslands_B3F_EventScript_EnterByFalling
# 33 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.2byte 0
# 34 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 35 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_EnterByFalling::
# 36 "data/maps/SeafoamIslands_B3F/scripts.pory"
	lockall
# 37 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar NUM_BOULDERS_PRESENT, 0
# 38 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_1, SeafoamIslands_B3F_EventScript_AddBoulderPresent
# 39 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B3F_BOULDER_2, SeafoamIslands_B3F_EventScript_AddBoulderPresent
# 40 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq NUM_BOULDERS_PRESENT, 2, SeafoamIslands_B3F_EventScript_CurrentBlocked
# 41 "data/maps/SeafoamIslands_B3F/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 42 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_lt VAR_0x8008, 24, SeafoamIslands_B3F_EventScript_RideCurrentFar
# 43 "data/maps/SeafoamIslands_B3F/scripts.pory"
	call_if_ge VAR_0x8008, 24, SeafoamIslands_B3F_EventScript_RideCurrentClose
# 44 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 1
# 45 "data/maps/SeafoamIslands_B3F/scripts.pory"
	warp MAP_SEAFOAM_ISLANDS_B4F, 27, 21
# 46 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitstate
# 47 "data/maps/SeafoamIslands_B3F/scripts.pory"
	releaseall
# 48 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 49 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 50 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_AddBoulderPresent::
# 51 "data/maps/SeafoamIslands_B3F/scripts.pory"
	addvar NUM_BOULDERS_PRESENT, 1
# 52 "data/maps/SeafoamIslands_B3F/scripts.pory"
	return
# 53 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 54 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_RideCurrentFar::
# 55 "data/maps/SeafoamIslands_B3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafoamIslands_B3F_Movement_RideCurrentFar
# 56 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmovement 0
# 57 "data/maps/SeafoamIslands_B3F/scripts.pory"
	return
# 58 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 59 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_RideCurrentClose::
# 60 "data/maps/SeafoamIslands_B3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafoamIslands_B3F_Movement_RideCurrentClose
# 61 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmovement 0
# 62 "data/maps/SeafoamIslands_B3F/scripts.pory"
	return
# 63 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 64 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_CurrentBlocked::
# 65 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 66 "data/maps/SeafoamIslands_B3F/scripts.pory"
	releaseall
# 67 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 68 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 69 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Movement_RideCurrentFar::
# 70 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 71 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 72 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 73 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 74 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_right
# 75 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_right
# 76 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_right
# 77 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 78 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 79 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 80 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 81 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 82 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 83 "data/maps/SeafoamIslands_B3F/scripts.pory"
	step_end
# 84 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 85 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Movement_RideCurrentClose::
# 86 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 87 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 88 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 89 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 90 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_right
# 91 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_right
# 92 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 93 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 94 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 95 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 96 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 97 "data/maps/SeafoamIslands_B3F/scripts.pory"
	walk_fast_down
# 98 "data/maps/SeafoamIslands_B3F/scripts.pory"
	step_end
# 99 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 100 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_OrbingCheck::
# 101 "data/maps/SeafoamIslands_B3F/scripts.pory"
	lock
# 102 "data/maps/SeafoamIslands_B3F/scripts.pory"
	faceplayer
# 103 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_set FLAG_CAUGHT_REGICE, SeafoamIslands_B3F_EventScript_End
# 104 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_set FLAG_REGICE_CHECKED, SeafoamIslands_B3F_EventScript_Orbing
# 105 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_RegiceCheck
# 106 "data/maps/SeafoamIslands_B3F/scripts.pory"
	closemessage
# 107 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar VAR_0x8005, 1
# 108 "data/maps/SeafoamIslands_B3F/scripts.pory"
	special IsDodrioInParty
# 109 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SeafoamIslands_B3F_EventScript_NoEligiblePkmn
# 110 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar 0x8004, FAMECHECKER_LORELEI
# 111 "data/maps/SeafoamIslands_B3F/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 112 "data/maps/SeafoamIslands_B3F/scripts.pory"
	compare VAR_RESULT, TRUE
# 113 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq SeafoamIslands_B3F_EventScript_Flag
# 114 "data/maps/SeafoamIslands_B3F/scripts.pory"
	release
# 115 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 116 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 117 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_NoEligiblePkmn::
# 118 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_NoEligiblePkmn
# 119 "data/maps/SeafoamIslands_B3F/scripts.pory"
	release
# 120 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 121 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 122 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_Flag::
# 123 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setflag FLAG_REGICE_CHECKED
# 124 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto SeafoamIslands_B3F_EventScript_Orbing
# 125 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 126 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 127 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_Orbing::
# 128 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_Whitney, MSGBOX_YESNO
# 129 "data/maps/SeafoamIslands_B3F/scripts.pory"
	closemessage
# 130 "data/maps/SeafoamIslands_B3F/scripts.pory"
	delay 40
# 131 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SeafoamIslands_B3F_EventScript_NoWhitney
# 132 "data/maps/SeafoamIslands_B3F/scripts.pory"
	trainerbattle_single TRAINER_FROZEN, SeafoamIslands_B3F_Text_YesWhitney, SeafoamIslands_B3F_Text_PostWhitney, SeafoamIslands_B3F_EventScript_PostWhitney, NO_MUSIC
# 133 "data/maps/SeafoamIslands_B3F/scripts.pory"
	release
# 134 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 135 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 136 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_PostWhitney::
# 137 "data/maps/SeafoamIslands_B3F/scripts.pory"
	special HealPlayerParty
# 138 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_WhitneyPostBattle
# 139 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmessage
# 140 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto SeafoamIslands_B3F_EventScript_BattleRegice
# 141 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 142 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_BattleRegice::
# 143 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 144 "data/maps/SeafoamIslands_B3F/scripts.pory"
	special QuestLog_CutRecording
# 145 "data/maps/SeafoamIslands_B3F/scripts.pory"
	lock
# 146 "data/maps/SeafoamIslands_B3F/scripts.pory"
	faceplayer
# 147 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setwildbattle SPECIES_REGICE, 70
# 148 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitse
# 149 "data/maps/SeafoamIslands_B3F/scripts.pory"
	playmoncry SPECIES_REGICE, CRY_MODE_ENCOUNTER
# 150 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmessage
# 151 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmoncry
# 152 "data/maps/SeafoamIslands_B3F/scripts.pory"
	delay 10
# 153 "data/maps/SeafoamIslands_B3F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 154 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitbuttonpress
# 155 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 156 "data/maps/SeafoamIslands_B3F/scripts.pory"
	special StartLegendaryBattle
# 157 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitstate
# 158 "data/maps/SeafoamIslands_B3F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 159 "data/maps/SeafoamIslands_B3F/scripts.pory"
	removeobject LOCALID_REGICE
# 160 "data/maps/SeafoamIslands_B3F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 161 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SeafoamIslands_B3F_EventScript_DefeatedCelebi
# 162 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SeafoamIslands_B3F_EventScript_RanFromCelebi
# 163 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SeafoamIslands_B3F_EventScript_RanFromCelebi
# 164 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setflag FLAG_CAUGHT_REGICE
# 165 "data/maps/SeafoamIslands_B3F/scripts.pory"
	clearflag FLAG_ICE_TRAINER
# 166 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_EndWhitney
# 167 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmessage
# 168 "data/maps/SeafoamIslands_B3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 169 "data/maps/SeafoamIslands_B3F/scripts.pory"
	removeobject LOCALID_MIRAGE
# 170 "data/maps/SeafoamIslands_B3F/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 171 "data/maps/SeafoamIslands_B3F/scripts.pory"
	release
# 172 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 173 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 174 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_DefeatedCelebi::
# 175 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setflag FLAG_CAUGHT_REGICE
# 176 "data/maps/SeafoamIslands_B3F/scripts.pory"
	clearflag FLAG_ICE_TRAINER
# 177 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_EndWhitney
# 178 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmessage
# 179 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto EventScript_RemoveStaticMon
# 180 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 181 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 182 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_RanFromCelebi::
# 183 "data/maps/SeafoamIslands_B3F/scripts.pory"
	setvar VAR_0x8004, SPECIES_REGICE
# 184 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_EndWhitney
# 185 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmessage
# 186 "data/maps/SeafoamIslands_B3F/scripts.pory"
	goto EventScript_MonFlewAway
# 187 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 188 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 189 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_NoWhitney::
# 190 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_NoWhitney
# 191 "data/maps/SeafoamIslands_B3F/scripts.pory"
	release
# 192 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 193 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 194 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_End::
# 195 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_EndWhitney
# 196 "data/maps/SeafoamIslands_B3F/scripts.pory"
	waitmessage
# 197 "data/maps/SeafoamIslands_B3F/scripts.pory"
	clearflag FLAG_ICE_TRAINER
# 198 "data/maps/SeafoamIslands_B3F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 199 "data/maps/SeafoamIslands_B3F/scripts.pory"
	removeobject LOCALID_MIRAGE
# 200 "data/maps/SeafoamIslands_B3F/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 201 "data/maps/SeafoamIslands_B3F/scripts.pory"
	release
# 202 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 203 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 204 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_EventScript_Regice::
# 205 "data/maps/SeafoamIslands_B3F/scripts.pory"
	lock
# 206 "data/maps/SeafoamIslands_B3F/scripts.pory"
	faceplayer
# 207 "data/maps/SeafoamIslands_B3F/scripts.pory"
	msgbox SeafoamIslands_B3F_Text_Regice, MSGBOX_NPC
# 208 "data/maps/SeafoamIslands_B3F/scripts.pory"
	release
# 209 "data/maps/SeafoamIslands_B3F/scripts.pory"
	end
# 210 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 211 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_Regice::
# 212 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "REGICE!$"
# 213 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 214 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_NoEligiblePkmn::
# 215 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "You have not meet the requirements.\p"
# 216 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Come back when you do.$"
# 217 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 218 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_RegiceCheck::
# 219 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Hello there {PLAYER}.\p"
# 220 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "I am the Frozen Mirage Trainer.\p"
# 221 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Beat me and you shall face a\n"
# 222 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "special POKEMON.\p"
# 223 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "But first, I want to see a\n"
# 224 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Three Headed Mascot,\l"
# 225 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "and knowledge on the Ice queen.$"
# 226 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 227 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_Whitney::
# 228 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "So, you wish to face me?$"
# 229 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Better Save First,\l$"
# 230 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "One chance at REGICE.$"
# 231 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 232 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_YesWhitney::
# 233 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 234 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 235 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_PostWhitney::
# 236 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "So you are worthy...$"
# 237 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 238 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_WhitneyPostBattle::
# 239 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Alright, you have bested me.\p"
# 240 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Be prepared to face REGICE!$"
# 241 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 242 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_EndWhitney::
# 243 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Goodbye.$"
# 244 "data/maps/SeafoamIslands_B3F/scripts.pory"

# 245 "data/maps/SeafoamIslands_B3F/scripts.pory"
SeafoamIslands_B3F_Text_NoWhitney::
# 246 "data/maps/SeafoamIslands_B3F/scripts.pory"
	.string "Alright, take your time.$"
