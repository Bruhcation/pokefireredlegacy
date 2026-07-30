# 1 "data/maps/Route15_WestEntrance_2F/scripts.pory"

# 2 "data/maps/Route15_WestEntrance_2F/scripts.pory"
.equ REQUIRED_CAUGHT_MONS, 50
# 3 "data/maps/Route15_WestEntrance_2F/scripts.pory"

# 4 "data/maps/Route15_WestEntrance_2F/scripts.pory"
Route15_WestEntrance_2F_MapScripts::
# 5 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	.byte 0
# 6 "data/maps/Route15_WestEntrance_2F/scripts.pory"

# 7 "data/maps/Route15_WestEntrance_2F/scripts.pory"
Route15_WestEntrance_2F_EventScript_LeftBinoculars::
# 8 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	lockall
# 9 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_LargeShiningBird
# 10 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	showmonpic SPECIES_ARTICUNO, 10, 3
# 11 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	delay 20
# 12 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	waitbuttonpress
# 13 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	hidemonpic
# 14 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	setvar VAR_0x8004, SPECIES_ARTICUNO
# 15 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	special SetSeenMon
# 16 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	releaseall
# 17 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	end
# 18 "data/maps/Route15_WestEntrance_2F/scripts.pory"

# 19 "data/maps/Route15_WestEntrance_2F/scripts.pory"
Route15_WestEntrance_2F_EventScript_RightBinoculars::
# 20 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_SmallIslandOnHorizon, MSGBOX_SIGN
# 21 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	end
# 22 "data/maps/Route15_WestEntrance_2F/scripts.pory"

# 23 "data/maps/Route15_WestEntrance_2F/scripts.pory"
Route15_WestEntrance_2F_EventScript_Aide::
# 24 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	lock
# 25 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	faceplayer
# 26 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	call Route15_WestEntrance_2F_EventScript_GetAideRequestInfo
# 27 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	goto_if_set FLAG_GOT_EXP_SHARE_FROM_OAKS_AIDE, Route15_WestEntrance_2F_EventScript_AlreadyGotExpShare
# 28 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_GiveItemIfCaughtEnough, MSGBOX_YESNO
# 29 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
# 30 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	setvar VAR_0x8004, 0
# 31 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 32 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 33 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	call Route15_WestEntrance_2F_EventScript_GetAideRequestInfo
# 34 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	goto_if_lt VAR_0x8006, REQUIRED_CAUGHT_MONS, Aide_EventScript_HaventCaughtEnough
# 35 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_GreatHereYouGo
# 36 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SKARMORY
# 37 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	givemon SPECIES_SKARMORY, 35
# 38 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Route15_WestEntrance_2F_ReceiveAideSkarmory
# 39 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route15_WestEntrance_2F_ReceiveAideSkarmoryPC
# 40 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 41 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	release
# 42 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	end
# 43 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	
# 44 "data/maps/Route15_WestEntrance_2F/scripts.pory"
Route15_WestEntrance_2F_ReceiveAideSkarmory::
# 45 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 46 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 47 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	message Route15_WestEntrance_2F_Text_ReceivedItemFromAide
# 48 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	waitmessage
# 49 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	waitfanfare
# 50 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SKARMORY
# 51 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 52 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route15_WestEntrance_2F_EndReceiveFossil
# 53 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 54 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	call EventScript_ChangePokemonNickname
# 55 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	goto Route15_WestEntrance_2F_EndReceiveFossil
# 56 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	end
# 57 "data/maps/Route15_WestEntrance_2F/scripts.pory"

# 58 "data/maps/Route15_WestEntrance_2F/scripts.pory"
Route15_WestEntrance_2F_ReceiveAideSkarmoryPC::
# 59 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 60 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 61 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	message Route15_WestEntrance_2F_Text_ReceivedItemFromAide
# 62 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	waitmessage
# 63 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	waitfanfare
# 64 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_SKARMORY
# 65 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 66 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route15_WestEntrance_2F_FossilTransferredToPC
# 67 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 68 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	goto Route15_WestEntrance_2F_FossilTransferredToPC
# 69 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	end
# 70 "data/maps/Route15_WestEntrance_2F/scripts.pory"

# 71 "data/maps/Route15_WestEntrance_2F/scripts.pory"
Route15_WestEntrance_2F_EventScript_AlreadyGotExpShare::
# 72 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_ExplainExpShare
# 73 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	release
# 74 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	end
# 75 "data/maps/Route15_WestEntrance_2F/scripts.pory"

# 76 "data/maps/Route15_WestEntrance_2F/scripts.pory"
Route15_WestEntrance_2F_EventScript_GetAideRequestInfo::
# 77 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	buffernumberstring STR_VAR_1, REQUIRED_CAUGHT_MONS
# 78 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_SKARMORY
# 79 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	return
# 80 "data/maps/Route15_WestEntrance_2F/scripts.pory"

# 81 "data/maps/Route15_WestEntrance_2F/scripts.pory"
Route15_WestEntrance_2F_FossilTransferredToPC::
# 82 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	call EventScript_TransferredToPC
# 83 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	goto Route15_WestEntrance_2F_EndReceiveFossil
# 84 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	end
# 85 "data/maps/Route15_WestEntrance_2F/scripts.pory"

# 86 "data/maps/Route15_WestEntrance_2F/scripts.pory"
Route15_WestEntrance_2F_EndReceiveFossil::
# 87 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 88 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_ExplainExpShare
# 89 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	setflag FLAG_GOT_EXP_SHARE_FROM_OAKS_AIDE
# 90 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	release
# 91 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	end
# 92 "data/maps/Route15_WestEntrance_2F/scripts.pory"

# 93 "data/maps/Route15_WestEntrance_2F/scripts.pory"
Route15_WestEntrance_2F_AlreadyGotFossil::
# 94 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	msgbox Route15_WestEntrance_2F_Text_ExplainExpShare
# 95 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	release
# 96 "data/maps/Route15_WestEntrance_2F/scripts.pory"
	end
