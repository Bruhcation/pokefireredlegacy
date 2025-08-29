# 1 "data/maps/ViridianCity_Gym/scripts.pory"

# 2 "data/maps/ViridianCity_Gym/scripts.pory"
.set LOCALID_GIOVANNI, 8
# 3 "data/maps/ViridianCity_Gym/scripts.pory"

# 4 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_MapScripts::
# 5 "data/maps/ViridianCity_Gym/scripts.pory"
	.byte 0
# 6 "data/maps/ViridianCity_Gym/scripts.pory"

# 7 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Giovanni::
# 8 "data/maps/ViridianCity_Gym/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 9 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_GIOVANNI, ViridianCity_Gym_Text_GiovanniIntro, ViridianCity_Gym_Text_GiovanniDefeat, ViridianCity_Gym_EventScript_DefeatedGiovanni, NO_MUSIC
# 10 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM26_FROM_GIOVANNI, ViridianCity_Gym_EventScript_GiveTM26
# 11 "data/maps/ViridianCity_Gym/scripts.pory"
	release
# 12 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 13 "data/maps/ViridianCity_Gym/scripts.pory"

# 14 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_DefeatedGiovanni::
# 15 "data/maps/ViridianCity_Gym/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 3
# 16 "data/maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MISC_KANTO_ROCKETS
# 17 "data/maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_LEADER_GIOVANNI
# 18 "data/maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_BADGE08_GET
# 19 "data/maps/ViridianCity_Gym/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 3
# 20 "data/maps/ViridianCity_Gym/scripts.pory"
	clearflag FLAG_R23_GUYS
# 21 "data/maps/ViridianCity_Gym/scripts.pory"
	set_gym_trainers 8
# 22 "data/maps/ViridianCity_Gym/scripts.pory"
	goto ViridianCity_Gym_EventScript_GiveTM26
# 23 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 24 "data/maps/ViridianCity_Gym/scripts.pory"

# 25 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GiveTM26::
# 26 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_ExplainEarthBadgeTakeThis
# 27 "data/maps/ViridianCity_Gym/scripts.pory"
	checkitemspace ITEM_TM26
# 28 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ViridianCity_Gym_EventScript_NoRoomForTM26
# 29 "data/maps/ViridianCity_Gym/scripts.pory"
	giveitem_msg ViridianCity_Gym_Text_ReceivedTM26FromGiovanni, ITEM_TM26
# 30 "data/maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM26_FROM_GIOVANNI
# 31 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_ExplainTM26
# 32 "data/maps/ViridianCity_Gym/scripts.pory"
	goto ViridianCity_Gym_EventScript_Leave
# 33 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 34 "data/maps/ViridianCity_Gym/scripts.pory"

# 35 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Leave::
# 36 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GiovanniPostBattle
# 37 "data/maps/ViridianCity_Gym/scripts.pory"
	closemessage
# 38 "data/maps/ViridianCity_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 39 "data/maps/ViridianCity_Gym/scripts.pory"
	removeobject LOCALID_GIOVANNI
# 40 "data/maps/ViridianCity_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 41 "data/maps/ViridianCity_Gym/scripts.pory"
	release
# 42 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 43 "data/maps/ViridianCity_Gym/scripts.pory"

# 44 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_NoRoomForTM26::
# 45 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_YouDoNotHaveSpace
# 46 "data/maps/ViridianCity_Gym/scripts.pory"
	release
# 47 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 48 "data/maps/ViridianCity_Gym/scripts.pory"

# 49 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Jason::
# 50 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_JASON, ViridianCity_Gym_Text_JasonIntro, ViridianCity_Gym_Text_JasonDefeat
# 51 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_JasonPostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 53 "data/maps/ViridianCity_Gym/scripts.pory"

# 54 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Cole::
# 55 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_COLE, ViridianCity_Gym_Text_ColeIntro, ViridianCity_Gym_Text_ColeDefeat
# 56 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 58 "data/maps/ViridianCity_Gym/scripts.pory"

# 59 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Atsushi::
# 60 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_ATSUSHI, ViridianCity_Gym_Text_AtsushiIntro, ViridianCity_Gym_Text_AtsushiDefeat
# 61 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_AtsushiPostBattle, MSGBOX_AUTOCLOSE
# 62 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 63 "data/maps/ViridianCity_Gym/scripts.pory"

# 64 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Kiyo::
# 65 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_KIYO, ViridianCity_Gym_Text_KiyoIntro, ViridianCity_Gym_Text_KiyoDefeat
# 66 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_KiyoPostBattle, MSGBOX_AUTOCLOSE
# 67 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 68 "data/maps/ViridianCity_Gym/scripts.pory"

# 69 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Takashi::
# 70 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_TAKASHI, ViridianCity_Gym_Text_TakashiIntro, ViridianCity_Gym_Text_TakashiDefeat
# 71 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
# 72 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 73 "data/maps/ViridianCity_Gym/scripts.pory"

# 74 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Samuel::
# 75 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_SAMUEL, ViridianCity_Gym_Text_SamuelIntro, ViridianCity_Gym_Text_SamuelDefeat
# 76 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
# 77 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 78 "data/maps/ViridianCity_Gym/scripts.pory"

# 79 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Yuji::
# 80 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_YUJI, ViridianCity_Gym_Text_YujiIntro, ViridianCity_Gym_Text_YujiDefeat
# 81 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
# 82 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 83 "data/maps/ViridianCity_Gym/scripts.pory"

# 84 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Warren::
# 85 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_WARREN, ViridianCity_Gym_Text_WarrenIntro, ViridianCity_Gym_Text_WarrenDefeat
# 86 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
# 87 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 88 "data/maps/ViridianCity_Gym/scripts.pory"

# 89 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GymGuy::
# 90 "data/maps/ViridianCity_Gym/scripts.pory"
	lock
# 91 "data/maps/ViridianCity_Gym/scripts.pory"
	faceplayer
# 92 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_LEADER_GIOVANNI, ViridianCity_Gym_EventScript_GymGuyPostVictory
# 93 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymGuyAdvice
# 94 "data/maps/ViridianCity_Gym/scripts.pory"
	release
# 95 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 96 "data/maps/ViridianCity_Gym/scripts.pory"

# 97 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GymGuyPostVictory::
# 98 "data/maps/ViridianCity_Gym/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 4
# 99 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymGuyPostVictory
# 100 "data/maps/ViridianCity_Gym/scripts.pory"
	release
# 101 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 102 "data/maps/ViridianCity_Gym/scripts.pory"

# 103 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GymStatue::
# 104 "data/maps/ViridianCity_Gym/scripts.pory"
	lockall
# 105 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, ViridianCity_Gym_EventScript_GymStatuePostVictory
# 106 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymStatue
# 107 "data/maps/ViridianCity_Gym/scripts.pory"
	releaseall
# 108 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 109 "data/maps/ViridianCity_Gym/scripts.pory"

# 110 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GymStatuePostVictory::
# 111 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymStatuePlayerWon
# 112 "data/maps/ViridianCity_Gym/scripts.pory"
	releaseall
# 113 "data/maps/ViridianCity_Gym/scripts.pory"
	end
