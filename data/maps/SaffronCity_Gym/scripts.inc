# 1 "data/maps/SaffronCity_Gym/scripts.pory"

# 2 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_MapScripts::
# 3 "data/maps/SaffronCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/SaffronCity_Gym/scripts.pory"

# 5 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Sabrina::
# 6 "data/maps/SaffronCity_Gym/scripts.pory"
	famechecker FAMECHECKER_SABRINA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 7 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_SABRINA, SaffronCity_Gym_EventScript_SabrinaContinue
# 8 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, SaffronCity_Gym_EventScript_Blaine
# 9 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_SABRINA, SaffronCity_Gym_Text_SabrinaIntro, SaffronCity_Gym_Text_SabrinaDefeat, SaffronCity_Gym_EventScript_DefeatedSabrina, NO_MUSIC
# 10 "data/maps/SaffronCity_Gym/scripts.pory"
	goto SaffronCity_Gym_EventScript_SabrinaContinue
# 11 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Blaine::
# 12 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PRESABRINA, SaffronCity_Gym_Text_SabrinaIntro, SaffronCity_Gym_Text_SabrinaDefeat, SaffronCity_Gym_EventScript_DefeatedSabrina, NO_MUSIC
# 13 "data/maps/SaffronCity_Gym/scripts.pory"
	goto SaffronCity_Gym_EventScript_SabrinaContinue
# 14 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_SabrinaContinue::
# 15 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM04_FROM_SABRINA, SaffronCity_Gym_EventScript_GiveTM04
# 16 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, SaffronCity_Gym_EventScript_RematchSabrina
# 17 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_ExplainTM04
# 18 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 19 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 20 "data/maps/SaffronCity_Gym/scripts.pory"

# 21 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_DefeatedSabrina::
# 22 "data/maps/SaffronCity_Gym/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 2
# 23 "data/maps/SaffronCity_Gym/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 3
# 24 "data/maps/SaffronCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SAFFRON_CITY_POKECENTER_SABRINA_JOURNALS
# 25 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_SABRINA
# 26 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 27 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_GYM3CAP
# 28 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_GYM4CAP
# 29 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_GYM5CAP
# 30 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_GYM6CAP
# 31 "data/maps/SaffronCity_Gym/scripts.pory"
	set_gym_trainers 6
# 32 "data/maps/SaffronCity_Gym/scripts.pory"
	goto SaffronCity_Gym_EventScript_GiveTM04
# 33 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 34 "data/maps/SaffronCity_Gym/scripts.pory"

# 35 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_GiveTM04::
# 36 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_ExplainMarshBadgeTakeThis
# 37 "data/maps/SaffronCity_Gym/scripts.pory"
	checkitemspace ITEM_TM04
# 38 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_Gym_EventScript_NoRoomForTM04
# 39 "data/maps/SaffronCity_Gym/scripts.pory"
	giveitem_msg SaffronCity_Gym_Text_ReceivedTM04FromSabrina, ITEM_TM04
# 40 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM04_FROM_SABRINA
# 41 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_SabrinaPostBattle
# 42 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 43 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 44 "data/maps/SaffronCity_Gym/scripts.pory"

# 45 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_NoRoomForTM04::
# 46 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_BagFullOfOtherItems
# 47 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 48 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 49 "data/maps/SaffronCity_Gym/scripts.pory"

# 50 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_RematchSabrina::
# 51 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_RematchSabrina, MSGBOX_YESNO
# 52 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SaffronCity_Gym_EventScript_NoRematchSabrina
# 53 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_SABRINA2, SaffronCity_Gym_Text_RematchYesSabrina, SaffronCity_Gym_Text_RematchSabrinaDefeat, SaffronCity_Gym_EventScript_PostRematchSabrina, NO_MUSIC
# 54 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 55 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 56 "data/maps/SaffronCity_Gym/scripts.pory"

# 57 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_PostRematchSabrina::
# 58 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_SabrinaPostRematchBattle
# 59 "data/maps/SaffronCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_LEADER_SABRINA2
# 60 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 61 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 62 "data/maps/SaffronCity_Gym/scripts.pory"

# 63 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_NoRematchSabrina::
# 64 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_SabrinaNoRematchBattle
# 65 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 66 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 67 "data/maps/SaffronCity_Gym/scripts.pory"

# 68 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Johan::
# 69 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_JOHAN, SaffronCity_Gym_Text_JohanIntro, SaffronCity_Gym_Text_JohanDefeat
# 70 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_JohanPostBattle, MSGBOX_AUTOCLOSE
# 71 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 72 "data/maps/SaffronCity_Gym/scripts.pory"

# 73 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Tyron::
# 74 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_TYRON, SaffronCity_Gym_Text_TyronIntro, SaffronCity_Gym_Text_TyronDefeat
# 75 "data/maps/SaffronCity_Gym/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 5
# 76 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 77 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 78 "data/maps/SaffronCity_Gym/scripts.pory"

# 79 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Cameron::
# 80 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_CAMERON, SaffronCity_Gym_Text_CameronIntro, SaffronCity_Gym_Text_CameronDefeat
# 81 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_CameronPostBattle, MSGBOX_AUTOCLOSE
# 82 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 83 "data/maps/SaffronCity_Gym/scripts.pory"

# 84 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Preston::
# 85 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_PRESTON, SaffronCity_Gym_Text_PrestonIntro, SaffronCity_Gym_Text_PrestonDefeat
# 86 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 87 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 88 "data/maps/SaffronCity_Gym/scripts.pory"

# 89 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Amanda::
# 90 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_AMANDA, SaffronCity_Gym_Text_AmandaIntro, SaffronCity_Gym_Text_AmandaDefeat
# 91 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_AmandaPostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 93 "data/maps/SaffronCity_Gym/scripts.pory"

# 94 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Stacy::
# 95 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_STACY, SaffronCity_Gym_Text_StacyIntro, SaffronCity_Gym_Text_StacyDefeat
# 96 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_StacyPostBattle, MSGBOX_AUTOCLOSE
# 97 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 98 "data/maps/SaffronCity_Gym/scripts.pory"

# 99 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Tasha::
# 100 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_TASHA, SaffronCity_Gym_Text_TashaIntro, SaffronCity_Gym_Text_TashaDefeat
# 101 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 103 "data/maps/SaffronCity_Gym/scripts.pory"

# 104 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_GymGuy::
# 105 "data/maps/SaffronCity_Gym/scripts.pory"
	lock
# 106 "data/maps/SaffronCity_Gym/scripts.pory"
	faceplayer
# 107 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_SABRINA, SaffronCity_Gym_EventScript_GymGuyPostVictory
# 108 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymGuyAdvice
# 109 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 110 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 111 "data/maps/SaffronCity_Gym/scripts.pory"

# 112 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_GymGuyPostVictory::
# 113 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymGuyPostVictory
# 114 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 115 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 116 "data/maps/SaffronCity_Gym/scripts.pory"

# 117 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_GymStatue::
# 118 "data/maps/SaffronCity_Gym/scripts.pory"
	lockall
# 119 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, SaffronCity_Gym_EventScript_GymStatuePostVictory
# 120 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymStatue
# 121 "data/maps/SaffronCity_Gym/scripts.pory"
	releaseall
# 122 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 123 "data/maps/SaffronCity_Gym/scripts.pory"

# 124 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_GymStatuePostVictory::
# 125 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymStatuePlayerWon
# 126 "data/maps/SaffronCity_Gym/scripts.pory"
	releaseall
# 127 "data/maps/SaffronCity_Gym/scripts.pory"
	end
