# 1 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 2 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
.equ LOCALID_GRUNT1, 5
# 3 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
.equ LOCALID_GRUNT2, 1
# 4 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
.equ LOCALID_GRUNT3, 2
# 5 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
.equ LOCALID_ADMIN1, 3
# 6 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
.equ LOCALID_ADMIN2, 4
# 7 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 8 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
.equ PLAYER_X_POS, VAR_0x8004
# 9 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
.equ PLAYER_Y_POS, VAR_0x8005
# 10 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 11 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_MapScripts::
# 12 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_RocketWarehouse_OnLoad
# 13 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_RocketWarehouse_OnTransition
# 14 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	.byte 0
# 15 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 16 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_OnTransition::
# 17 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_FIVE_ISLAND_ROCKET_WAREHOUSE
# 18 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 19 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 20 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_OnLoad::
# 21 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_ADMIN, FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry
# 22 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	special CheckBeatJohto
# 23 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_RocketWarehouse_EventScript_ShowClerk
# 24 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 25 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 26 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry::
# 27 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	setmetatile 26, 20, METATILE_SilphCo_Arrow_Up, 0
# 28 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	setmetatile 27, 20, METATILE_SilphCo_Arrow_Up, 0
# 29 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	return
# 30 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 31 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Cage::
# 32 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	lockall
# 33 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	goto_if_set FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE, FiveIsland_RocketWarehouse_EventScript_CageUnlocked
# 34 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_ManyMonsLockedInPen
# 35 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	releaseall
# 36 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 37 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 38 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_CageUnlocked::
# 39 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_PenUnlockedMonsFled
# 40 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	releaseall
# 41 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 42 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 43 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Computer::
# 44 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_ReportWithGraphsAndText, MSGBOX_SIGN
# 45 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 46 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 47 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Admin2Trigger::
# 48 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	lockall
# 49 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_ADMIN2, Common_Movement_WalkInPlaceFasterLeft
# 50 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
# 51 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	releaseall
# 52 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 53 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 54 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Gideon::
# 55 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_GIDEON, FiveIsland_RocketWarehouse_Text_GideonIntro, FiveIsland_RocketWarehouse_Text_GideonDefeat, FiveIsland_RocketWarehouse_EventScript_DefeatedGideon
# 56 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, FiveIsland_RocketWarehouse_EventScript_MentionGiovannisKid
# 57 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GetLostLeaveMeBe, MSGBOX_AUTOCLOSE
# 58 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 59 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 60 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_MentionGiovannisKid::
# 61 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 5
# 62 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GiovannisKidHasRedHair, MSGBOX_AUTOCLOSE
# 63 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 64 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 65 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedGideon::
# 66 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GideonPostBattle
# 67 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	setflag FLAG_RECOVERED_SAPPHIRE
# 68 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	giveitem ITEM_SAPPHIRE
# 69 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_GetLostLeaveMeBe
# 70 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	release
# 71 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 72 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 73 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Grunt2::
# 74 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_47, FiveIsland_RocketWarehouse_Text_Grunt2Intro, FiveIsland_RocketWarehouse_Text_Grunt2Defeat
# 75 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 76 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 77 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 78 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Grunt3::
# 79 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_48, FiveIsland_RocketWarehouse_Text_Grunt3Intro, FiveIsland_RocketWarehouse_Text_Grunt3Defeat
# 80 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 81 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 82 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 83 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Admin2::
# 84 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_ADMIN_2, FiveIsland_RocketWarehouse_Text_Admin2Intro, FiveIsland_RocketWarehouse_Text_Admin2Defeat, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2
# 85 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Admin2PostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 87 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 88 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin2::
# 89 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	getplayerxy PLAYER_X_POS, PLAYER_Y_POS
# 90 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_le PLAYER_X_POS, 24, FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin2
# 91 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Admin2PostBattle
# 92 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	closemessage
# 93 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 94 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	removeobject LOCALID_GRUNT2
# 95 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	removeobject LOCALID_GRUNT3
# 96 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	removeobject LOCALID_ADMIN2
# 97 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	removeobject LOCALID_ADMIN1
# 98 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	setflag FLAG_HIDE_FIVE_ISLAND_ROCKETS
# 99 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 100 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	setvar VAR_MAP_SCENE_ROCKET_WAREHOUSE, 1
# 101 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	setflag FLAG_DEFEATED_ROCKETS_IN_WAREHOUSE
# 102 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	release
# 103 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 104 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 105 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin2::
# 106 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 107 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
# 108 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	return
# 109 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 110 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Grunt1::
# 111 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_42, FiveIsland_RocketWarehouse_Text_Grunt1Intro, FiveIsland_RocketWarehouse_Text_Grunt1Defeat
# 112 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 113 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 114 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 115 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Admin1::
# 116 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_ADMIN, FiveIsland_RocketWarehouse_Text_Admin1Intro, FiveIsland_RocketWarehouse_Text_Admin1Defeat, FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1
# 117 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough, MSGBOX_AUTOCLOSE
# 118 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 119 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 120 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_DefeatedAdmin1::
# 121 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	getplayerxy PLAYER_X_POS, PLAYER_Y_POS
# 122 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 123 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq VAR_RESULT, DIR_NORTH, FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1
# 124 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Admin1PostBattle
# 125 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	closemessage
# 126 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_le PLAYER_X_POS, 24, FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitchFar
# 127 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq PLAYER_X_POS, 25, FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitch
# 128 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq PLAYER_X_POS, 26, FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch
# 129 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq PLAYER_X_POS, 27, FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch
# 130 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	playse SE_PIN
# 131 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call FiveIsland_RocketWarehouse_EventScript_SetArrowsForReEntry
# 132 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	special DrawWholeMapView
# 133 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitse
# 134 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_le PLAYER_X_POS, 24, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
# 135 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq PLAYER_X_POS, 25, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
# 136 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq PLAYER_X_POS, 26, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft
# 137 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	call_if_eq PLAYER_X_POS, 27, FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerDown
# 138 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_MadeItSoYouCanComeBackThrough
# 139 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	release
# 140 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 141 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 142 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_PlayerFaceAdmin1::
# 143 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	goto_if_eq PLAYER_X_POS, 27, EventScript_Return
# 144 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 145 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
# 146 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	return
# 147 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 148 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitchFar::
# 149 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_ADMIN1, FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitchFar
# 150 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
# 151 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	return
# 152 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 153 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_AdminWalkToSwitch::
# 154 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_ADMIN1, FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitch
# 155 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
# 156 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	return
# 157 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 158 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_AdminFaceSwitch::
# 159 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_ADMIN1, Common_Movement_WalkInPlaceFasterUp
# 160 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
# 161 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	return
# 162 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 163 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerLeft::
# 164 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_ADMIN1, Common_Movement_WalkInPlaceFasterLeft
# 165 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
# 166 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	return
# 167 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 168 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_AdminFacePlayerDown::
# 169 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	applymovement LOCALID_ADMIN1, Common_Movement_WalkInPlaceFasterDown
# 170 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmovement 0
# 171 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	return
# 172 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 173 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitchFar::
# 174 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	walk_right
# 175 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	walk_right
# 176 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	walk_in_place_faster_up
# 177 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	step_end
# 178 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 179 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_Movement_AdminWalkToSwitch::
# 180 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	walk_right
# 181 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	walk_in_place_faster_up
# 182 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	step_end
# 183 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 184 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Police::
# 185 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Police, MSGBOX_NPC
# 186 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 187 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 188 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_Text_Police::
# 189 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
    .string "We are investigating this place,\n"  
# 190 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
    .string "and are currently holding this\l"  
# 191 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
    .string "SCIENTIST for questioning.$"
# 192 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 193 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Police2::
# 194 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox FiveIsland_RocketWarehouse_Text_Clerk, MSGBOX_NPC
# 195 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 196 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 197 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_ShowClerk::
# 198 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	clearflag FLAG_SHOPJOHTO
# 199 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 200 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 201 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_EventScript_Clerk::
# 202 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 203 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	lock
# 204 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	faceplayer
# 205 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	message FiveIsland_RocketWarehouse_Text_Clerk
# 206 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	waitmessage
# 207 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	pokemart FiveIsland_RocketWarehouse_JohtoShop
# 208 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	msgbox Text_PleaseComeAgain
# 209 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	release
# 210 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
# 211 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"

# 212 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	.align 2
# 213 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
FiveIsland_RocketWarehouse_JohtoShop::
# 214 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 215 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 216 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 217 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 218 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 219 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 220 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	.2byte ITEM_STARF_BERRY
# 221 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	.2byte ITEM_NONE
# 222 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	release
# 223 "data/maps/FiveIsland_RocketWarehouse/scripts.pory"
	end
