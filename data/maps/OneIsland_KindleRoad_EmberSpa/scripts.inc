# 1 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 2 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_MapScripts::
# 3 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	.byte 0
# 4 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 5 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_OldMan::
# 6 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_WaterWarmsMeToCore, MSGBOX_NPC
# 7 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 8 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 9 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_BaldingMan1::
# 10 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_EnjoyBowlOfChowder, MSGBOX_NPC
# 11 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 12 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 13 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_BaldingMan2::
# 14 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_HotSpringIsTherapeutic, MSGBOX_NPC
# 15 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 16 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 17 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_OldWoman::
# 18 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_SeeHowSmoothMySkinIs, MSGBOX_NPC
# 19 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 20 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 21 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_BlackBelt::
# 22 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	lock
# 23 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	faceplayer
# 24 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 3
# 25 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_BrunoVisitsSpaOnOccasion
# 26 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
# 27 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 28 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 29 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_RockSmashMan::
# 30 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	lock
# 31 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	faceplayer
# 32 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	goto_if_set FLAG_GOT_HM06, OneIsland_KindleRoad_EmberSpa_EventScript_AlreadyGotHM06
# 33 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_UsedThisToMakeEmberSpa
# 34 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	giveitem ITEM_BRICK_PIECE
# 35 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	setflag FLAG_GOT_HM06
# 36 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_ExplainHM06
# 37 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
# 38 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 39 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 40 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_AlreadyGotHM06::
# 41 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_ExplainHM06
# 42 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
# 43 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 44 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 45 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_SpaHeal::
# 46 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	lockall
# 47 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	fadescreen FADE_TO_WHITE
# 48 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	special HealPlayerParty
# 49 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 50 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_WaterExquisiteFullyRefreshed
# 51 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	setvar VAR_TEMP_1, 1
# 52 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	releaseall
# 53 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 54 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 55 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_EventScript_Reset::
# 56 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	setvar VAR_TEMP_1, 0
# 57 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
# 58 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 59 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 60 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_Samal::
# 61 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	lock
# 62 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	faceplayer
# 63 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	goto_if_set FLAG_SAMAL_DEFEATED, OneIsland_KindleRoad_EmberSpa_EventScript_RematchSamal
# 64 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_Samal, MSGBOX_YESNO
# 65 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_KindleRoad_EmberSpa_EventScript_NoSamal
# 66 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	trainerbattle_single TRAINER_SAMAL, OneIsland_KindleRoad_EmberSpa_Text_YesSamal, OneIsland_KindleRoad_EmberSpa_Text_SamalDefeat, OneIsland_KindleRoad_EmberSpa_EventScript_PostSamal, NO_MUSIC
# 67 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
# 68 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 69 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 70 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_PostSamal::
# 71 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_SamalPostBattle
# 72 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	setflag FLAG_SAMAL_DEFEATED
# 73 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	cleartrainerflag TRAINER_SAMAL
# 74 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	message Text_6Leaders
# 75 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
# 76 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 77 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 78 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_CantRematchSamal::
# 79 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_SamalPostBattle
# 80 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
# 81 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 82 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 83 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_NoSamal::
# 84 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_NoSamal
# 85 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
# 86 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 87 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 88 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_RematchSamal::
# 89 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_RematchSamal, MSGBOX_YESNO
# 90 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_KindleRoad_EmberSpa_EventScript_NoSamal
# 91 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	trainerbattle_single TRAINER_SAMAL, OneIsland_KindleRoad_EmberSpa_Text_YesRematchSamal, OneIsland_KindleRoad_EmberSpa_Text_RematchSamalDefeat, OneIsland_KindleRoad_EmberSpa_EventScript_PostRematchSamal, NO_MUSIC
# 92 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
# 93 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 94 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 95 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_PostRematchSamal::
# 96 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_RematchSamalDefeat
# 97 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	cleartrainerflag TRAINER_SAMAL
# 98 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	release
# 99 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 100 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 101 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_Gym1::
# 102 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	trainerbattle_single TRAINER_CYCLING_TRIATHLETE_M, OneIsland_KindleRoad_EmberSpa_Text_Rocket1Intro, OneIsland_KindleRoad_EmberSpa_Text_Rocket1Defeat
# 103 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
# 104 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 105 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 106 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_Text_Rocket1Intro::
# 107 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	.string "Hey, you're in SLUGMA's\n"
# 108 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	.string "domain!$"
# 109 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 110 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_Text_Rocket1Defeat::
# 111 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	.string "I failed you, SLUGMA…$"
# 112 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 113 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_Text_Rocket1PostBattle::
# 114 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	.string "The MASTER and us are\n"
# 115 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	.string "big fans of SLUGMA.\l"
# 116 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	.string "They're as hot as\l"
# 117 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	.string "ONE ISLAND itself!$"
# 118 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 119 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_EventScript_Gym2::
# 120 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	trainerbattle_single TRAINER_CYCLING_TRIATHLETE_F, OneIsland_KindleRoad_EmberSpa_Text_Rocket2Intro, OneIsland_KindleRoad_EmberSpa_Text_Rocket2Defeat
# 121 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	msgbox OneIsland_KindleRoad_EmberSpa_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	end
# 123 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 124 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_Text_Rocket2Intro::
# 125 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	.string "Have you been to MT. EMBER,\n"
# 126 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	.string "and seen SLUGMA?$"
# 127 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 128 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_Text_Rocket2Defeat::
# 129 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	.string "SLUGMA would be proud!$"
# 130 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"

# 131 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
OneIsland_KindleRoad_EmberSpa_Text_Rocket2PostBattle::
# 132 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	.string "Our MASTER is a certifed\n"
# 133 "data/maps/OneIsland_KindleRoad_EmberSpa/scripts.pory"
	.string "SLUGMA expert!$"
