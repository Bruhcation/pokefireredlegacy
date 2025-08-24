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
	msgbox ViridianCity_Gym_Text_GiovanniPostBattle
# 12 "data/maps/ViridianCity_Gym/scripts.pory"
	closemessage
# 13 "data/maps/ViridianCity_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 14 "data/maps/ViridianCity_Gym/scripts.pory"
	removeobject LOCALID_GIOVANNI
# 15 "data/maps/ViridianCity_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 16 "data/maps/ViridianCity_Gym/scripts.pory"
	release
# 17 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 18 "data/maps/ViridianCity_Gym/scripts.pory"

# 19 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_DefeatedGiovanni::
# 20 "data/maps/ViridianCity_Gym/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 3
# 21 "data/maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_HIDE_MISC_KANTO_ROCKETS
# 22 "data/maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_LEADER_GIOVANNI
# 23 "data/maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_BADGE08_GET
# 24 "data/maps/ViridianCity_Gym/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 3
# 25 "data/maps/ViridianCity_Gym/scripts.pory"
	clearflag FLAG_R23_GUYS
# 26 "data/maps/ViridianCity_Gym/scripts.pory"
	set_gym_trainers 8
# 27 "data/maps/ViridianCity_Gym/scripts.pory"
	goto ViridianCity_Gym_EventScript_GiveTM26
# 28 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 29 "data/maps/ViridianCity_Gym/scripts.pory"

# 30 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GiveTM26::
# 31 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_ExplainEarthBadgeTakeThis
# 32 "data/maps/ViridianCity_Gym/scripts.pory"
	checkitemspace ITEM_TM26
# 33 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, ViridianCity_Gym_EventScript_NoRoomForTM26
# 34 "data/maps/ViridianCity_Gym/scripts.pory"
	giveitem_msg ViridianCity_Gym_Text_ReceivedTM26FromGiovanni, ITEM_TM26
# 35 "data/maps/ViridianCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM26_FROM_GIOVANNI
# 36 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_ExplainTM26
# 37 "data/maps/ViridianCity_Gym/scripts.pory"
	waitmessage
# 38 "data/maps/ViridianCity_Gym/scripts.pory"
	return
# 39 "data/maps/ViridianCity_Gym/scripts.pory"

# 40 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_NoRoomForTM26::
# 41 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_YouDoNotHaveSpace
# 42 "data/maps/ViridianCity_Gym/scripts.pory"
	release
# 43 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 44 "data/maps/ViridianCity_Gym/scripts.pory"

# 45 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Jason::
# 46 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_JASON, ViridianCity_Gym_Text_JasonIntro, ViridianCity_Gym_Text_JasonDefeat
# 47 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_JasonPostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 49 "data/maps/ViridianCity_Gym/scripts.pory"

# 50 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Cole::
# 51 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_COLE, ViridianCity_Gym_Text_ColeIntro, ViridianCity_Gym_Text_ColeDefeat
# 52 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 54 "data/maps/ViridianCity_Gym/scripts.pory"

# 55 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Atsushi::
# 56 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_ATSUSHI, ViridianCity_Gym_Text_AtsushiIntro, ViridianCity_Gym_Text_AtsushiDefeat
# 57 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_AtsushiPostBattle, MSGBOX_AUTOCLOSE
# 58 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 59 "data/maps/ViridianCity_Gym/scripts.pory"

# 60 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Kiyo::
# 61 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_KIYO, ViridianCity_Gym_Text_KiyoIntro, ViridianCity_Gym_Text_KiyoDefeat
# 62 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_KiyoPostBattle, MSGBOX_AUTOCLOSE
# 63 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 64 "data/maps/ViridianCity_Gym/scripts.pory"

# 65 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Takashi::
# 66 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_TAKASHI, ViridianCity_Gym_Text_TakashiIntro, ViridianCity_Gym_Text_TakashiDefeat
# 67 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
# 68 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 69 "data/maps/ViridianCity_Gym/scripts.pory"

# 70 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Samuel::
# 71 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_SAMUEL, ViridianCity_Gym_Text_SamuelIntro, ViridianCity_Gym_Text_SamuelDefeat
# 72 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
# 73 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 74 "data/maps/ViridianCity_Gym/scripts.pory"

# 75 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Yuji::
# 76 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_YUJI, ViridianCity_Gym_Text_YujiIntro, ViridianCity_Gym_Text_YujiDefeat
# 77 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
# 78 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 79 "data/maps/ViridianCity_Gym/scripts.pory"

# 80 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Warren::
# 81 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_WARREN, ViridianCity_Gym_Text_WarrenIntro, ViridianCity_Gym_Text_WarrenDefeat
# 82 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
# 83 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 84 "data/maps/ViridianCity_Gym/scripts.pory"

# 85 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GymGuy::
# 86 "data/maps/ViridianCity_Gym/scripts.pory"
	lock
# 87 "data/maps/ViridianCity_Gym/scripts.pory"
	faceplayer
# 88 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_LEADER_GIOVANNI, ViridianCity_Gym_EventScript_GymGuyPostVictory
# 89 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymGuyAdvice
# 90 "data/maps/ViridianCity_Gym/scripts.pory"
	release
# 91 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 92 "data/maps/ViridianCity_Gym/scripts.pory"

# 93 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GymGuyPostVictory::
# 94 "data/maps/ViridianCity_Gym/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 4
# 95 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymGuyPostVictory
# 96 "data/maps/ViridianCity_Gym/scripts.pory"
	release
# 97 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 98 "data/maps/ViridianCity_Gym/scripts.pory"

# 99 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GymStatue::
# 100 "data/maps/ViridianCity_Gym/scripts.pory"
	lockall
# 101 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, ViridianCity_Gym_EventScript_GymStatuePostVictory
# 102 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymStatue
# 103 "data/maps/ViridianCity_Gym/scripts.pory"
	releaseall
# 104 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 105 "data/maps/ViridianCity_Gym/scripts.pory"

# 106 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GymStatuePostVictory::
# 107 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymStatuePlayerWon
# 108 "data/maps/ViridianCity_Gym/scripts.pory"
	releaseall
# 109 "data/maps/ViridianCity_Gym/scripts.pory"
	end
