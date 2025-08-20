# 1 "data/maps/PokemonMansion_2F/scripts.pory"

# 2 "data/maps/PokemonMansion_2F/scripts.pory"
.equ LOCALID_OAK, 5
# 3 "data/maps/PokemonMansion_2F/scripts.pory"

# 4 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_MapScripts::
# 5 "data/maps/PokemonMansion_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_2F_OnLoad
# 6 "data/maps/PokemonMansion_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonMansion_2F_Transition
# 7 "data/maps/PokemonMansion_2F/scripts.pory"
	.byte 0
# 8 "data/maps/PokemonMansion_2F/scripts.pory"

# 9 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_OnLoad::
# 10 "data/maps/PokemonMansion_2F/scripts.pory"
	call_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_PressSwitch_2F
# 11 "data/maps/PokemonMansion_2F/scripts.pory"
	end
# 12 "data/maps/PokemonMansion_2F/scripts.pory"

# 13 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_Transition::
# 14 "data/maps/PokemonMansion_2F/scripts.pory"
	special MewStuff
# 15 "data/maps/PokemonMansion_2F/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, PokemonMansion_2F_ShowOak
# 16 "data/maps/PokemonMansion_2F/scripts.pory"
	end
# 17 "data/maps/PokemonMansion_2F/scripts.pory"

# 18 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_ShowOak::
# 19 "data/maps/PokemonMansion_2F/scripts.pory"
	clearflag FLAG_HIDE_OAK2
# 20 "data/maps/PokemonMansion_2F/scripts.pory"
	end
# 21 "data/maps/PokemonMansion_2F/scripts.pory"

# 22 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_EventScript_Statue::
# 23 "data/maps/PokemonMansion_2F/scripts.pory"
	lockall
# 24 "data/maps/PokemonMansion_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 25 "data/maps/PokemonMansion_2F/scripts.pory"
	call PokemonMansion_EventScript_SecretSwitch
# 26 "data/maps/PokemonMansion_2F/scripts.pory"
	playse SE_UNLOCK
# 27 "data/maps/PokemonMansion_2F/scripts.pory"
	special DrawWholeMapView
# 28 "data/maps/PokemonMansion_2F/scripts.pory"
	waitse
# 29 "data/maps/PokemonMansion_2F/scripts.pory"
	releaseall
# 30 "data/maps/PokemonMansion_2F/scripts.pory"
	end
# 31 "data/maps/PokemonMansion_2F/scripts.pory"

# 32 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_EventScript_DiaryJuly5th::
# 33 "data/maps/PokemonMansion_2F/scripts.pory"
	msgbox PokemonMansion_1F_Text_NewMonDiscoveredInGuyanaJungle, MSGBOX_SIGN
# 34 "data/maps/PokemonMansion_2F/scripts.pory"
	end
# 35 "data/maps/PokemonMansion_2F/scripts.pory"

# 36 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_EventScript_DiaryJuly10th::
# 37 "data/maps/PokemonMansion_2F/scripts.pory"
	msgbox PokemonMansion_1F_Text_ChristenedDiscoveredMonMew, MSGBOX_SIGN
# 38 "data/maps/PokemonMansion_2F/scripts.pory"
	end
# 39 "data/maps/PokemonMansion_2F/scripts.pory"

# 40 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_EventScript_Arnie::
# 41 "data/maps/PokemonMansion_2F/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_ARNIE, PokemonMansion_1F_Text_ArnieIntro, PokemonMansion_1F_Text_ArnieDefeat
# 42 "data/maps/PokemonMansion_2F/scripts.pory"
	msgbox PokemonMansion_1F_Text_ArniePostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/PokemonMansion_2F/scripts.pory"
	end
# 44 "data/maps/PokemonMansion_2F/scripts.pory"

# 45 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_EventScript_Oak::
# 46 "data/maps/PokemonMansion_2F/scripts.pory"
	lock
# 47 "data/maps/PokemonMansion_2F/scripts.pory"
	applymovement LOCALID_OAK, Common_Movement_ExclamationMarkDelay
# 48 "data/maps/PokemonMansion_2F/scripts.pory"
	playse SE_PIN
# 49 "data/maps/PokemonMansion_2F/scripts.pory"
	msgbox PokemonMansion_1F_Text_Oak
# 50 "data/maps/PokemonMansion_2F/scripts.pory"
	waitmovement 0
# 51 "data/maps/PokemonMansion_2F/scripts.pory"
	applymovement LOCALID_OAK, Common_Movement_FacePlayer
# 52 "data/maps/PokemonMansion_2F/scripts.pory"
	msgbox PokemonMansion_1F_Text_Oak22
# 53 "data/maps/PokemonMansion_2F/scripts.pory"
	waitmessage 
# 54 "data/maps/PokemonMansion_2F/scripts.pory"
	applymovement LOCALID_OAK, Common_Movement_FaceRight
# 55 "data/maps/PokemonMansion_2F/scripts.pory"
	waitmovement 0
# 56 "data/maps/PokemonMansion_2F/scripts.pory"
	msgbox PokemonMansion_1F_Text_Oak2
# 57 "data/maps/PokemonMansion_2F/scripts.pory"
	waitmessage 
# 58 "data/maps/PokemonMansion_2F/scripts.pory"
	applymovement LOCALID_OAK, Common_Movement_FaceUp
# 59 "data/maps/PokemonMansion_2F/scripts.pory"
	waitmovement 0
# 60 "data/maps/PokemonMansion_2F/scripts.pory"
	msgbox PokemonMansion_1F_Text_Oak3
# 61 "data/maps/PokemonMansion_2F/scripts.pory"
	waitmessage 
# 62 "data/maps/PokemonMansion_2F/scripts.pory"
	applymovement LOCALID_OAK, Common_Movement_FacePlayer
# 63 "data/maps/PokemonMansion_2F/scripts.pory"
	waitmovement 0
# 64 "data/maps/PokemonMansion_2F/scripts.pory"
	msgbox PokemonMansion_1F_Text_Oak4, MSGBOX_YESNO
# 65 "data/maps/PokemonMansion_2F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PokemonMansion_2F_EventScript_NoOak
# 66 "data/maps/PokemonMansion_2F/scripts.pory"
	setvar VAR_FORCEANIM, 1
# 67 "data/maps/PokemonMansion_2F/scripts.pory"
	trainerbattle_single TRAINER_OAK2, PokemonMansion_1F_Text_YesOak, PokemonMansion_1F_Text_OakDefeat, PokemonMansion_2F_EventScript_PostOak, NO_MUSIC
# 68 "data/maps/PokemonMansion_2F/scripts.pory"
	release
# 69 "data/maps/PokemonMansion_2F/scripts.pory"
	end
# 70 "data/maps/PokemonMansion_2F/scripts.pory"

# 71 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_EventScript_PostOak::
# 72 "data/maps/PokemonMansion_2F/scripts.pory"
	setvar VAR_FORCEANIM, 0
# 73 "data/maps/PokemonMansion_2F/scripts.pory"
	msgbox PokemonMansion_1F_Text_OakPostBattle
# 74 "data/maps/PokemonMansion_2F/scripts.pory"
	setflag FLAG_OAK2_DEFEATED
# 75 "data/maps/PokemonMansion_2F/scripts.pory"
	clearflag FLAG_HIDE_MEW
# 76 "data/maps/PokemonMansion_2F/scripts.pory"
	clearflag FLAG_HIDE_EASTER
# 77 "data/maps/PokemonMansion_2F/scripts.pory"
	setflag FLAG_HIDE_OAK2
# 78 "data/maps/PokemonMansion_2F/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 79 "data/maps/PokemonMansion_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 80 "data/maps/PokemonMansion_2F/scripts.pory"
	removeobject 5
# 81 "data/maps/PokemonMansion_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 82 "data/maps/PokemonMansion_2F/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_NORMAL
# 83 "data/maps/PokemonMansion_2F/scripts.pory"
	waitmessage 
# 84 "data/maps/PokemonMansion_2F/scripts.pory"
	delay 40
# 85 "data/maps/PokemonMansion_2F/scripts.pory"
	msgbox PokemonMansion_1F_Text_Mew
# 86 "data/maps/PokemonMansion_2F/scripts.pory"
	waitmessage
# 87 "data/maps/PokemonMansion_2F/scripts.pory"
	setflag FLAG_AMONGUS
# 88 "data/maps/PokemonMansion_2F/scripts.pory"
	clearflag FLAG_AHHH
# 89 "data/maps/PokemonMansion_2F/scripts.pory"
	release
# 90 "data/maps/PokemonMansion_2F/scripts.pory"
	end
# 91 "data/maps/PokemonMansion_2F/scripts.pory"

# 92 "data/maps/PokemonMansion_2F/scripts.pory"
PokemonMansion_2F_EventScript_NoOak::
# 93 "data/maps/PokemonMansion_2F/scripts.pory"
	msgbox PokemonMansion_1F_Text_NoOak
# 94 "data/maps/PokemonMansion_2F/scripts.pory"
	release
# 95 "data/maps/PokemonMansion_2F/scripts.pory"
	end
