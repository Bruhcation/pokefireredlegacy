# 1 "data/maps/FuchsiaCity_House2/scripts.pory"

# 2 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_MapScripts::
# 3 "data/maps/FuchsiaCity_House2/scripts.pory"
	.byte 0
# 4 "data/maps/FuchsiaCity_House2/scripts.pory"

# 5 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_FossilGuy::
# 6 "data/maps/FuchsiaCity_House2/scripts.pory"
	lock
# 7 "data/maps/FuchsiaCity_House2/scripts.pory"
	faceplayer
# 8 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_set FLAG_GOT_FOSSIL_FROM_FOSSIL_GUY, FuchsiaCity_House2_AlreadyGotFossil
# 9 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_House2_Text_HaveMonForSavingUs, MSGBOX_YESNO
# 10 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FuchsiaCity_House2_FossilMan
# 11 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox VermilionCity_House1_Text_OhThatsDisappointing
# 12 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
# 13 "data/maps/FuchsiaCity_House2/scripts.pory"

# 14 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_FossilMan::
# 15 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_House2_Text_HaveMonForSavingUs2
# 16 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_set FLAG_GOT_DOME_FOSSIL, FuchsiaCity_House2_FossilOmanyte
# 17 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_set FLAG_GOT_HELIX_FOSSIL, FuchsiaCity_House2_FossilKabuto
# 18 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
# 19 "data/maps/FuchsiaCity_House2/scripts.pory"

# 20 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_FossilKabuto::
# 21 "data/maps/FuchsiaCity_House2/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_KABUTO
# 22 "data/maps/FuchsiaCity_House2/scripts.pory"
	givemon SPECIES_KABUTO, 20
# 23 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, 0, FuchsiaCity_House2_ReceiveFossilPartyKabuto
# 24 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, 1, FuchsiaCity_House2_ReceiveFossilPCKabuto
# 25 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 26 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
# 27 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
# 28 "data/maps/FuchsiaCity_House2/scripts.pory"

# 29 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_FossilOmanyte::
# 30 "data/maps/FuchsiaCity_House2/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_OMANYTE
# 31 "data/maps/FuchsiaCity_House2/scripts.pory"
	givemon SPECIES_OMANYTE, 20
# 32 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, 0, FuchsiaCity_House2_ReceiveFossilPartyOmanyte
# 33 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, 1, FuchsiaCity_House2_ReceiveFossilPCOmanyte
# 34 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 35 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
# 36 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
# 37 "data/maps/FuchsiaCity_House2/scripts.pory"

# 38 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_ReceiveFossilPartyKabuto::
# 39 "data/maps/FuchsiaCity_House2/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 40 "data/maps/FuchsiaCity_House2/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 41 "data/maps/FuchsiaCity_House2/scripts.pory"
	message FuchsiaCity_House2_Text_ObtainedKabutoFromEmployee
# 42 "data/maps/FuchsiaCity_House2/scripts.pory"
	waitmessage
# 43 "data/maps/FuchsiaCity_House2/scripts.pory"
	waitfanfare
# 44 "data/maps/FuchsiaCity_House2/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KABUTO
# 45 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 46 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FuchsiaCity_House2_EndReceiveFossil
# 47 "data/maps/FuchsiaCity_House2/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 48 "data/maps/FuchsiaCity_House2/scripts.pory"
	call EventScript_ChangePokemonNickname
# 49 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto FuchsiaCity_House2_EndReceiveFossil
# 50 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
# 51 "data/maps/FuchsiaCity_House2/scripts.pory"

# 52 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_ReceiveFossilPartyOmanyte::
# 53 "data/maps/FuchsiaCity_House2/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 54 "data/maps/FuchsiaCity_House2/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 55 "data/maps/FuchsiaCity_House2/scripts.pory"
	message FuchsiaCity_House2_Text_ObtainedOmanyteFromEmployee
# 56 "data/maps/FuchsiaCity_House2/scripts.pory"
	waitmessage
# 57 "data/maps/FuchsiaCity_House2/scripts.pory"
	waitfanfare
# 58 "data/maps/FuchsiaCity_House2/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_OMANYTE
# 59 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 60 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FuchsiaCity_House2_EndReceiveFossil
# 61 "data/maps/FuchsiaCity_House2/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 62 "data/maps/FuchsiaCity_House2/scripts.pory"
	call EventScript_ChangePokemonNickname
# 63 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto FuchsiaCity_House2_EndReceiveFossil
# 64 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
# 65 "data/maps/FuchsiaCity_House2/scripts.pory"

# 66 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_ReceiveFossilPCKabuto::
# 67 "data/maps/FuchsiaCity_House2/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 68 "data/maps/FuchsiaCity_House2/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 69 "data/maps/FuchsiaCity_House2/scripts.pory"
	message FuchsiaCity_House2_Text_ObtainedKabutoFromEmployee
# 70 "data/maps/FuchsiaCity_House2/scripts.pory"
	waitmessage
# 71 "data/maps/FuchsiaCity_House2/scripts.pory"
	waitfanfare
# 72 "data/maps/FuchsiaCity_House2/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_KABUTO
# 73 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 74 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FuchsiaCity_House2_FossilTransferredToPC
# 75 "data/maps/FuchsiaCity_House2/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 76 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto FuchsiaCity_House2_FossilTransferredToPC
# 77 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
# 78 "data/maps/FuchsiaCity_House2/scripts.pory"

# 79 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_ReceiveFossilPCOmanyte::
# 80 "data/maps/FuchsiaCity_House2/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 81 "data/maps/FuchsiaCity_House2/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 82 "data/maps/FuchsiaCity_House2/scripts.pory"
	message FuchsiaCity_House2_Text_ObtainedOmanyteFromEmployee
# 83 "data/maps/FuchsiaCity_House2/scripts.pory"
	waitmessage
# 84 "data/maps/FuchsiaCity_House2/scripts.pory"
	waitfanfare
# 85 "data/maps/FuchsiaCity_House2/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_OMANYTE
# 86 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 87 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FuchsiaCity_House2_FossilTransferredToPC
# 88 "data/maps/FuchsiaCity_House2/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 89 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto FuchsiaCity_House2_FossilTransferredToPC
# 90 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
# 91 "data/maps/FuchsiaCity_House2/scripts.pory"

# 92 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_FossilTransferredToPC::
# 93 "data/maps/FuchsiaCity_House2/scripts.pory"
	call EventScript_TransferredToPC
# 94 "data/maps/FuchsiaCity_House2/scripts.pory"
	goto FuchsiaCity_House2_EndReceiveFossil
# 95 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
# 96 "data/maps/FuchsiaCity_House2/scripts.pory"

# 97 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_EndReceiveFossil::
# 98 "data/maps/FuchsiaCity_House2/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 99 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_House2_Text_ExplainFossil
# 100 "data/maps/FuchsiaCity_House2/scripts.pory"
	setflag FLAG_GOT_FOSSIL_FROM_FOSSIL_GUY
# 101 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
# 102 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
# 103 "data/maps/FuchsiaCity_House2/scripts.pory"

# 104 "data/maps/FuchsiaCity_House2/scripts.pory"
FuchsiaCity_House2_AlreadyGotFossil::
# 105 "data/maps/FuchsiaCity_House2/scripts.pory"
	msgbox FuchsiaCity_House2_RocketBossWentToBoardroom
# 106 "data/maps/FuchsiaCity_House2/scripts.pory"
	release
# 107 "data/maps/FuchsiaCity_House2/scripts.pory"
	end
