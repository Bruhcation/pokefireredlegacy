# 1 "data/maps/RockTunnel_B2F/scripts.pory"

# 2 "data/maps/RockTunnel_B2F/scripts.pory"
.set LOCALID_ANORITH_POKEBALL, 7
# 3 "data/maps/RockTunnel_B2F/scripts.pory"
RockTunnel_B2F_MapScripts::
# 4 "data/maps/RockTunnel_B2F/scripts.pory"
	.byte 0
# 5 "data/maps/RockTunnel_B2F/scripts.pory"

# 6 "data/maps/RockTunnel_B2F/scripts.pory"
RockTunnel_B2F_EventScript_ClawBall::
# 7 "data/maps/RockTunnel_B2F/scripts.pory"
	lock
# 8 "data/maps/RockTunnel_B2F/scripts.pory"
	faceplayer
# 9 "data/maps/RockTunnel_B2F/scripts.pory"
	message RockTunnel_B2F_Text_ObtainedAnFossil
# 10 "data/maps/RockTunnel_B2F/scripts.pory"
	waitmessage
# 11 "data/maps/RockTunnel_B2F/scripts.pory"
	message RockTunnel_B2F_Text_However
# 12 "data/maps/RockTunnel_B2F/scripts.pory"
	waitmessage 
# 13 "data/maps/RockTunnel_B2F/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ANORITH
# 14 "data/maps/RockTunnel_B2F/scripts.pory"
	givemon SPECIES_ANORITH, 40
# 15 "data/maps/RockTunnel_B2F/scripts.pory"
	goto_if_eq VAR_RESULT, 0, RockTunnel_B2F_EventScript_GetClawParty
# 16 "data/maps/RockTunnel_B2F/scripts.pory"
	goto_if_eq VAR_RESULT, 1, RockTunnel_B2F_EventScript_GetClawPC
# 17 "data/maps/RockTunnel_B2F/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 18 "data/maps/RockTunnel_B2F/scripts.pory"
	release
# 19 "data/maps/RockTunnel_B2F/scripts.pory"
	end
# 20 "data/maps/RockTunnel_B2F/scripts.pory"

# 21 "data/maps/RockTunnel_B2F/scripts.pory"
RockTunnel_B2F_EventScript_GetClawParty::
# 22 "data/maps/RockTunnel_B2F/scripts.pory"
	removeobject LOCALID_ANORITH_POKEBALL
# 23 "data/maps/RockTunnel_B2F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 24 "data/maps/RockTunnel_B2F/scripts.pory"
	message RockTunnel_B2F_Text_ObtainedAnClaw
# 25 "data/maps/RockTunnel_B2F/scripts.pory"
	waitmessage
# 26 "data/maps/RockTunnel_B2F/scripts.pory"
	waitfanfare
# 27 "data/maps/RockTunnel_B2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ANORITH
# 28 "data/maps/RockTunnel_B2F/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 29 "data/maps/RockTunnel_B2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RockTunnel_B2F_EventScript_SetGotClaw
# 30 "data/maps/RockTunnel_B2F/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 31 "data/maps/RockTunnel_B2F/scripts.pory"
	call EventScript_ChangePokemonNickname
# 32 "data/maps/RockTunnel_B2F/scripts.pory"
	goto RockTunnel_B2F_EventScript_SetGotClaw
# 33 "data/maps/RockTunnel_B2F/scripts.pory"
	end
# 34 "data/maps/RockTunnel_B2F/scripts.pory"

# 35 "data/maps/RockTunnel_B2F/scripts.pory"
RockTunnel_B2F_EventScript_GetClawPC::
# 36 "data/maps/RockTunnel_B2F/scripts.pory"
	removeobject LOCALID_ANORITH_POKEBALL
# 37 "data/maps/RockTunnel_B2F/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 38 "data/maps/RockTunnel_B2F/scripts.pory"
	message RockTunnel_B2F_Text_ObtainedAnClaw
# 39 "data/maps/RockTunnel_B2F/scripts.pory"
	waitmessage
# 40 "data/maps/RockTunnel_B2F/scripts.pory"
	waitfanfare
# 41 "data/maps/RockTunnel_B2F/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_ANORITH
# 42 "data/maps/RockTunnel_B2F/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 43 "data/maps/RockTunnel_B2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, RockTunnel_B2F_EventScript_TransferClawToPC
# 44 "data/maps/RockTunnel_B2F/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 45 "data/maps/RockTunnel_B2F/scripts.pory"
	goto RockTunnel_B2F_EventScript_TransferClawToPC
# 46 "data/maps/RockTunnel_B2F/scripts.pory"
	end
# 47 "data/maps/RockTunnel_B2F/scripts.pory"

# 48 "data/maps/RockTunnel_B2F/scripts.pory"
RockTunnel_B2F_EventScript_TransferClawToPC::
# 49 "data/maps/RockTunnel_B2F/scripts.pory"
	call EventScript_TransferredToPC
# 50 "data/maps/RockTunnel_B2F/scripts.pory"
	goto RockTunnel_B2F_EventScript_SetGotClaw
# 51 "data/maps/RockTunnel_B2F/scripts.pory"
	end
# 52 "data/maps/RockTunnel_B2F/scripts.pory"

# 53 "data/maps/RockTunnel_B2F/scripts.pory"
RockTunnel_B2F_EventScript_SetGotClaw::
# 54 "data/maps/RockTunnel_B2F/scripts.pory"
	setflag FLAG_GOT_CLAW
# 55 "data/maps/RockTunnel_B2F/scripts.pory"
	release
# 56 "data/maps/RockTunnel_B2F/scripts.pory"
	end
# 57 "data/maps/RockTunnel_B2F/scripts.pory"

# 58 "data/maps/RockTunnel_B2F/scripts.pory"
RockTunnel_B2F_Text_ObtainedAnClaw::
# 59 "data/maps/RockTunnel_B2F/scripts.pory"
    .string "{PLAYER} obtained an ANORITH!$"
# 60 "data/maps/RockTunnel_B2F/scripts.pory"

# 61 "data/maps/RockTunnel_B2F/scripts.pory"
RockTunnel_B2F_Text_ObtainedAnFossil::
# 62 "data/maps/RockTunnel_B2F/scripts.pory"
	.string "{PLAYER} obtained an CLAW FOSSIL!$"
# 63 "data/maps/RockTunnel_B2F/scripts.pory"

# 64 "data/maps/RockTunnel_B2F/scripts.pory"
RockTunnel_B2F_Text_However::
# 65 "data/maps/RockTunnel_B2F/scripts.pory"
	.string "However, the CLAW FOSSIL\n"
# 66 "data/maps/RockTunnel_B2F/scripts.pory"
	.string "got magically revived in your hands!$"
