# 1 "data/maps/MtMoonSquare/scripts.pory"

# 2 "data/maps/MtMoonSquare/scripts.pory"

# 3 "data/maps/MtMoonSquare/scripts.pory"
.set LOCALID_LILEEP_POKEBALL, 7
# 4 "data/maps/MtMoonSquare/scripts.pory"

# 5 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_MapScripts::
# 6 "data/maps/MtMoonSquare/scripts.pory"
	.byte 0
# 7 "data/maps/MtMoonSquare/scripts.pory"

# 8 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_Clefairy::
# 9 "data/maps/MtMoonSquare/scripts.pory"
	lock
# 10 "data/maps/MtMoonSquare/scripts.pory"
	faceplayer
# 11 "data/maps/MtMoonSquare/scripts.pory"
	waitse
# 12 "data/maps/MtMoonSquare/scripts.pory"
	playmoncry SPECIES_CLEFAIRY, CRY_MODE_NORMAL
# 13 "data/maps/MtMoonSquare/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Clefairy
# 14 "data/maps/MtMoonSquare/scripts.pory"
	waitmoncry
# 15 "data/maps/MtMoonSquare/scripts.pory"
	release
# 16 "data/maps/MtMoonSquare/scripts.pory"
    end
# 17 "data/maps/MtMoonSquare/scripts.pory"

# 18 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_Jiggypuff::
# 19 "data/maps/MtMoonSquare/scripts.pory"
	lock
# 20 "data/maps/MtMoonSquare/scripts.pory"
	faceplayer
# 21 "data/maps/MtMoonSquare/scripts.pory"
	fadeoutbgm 0
# 22 "data/maps/MtMoonSquare/scripts.pory"
	playbgm MUS_JIGGLYPUFF, 0
# 23 "data/maps/MtMoonSquare/scripts.pory"
	message PewterCity_PokemonCenter_1F_Text_Jigglypuff
# 24 "data/maps/MtMoonSquare/scripts.pory"
	waitmessage
# 25 "data/maps/MtMoonSquare/scripts.pory"
	delay 455
# 26 "data/maps/MtMoonSquare/scripts.pory"
	playbgm MUS_SCHOOL, 1
# 27 "data/maps/MtMoonSquare/scripts.pory"
	release
# 28 "data/maps/MtMoonSquare/scripts.pory"
	end
# 29 "data/maps/MtMoonSquare/scripts.pory"

# 30 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_NidoranF::
# 31 "data/maps/MtMoonSquare/scripts.pory"
	lock
# 32 "data/maps/MtMoonSquare/scripts.pory"
	faceplayer
# 33 "data/maps/MtMoonSquare/scripts.pory"
	waitse
# 34 "data/maps/MtMoonSquare/scripts.pory"
	playmoncry SPECIES_NIDORAN_F, CRY_MODE_NORMAL
# 35 "data/maps/MtMoonSquare/scripts.pory"
	msgbox CeladonCity_Condominiums_1F_Text_Nidoran
# 36 "data/maps/MtMoonSquare/scripts.pory"
	waitmoncry
# 37 "data/maps/MtMoonSquare/scripts.pory"
	release
# 38 "data/maps/MtMoonSquare/scripts.pory"
	end
# 39 "data/maps/MtMoonSquare/scripts.pory"

# 40 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_NidoranM::
# 41 "data/maps/MtMoonSquare/scripts.pory"
	lock
# 42 "data/maps/MtMoonSquare/scripts.pory"
	faceplayer
# 43 "data/maps/MtMoonSquare/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 44 "data/maps/MtMoonSquare/scripts.pory"
	waitse
# 45 "data/maps/MtMoonSquare/scripts.pory"
	playmoncry SPECIES_NIDORAN_M, CRY_MODE_NORMAL
# 46 "data/maps/MtMoonSquare/scripts.pory"
	msgbox PewterCity_House1_Text_Nidoran
# 47 "data/maps/MtMoonSquare/scripts.pory"
	waitmoncry
# 48 "data/maps/MtMoonSquare/scripts.pory"
	release
# 49 "data/maps/MtMoonSquare/scripts.pory"
    end
# 50 "data/maps/MtMoonSquare/scripts.pory"

# 51 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_Nidorino::
# 52 "data/maps/MtMoonSquare/scripts.pory"
	lock
# 53 "data/maps/MtMoonSquare/scripts.pory"
	faceplayer
# 54 "data/maps/MtMoonSquare/scripts.pory"
	waitse
# 55 "data/maps/MtMoonSquare/scripts.pory"
	playmoncry SPECIES_NIDORINO, CRY_MODE_NORMAL
# 56 "data/maps/MtMoonSquare/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Nidorino
# 57 "data/maps/MtMoonSquare/scripts.pory"
	waitmoncry
# 58 "data/maps/MtMoonSquare/scripts.pory"
	release
# 59 "data/maps/MtMoonSquare/scripts.pory"
	end
# 60 "data/maps/MtMoonSquare/scripts.pory"

# 61 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_ClawBall::
# 62 "data/maps/MtMoonSquare/scripts.pory"
	lock
# 63 "data/maps/MtMoonSquare/scripts.pory"
	faceplayer
# 64 "data/maps/MtMoonSquare/scripts.pory"
	message MtMoonSquare_Text_ObtainedAnFossil
# 65 "data/maps/MtMoonSquare/scripts.pory"
	waitmessage
# 66 "data/maps/MtMoonSquare/scripts.pory"
	message MtMoonSquare_Text_However
# 67 "data/maps/MtMoonSquare/scripts.pory"
	waitmessage
# 68 "data/maps/MtMoonSquare/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LILEEP
# 69 "data/maps/MtMoonSquare/scripts.pory"
	givemon SPECIES_LILEEP, 40
# 70 "data/maps/MtMoonSquare/scripts.pory"
	goto_if_eq VAR_RESULT, 0, MtMoonSquare_EventScript_GetClawParty
# 71 "data/maps/MtMoonSquare/scripts.pory"
	goto_if_eq VAR_RESULT, 1, MtMoonSquare_EventScript_GetClawPC
# 72 "data/maps/MtMoonSquare/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 73 "data/maps/MtMoonSquare/scripts.pory"
	release
# 74 "data/maps/MtMoonSquare/scripts.pory"
	end
# 75 "data/maps/MtMoonSquare/scripts.pory"

# 76 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_GetClawParty::
# 77 "data/maps/MtMoonSquare/scripts.pory"
	removeobject LOCALID_LILEEP_POKEBALL
# 78 "data/maps/MtMoonSquare/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 79 "data/maps/MtMoonSquare/scripts.pory"
	message MtMoonSquare_Text_ObtainedAnClaw
# 80 "data/maps/MtMoonSquare/scripts.pory"
	waitmessage
# 81 "data/maps/MtMoonSquare/scripts.pory"
	waitfanfare
# 82 "data/maps/MtMoonSquare/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LILEEP
# 83 "data/maps/MtMoonSquare/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 84 "data/maps/MtMoonSquare/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtMoonSquare_EventScript_SetGotClaw
# 85 "data/maps/MtMoonSquare/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 86 "data/maps/MtMoonSquare/scripts.pory"
	call EventScript_ChangePokemonNickname
# 87 "data/maps/MtMoonSquare/scripts.pory"
	goto MtMoonSquare_EventScript_SetGotClaw
# 88 "data/maps/MtMoonSquare/scripts.pory"
	end
# 89 "data/maps/MtMoonSquare/scripts.pory"

# 90 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_GetClawPC::
# 91 "data/maps/MtMoonSquare/scripts.pory"
	removeobject LOCALID_LILEEP_POKEBALL
# 92 "data/maps/MtMoonSquare/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 93 "data/maps/MtMoonSquare/scripts.pory"
	message MtMoonSquare_Text_ObtainedAnClaw
# 94 "data/maps/MtMoonSquare/scripts.pory"
	waitmessage
# 95 "data/maps/MtMoonSquare/scripts.pory"
	waitfanfare
# 96 "data/maps/MtMoonSquare/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_LILEEP
# 97 "data/maps/MtMoonSquare/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 98 "data/maps/MtMoonSquare/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtMoonSquare_EventScript_TransferClawToPC
# 99 "data/maps/MtMoonSquare/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 100 "data/maps/MtMoonSquare/scripts.pory"
	goto MtMoonSquare_EventScript_TransferClawToPC
# 101 "data/maps/MtMoonSquare/scripts.pory"
	end
# 102 "data/maps/MtMoonSquare/scripts.pory"

# 103 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_TransferClawToPC::
# 104 "data/maps/MtMoonSquare/scripts.pory"
	call EventScript_TransferredToPC
# 105 "data/maps/MtMoonSquare/scripts.pory"
	goto MtMoonSquare_EventScript_SetGotClaw
# 106 "data/maps/MtMoonSquare/scripts.pory"
	end
# 107 "data/maps/MtMoonSquare/scripts.pory"

# 108 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_EventScript_SetGotClaw::
# 109 "data/maps/MtMoonSquare/scripts.pory"
	setflag FLAG_GOT_ROOT
# 110 "data/maps/MtMoonSquare/scripts.pory"
	release
# 111 "data/maps/MtMoonSquare/scripts.pory"
	end
# 112 "data/maps/MtMoonSquare/scripts.pory"

# 113 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_Text_ObtainedAnClaw::
# 114 "data/maps/MtMoonSquare/scripts.pory"
    .string "{PLAYER} obtained an LILEEP!$"
# 115 "data/maps/MtMoonSquare/scripts.pory"

# 116 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_Text_ObtainedAnFossil::
# 117 "data/maps/MtMoonSquare/scripts.pory"
	.string "{PLAYER} obtained an ROOT FOSSIL!$"
# 118 "data/maps/MtMoonSquare/scripts.pory"

# 119 "data/maps/MtMoonSquare/scripts.pory"
MtMoonSquare_Text_However::
# 120 "data/maps/MtMoonSquare/scripts.pory"
	.string "However, the ROOT FOSSIL\n"
# 121 "data/maps/MtMoonSquare/scripts.pory"
	.string "got magically revived in your hands!$"
