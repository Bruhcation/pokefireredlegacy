# 1 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
.equ REQUIRED_SEEN_MONS, 10
# 3 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_MapScripts::
# 5 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route10_PokemonCenter_1F_OnTransition
# 6 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	.byte 0
# 7 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 8 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_OnTransition::
# 9 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROUTE10_POKEMON_CENTER_1F
# 10 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_ROUTE10
# 11 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	end
# 12 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	lock
# 15 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	faceplayer
# 16 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 17 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	call_if_set FLAG_IS_CHAMPION, Route10_PokemonCenter_1F_BattleNurse
# 18 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	release
# 19 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	end
# 20 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 21 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_BattleNurse::
# 22 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	waitmessage
# 23 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_BattleNurse
# 24 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	waitmessage
# 25 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	playse SE_PIN
# 26 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 27 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_NURSE_JOY, Route10_PokemonCenter_1F_EventScript_RematchNurse
# 28 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_Nurse, MSGBOX_YESNO
# 29 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route10_PokemonCenter_1F_EventScript_NoNurse
# 30 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_NURSE_JOY, Route10_PokemonCenter_1F_Text_YesNurse, Route10_PokemonCenter_1F_Text_NurseDefeat, Route10_PokemonCenter_1F_EventScript_PostNurse, NO_MUSIC
# 31 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	return
# 32 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 33 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 34 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_PostNurse::
# 35 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_NursePostBattle
# 36 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	setflag FLAG_DEFEATED_NURSE_JOY
# 37 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	cleartrainerflag TRAINER_NURSE_JOY
# 38 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 39 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	return
# 40 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 41 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_NoNurse::
# 42 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_NoNurse
# 43 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	return
# 44 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 45 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_RematchNurse::
# 46 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_RematchNurse, MSGBOX_YESNO
# 47 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route10_PokemonCenter_1F_EventScript_NoNurse
# 48 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	lock
# 49 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	faceplayer
# 50 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	trainerbattle_single TRAINER_NURSE_JOY, Route10_PokemonCenter_1F_Text_YesNurse, Route10_PokemonCenter_1F_Text_RematchNurseDefeat, Route10_PokemonCenter_1F_EventScript_PostRematchNurse, NO_MUSIC
# 51 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	return	
# 52 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 53 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_PostRematchNurse::
# 54 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_PostRematchNurse
# 55 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	cleartrainerflag TRAINER_NURSE_JOY
# 56 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 57 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	return
# 58 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 59 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 60 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_FatMan::
# 61 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_NuggetUselessSoldFor5000, MSGBOX_NPC
# 62 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	end
# 63 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 64 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Gentleman::
# 65 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_EveryTypeStrongerThanOthers, MSGBOX_NPC
# 66 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	end
# 67 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 68 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Youngster::
# 69 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_HeardGhostsHauntLavender, MSGBOX_NPC
# 70 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	end
# 71 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 72 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_Aide::
# 73 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	lock
# 74 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	faceplayer
# 75 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	call Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo
# 76 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_GOT_HM05, Route10_PokemonCenter_1F_EventScript_AlreadyGotHM05
# 77 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_GiveHM05IfSeen10Mons, MSGBOX_YESNO
# 78 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Aide_EventScript_DeclineCheckMons
# 79 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x8004, 0
# 80 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 81 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_3, VAR_0x8006
# 82 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	call Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo
# 83 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_lt VAR_0x8006, REQUIRED_SEEN_MONS, Aide_EventScript_HaventCaughtEnough
# 84 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_GreatHereYouGo
# 85 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	checkitemspace ITEM_HM05
# 86 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Aide_EventScript_NoRoomForItem
# 87 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	giveitem_msg Route10_PokemonCenter_1F_Text_ReceivedHM05FromAide, ITEM_HM05
# 88 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	setflag FLAG_GOT_HM05
# 89 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_ExplainHM05
# 90 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	release
# 91 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	end
# 92 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 93 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_AlreadyGotHM05::
# 94 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	msgbox Route10_PokemonCenter_1F_Text_ExplainHM05
# 95 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	release
# 96 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	end
# 97 "data/maps/Route10_PokemonCenter_1F/scripts.pory"

# 98 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
Route10_PokemonCenter_1F_EventScript_GetAideRequestInfo::
# 99 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	buffernumberstring STR_VAR_1, REQUIRED_SEEN_MONS
# 100 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_HM05
# 101 "data/maps/Route10_PokemonCenter_1F/scripts.pory"
	return
