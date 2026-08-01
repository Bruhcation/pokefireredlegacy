# 1 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 2 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
PalletTown_PlayersHouse_2F_MapScripts::
# 3 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_PlayersHouse_2F_OnTransition
# 4 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_PlayersHouse_2F_OnWarp
# 5 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.byte 0
# 6 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 7 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
PalletTown_PlayersHouse_2F_OnTransition::
# 8 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 0, PalletTown_PlayersHouse_2F_EventScript_SetRespawn
# 9 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	end
# 10 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 11 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
PalletTown_PlayersHouse_2F_EventScript_SetRespawn::
# 12 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setrespawn SPAWN_PALLET_TOWN
# 13 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	return
# 14 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 15 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
PalletTown_PlayersHouse_2F_OnWarp::
# 16 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 0, PalletTown_PlayersHouse_2F_FirstWarpIn
# 17 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.2byte 0
# 18 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 19 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
PalletTown_PlayersHouse_2F_FirstWarpIn::
# 20 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 21 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 1
# 22 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	end
# 23 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 24 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
PalletTown_PlayersHouse_2F_EventScript_NES::
# 25 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_Text_PlayedWithNES, MSGBOX_SIGN
# 26 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	end
# 27 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 28 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
PalletTown_PlayersHouse_2F_EventScript_Sign::
# 29 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_HACK_OPTION_MENU
# 30 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_Text_PressLRForHelp, MSGBOX_SIGN
# 31 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	call_if_set FLAG_NUZLOCKE, PalletTown_PlayersHouse_2F_EventScript_SignHardcore
# 32 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	call_if_set FLAG_HARD, PalletTown_PlayersHouse_2F_EventScript_SignHard
# 33 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	call PalletTown_PlayersHouse_2F_EventScript_SignNormal
# 34 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	end
# 35 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 36 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
PalletTown_PlayersHouse_2F_EventScript_SignNormal::
# 37 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_Text_Normal, MSGBOX_SIGN
# 38 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	end
# 39 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 40 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
PalletTown_PlayersHouse_2F_EventScript_SignHard::
# 41 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_Text_Hard, MSGBOX_SIGN
# 42 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	end
# 43 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 44 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
PalletTown_PlayersHouse_2F_EventScript_SignHardcore::
# 45 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_Text_Hardcore, MSGBOX_SIGN
# 46 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	end
# 47 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 48 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 49 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
PalletTown_PlayersHouse_2F_EventScript_PC::
# 50 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 51 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	lockall
# 52 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_0x8004, HELPCONTEXT_BEDROOM_PC
# 53 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special Script_SetHelpContext
# 54 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 55 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special AnimatePcTurnOn
# 56 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	playse SE_PC_ON
# 57 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox Text_PlayerBootedUpPC
# 58 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, EventScript_PalletTown_PlayersHouse_2F_CheckPlayersPC_GameCleared
# 59 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special BedroomPC
# 60 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitstate
# 61 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special SetHelpContextForMap
# 62 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
# 63 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	end
# 64 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 65 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
EventScript_PalletTown_PlayersHouse_2F_CheckPlayersPC_GameCleared::
# 66 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	goto EventScript_PCMainMenu_PlayerRoom
# 67 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	end
# 68 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 69 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
EventScript_PalletTown_PlayersHouse_2F_ShutDownPC::
# 70 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 71 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 72 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special AnimatePcTurnOff
# 73 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special SetHelpContextForMap
# 74 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
# 75 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	end
