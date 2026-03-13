EventScript_PC::
	goto_if_questlog EventScript_ReleaseEnd
	lockall
	textcolor NPC_TEXT_COLOR_NEUTRAL
	setvar VAR_0x8004, HELPCONTEXT_PC
	special Script_SetHelpContext
	setvar VAR_0x8004, 0
	special AnimatePcTurnOn
	playse SE_PC_ON
	msgbox Text_BootedUpPC
	goto EventScript_PCMainMenu
	end

EventScript_PCMan::
	goto_if_questlog EventScript_ReleaseEnd
	lockall
	textcolor NPC_TEXT_COLOR_NEUTRAL
	setvar VAR_0x8004, HELPCONTEXT_PC
	special Script_SetHelpContext
	setvar VAR_0x8004, 0
	playse SE_PC_ON
	msgbox Text_BootedUpPC
	setflag FLAG_SELPHY_PC
	goto EventScript_PCMainMenu
	end

@ For when the player first arrives on One Island
EventScript_PCDisabled::
	msgbox OneIsland_PokemonCenter_1F_Text_UsualPCServicesUnavailable
	releaseall
	end

EventScript_PCMainMenu::
	message Text_AccessWhichPC
	waitmessage
	special CreatePCMenu
	waitstate
	goto EventScript_ChoosePCMenu
	end

EventScript_ChoosePCMenu::
	switch VAR_RESULT
	case 0, EventScript_AccessPokemonStorage
	case 1, EventScript_AccessPlayersPC
	case 2, EventScript_AccessProfOaksPC
	case 3, EventScript_AccessHallOfFame
	case 4, EventScript_TurnOffPC
	case SCR_MENU_CANCEL, EventScript_TurnOffPC
	end

EventScript_AccessPlayersPC::
	playse SE_PC_LOGIN
	msgbox Text_AccessedPlayersPC
	special PlayerPC
	waitstate
	goto EventScript_PCMainMenu
	end

EventScript_AccessPokemonStorage::
	playse SE_PC_LOGIN
	call_if_unset FLAG_SYS_NOT_SOMEONES_PC, EventScript_AccessSomeonesPC
	call_if_set FLAG_SYS_NOT_SOMEONES_PC, EventScript_AccessBillsPC
	msgbox Text_OpenedPkmnStorage
	special ShowPokemonStorageSystemPC
	waitstate
	setvar VAR_0x8004, HELPCONTEXT_PC
	special Script_SetHelpContext
	goto EventScript_PCMainMenu
	end

EventScript_AccessSomeonesPC::
	msgbox Text_AccessedSomeonesPC
	return

EventScript_AccessBillsPC::
	msgbox Text_AccessedBillsPC
	return

EventScript_TurnOffPC::
	setvar VAR_0x8004, 0
	playse SE_PC_OFF
	call_if_unset FLAG_SELPHY_PC, EventScript_TurnOffPC2
	special SetHelpContextForMap
	clearflag FLAG_SELPHY_PC
	releaseall
	end

EventScript_PCMainMenu_PlayerRoom::
	message Text_AccessWhichPC
	waitmessage
	special CreatePCMenu
	waitstate
	goto EventScript_AccessPC_PlayerRoom
	end

EventScript_AccessPC_PlayerRoom::
	switch VAR_RESULT
	case 0, EventScript_AccessPokemonStorage_PlayerRoom
	case 1, EventScript_AccessPlayersPC_PlayerRoom
	case 2, EventScript_AccessProfOaksPCPlayerRoom
	case 3, EventScript_AccessHallOfFame_PlayerRoom
	case 4, EventScript_TurnOffPC_PlayerRoom
	case SCR_MENU_CANCEL, EventScript_TurnOffPC_PlayerRoom
	end

EventScript_AccessPlayersPC_PlayerRoom::
	playse SE_PC_LOGIN
	msgbox Text_AccessedPlayersPC, MSGBOX_DEFAULT
	special PlayerPC
	waitstate
	goto EventScript_PCMainMenu_PlayerRoom
	end

EventScript_AccessPokemonStorage_PlayerRoom::
	playse SE_PC_LOGIN
	msgbox Text_AccessedBillsPC
	msgbox Text_OpenedPkmnStorage
	special ShowPokemonStorageSystemPC
	waitstate
	setvar VAR_0x8004, HELPCONTEXT_PC
	special Script_SetHelpContext
	goto EventScript_PCMainMenu_PlayerRoom
	end

EventScript_TurnOffPC_PlayerRoom::
	setvar VAR_0x8004, 0
	playse SE_PC_OFF
	call_if_unset FLAG_SELPHY_PC, EventScript_TurnOffPC2
	special SetHelpContextForMap
	clearflag FLAG_SELPHY_PC
	end

EventScript_AccessHallOfFame_PlayerRoom::
	goto_if_unset FLAG_SYS_GAME_CLEAR, EventScript_TurnOffPC
	playse SE_PC_LOGIN
	setvar VAR_0x8004, HELPCONTEXT_PC_MISC
	special BackupHelpContext
	special Script_SetHelpContext
	special HallOfFamePCBeginFade
	waitstate
	special RestoreHelpContext
	goto EventScript_PCMainMenu_PlayerRoom
	end

EventScript_AccessProfOaksPCPlayerRoom::
	goto_if_unset FLAG_SYS_POKEDEX_GET, EventScript_TurnOffPC
	playse SE_PC_LOGIN
	msgbox Text_AccessedProfOaksPC
	msgbox Text_HavePokedexRated, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ExitOaksPC
	setflag FLAG_OAKS_RATING_IS_VIA_PC
	call PokedexRating_EventScript_Rate
	clearflag FLAG_OAKS_RATING_IS_VIA_PC
	goto EventScript_ExitOaksPCPlayer
	end


EventScript_ExitOaksPCPlayer::
	msgbox Text_ClosedLinkToProfOaksPC
	goto EventScript_PCMainMenu_PlayerRoom
	end

EventScript_TurnOffPC2::
	special AnimatePcTurnOff
	return

EventScript_AccessHallOfFame::
	goto_if_unset FLAG_SYS_GAME_CLEAR, EventScript_TurnOffPC
	playse SE_PC_LOGIN
	setvar VAR_0x8004, HELPCONTEXT_PC_MISC
	special BackupHelpContext
	special Script_SetHelpContext
	special HallOfFamePCBeginFade
	waitstate
	special RestoreHelpContext
	goto EventScript_ChoosePCMenu
	end

EventScript_AccessProfOaksPC::
	goto_if_unset FLAG_SYS_POKEDEX_GET, EventScript_TurnOffPC
	playse SE_PC_LOGIN
	msgbox Text_AccessedProfOaksPC
	msgbox Text_HavePokedexRated, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ExitOaksPC
	setflag FLAG_OAKS_RATING_IS_VIA_PC
	call PokedexRating_EventScript_Rate
	clearflag FLAG_OAKS_RATING_IS_VIA_PC
	goto EventScript_ExitOaksPC
	end

EventScript_ExitOaksPC::
	msgbox Text_ClosedLinkToProfOaksPC
	goto EventScript_PCMainMenu
	end
