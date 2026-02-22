# 1 "data/maps/SixIsland_RuinValley/scripts.pory"

# 2 "data/maps/SixIsland_RuinValley/scripts.pory"
.set LOCALID_SCIENTIST, 1
# 3 "data/maps/SixIsland_RuinValley/scripts.pory"
.set LOCALID_GIOVANNI, 18
# 4 "data/maps/SixIsland_RuinValley/scripts.pory"

# 5 "data/maps/SixIsland_RuinValley/scripts.pory"

# 6 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_MapScripts::
# 7 "data/maps/SixIsland_RuinValley/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SixIsland_RuinValley_OnLoad
# 8 "data/maps/SixIsland_RuinValley/scripts.pory"
	.byte 0
# 9 "data/maps/SixIsland_RuinValley/scripts.pory"

# 10 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_OnLoad::
# 11 "data/maps/SixIsland_RuinValley/scripts.pory"
	call_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_EventScript_OpenDottedHoleDoor
# 12 "data/maps/SixIsland_RuinValley/scripts.pory"
	setvar VAR_0x8004, FAMECHECKER_GIOVANNI
# 13 "data/maps/SixIsland_RuinValley/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 14 "data/maps/SixIsland_RuinValley/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SixIsland_RuinValley_EventScript_ShowGiovanni
# 15 "data/maps/SixIsland_RuinValley/scripts.pory"
	setflag FLAG_GIOVANNI4
# 16 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 17 "data/maps/SixIsland_RuinValley/scripts.pory"

# 18 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_OpenDottedHoleDoor::
# 19 "data/maps/SixIsland_RuinValley/scripts.pory"
	setmetatile 24, 24, METATILE_SeviiIslands67_DottedHoleDoor_Open, 0
# 20 "data/maps/SixIsland_RuinValley/scripts.pory"
	return
# 21 "data/maps/SixIsland_RuinValley/scripts.pory"

# 22 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_ShowGiovanni::
# 23 "data/maps/SixIsland_RuinValley/scripts.pory"
	goto_if_unset FLAG_SYS_CAN_LINK_WITH_RS, SixIsland_RuinValley_EventScript_HideGiovanniEnd
# 24 "data/maps/SixIsland_RuinValley/scripts.pory"
	goto_if_unset FLAG_HIDE_ADMIN, SixIsland_RuinValley_EventScript_HideGiovanniEnd
# 25 "data/maps/SixIsland_RuinValley/scripts.pory"
	goto_if_unset FLAG_HIDE_ADMIN2, SixIsland_RuinValley_EventScript_HideGiovanniEnd
# 26 "data/maps/SixIsland_RuinValley/scripts.pory"
	clearflag FLAG_GIOVANNI4
# 27 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 28 "data/maps/SixIsland_RuinValley/scripts.pory"

# 29 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_HideGiovanniEnd::
# 30 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 31 "data/maps/SixIsland_RuinValley/scripts.pory"

# 32 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_Scientist::
# 33 "data/maps/SixIsland_RuinValley/scripts.pory"
	lock
# 34 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_CantFigureOutHowToGetInside
# 35 "data/maps/SixIsland_RuinValley/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_FacePlayer
# 36 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitmovement 0
# 37 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_IFoundThisPlace
# 38 "data/maps/SixIsland_RuinValley/scripts.pory"
	applymovement LOCALID_SCIENTIST, Common_Movement_FaceOriginalDirection
# 39 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitmovement 0
# 40 "data/maps/SixIsland_RuinValley/scripts.pory"
	release
# 41 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 42 "data/maps/SixIsland_RuinValley/scripts.pory"

# 43 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_DottedHoleDoor::
# 44 "data/maps/SixIsland_RuinValley/scripts.pory"
	lockall
# 45 "data/maps/SixIsland_RuinValley/scripts.pory"
	goto_if_set FLAG_USED_CUT_ON_RUIN_VALLEY_BRAILLE, SixIsland_RuinValley_EventScript_DottedHoleDoorOpen
# 46 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_CheckDoorMoreThoroughly, MSGBOX_YESNO
# 47 "data/maps/SixIsland_RuinValley/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SixIsland_RuinValley_EventScript_IgnoreDottedHoleDoor
# 48 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_SeveralDotsOnTheDoor
# 49 "data/maps/SixIsland_RuinValley/scripts.pory"
	braillemessage Braille_Text_Cut
# 50 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitbuttonpress
# 51 "data/maps/SixIsland_RuinValley/scripts.pory"
	releaseall
# 52 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 53 "data/maps/SixIsland_RuinValley/scripts.pory"

# 54 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_DottedHoleDoorOpen::
# 55 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_DoorIsOpen
# 56 "data/maps/SixIsland_RuinValley/scripts.pory"
	releaseall
# 57 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 58 "data/maps/SixIsland_RuinValley/scripts.pory"

# 59 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_IgnoreDottedHoleDoor::
# 60 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_LeftDoorAlone
# 61 "data/maps/SixIsland_RuinValley/scripts.pory"
	releaseall
# 62 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 63 "data/maps/SixIsland_RuinValley/scripts.pory"

# 64 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_Giovanni::
# 65 "data/maps/SixIsland_RuinValley/scripts.pory"
	lock
# 66 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitse
# 67 "data/maps/SixIsland_RuinValley/scripts.pory"
	playse SE_PIN	
# 68 "data/maps/SixIsland_RuinValley/scripts.pory"
	applymovement LOCALID_GIOVANNI, Common_Movement_ExclamationMarkDelay
# 69 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitmovement 0
# 70 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_PatternBush_Text_Giovanni
# 71 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitmovement 0
# 72 "data/maps/SixIsland_RuinValley/scripts.pory"
	applymovement LOCALID_GIOVANNI, Common_Movement_FacePlayer
# 73 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_PatternBush_Text_Giovanni2
# 74 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitmovement 0
# 75 "data/maps/SixIsland_RuinValley/scripts.pory"
	applymovement LOCALID_GIOVANNI, Common_Movement_FaceLeft
# 76 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_PatternBush_Text_Giovanni3
# 77 "data/maps/SixIsland_RuinValley/scripts.pory"
	waitmovement 0
# 78 "data/maps/SixIsland_RuinValley/scripts.pory"
	applymovement LOCALID_GIOVANNI, Common_Movement_FacePlayer
# 79 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_PatternBush_Text_Giovanni4, MSGBOX_YESNO
# 80 "data/maps/SixIsland_RuinValley/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SixIsland_RuinValley_EventScript_GiovanniNo
# 81 "data/maps/SixIsland_RuinValley/scripts.pory"
	setvar VAR_FORCEANIM, 1
# 82 "data/maps/SixIsland_RuinValley/scripts.pory"
	trainerbattle_single TRAINER_JACKO, SixIsland_PatternBush_Text_GiovanniYes, SixIsland_PatternBush_Text_GiovanniDefeat, SixIsland_RuinValley_EventScript_PostGiovanni, NO_MUSIC
# 83 "data/maps/SixIsland_RuinValley/scripts.pory"
	release
# 84 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 85 "data/maps/SixIsland_RuinValley/scripts.pory"

# 86 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_PostGiovanni::
# 87 "data/maps/SixIsland_RuinValley/scripts.pory"
	setvar VAR_FORCEANIM, 0
# 88 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_PatternBush_Text_GiovanniPost
# 89 "data/maps/SixIsland_RuinValley/scripts.pory"
	setflag FLAG_GIOVANNI4
# 90 "data/maps/SixIsland_RuinValley/scripts.pory"
	removeobject 18
# 91 "data/maps/SixIsland_RuinValley/scripts.pory"
	fadescreen FADE_TO_BLACK
# 92 "data/maps/SixIsland_RuinValley/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 93 "data/maps/SixIsland_RuinValley/scripts.pory"
	release
# 94 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 95 "data/maps/SixIsland_RuinValley/scripts.pory"

# 96 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_GiovanniNo::
# 97 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_PatternBush_Text_GiovanniNo
# 98 "data/maps/SixIsland_RuinValley/scripts.pory"
	release
# 99 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 100 "data/maps/SixIsland_RuinValley/scripts.pory"

# 101 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_Gym1::
# 102 "data/maps/SixIsland_RuinValley/scripts.pory"
	trainerbattle_single TRAINER_EXPERT_M, SixIsland_RuinValley_Text_Rocket1Intro, SixIsland_RuinValley_Text_Rocket1Defeat
# 103 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
# 104 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 105 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_Text_Rocket1Intro::
# 106 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "Hey, have you seen our MASTER\n"
# 107 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "here somewhere?$"
# 108 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_Text_Rocket1Defeat::
# 109 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "Please help us!$"
# 110 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_Text_Rocket1PostBattle::
# 111 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "Our MASTER went into the\n"
# 112 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "cave and he hasn't come out!\l"
# 113 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "It's been two hours!$"
# 114 "data/maps/SixIsland_RuinValley/scripts.pory"

# 115 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_EventScript_Gym2::
# 116 "data/maps/SixIsland_RuinValley/scripts.pory"
	trainerbattle_single TRAINER_EXPERT_F, SixIsland_RuinValley_Text_Rocket2Intro, SixIsland_RuinValley_Text_Rocket2Defeat
# 117 "data/maps/SixIsland_RuinValley/scripts.pory"
	msgbox SixIsland_RuinValley_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/SixIsland_RuinValley/scripts.pory"
	end
# 119 "data/maps/SixIsland_RuinValley/scripts.pory"

# 120 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_Text_Rocket2Intro::
# 121 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "I've been standing here\n"
# 122 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "for two entire hours!$"
# 123 "data/maps/SixIsland_RuinValley/scripts.pory"

# 124 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_Text_Rocket2Defeat::
# 125 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "WAHHH!$"
# 126 "data/maps/SixIsland_RuinValley/scripts.pory"
SixIsland_RuinValley_Text_Rocket2PostBattle::
# 127 "data/maps/SixIsland_RuinValley/scripts.pory"
	.string "I can't take this anymore…$"
