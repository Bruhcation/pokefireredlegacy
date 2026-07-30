# 1 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
.set LOCALID_DOOR_GUARD, 5
# 3 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 4 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_MapScripts::
# 5 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_PokemonCenter_1F_OnTransition
# 6 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.byte 0
# 7 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 8 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_OnTransition::
# 9 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	setrespawn SPAWN_INDIGO_PLATEAU
# 10 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 11 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor
# 12 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 13 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 14 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor::
# 15 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, EventScript_Return
# 16 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_DOOR_GUARD, 4, 2
# 17 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	return
# 18 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 19 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard::
# 20 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	lock
# 21 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	faceplayer
# 22 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 23 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete
# 24 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck
# 25 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 26 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete::
# 29 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, IndigoPlateau_PokemonCenter_1F_EventScript_SeviiIslandComplete
# 30 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_LoreleiIsAbsentClosedForTimeBeing
# 31 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 32 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 33 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 34 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_SeviiIslandComplete::
# 35 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck
# 36 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 37 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 38 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 39 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_GymGuy::
# 40 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	call CinnabarIsland_EventScript_FishermanCheckFishingRod
# 41 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	call CinnabarIsland_EventScript_FishermanCheckPokeballs
# 42 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_GymGuyAdvice, MSGBOX_NPC
# 43 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 44 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 45 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_Clerk::
# 46 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 47 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	lock
# 48 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	faceplayer
# 49 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	message Text_MayIHelpYou
# 50 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	waitmessage
# 51 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	pokemart IndigoPlateau_PokemonCenter_1F_Items
# 52 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox Text_PleaseComeAgain
# 53 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 54 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 55 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 56 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.align 2
# 57 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_Items::
# 58 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 59 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 60 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 61 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 62 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 63 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ETHER
# 64 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ELIXIR
# 65 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REVIVE
# 66 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 67 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 68 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_NONE
# 69 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 70 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 71 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 72 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_Nurse::
# 73 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	lock
# 74 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	faceplayer
# 75 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 76 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 77 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 78 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 79 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_TMGUY::
# 80 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 81 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	lock
# 82 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	faceplayer
# 83 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	message IndigoPlateau_PokemonCenter_1F_Text_TmGuy
# 84 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	waitmessage
# 85 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	pokemart IndigoPlateau_PokemonCenter_1F_TMGUY
# 86 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox Text_PleaseComeAgain
# 87 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 88 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 89 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 90 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.align 2
# 91 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_TMGUY::
# 92 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM07
# 93 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM11
# 94 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM13
# 95 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM18
# 96 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM23
# 97 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM24
# 98 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM30
# 99 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM35
# 100 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM37
# 101 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM48
# 102 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_TM49
# 103 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_NONE
# 104 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 105 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
