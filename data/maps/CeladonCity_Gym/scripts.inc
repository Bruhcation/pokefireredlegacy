# 1 "data/maps/CeladonCity_Gym/scripts.pory"

# 2 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_MapScripts::
# 3 "data/maps/CeladonCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_Gym/scripts.pory"

# 5 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Erika::
# 6 "data/maps/CeladonCity_Gym/scripts.pory"
	famechecker FAMECHECKER_ERIKA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 7 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_ERIKA, CeladonCity_Gym_EventScript_ContinueErika
# 8 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, CeladonCity_Gym_EventScript_BeatBlaine
# 9 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_KOGA, CeladonCity_Gym_EventScript_BeatKoga
# 10 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_SABRINA, CeladonCity_Gym_EventScript_BeatSabrina
# 11 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_ERIKA, CeladonCity_Gym_Text_ErikaIntro, CeladonCity_Gym_Text_ErikaDefeat, CeladonCity_Gym_EventScript_DefeatedErika, NO_MUSIC
# 12 "data/maps/CeladonCity_Gym/scripts.pory"
	goto CeladonCity_Gym_EventScript_ContinueErika
# 13 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_BeatKoga::
# 14 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_SABRINA, CeladonCity_Gym_EventScript_BeatKogaSabrina
# 15 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ERIKA2, CeladonCity_Gym_Text_ErikaIntro, CeladonCity_Gym_Text_ErikaDefeat, CeladonCity_Gym_EventScript_DefeatedErika, NO_MUSIC
# 16 "data/maps/CeladonCity_Gym/scripts.pory"
	goto CeladonCity_Gym_EventScript_ContinueErika
# 17 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_BeatSabrina::
# 18 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_KOGA, CeladonCity_Gym_EventScript_BeatKogaSabrina
# 19 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ERIKA2, CeladonCity_Gym_Text_ErikaIntro, CeladonCity_Gym_Text_ErikaDefeat, CeladonCity_Gym_EventScript_DefeatedErika, NO_MUSIC
# 20 "data/maps/CeladonCity_Gym/scripts.pory"
	goto CeladonCity_Gym_EventScript_ContinueErika
# 21 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_BeatKogaSabrina::
# 22 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ERIKA3, CeladonCity_Gym_Text_ErikaIntro, CeladonCity_Gym_Text_ErikaDefeat, CeladonCity_Gym_EventScript_DefeatedErika, NO_MUSIC
# 23 "data/maps/CeladonCity_Gym/scripts.pory"
	goto CeladonCity_Gym_EventScript_ContinueErika
# 24 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_BeatBlaine::
# 25 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BUG_MANIAC, CeladonCity_Gym_Text_ErikaIntro, CeladonCity_Gym_Text_ErikaDefeat, CeladonCity_Gym_EventScript_DefeatedErika, NO_MUSIC
# 26 "data/maps/CeladonCity_Gym/scripts.pory"
	goto CeladonCity_Gym_EventScript_ContinueErika
# 27 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_ContinueErika::
# 28 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM19_FROM_ERIKA, CeladonCity_Gym_EventScript_GiveTM19
# 29 "data/maps/CeladonCity_Gym/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 4
# 30 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, CeladonCity_Gym_EventScript_RematchErika
# 31 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_ErikaPostBattle
# 32 "data/maps/CeladonCity_Gym/scripts.pory"
	release
# 33 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 34 "data/maps/CeladonCity_Gym/scripts.pory"

# 35 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_DefeatedErika::
# 36 "data/maps/CeladonCity_Gym/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 1
# 37 "data/maps/CeladonCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_ERIKA_JOURNALS
# 38 "data/maps/CeladonCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_ERIKA
# 39 "data/maps/CeladonCity_Gym/scripts.pory"
	setflag FLAG_BADGE04_GET
# 40 "data/maps/CeladonCity_Gym/scripts.pory"
	settrainerflag TRAINER_LEADER_ERIKA
# 41 "data/maps/CeladonCity_Gym/scripts.pory"
	settrainerflag TRAINER_ERIKA2
# 42 "data/maps/CeladonCity_Gym/scripts.pory"
	settrainerflag TRAINER_ERIKA3
# 43 "data/maps/CeladonCity_Gym/scripts.pory"
	setflag FLAG_GYM3CAP
# 44 "data/maps/CeladonCity_Gym/scripts.pory"
	setflag FLAG_GYM4CAP
# 45 "data/maps/CeladonCity_Gym/scripts.pory"
	set_gym_trainers 4
# 46 "data/maps/CeladonCity_Gym/scripts.pory"
	goto CeladonCity_Gym_EventScript_GiveTM19
# 47 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 48 "data/maps/CeladonCity_Gym/scripts.pory"

# 49 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_GiveTM19::
# 50 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_ExplainRainbowBadgeTakeThis
# 51 "data/maps/CeladonCity_Gym/scripts.pory"
	checkitemspace ITEM_TM19
# 52 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_Gym_EventScript_NoRoomForTM19
# 53 "data/maps/CeladonCity_Gym/scripts.pory"
	giveitem_msg CeladonCity_Gym_Text_ReceivedTM19FromErika, ITEM_TM19
# 54 "data/maps/CeladonCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM19_FROM_ERIKA
# 55 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_ExplainTM19
# 56 "data/maps/CeladonCity_Gym/scripts.pory"
	release
# 57 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 58 "data/maps/CeladonCity_Gym/scripts.pory"

# 59 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_NoRoomForTM19::
# 60 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_ShouldMakeRoomForThis
# 61 "data/maps/CeladonCity_Gym/scripts.pory"
	release
# 62 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 63 "data/maps/CeladonCity_Gym/scripts.pory"

# 64 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_RematchErika::
# 65 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_RematchErika, MSGBOX_YESNO
# 66 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_Gym_EventScript_NoRematchErika
# 67 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_ERIKA2, CeladonCity_Gym_Text_RematchYesErika, CeladonCity_Gym_Text_RematchErikaDefeat, CeladonCity_Gym_EventScript_PostRematchErika, NO_MUSIC
# 68 "data/maps/CeladonCity_Gym/scripts.pory"
	release
# 69 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 70 "data/maps/CeladonCity_Gym/scripts.pory"

# 71 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_PostRematchErika::
# 72 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_ErikaPostRematchBattle
# 73 "data/maps/CeladonCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_LEADER_ERIKA2   
# 74 "data/maps/CeladonCity_Gym/scripts.pory"
	release
# 75 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 76 "data/maps/CeladonCity_Gym/scripts.pory"

# 77 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_NoRematchErika::
# 78 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_ErikaNoRematchBattle
# 79 "data/maps/CeladonCity_Gym/scripts.pory"
	release
# 80 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 81 "data/maps/CeladonCity_Gym/scripts.pory"

# 82 "data/maps/CeladonCity_Gym/scripts.pory"

# 83 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Kay::
# 84 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LASS_KAY, CeladonCity_Gym_Text_KayIntro, CeladonCity_Gym_Text_KayDefeat
# 85 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_KayPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 87 "data/maps/CeladonCity_Gym/scripts.pory"

# 88 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Lisa::
# 89 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LASS_LISA, CeladonCity_Gym_Text_LisaIntro, CeladonCity_Gym_Text_LisaDefeat
# 90 "data/maps/CeladonCity_Gym/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 2
# 91 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 93 "data/maps/CeladonCity_Gym/scripts.pory"

# 94 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Tina::
# 95 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_TINA, CeladonCity_Gym_Text_TinaIntro, CeladonCity_Gym_Text_TinaDefeat
# 96 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_TinaPostBattle, MSGBOX_AUTOCLOSE
# 97 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 98 "data/maps/CeladonCity_Gym/scripts.pory"

# 99 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Bridget::
# 100 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_BRIDGET, CeladonCity_Gym_Text_BridgetIntro, CeladonCity_Gym_Text_BridgetDefeat
# 101 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_BridgetPostBattle, MSGBOX_AUTOCLOSE
# 102 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 103 "data/maps/CeladonCity_Gym/scripts.pory"

# 104 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Tamia::
# 105 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_TAMIA, CeladonCity_Gym_Text_TamiaIntro, CeladonCity_Gym_Text_TamiaDefeat
# 106 "data/maps/CeladonCity_Gym/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 3
# 107 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_TamiaPostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 109 "data/maps/CeladonCity_Gym/scripts.pory"

# 110 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Lori::
# 111 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_LORI, CeladonCity_Gym_Text_LoriIntro, CeladonCity_Gym_Text_LoriDefeat
# 112 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_LoriPostBattle, MSGBOX_AUTOCLOSE
# 113 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 114 "data/maps/CeladonCity_Gym/scripts.pory"

# 115 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Mary::
# 116 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_MARY, CeladonCity_Gym_Text_MaryIntro, CeladonCity_Gym_Text_MaryDefeat
# 117 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 119 "data/maps/CeladonCity_Gym/scripts.pory"

# 120 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_GymStatue::
# 121 "data/maps/CeladonCity_Gym/scripts.pory"
	lockall
# 122 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, CeladonCity_Gym_EventScript_GymStatuePostVictory
# 123 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_GymStatue
# 124 "data/maps/CeladonCity_Gym/scripts.pory"
	releaseall
# 125 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 126 "data/maps/CeladonCity_Gym/scripts.pory"

# 127 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_GymStatuePostVictory::
# 128 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_GymStatuePlayerWon
# 129 "data/maps/CeladonCity_Gym/scripts.pory"
	releaseall
# 130 "data/maps/CeladonCity_Gym/scripts.pory"
	end
