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
	waitmessage
# 33 "data/maps/ViridianCity_Gym/scripts.pory"
	delay 40
# 34 "data/maps/ViridianCity_Gym/scripts.pory"
	goto ViridianCity_Gym_EventScript_Leave
# 35 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 36 "data/maps/ViridianCity_Gym/scripts.pory"

# 37 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Leave::
# 38 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GiovanniPostBattle
# 39 "data/maps/ViridianCity_Gym/scripts.pory"
	closemessage
# 40 "data/maps/ViridianCity_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 41 "data/maps/ViridianCity_Gym/scripts.pory"
	removeobject LOCALID_GIOVANNI
# 42 "data/maps/ViridianCity_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 43 "data/maps/ViridianCity_Gym/scripts.pory"
	release
# 44 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 45 "data/maps/ViridianCity_Gym/scripts.pory"

# 46 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_NoRoomForTM26::
# 47 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_YouDoNotHaveSpace
# 48 "data/maps/ViridianCity_Gym/scripts.pory"
	release
# 49 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 50 "data/maps/ViridianCity_Gym/scripts.pory"

# 51 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Jason::
# 52 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_JASON, ViridianCity_Gym_Text_JasonIntro, ViridianCity_Gym_Text_JasonDefeat
# 53 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_JasonPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 55 "data/maps/ViridianCity_Gym/scripts.pory"

# 56 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Cole::
# 57 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_COLE, ViridianCity_Gym_Text_ColeIntro, ViridianCity_Gym_Text_ColeDefeat
# 58 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_ColePostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 60 "data/maps/ViridianCity_Gym/scripts.pory"

# 61 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Atsushi::
# 62 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_ATSUSHI, ViridianCity_Gym_Text_AtsushiIntro, ViridianCity_Gym_Text_AtsushiDefeat
# 63 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_AtsushiPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 65 "data/maps/ViridianCity_Gym/scripts.pory"

# 66 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Kiyo::
# 67 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_KIYO, ViridianCity_Gym_Text_KiyoIntro, ViridianCity_Gym_Text_KiyoDefeat
# 68 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_KiyoPostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 70 "data/maps/ViridianCity_Gym/scripts.pory"

# 71 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Takashi::
# 72 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_TAKASHI, ViridianCity_Gym_Text_TakashiIntro, ViridianCity_Gym_Text_TakashiDefeat
# 73 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_TakashiPostBattle, MSGBOX_AUTOCLOSE
# 74 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 75 "data/maps/ViridianCity_Gym/scripts.pory"

# 76 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Samuel::
# 77 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_SAMUEL, ViridianCity_Gym_Text_SamuelIntro, ViridianCity_Gym_Text_SamuelDefeat
# 78 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_SamuelPostBattle, MSGBOX_AUTOCLOSE
# 79 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 80 "data/maps/ViridianCity_Gym/scripts.pory"

# 81 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Yuji::
# 82 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_YUJI, ViridianCity_Gym_Text_YujiIntro, ViridianCity_Gym_Text_YujiDefeat
# 83 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_YujiPostBattle, MSGBOX_AUTOCLOSE
# 84 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 85 "data/maps/ViridianCity_Gym/scripts.pory"

# 86 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_Warren::
# 87 "data/maps/ViridianCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_WARREN, ViridianCity_Gym_Text_WarrenIntro, ViridianCity_Gym_Text_WarrenDefeat
# 88 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_WarrenPostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 90 "data/maps/ViridianCity_Gym/scripts.pory"

# 91 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GymGuy::
# 92 "data/maps/ViridianCity_Gym/scripts.pory"
	lock
# 93 "data/maps/ViridianCity_Gym/scripts.pory"
	faceplayer
# 94 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_LEADER_GIOVANNI, ViridianCity_Gym_EventScript_GymGuyPostVictory
# 95 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymGuyAdvice
# 96 "data/maps/ViridianCity_Gym/scripts.pory"
	release
# 97 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 98 "data/maps/ViridianCity_Gym/scripts.pory"

# 99 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GymGuyPostVictory::
# 100 "data/maps/ViridianCity_Gym/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 4
# 101 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymGuyPostVictory
# 102 "data/maps/ViridianCity_Gym/scripts.pory"
	release
# 103 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 104 "data/maps/ViridianCity_Gym/scripts.pory"

# 105 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GymStatue::
# 106 "data/maps/ViridianCity_Gym/scripts.pory"
	lockall
# 107 "data/maps/ViridianCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, ViridianCity_Gym_EventScript_GymStatuePostVictory
# 108 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymStatue
# 109 "data/maps/ViridianCity_Gym/scripts.pory"
	releaseall
# 110 "data/maps/ViridianCity_Gym/scripts.pory"
	end
# 111 "data/maps/ViridianCity_Gym/scripts.pory"

# 112 "data/maps/ViridianCity_Gym/scripts.pory"
ViridianCity_Gym_EventScript_GymStatuePostVictory::
# 113 "data/maps/ViridianCity_Gym/scripts.pory"
	msgbox ViridianCity_Gym_Text_GymStatuePlayerWon
# 114 "data/maps/ViridianCity_Gym/scripts.pory"
	releaseall
# 115 "data/maps/ViridianCity_Gym/scripts.pory"
	end
