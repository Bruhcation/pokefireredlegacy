# 1 "data/maps/PewterCity_Gym/scripts.pory"

# 2 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_MapScripts::
# 3 "data/maps/PewterCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/PewterCity_Gym/scripts.pory"

# 5 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_Brock::
# 6 "data/maps/PewterCity_Gym/scripts.pory"
	famechecker FAMECHECKER_BROCK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 7 "data/maps/PewterCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BROCK, PewterCity_Gym_Text_BrockIntro, PewterCity_Gym_Text_BrockDefeat, PewterCity_Gym_EventScript_DefeatedBrock, NO_MUSIC
# 8 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM39_FROM_BROCK, PewterCity_Gym_EventScript_GiveTM39
# 9 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, PewterCity_Gym_EventScript_RematchBrock
# 10 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_BrockPostBattle
# 11 "data/maps/PewterCity_Gym/scripts.pory"
	release
# 12 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 13 "data/maps/PewterCity_Gym/scripts.pory"

# 14 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_DefeatedBrock::
# 15 "data/maps/PewterCity_Gym/scripts.pory"
	famechecker FAMECHECKER_BROCK, 1
# 16 "data/maps/PewterCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_BROCK
# 17 "data/maps/PewterCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 18 "data/maps/PewterCity_Gym/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY, 1
# 19 "data/maps/PewterCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 20 "data/maps/PewterCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_RUNNING_SHOES_GUY
# 21 "data/maps/PewterCity_Gym/scripts.pory"
	set_gym_trainers 1
# 22 "data/maps/PewterCity_Gym/scripts.pory"
	goto PewterCity_Gym_EventScript_GiveTM39
# 23 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 24 "data/maps/PewterCity_Gym/scripts.pory"

# 25 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_GiveTM39::
# 26 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_TakeThisWithYou
# 27 "data/maps/PewterCity_Gym/scripts.pory"
	checkitemspace ITEM_TM39
# 28 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Gym_EventScript_NoRoomForTM39
# 29 "data/maps/PewterCity_Gym/scripts.pory"
	giveitem_msg PewterCity_Gym_Text_ReceivedTM39FromBrock, ITEM_TM39
# 30 "data/maps/PewterCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM39_FROM_BROCK
# 31 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_ExplainTM39
# 32 "data/maps/PewterCity_Gym/scripts.pory"
	release
# 33 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 34 "data/maps/PewterCity_Gym/scripts.pory"

# 35 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_NoRoomForTM39::
# 36 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_DontHaveRoomForThis
# 37 "data/maps/PewterCity_Gym/scripts.pory"
	release
# 38 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 39 "data/maps/PewterCity_Gym/scripts.pory"

# 40 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_RematchBrock::
# 41 "data/maps/PewterCity_Gym/scripts.pory"
	setvar VAR_0x8004, FAMECHECKER_BROCK
# 42 "data/maps/PewterCity_Gym/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 43 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PewterCity_Gym_EventScript_RematchBrock2
# 44 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_BrockNoNoRematchBattle
# 45 "data/maps/PewterCity_Gym/scripts.pory"
	release
# 46 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 47 "data/maps/PewterCity_Gym/scripts.pory"

# 48 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_Text_BrockNoNoRematchBattle::
# 49 "data/maps/PewterCity_Gym/scripts.pory"
	.string "Hey there {PLAYER}, congrats\n"
# 50 "data/maps/PewterCity_Gym/scripts.pory"
	.string "on your win to become the CHAMPION!\p"
# 51 "data/maps/PewterCity_Gym/scripts.pory"
	.string "It must of taken lots of\n"
# 52 "data/maps/PewterCity_Gym/scripts.pory"
	.string "strength and hard will to get to\l"
# 53 "data/maps/PewterCity_Gym/scripts.pory"
	.string "where you are today!\p"
# 54 "data/maps/PewterCity_Gym/scripts.pory"
	.string "Well, I want to have a rematch,\n"
# 55 "data/maps/PewterCity_Gym/scripts.pory"
	.string "But I ain't ready yet.\p"
# 56 "data/maps/PewterCity_Gym/scripts.pory"
	.string "In the mean time, get that\n"
# 57 "data/maps/PewterCity_Gym/scripts.pory"
	.string "Rocky FAME CHECKER filled out!\p"
# 58 "data/maps/PewterCity_Gym/scripts.pory"
	.string "My Rocky FAME CHECKER Entry\n"
# 59 "data/maps/PewterCity_Gym/scripts.pory"
	.string "to be specific.$"
# 60 "data/maps/PewterCity_Gym/scripts.pory"

# 61 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_RematchBrock2::
# 62 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_RematchBrock, MSGBOX_YESNO
# 63 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PewterCity_Gym_EventScript_NoRematchBrock
# 64 "data/maps/PewterCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BROCK2, PewterCity_Gym_Text_RematchYesBrock, PewterCity_Gym_Text_RematchBrockDefeat, PewterCity_Gym_EventScript_PostRematchBrock, NO_MUSIC
# 65 "data/maps/PewterCity_Gym/scripts.pory"
	release
# 66 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 67 "data/maps/PewterCity_Gym/scripts.pory"

# 68 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_PostRematchBrock::
# 69 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_BrockPostRematchBattle
# 70 "data/maps/PewterCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_BROCK2
# 71 "data/maps/PewterCity_Gym/scripts.pory"
	release
# 72 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 73 "data/maps/PewterCity_Gym/scripts.pory"

# 74 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_NoRematchBrock::
# 75 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_BrockNoRematchBattle
# 76 "data/maps/PewterCity_Gym/scripts.pory"
	release
# 77 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 78 "data/maps/PewterCity_Gym/scripts.pory"

# 79 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_Liam::
# 80 "data/maps/PewterCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_LIAM, PewterCity_Gym_Text_LiamIntro, PewterCity_Gym_Text_LiamDefeat
# 81 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_LiamPostBattle, MSGBOX_AUTOCLOSE
# 82 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 83 "data/maps/PewterCity_Gym/scripts.pory"

# 84 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_GymGuy::
# 85 "data/maps/PewterCity_Gym/scripts.pory"
	lock
# 86 "data/maps/PewterCity_Gym/scripts.pory"
	faceplayer
# 87 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BROCK, PewterCity_Gym_EventScript_GymGuyPostVictory
# 88 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_LetMeTakeYouToTheTop, MSGBOX_YESNO
# 89 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_Gym_EventScript_GymGuyTakeMeToTop
# 90 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop
# 91 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 92 "data/maps/PewterCity_Gym/scripts.pory"

# 93 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_GymGuyPostVictory::
# 94 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_YoureChampMaterial
# 95 "data/maps/PewterCity_Gym/scripts.pory"
	release
# 96 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 97 "data/maps/PewterCity_Gym/scripts.pory"

# 98 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_GymGuyTakeMeToTop::
# 99 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_LetsGetHappening
# 100 "data/maps/PewterCity_Gym/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuyAdvice
# 101 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 102 "data/maps/PewterCity_Gym/scripts.pory"

# 103 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop::
# 104 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_ItsFreeLetsGetHappening
# 105 "data/maps/PewterCity_Gym/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuyAdvice
# 106 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 107 "data/maps/PewterCity_Gym/scripts.pory"

# 108 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_GymGuyAdvice::
# 109 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_TryDifferentPartyOrders
# 110 "data/maps/PewterCity_Gym/scripts.pory"
	release
# 111 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 112 "data/maps/PewterCity_Gym/scripts.pory"

# 113 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_GymStatue::
# 114 "data/maps/PewterCity_Gym/scripts.pory"
	lockall
# 115 "data/maps/PewterCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PewterCity_Gym_EventScript_GymStatuePostVictory
# 116 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_GymStatue
# 117 "data/maps/PewterCity_Gym/scripts.pory"
	releaseall
# 118 "data/maps/PewterCity_Gym/scripts.pory"
	end
# 119 "data/maps/PewterCity_Gym/scripts.pory"

# 120 "data/maps/PewterCity_Gym/scripts.pory"
PewterCity_Gym_EventScript_GymStatuePostVictory::
# 121 "data/maps/PewterCity_Gym/scripts.pory"
	msgbox PewterCity_Gym_Text_GymStatuePlayerWon
# 122 "data/maps/PewterCity_Gym/scripts.pory"
	releaseall
# 123 "data/maps/PewterCity_Gym/scripts.pory"
	end
