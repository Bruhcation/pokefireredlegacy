# 1 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 2 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_MapScripts::
# 3 "data/maps/FuchsiaCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 5 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Koga::
# 6 "data/maps/FuchsiaCity_Gym/scripts.pory"
	famechecker FAMECHECKER_KOGA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 7 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_KOGA, FuchsiaCity_Gym_EventScript_ContinueKoga
# 8 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, FuchsiaCity_Gym_EventScript_BeatBlaine
# 9 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_SABRINA, FuchsiaCity_Gym_EventScript_BeatSabrina
# 10 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_KOGA, FuchsiaCity_Gym_Text_KogaIntro, FuchsiaCity_Gym_Text_KogaDefeat, FuchsiaCity_Gym_EventScript_DefeatedKoga, NO_MUSIC
# 11 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_ContinueKoga
# 12 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_BeatSabrina::
# 13 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_KOGA2, FuchsiaCity_Gym_Text_KogaIntro, FuchsiaCity_Gym_Text_KogaDefeat, FuchsiaCity_Gym_EventScript_DefeatedKoga, NO_MUSIC
# 14 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_ContinueKoga
# 15 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_BeatBlaine::
# 16 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RS_GENTLEMAN, FuchsiaCity_Gym_Text_KogaIntro, FuchsiaCity_Gym_Text_KogaDefeat, FuchsiaCity_Gym_EventScript_DefeatedKoga, NO_MUSIC
# 17 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_ContinueKoga
# 18 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_ContinueKoga::
# 19 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM06_FROM_KOGA, FuchsiaCity_Gym_EventScript_GiveTM06
# 20 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, FuchsiaCity_Gym_EventScript_RematchKoga
# 21 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaPostBattle
# 22 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 23 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 24 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 25 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_DefeatedKoga::
# 26 "data/maps/FuchsiaCity_Gym/scripts.pory"
	famechecker FAMECHECKER_KOGA, 1
# 27 "data/maps/FuchsiaCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_KOGA_JOURNAL
# 28 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_KOGA
# 29 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 30 "data/maps/FuchsiaCity_Gym/scripts.pory"
	settrainerflag TRAINER_LEADER_KOGA
# 31 "data/maps/FuchsiaCity_Gym/scripts.pory"
	settrainerflag TRAINER_KOGA2
# 32 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_GYM3CAP
# 33 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_GYM4CAP
# 34 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_GYM5CAP
# 35 "data/maps/FuchsiaCity_Gym/scripts.pory"
	set_gym_trainers 5
# 36 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_GiveTM06
# 37 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 38 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 39 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_GiveTM06::
# 40 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaExplainSoulBadge
# 41 "data/maps/FuchsiaCity_Gym/scripts.pory"
	checkitemspace ITEM_TM06
# 42 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_Gym_EventScript_NoRoomForTM06
# 43 "data/maps/FuchsiaCity_Gym/scripts.pory"
	giveitem_msg FuchsiaCity_Gym_Text_ReceivedTM06FromKoga, ITEM_TM06
# 44 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM06_FROM_KOGA
# 45 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaExplainTM06
# 46 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 47 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 48 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 49 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_NoRoomForTM06::
# 50 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_MakeSpaceForThis
# 51 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 52 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 53 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 54 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_RematchKoga::
# 55 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setvar VAR_0x8004, FAMECHECKER_KOGA
# 56 "data/maps/FuchsiaCity_Gym/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 57 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FuchsiaCity_Gym_EventScript_RematchKoga2
# 58 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaNoNoRematchBattle
# 59 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 60 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 61 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 62 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_Text_KogaNoNoRematchBattle::
# 63 "data/maps/FuchsiaCity_Gym/scripts.pory"
	.string "Fwahahaha! CHAMPION, huh?\p"
# 64 "data/maps/FuchsiaCity_Gym/scripts.pory"
	.string "I commend your strength,\n"
# 65 "data/maps/FuchsiaCity_Gym/scripts.pory"
	.string "but I'm doing Ninja duties\l"
# 66 "data/maps/FuchsiaCity_Gym/scripts.pory"
	.string "at the moment.\p"
# 67 "data/maps/FuchsiaCity_Gym/scripts.pory"
	.string "In the meantime, you should\n"
# 68 "data/maps/FuchsiaCity_Gym/scripts.pory"
	.string "get to know fill out my\l"
# 69 "data/maps/FuchsiaCity_Gym/scripts.pory"
	.string "entry on the FAMECHECKER.\p"
# 70 "data/maps/FuchsiaCity_Gym/scripts.pory"
	.string "Get to know how a Ninja works.$"
# 71 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 72 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_RematchKoga2::
# 73 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_RematchKoga, MSGBOX_YESNO
# 74 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FuchsiaCity_Gym_EventScript_NoRematchKoga
# 75 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_KOGA2, FuchsiaCity_Gym_Text_RematchYesKoga, FuchsiaCity_Gym_Text_RematchKogaDefeat, FuchsiaCity_Gym_EventScript_PostRematchKoga, NO_MUSIC
# 76 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 77 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 78 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 79 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_PostRematchKoga::
# 80 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaPostRematchBattle
# 81 "data/maps/FuchsiaCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_LEADER_KOGA2   
# 82 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 83 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 84 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 85 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_NoRematchKoga::
# 86 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaNoRematchBattle
# 87 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 88 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 89 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 90 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Phil::
# 91 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_PHIL, FuchsiaCity_Gym_Text_PhilIntro, FuchsiaCity_Gym_Text_PhilDefeat
# 92 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
# 93 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 94 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 95 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Edgar::
# 96 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_EDGAR, FuchsiaCity_Gym_Text_EdgarIntro, FuchsiaCity_Gym_Text_EdgarDefeat
# 97 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
# 98 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 99 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 100 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Kirk::
# 101 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_KIRK, FuchsiaCity_Gym_Text_KirkIntro, FuchsiaCity_Gym_Text_KirkDefeat
# 102 "data/maps/FuchsiaCity_Gym/scripts.pory"
	famechecker FAMECHECKER_KOGA, 2
# 103 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 104 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 105 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 106 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Shawn::
# 107 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_SHAWN, FuchsiaCity_Gym_Text_ShawnIntro, FuchsiaCity_Gym_Text_ShawnDefeat
# 108 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 109 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 110 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 111 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Kayden::
# 112 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_KAYDEN, FuchsiaCity_Gym_Text_KaydenIntro, FuchsiaCity_Gym_Text_KaydenDefeat
# 113 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KaydenPostBattle, MSGBOX_AUTOCLOSE
# 114 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 115 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 116 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Nate::
# 117 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_NATE, FuchsiaCity_Gym_Text_NateIntro, FuchsiaCity_Gym_Text_NateDefeat
# 118 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 119 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 120 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 121 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_GymGuy::
# 122 "data/maps/FuchsiaCity_Gym/scripts.pory"
	lock
# 123 "data/maps/FuchsiaCity_Gym/scripts.pory"
	faceplayer
# 124 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_KOGA, FuchsiaCity_Gym_EventScript_GymGuyPostVictory
# 125 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymGuyAdvice
# 126 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 127 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 128 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 129 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_GymGuyPostVictory::
# 130 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymGuyPostVictory
# 131 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 132 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 133 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 134 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_GymStatue::
# 135 "data/maps/FuchsiaCity_Gym/scripts.pory"
	lockall
# 136 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, FuchsiaCity_Gym_EventScript_GymStatuePostVictory
# 137 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymStatue
# 138 "data/maps/FuchsiaCity_Gym/scripts.pory"
	releaseall
# 139 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 140 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 141 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_GymStatuePostVictory::
# 142 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymStatuePlayerWon
# 143 "data/maps/FuchsiaCity_Gym/scripts.pory"
	releaseall
# 144 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
