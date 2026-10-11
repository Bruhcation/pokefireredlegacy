# 1 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 2 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
.equ LOCALID_SAPPHIRE, 1
# 3 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
.equ LOCALID_THIEF,    2
# 4 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 5 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_MapScripts::
# 6 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.byte 0
# 7 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 8 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Sapphire::
# 9 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	lock
# 10 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	faceplayer
# 11 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 12 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 13 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	message SixIsland_DottedHole_SapphireRoom_Text_FoundSapphire
# 14 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmessage
# 15 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitfanfare
# 16 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	closemessage
# 17 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setobjectxyperm LOCALID_THIEF, 5, 0
# 18 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	addobject LOCALID_THIEF
# 19 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	playse SE_FALL
# 20 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefFallIn
# 21 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 22 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	playse SE_M_STRENGTH
# 23 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft
# 24 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft
# 25 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown
# 26 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown
# 27 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setvar VAR_0x8004, 3
# 28 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setvar VAR_0x8005, 0
# 29 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setvar VAR_0x8006, 12
# 30 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setvar VAR_0x8007, 3
# 31 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	special ShakeScreen
# 32 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	delay 60
# 33 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireNorth
# 34 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireSouth
# 35 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireEast
# 36 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireWest
# 37 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 38 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	msgbox SixIsland_DottedHole_SapphireRoom_Text_IWasRightInTailingYou
# 39 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	closemessage
# 40 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireNorth
# 41 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireSouth
# 42 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireEast
# 43 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireWest
# 44 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	removeobject LOCALID_SAPPHIRE
# 45 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft2
# 46 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft2
# 47 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown2
# 48 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown2
# 49 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	msgbox SixIsland_DottedHole_SapphireRoom_Text_SellToTeamRocketTellPassword
# 50 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	closemessage
# 51 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitNorth
# 52 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitSouth
# 53 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitEast
# 54 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitWest
# 55 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	playse SE_EXIT
# 56 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	delay 35
# 57 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	removeobject LOCALID_THIEF
# 58 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setflag FLAG_LEARNED_YES_NAH_CHANSEY
# 59 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	clearflag FLAG_HIDE_JOHTO_LEADERS
# 60 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	release
# 61 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	end
# 62 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 63 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
@ Lots of redundant scripts below
# 64 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft2::
# 65 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 66 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 67 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 68 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 69 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown2::
# 70 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 71 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 72 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 73 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 74 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefLeft::
# 75 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 76 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 77 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 78 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 79 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_PlayerFaceThiefDown::
# 80 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 81 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 82 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 83 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 84 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireNorth::
# 85 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromLeft
# 86 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 87 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 88 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 89 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireSouth::
# 90 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromLeft
# 91 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 92 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 93 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 94 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireEast::
# 95 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromBelow
# 96 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 97 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 98 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 99 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefLookAtSapphireWest::
# 100 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromBelow
# 101 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 102 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 103 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 104 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireNorth::
# 105 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromLeft
# 106 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 107 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 108 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 109 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 110 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 111 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireSouth::
# 112 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromLeft
# 113 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 114 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 115 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 116 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 117 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 118 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireEast::
# 119 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromBelow
# 120 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 121 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 122 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 123 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 124 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 125 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefGetSapphireWest::
# 126 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromBelow
# 127 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 128 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 129 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 130 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 131 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 132 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitNorth::
# 133 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 134 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitNorth
# 135 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 136 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 137 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 138 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitSouth::
# 139 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 140 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitSouth
# 141 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 142 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 143 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 144 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitEast::
# 145 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 146 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitEastWest
# 147 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 148 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 149 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 150 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_ThiefExitWest::
# 151 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit
# 152 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement LOCALID_THIEF, SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitEastWest
# 153 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 154 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 155 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 156 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromLeft::
# 157 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_up
# 158 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_up
# 159 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_in_place_faster_right
# 160 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end
# 161 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 162 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefLookAtSapphireFromBelow::
# 163 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_right
# 164 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_right
# 165 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_in_place_faster_up
# 166 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end
# 167 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 168 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromLeft::
# 169 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_right
# 170 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end
# 171 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 172 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefGetSapphireFromBelow::
# 173 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_up
# 174 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end
# 175 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 176 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitNorth::
# 177 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_up
# 178 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 179 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 180 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 181 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_down
# 182 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 183 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 184 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end
# 185 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 186 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitSouth::
# 187 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_down
# 188 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 189 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 190 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 191 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_up
# 192 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 193 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 194 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end
# 195 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 196 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefExitEastWest::
# 197 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 198 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 199 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 200 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_right
# 201 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_fast_up
# 202 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end
# 203 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 204 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_ThiefFallIn::
# 205 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	face_down
# 206 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	disable_anim
# 207 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 208 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 209 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 210 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 211 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 212 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 213 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 214 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 215 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	slide_down
# 216 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	restore_anim
# 217 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end
# 218 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 219 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Movement_PlayerWatchThiefExit::
# 220 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	delay_16
# 221 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	walk_in_place_faster_right
# 222 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	step_end
# 223 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 224 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_BrailleMessage::
# 225 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	lockall
# 226 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	call_if_set FLAG_ORBING, SixIsland_DottedHole_SapphireRoom_EventScript_Orb
# 227 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setvar VAR_0x8005, 130
# 228 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_LetTheTwo
# 229 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_Glittering
# 230 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_Stones
# 231 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_OneInRed
# 232 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_OneInBlue
# 233 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_ConnectThe
# 234 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_Past
# 235 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_TwoFriends
# 236 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_Sharing
# 237 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_PowerOpen
# 238 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_AWindowTo
# 239 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_ANewWorld
# 240 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_ThatGlows
# 241 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_TheNext
# 242 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage_wait Braille_Text_WorldWaits
# 243 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	braillemessage Braille_Text_ForYou
# 244 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitbuttonpress
# 245 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	releaseall
# 246 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	end
# 247 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 248 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Orb::
# 249 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	goto_if_unset FLAG_RE_DEFEATED, SixIsland_DottedHole_SapphireRoom_EventScript_Orbing
# 250 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	return
# 251 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 252 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_Orbing::
# 253 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	message SixIsland_DottedHole_SapphireRoom_Text_Notice
# 254 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmessage
# 255 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	playse SE_PIN
# 256 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 257 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmovement 0
# 258 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	delay 40
# 259 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	msgbox SixIsland_DottedHole_SapphireRoom_Text_Ren
# 260 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	closemessage
# 261 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	delay 40
# 262 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	msgbox SixIsland_DottedHole_SapphireRoom_Text_Mirage, MSGBOX_YESNO
# 263 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	closemessage
# 264 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	delay 40
# 265 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SixIsland_DottedHole_SapphireRoom_EventScript_NoMirage
# 266 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setvar VAR_FORCEANIM, 1
# 267 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	trainerbattle_single TRAINER_REN, SixIsland_DottedHole_SapphireRoom_Text_YesMirage, SixIsland_DottedHole_SapphireRoom_Text_PostMirage, SixIsland_DottedHole_SapphireRoom_EventScript_PostMirage, NO_MUSIC
# 268 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	release
# 269 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	end
# 270 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 271 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_PostMirage::
# 272 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setvar VAR_FORCEANIM, 0
# 273 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	msgbox SixIsland_DottedHole_SapphireRoom_Text_MiragePostBattle
# 274 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setflag FLAG_RE_DEFEATED
# 275 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 276 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 277 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	giveitem ITEM_RED_ORB
# 278 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	setflag FLAG_SHINY_STARTER
# 279 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmessage
# 280 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitfanfare 
# 281 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	msgbox SixIsland_DottedHole_SapphireRoom_Text_Orbing
# 282 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	waitmessage
# 283 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	msgbox SixIsland_DottedHole_SapphireRoom_Text_Goodbye
# 284 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	release
# 285 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	end
# 286 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 287 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_EventScript_NoMirage::
# 288 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	msgbox SixIsland_DottedHole_SapphireRoom_Text_NoMirage
# 289 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	release
# 290 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	end
# 291 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 292 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Text_Ren::
# 293 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "Hello {PLAYER}, I notice you\n"
# 294 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "have the Blue Orb.\p"
# 295 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "That must be your here\n"
# 296 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "looking for the RED ORB too?\l"
# 297 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "Well I do have it, but I won't\l"
# 298 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "give it easily!\p"
# 299 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "Especially with GROUDON and\n"
# 300 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "KYOGRE on the line!$"
# 301 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 302 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Text_Notice::
# 303 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "(You noticed a voice in the air.)$"
# 304 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 305 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Text_Mirage::
# 306 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "So, do you wish to battle?\p"
# 307 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "My team has special things\n"
# 308 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "no other teams have.$"
# 309 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 310 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Text_NoMirage::
# 311 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "Guess you need more time to\n"
# 312 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "train than.\p"
# 313 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "Take your time!$"	
# 314 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 315 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Text_PostMirage::
# 316 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "Wow! What a amazing battle!\n"
# 317 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "From Red to Blue,\l"
# 318 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "this battle is Green all around!$"
# 319 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 320 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Text_Orbing::
# 321 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "This orb if exposed to the \n"
# 322 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "right place,\l"
# 323 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "Say, a place where you found a \l"
# 324 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "red gem,\l"
# 325 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "It will let you encounter\l"
# 326 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "something shiny!\p"
# 327 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "So better not let it waste!$"
# 328 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 329 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Text_YesMirage::
# 330 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "Alright.\n"
# 331 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "May this battle not be blue,\l"
# 332 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "May this battle be red in hype,\l"
# 333 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "and may be green in success!$"
# 334 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 335 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Text_MiragePostBattle::
# 336 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "Ok, guess I gotta give you\n"
# 337 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "this reward.$"
# 338 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"

# 339 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
SixIsland_DottedHole_SapphireRoom_Text_Goodbye::
# 340 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "Alright than, I better get\n"
# 341 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "going now.\p"
# 342 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "And as for me and what I am,\n"
# 343 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "you should be able to read\l"
# 344 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "the connections from this battle.\p"
# 345 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "...\n"
# 346 "data/maps/SixIsland_DottedHole_SapphireRoom/scripts.pory"
	.string "Goodbye {PLAYER}.$"
