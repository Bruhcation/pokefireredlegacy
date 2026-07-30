# 1 "data/maps/PokemonMansion_B1F/scripts.pory"

# 2 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_MapScripts::
# 3 "data/maps/PokemonMansion_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonMansion_B1F_OnLoad
# 4 "data/maps/PokemonMansion_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonMansion_B1F_OnTransition
# 5 "data/maps/PokemonMansion_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonMansion_B1F_OnResume
# 6 "data/maps/PokemonMansion_B1F/scripts.pory"
	.byte 0
# 7 "data/maps/PokemonMansion_B1F/scripts.pory"

# 8 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_OnLoad::
# 9 "data/maps/PokemonMansion_B1F/scripts.pory"
	call_if_set FLAG_POKEMON_MANSION_SWITCH_STATE, PokemonMansion_EventScript_PressSwitch_B1F
# 10 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
# 11 "data/maps/PokemonMansion_B1F/scripts.pory"

# 12 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_OnResume::
# 13 "data/maps/PokemonMansion_B1F/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, PokemonMansion_B1F_EventScript_TryRemoveMew
# 14 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
# 15 "data/maps/PokemonMansion_B1F/scripts.pory"

# 16 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_EventScript_TryRemoveMew::
# 17 "data/maps/PokemonMansion_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 18 "data/maps/PokemonMansion_B1F/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 19 "data/maps/PokemonMansion_B1F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 20 "data/maps/PokemonMansion_B1F/scripts.pory"
	return
# 21 "data/maps/PokemonMansion_B1F/scripts.pory"

# 22 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_OnTransition::
# 23 "data/maps/PokemonMansion_B1F/scripts.pory"
	goto_if_set FLAG_OAK2_DEFEATED, PokemonMansion_B1F_YesItem
# 24 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
# 25 "data/maps/PokemonMansion_B1F/scripts.pory"

# 26 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_YesItem::
# 27 "data/maps/PokemonMansion_B1F/scripts.pory"
	call_if_unset FLAG_FOUGHT_MEW, PokemonMansion_B1F_EventScript_ShowMew
# 28 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
# 29 "data/maps/PokemonMansion_B1F/scripts.pory"

# 30 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_EventScript_ShowMew::
# 31 "data/maps/PokemonMansion_B1F/scripts.pory"
	clearflag FLAG_HIDE_MEW
# 32 "data/maps/PokemonMansion_B1F/scripts.pory"
	return
# 33 "data/maps/PokemonMansion_B1F/scripts.pory"

# 34 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_EventScript_Mew::
# 35 "data/maps/PokemonMansion_B1F/scripts.pory"
	lock
# 36 "data/maps/PokemonMansion_B1F/scripts.pory"
	faceplayer
# 37 "data/maps/PokemonMansion_B1F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 38 "data/maps/PokemonMansion_B1F/scripts.pory"
	special QuestLog_CutRecording
# 39 "data/maps/PokemonMansion_B1F/scripts.pory"
	lock
# 40 "data/maps/PokemonMansion_B1F/scripts.pory"
	faceplayer
# 41 "data/maps/PokemonMansion_B1F/scripts.pory"
	setwildbattle SPECIES_MEW, 50 
# 42 "data/maps/PokemonMansion_B1F/scripts.pory"
	waitse
# 43 "data/maps/PokemonMansion_B1F/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
# 44 "data/maps/PokemonMansion_B1F/scripts.pory"
	message PokemonMansion_B1F_Text_Gyaoo
# 45 "data/maps/PokemonMansion_B1F/scripts.pory"
	waitmessage
# 46 "data/maps/PokemonMansion_B1F/scripts.pory"
	waitmoncry
# 47 "data/maps/PokemonMansion_B1F/scripts.pory"
	delay 10
# 48 "data/maps/PokemonMansion_B1F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 49 "data/maps/PokemonMansion_B1F/scripts.pory"
	waitbuttonpress
# 50 "data/maps/PokemonMansion_B1F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 51 "data/maps/PokemonMansion_B1F/scripts.pory"
	special StartLegendaryBattle
# 52 "data/maps/PokemonMansion_B1F/scripts.pory"
	waitstate
# 53 "data/maps/PokemonMansion_B1F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 54 "data/maps/PokemonMansion_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 55 "data/maps/PokemonMansion_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, PokemonMansion_B1F_EventScript_DefeatedMew
# 56 "data/maps/PokemonMansion_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, PokemonMansion_B1F_EventScript_RanFromMew
# 57 "data/maps/PokemonMansion_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, PokemonMansion_B1F_EventScript_RanFromMew
# 58 "data/maps/PokemonMansion_B1F/scripts.pory"
	setflag FLAG_FOUGHT_MEW
# 59 "data/maps/PokemonMansion_B1F/scripts.pory"
	release
# 60 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
# 61 "data/maps/PokemonMansion_B1F/scripts.pory"

# 62 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_Text_Gyaoo::
# 63 "data/maps/PokemonMansion_B1F/scripts.pory"
	.string "Mew!$"
# 64 "data/maps/PokemonMansion_B1F/scripts.pory"

# 65 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_EventScript_DefeatedMew::
# 66 "data/maps/PokemonMansion_B1F/scripts.pory"
	setvar VAR_0x8004, SPECIES_MEW
# 67 "data/maps/PokemonMansion_B1F/scripts.pory"
	setflag FLAG_FOUGHT_MEW
# 68 "data/maps/PokemonMansion_B1F/scripts.pory"
	goto EventScript_RemoveStaticMon
# 69 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
# 70 "data/maps/PokemonMansion_B1F/scripts.pory"

# 71 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_EventScript_RanFromMew::
# 72 "data/maps/PokemonMansion_B1F/scripts.pory"
	setvar VAR_0x8004, SPECIES_MEW
# 73 "data/maps/PokemonMansion_B1F/scripts.pory"
	setflag FLAG_FOUGHT_MEW
# 74 "data/maps/PokemonMansion_B1F/scripts.pory"
	goto EventScript_MonFlewAway
# 75 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
# 76 "data/maps/PokemonMansion_B1F/scripts.pory"

# 77 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_EventScript_Statue::
# 78 "data/maps/PokemonMansion_B1F/scripts.pory"
	lockall
# 79 "data/maps/PokemonMansion_B1F/scripts.pory"
	setvar VAR_0x8004, 3
# 80 "data/maps/PokemonMansion_B1F/scripts.pory"
	call PokemonMansion_EventScript_SecretSwitch
# 81 "data/maps/PokemonMansion_B1F/scripts.pory"
	playse SE_UNLOCK
# 82 "data/maps/PokemonMansion_B1F/scripts.pory"
	special DrawWholeMapView
# 83 "data/maps/PokemonMansion_B1F/scripts.pory"
	waitse
# 84 "data/maps/PokemonMansion_B1F/scripts.pory"
	releaseall
# 85 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
# 86 "data/maps/PokemonMansion_B1F/scripts.pory"

# 87 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_EventScript_DiarySep1st::
# 88 "data/maps/PokemonMansion_B1F/scripts.pory"
	msgbox PokemonMansion_B1F_Text_MewtwoIsFarTooPowerful, MSGBOX_SIGN
# 89 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
# 90 "data/maps/PokemonMansion_B1F/scripts.pory"

# 91 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_EventScript_Lewis::
# 92 "data/maps/PokemonMansion_B1F/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_LEWIS, PokemonMansion_B1F_Text_LewisIntro, PokemonMansion_B1F_Text_LewisDefeat
# 93 "data/maps/PokemonMansion_B1F/scripts.pory"
	msgbox PokemonMansion_B1F_Text_LewisPostBattle, MSGBOX_AUTOCLOSE
# 94 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
# 95 "data/maps/PokemonMansion_B1F/scripts.pory"

# 96 "data/maps/PokemonMansion_B1F/scripts.pory"
PokemonMansion_B1F_EventScript_Ivan::
# 97 "data/maps/PokemonMansion_B1F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_IVAN, PokemonMansion_B1F_Text_IvanIntro, PokemonMansion_B1F_Text_IvanDefeat
# 98 "data/maps/PokemonMansion_B1F/scripts.pory"
	msgbox PokemonMansion_B1F_Text_IvanPostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/PokemonMansion_B1F/scripts.pory"
	end
