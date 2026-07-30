# 1 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
.set LOCALID_BILL, 7
# 3 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_MapScripts::
# 5 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_PokemonCenter_1F_OnTransition
# 6 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	.byte 0
# 7 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 8 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_OnTransition::
# 9 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_CINNABAR_ISLAND
# 10 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	lock
# 14 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 15 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 16 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	release
# 17 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	end
# 18 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Gentleman::
# 20 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_VisitUnionRoom, MSGBOX_NPC
# 21 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	end
# 22 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 23 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_CooltrainerF::
# 24 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_CinnabarGymLocked, MSGBOX_NPC
# 25 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	end
# 26 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 27 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Youngster::
# 28 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_EvolutionCanWaitForNewMoves, MSGBOX_NPC
# 29 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	end
# 30 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 31 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_Bill::
# 32 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	lock
# 33 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	faceplayer
# 34 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_ReadyToSailToOneIsland, MSGBOX_YESNO
# 35 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_PokemonCenter_1F_EventScript_NotReadyToSail
# 36 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_LetsGo
# 37 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	closemessage
# 38 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	playbgm MUS_FOLLOW_ME, 1
# 39 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 40 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 41 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_CINNABAR_POKECENTER_BILL
# 42 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay 20
# 43 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillSouth
# 44 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillEast
# 45 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillWest
# 46 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_BILL
# 47 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND_2, 1
# 48 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 49 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	warp MAP_CINNABAR_ISLAND, 19, 12
# 50 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	waitstate
# 51 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	release
# 52 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	end
# 53 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 54 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillSouth::
# 55 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_PokemonCenter_1F_Movement_BillExit
# 56 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitSouth
# 57 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 58 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	return
# 59 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 60 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillEast::
# 61 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_PokemonCenter_1F_Movement_BillExitEast
# 62 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitEast
# 63 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 64 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	return
# 65 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 66 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_ExitWithBillWest::
# 67 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_BILL, CinnabarIsland_PokemonCenter_1F_Movement_BillExit
# 68 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitWest
# 69 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	waitmovement 0
# 70 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	return
# 71 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 72 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_EventScript_NotReadyToSail::
# 73 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	msgbox CinnabarIsland_PokemonCenter_1F_Text_OhNotDoneYet
# 74 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	release
# 75 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	end
# 76 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 77 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_BillExit::
# 78 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 79 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 80 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 81 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 82 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 83 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 84 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 85 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_8
# 86 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	set_invisible
# 87 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 88 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 89 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitSouth::
# 90 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 91 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 92 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 93 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 94 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 95 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 96 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 97 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 98 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 99 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 100 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 101 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_BillExitEast::
# 102 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_up
# 103 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 104 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 105 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 106 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 107 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 108 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 109 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 110 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 111 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_8
# 112 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	set_invisible
# 113 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 114 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 115 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitEast::
# 116 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 117 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 118 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 119 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	face_left
# 120 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 121 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 122 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 123 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 124 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 125 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 126 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_8
# 127 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 128 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_8
# 129 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	set_invisible
# 130 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	step_end
# 131 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"

# 132 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
CinnabarIsland_PokemonCenter_1F_Movement_PlayerExitWest::
# 133 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 134 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 135 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 136 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 137 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_left
# 138 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 139 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 140 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	delay_16
# 141 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	walk_down
# 142 "data/maps/CinnabarIsland_PokemonCenter_1F/scripts.pory"
	step_end
