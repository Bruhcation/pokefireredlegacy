# 1 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 2 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
.equ LOCALID_MOM, 1
# 3 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 4 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_MapScripts::
# 5 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.byte 0
# 6 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 7 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_OnFrame::
# 8 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	.2byte 0
# 9 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 10 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomShoes::
# 11 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lockall
# 12 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 13 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_WalkInPlaceFasterDown
# 14 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 15 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_ExclamationMark
# 16 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 17 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_Delay48
# 18 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 19 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	delay 25
# 20 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PalletTown_PlayersHouse_1F_Movement_RivalApproach
# 21 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 22 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MomShoes
# 23 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 24 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	message PalletTown_PlayersHouse_1F_Text_ReceivedRunningShoesFromAide
# 25 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmessage
# 26 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitfanfare
# 27 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_ReceivedRunningShoesFromAide2
# 28 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	special DisableMsgBoxWalkaway
# 29 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	signmsg
# 30 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 31 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, PalletTown_PlayersHouse_1F_Movement_RivalExit
# 32 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 33 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 34 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	fadedefaultbgm
# 35 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	delay 35
# 36 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_1F, 1
# 37 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 38 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 39 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 40 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_Movement_RivalApproach::
# 41 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 42 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	walk_right
# 43 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	walk_up
# 44 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	step_end
# 45 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 46 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_Movement_RivalExit::
# 47 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	walk_down
# 48 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 49 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	walk_left
# 50 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	step_end
# 51 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 52 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_Mom::
# 53 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lock
# 54 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	faceplayer
# 55 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_unset FLAG_MOM_CHAMP, PalletTown_PlayersHouse_1F_EventScript_MomChampion
# 56 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	goto_if_set FLAG_BEAT_RIVAL_IN_OAKS_LAB, PalletTown_PlayersHouse_1F_EventScript_MomHeal
# 57 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 58 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale
# 59 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale
# 60 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 61 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	applymovement LOCALID_MOM, Common_Movement_FaceOriginalDirection
# 62 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 63 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	release
# 64 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 65 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 66 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale::
# 67 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou
# 68 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
# 69 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 70 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale::
# 71 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou
# 72 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
# 73 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 74 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomHeal::
# 75 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest
# 76 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 77 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 78 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare
# 79 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	release
# 80 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 81 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 82 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_MomChampion::
# 83 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_Champion
# 84 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	closemessage
# 85 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	setflag FLAG_MOM_CHAMP
# 86 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
# 87 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 88 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
@ Displays special text if interacted with from side or back (which are normally inaccessible)
# 89 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TV::
# 90 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	lockall
# 91 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	goto_if_eq VAR_FACING, DIR_NORTH, PalletTown_PlayersHouse_1F_EventScript_TVScreen
# 92 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_OopsWrongSide
# 93 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 94 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 95 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 96 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreen::
# 97 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	checkplayergender
# 98 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenMale
# 99 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale
# 100 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	releaseall
# 101 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	end
# 102 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 103 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenMale::
# 104 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad
# 105 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
# 106 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"

# 107 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale::
# 108 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad
# 109 "data/maps/PalletTown_PlayersHouse_1F/scripts.pory"
	return
