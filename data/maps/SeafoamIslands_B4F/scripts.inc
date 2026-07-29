# 1 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 2 "data/maps/SeafoamIslands_B4F/scripts.pory"
.equ NUM_BOULDERS_PRESENT, VAR_TEMP_2
# 3 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 4 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_MapScripts::
# 5 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeafoamIslands_B4F_OnTransition
# 6 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SeafoamIslands_B4F_OnResume
# 7 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SeafoamIslands_B4F_OnLoad
# 8 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SeafoamIslands_B4F_OnWarp
# 9 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SeafoamIslands_B4F_OnFrame
# 10 "data/maps/SeafoamIslands_B4F/scripts.pory"
	.byte 0
# 11 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 12 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_OnResume::
# 13 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, SeafoamIslands_B4F_EventScript_TryRemoveArticuno
# 14 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 15 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 16 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_TryRemoveArticuno::
# 17 "data/maps/SeafoamIslands_B4F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 18 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 19 "data/maps/SeafoamIslands_B4F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 20 "data/maps/SeafoamIslands_B4F/scripts.pory"
	return
# 21 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 22 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_OnTransition::
# 23 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_FOUGHT_ARTICUNO, SeafoamIslands_B4F_EventScript_ShowArticuno
# 24 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_STOPPED_SEAFOAM_B4F_CURRENT, SeafoamIslands_B4F_EventScript_CheckStoppedCurrent
# 25 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_set FLAG_STOPPED_SEAFOAM_B4F_CURRENT, SeafoamIslands_B4F_EventScript_SetNoCurrentLayout
# 26 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 27 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 28 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_CheckStoppedCurrent::
# 29 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar NUM_BOULDERS_PRESENT, 0
# 30 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_1, SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 31 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_2, SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 32 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_eq NUM_BOULDERS_PRESENT, 2, SeafoamIslands_B4F_EventScript_StoppedCurrent
# 33 "data/maps/SeafoamIslands_B4F/scripts.pory"
	return
# 34 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 35 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_StoppedCurrent::
# 36 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setflag FLAG_STOPPED_SEAFOAM_B4F_CURRENT
# 37 "data/maps/SeafoamIslands_B4F/scripts.pory"
	return
# 38 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 39 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_SetNoCurrentLayout::
# 40 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setmaplayoutindex LAYOUT_SEAFOAM_ISLANDS_B4F_CURRENT_STOPPED
# 41 "data/maps/SeafoamIslands_B4F/scripts.pory"
	return
# 42 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 43 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_ShowArticuno::
# 44 "data/maps/SeafoamIslands_B4F/scripts.pory"
	clearflag FLAG_HIDE_ARTICUNO
# 45 "data/maps/SeafoamIslands_B4F/scripts.pory"
	return
# 46 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 47 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_OnLoad::
# 48 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar NUM_BOULDERS_PRESENT, 0
# 49 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_1, SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 50 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_2, SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 51 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_eq NUM_BOULDERS_PRESENT, 2, SeafoamIslands_B4F_EventScript_SetCalmWaterNearStairs
# 52 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 53 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 54 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_SetCalmWaterNearStairs::
# 55 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setmetatile 12, 14, METATILE_General_CalmWater, 0
# 56 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setmetatile 13, 14, METATILE_General_CalmWater, 0
# 57 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 58 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 59 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_OnWarp::
# 60 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 1, SeafoamIslands_B4F_EventScript_WarpInOnCurrent
# 61 "data/maps/SeafoamIslands_B4F/scripts.pory"
	.2byte 0
# 62 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 63 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_Slowpoke::
# 64 "data/maps/SeafoamIslands_B4F/scripts.pory"
	msgbox SeafoamIslands_B4F_Text_Slowpoke, MSGBOX_NPC
# 65 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setflag FLAG_MOVE_SLOWBRO2
# 66 "data/maps/SeafoamIslands_B4F/scripts.pory"
	removeobject 6
# 67 "data/maps/SeafoamIslands_B4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 68 "data/maps/SeafoamIslands_B4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 69 "data/maps/SeafoamIslands_B4F/scripts.pory"
	release
# 70 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 71 "data/maps/SeafoamIslands_B4F/scripts.pory"
	
# 72 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_WarpInOnCurrent::
# 73 "data/maps/SeafoamIslands_B4F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 74 "data/maps/SeafoamIslands_B4F/scripts.pory"
	special ForcePlayerToStartSurfing
# 75 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 76 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 77 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_OnFrame::
# 78 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script_2 VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 1, SeafoamIslands_B4F_EventScript_EnterOnCurrent
# 79 "data/maps/SeafoamIslands_B4F/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, SeafoamIslands_B4F_EventScript_EnterByFalling
# 80 "data/maps/SeafoamIslands_B4F/scripts.pory"
	.2byte 0
# 81 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 82 "data/maps/SeafoamIslands_B4F/scripts.pory"
@ The current the player is forced in on from B3F
# 83 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_EnterOnCurrent::
# 84 "data/maps/SeafoamIslands_B4F/scripts.pory"
	lockall
# 85 "data/maps/SeafoamIslands_B4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafoamIslands_B4F_Movement_EnterOnCurrent
# 86 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitmovement 0
# 87 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar VAR_MAP_SCENE_SEAFOAM_ISLANDS_B4F, 0
# 88 "data/maps/SeafoamIslands_B4F/scripts.pory"
	releaseall
# 89 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 90 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 91 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_Movement_EnterOnCurrent::
# 92 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_fast_up
# 93 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_fast_up
# 94 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_fast_up
# 95 "data/maps/SeafoamIslands_B4F/scripts.pory"
	step_end
# 96 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 97 "data/maps/SeafoamIslands_B4F/scripts.pory"
@ The current the player lands on when entering the map by falling
# 98 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_EnterByFalling::
# 99 "data/maps/SeafoamIslands_B4F/scripts.pory"
	lockall
# 100 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar NUM_BOULDERS_PRESENT, 0
# 101 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_1, SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 102 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_unset FLAG_HIDE_SEAFOAM_B4F_BOULDER_2, SeafoamIslands_B4F_EventScript_AddBoulderPresent
# 103 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_eq NUM_BOULDERS_PRESENT, 2, SeafoamIslands_B4F_EventScript_CurrentBlocked
# 104 "data/maps/SeafoamIslands_B4F/scripts.pory"
	getplayerxy VAR_0x8008, VAR_0x8009
# 105 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_lt VAR_0x8008, 9, SeafoamIslands_B4F_EventScript_RideCurrentFar
# 106 "data/maps/SeafoamIslands_B4F/scripts.pory"
	call_if_ge VAR_0x8008, 9, SeafoamIslands_B4F_EventScript_RideCurrentClose
# 107 "data/maps/SeafoamIslands_B4F/scripts.pory"
	special SeafoamIslandsB4F_CurrentDumpsPlayerOnLand
# 108 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 109 "data/maps/SeafoamIslands_B4F/scripts.pory"
	releaseall
# 110 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 111 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 112 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_AddBoulderPresent::
# 113 "data/maps/SeafoamIslands_B4F/scripts.pory"
	addvar NUM_BOULDERS_PRESENT, 1
# 114 "data/maps/SeafoamIslands_B4F/scripts.pory"
	return
# 115 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 116 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_RideCurrentFar::
# 117 "data/maps/SeafoamIslands_B4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafoamIslands_B4F_Movement_RideCurrentFar
# 118 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitmovement 0
# 119 "data/maps/SeafoamIslands_B4F/scripts.pory"
	return
# 120 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 121 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_RideCurrentClose::
# 122 "data/maps/SeafoamIslands_B4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafoamIslands_B4F_Movement_RideCurrentClose
# 123 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitmovement 0
# 124 "data/maps/SeafoamIslands_B4F/scripts.pory"
	return
# 125 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 126 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_CurrentBlocked::
# 127 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 128 "data/maps/SeafoamIslands_B4F/scripts.pory"
	releaseall
# 129 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 130 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 131 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_Movement_RideCurrentFar::
# 132 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 133 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 134 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 135 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_right
# 136 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_right
# 137 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_right
# 138 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_right
# 139 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 140 "data/maps/SeafoamIslands_B4F/scripts.pory"
	step_end
# 141 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 142 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_Movement_RideCurrentClose::
# 143 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 144 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 145 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 146 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_right
# 147 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_right
# 148 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_right
# 149 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 150 "data/maps/SeafoamIslands_B4F/scripts.pory"
	step_end
# 151 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 152 "data/maps/SeafoamIslands_B4F/scripts.pory"
@ Triggers blocking re-entry to B3F
# 153 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_UpwardCurrent::
# 154 "data/maps/SeafoamIslands_B4F/scripts.pory"
	lockall
# 155 "data/maps/SeafoamIslands_B4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SeafoamIslands_B4F_Movement_WalkUp
# 156 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitmovement 0
# 157 "data/maps/SeafoamIslands_B4F/scripts.pory"
	releaseall
# 158 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 159 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 160 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_Movement_WalkUp::
# 161 "data/maps/SeafoamIslands_B4F/scripts.pory"
	walk_up
# 162 "data/maps/SeafoamIslands_B4F/scripts.pory"
	step_end
# 163 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 164 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_Articuno::
# 165 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 166 "data/maps/SeafoamIslands_B4F/scripts.pory"
	special QuestLog_CutRecording
# 167 "data/maps/SeafoamIslands_B4F/scripts.pory"
	lock
# 168 "data/maps/SeafoamIslands_B4F/scripts.pory"
	faceplayer
# 169 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setwildbattle SPECIES_ARTICUNO, 50
# 170 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitse
# 171 "data/maps/SeafoamIslands_B4F/scripts.pory"
	playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
# 172 "data/maps/SeafoamIslands_B4F/scripts.pory"
	message Text_Gyaoo
# 173 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitmessage
# 174 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitmoncry
# 175 "data/maps/SeafoamIslands_B4F/scripts.pory"
	delay 10
# 176 "data/maps/SeafoamIslands_B4F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 177 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitbuttonpress
# 178 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 179 "data/maps/SeafoamIslands_B4F/scripts.pory"
	special StartLegendaryBattle
# 180 "data/maps/SeafoamIslands_B4F/scripts.pory"
	waitstate
# 181 "data/maps/SeafoamIslands_B4F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 182 "data/maps/SeafoamIslands_B4F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 183 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, SeafoamIslands_B4F_EventScript_DefeatedArticuno
# 184 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, SeafoamIslands_B4F_EventScript_RanFromArticuno
# 185 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, SeafoamIslands_B4F_EventScript_RanFromArticuno
# 186 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setflag FLAG_FOUGHT_ARTICUNO
# 187 "data/maps/SeafoamIslands_B4F/scripts.pory"
	release
# 188 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 189 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 190 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_DefeatedArticuno::
# 191 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setflag FLAG_FOUGHT_ARTICUNO
# 192 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto EventScript_RemoveStaticMon
# 193 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 194 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 195 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_RanFromArticuno::
# 196 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setvar VAR_0x8004, SPECIES_ARTICUNO
# 197 "data/maps/SeafoamIslands_B4F/scripts.pory"
	goto EventScript_MonFlewAway
# 198 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 199 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 200 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_BoulderHintSign::
# 201 "data/maps/SeafoamIslands_B4F/scripts.pory"
	msgbox SeafoamIslands_B4F_Text_BouldersMightChangeWaterFlow, MSGBOX_SIGN
# 202 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 203 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 204 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_EventScript_FastCurrentSign::
# 205 "data/maps/SeafoamIslands_B4F/scripts.pory"
	msgbox SeafoamIslands_B4F_Text_DangerFastCurrent, MSGBOX_SIGN
# 206 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
# 207 "data/maps/SeafoamIslands_B4F/scripts.pory"

# 208 "data/maps/SeafoamIslands_B4F/scripts.pory"
SeafoamIslands_B4F_Weebra::
# 209 "data/maps/SeafoamIslands_B4F/scripts.pory"
	trainerbattle_single TRAINER_WEEBRA, SeafoamIslands_B4F_Text_WeebraIntro, SeafoamIslands_B4F_Text_WeebraDefeat
# 210 "data/maps/SeafoamIslands_B4F/scripts.pory"
	msgbox SeafoamIslands_B4F_Text_WeebraPostBattle, MSGBOX_AUTOCLOSE
# 211 "data/maps/SeafoamIslands_B4F/scripts.pory"
	setflag FLAG_WEEBRA
# 212 "data/maps/SeafoamIslands_B4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 213 "data/maps/SeafoamIslands_B4F/scripts.pory"
	removeobject 5
# 214 "data/maps/SeafoamIslands_B4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 215 "data/maps/SeafoamIslands_B4F/scripts.pory"
	end
