# 1 "data/maps/Route6_NorthEntrance/scripts.pory"

# 2 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_MapScripts::
# 3 "data/maps/Route6_NorthEntrance/scripts.pory"
	.byte 0
# 4 "data/maps/Route6_NorthEntrance/scripts.pory"

# 5 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_Guard::
# 6 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_HiHowsItGoing, MSGBOX_NPC
# 7 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_set FLAG_GUARD_TEA, Route6_NorthEntrance_EventScript_GiveTeaFight
# 8 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, Route6_NorthEntrance_EventScript_Rematch
# 9 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 10 "data/maps/Route6_NorthEntrance/scripts.pory"

# 11 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_Rematch::
# 12 "data/maps/Route6_NorthEntrance/scripts.pory"
	lock
# 13 "data/maps/Route6_NorthEntrance/scripts.pory"
	faceplayer
# 14 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_Whitney, MSGBOX_YESNO
# 15 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route6_NorthEntrance_EventScript_NoWhitney
# 16 "data/maps/Route6_NorthEntrance/scripts.pory"
	trainerbattle_single TRAINER_KINDLER, Route6_NorthEntrance_Text_YesWhitney, Route6_NorthEntrance_Text_WhitneyDefeat, Route6_NorthEntrance_EventScript_PostWhitney, NO_MUSIC
# 17 "data/maps/Route6_NorthEntrance/scripts.pory"
	release
# 18 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 19 "data/maps/Route6_NorthEntrance/scripts.pory"

# 20 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_PostWhitney::
# 21 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_WhitneyPostBattle
# 22 "data/maps/Route6_NorthEntrance/scripts.pory"
	cleartrainerflag TRAINER_KINDLER
# 23 "data/maps/Route6_NorthEntrance/scripts.pory"
	release
# 24 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 25 "data/maps/Route6_NorthEntrance/scripts.pory"

# 26 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_NoWhitney::
# 27 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_NoWhitney
# 28 "data/maps/Route6_NorthEntrance/scripts.pory"
	release
# 29 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 30 "data/maps/Route6_NorthEntrance/scripts.pory"

# 31 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Text_Whitney::
# 32 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "Bwahaha! Hey, kid!\n"
# 33 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "I hear you're the new CHAMP!\p"
# 34 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "Listen… Sorry if us thirsty guards\n"
# 35 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "gave you any trouble before.\p"
# 36 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "How about a quick battle?\n"
# 37 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "It's boring standing here.$"
# 38 "data/maps/Route6_NorthEntrance/scripts.pory"

# 39 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Text_WhitneyDefeat::
# 40 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "Ah, that was refreshing.$"
# 41 "data/maps/Route6_NorthEntrance/scripts.pory"

# 42 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Text_WhitneyPostBattle::
# 43 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "Thanks!$"
# 44 "data/maps/Route6_NorthEntrance/scripts.pory"

# 45 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Text_NoWhitney::
# 46 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "Alright then…$"
# 47 "data/maps/Route6_NorthEntrance/scripts.pory"

# 48 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Text_YesWhitney::
# 49 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "Thanks, CHAMPION!\n"
# 50 "data/maps/Route6_NorthEntrance/scripts.pory"
    .string "I won't hold back!$"
# 51 "data/maps/Route6_NorthEntrance/scripts.pory"

# 52 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GiveTeaFight::
# 53 "data/maps/Route6_NorthEntrance/scripts.pory"
	removeitem ITEM_TEA
# 54 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardDrinkFightTea
# 55 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 56 "data/maps/Route6_NorthEntrance/scripts.pory"

# 57 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardDrinkFightTea::
# 58 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route5_SouthEntrance_Text_ThatFightTeaLooksTasty
# 59 "data/maps/Route6_NorthEntrance/scripts.pory"
	closemessage
# 60 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route5_SouthEntrance_Text_ThanksIllShareFightTeaWithGuards
# 61 "data/maps/Route6_NorthEntrance/scripts.pory"
	giveitem ITEM_NUGGET
# 62 "data/maps/Route6_NorthEntrance/scripts.pory"
	clearflag FLAG_GUARD_TEA
# 63 "data/maps/Route6_NorthEntrance/scripts.pory"
	releaseall
# 64 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 65 "data/maps/Route6_NorthEntrance/scripts.pory"

# 66 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTriggerLeft::
# 67 "data/maps/Route6_NorthEntrance/scripts.pory"
	lockall
# 68 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
# 69 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardTrigger
# 70 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 71 "data/maps/Route6_NorthEntrance/scripts.pory"

# 72 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTriggerMid::
# 73 "data/maps/Route6_NorthEntrance/scripts.pory"
	lockall
# 74 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 75 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardTrigger
# 76 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 77 "data/maps/Route6_NorthEntrance/scripts.pory"

# 78 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTriggerRight::
# 79 "data/maps/Route6_NorthEntrance/scripts.pory"
	lockall
# 80 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 2
# 81 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardTrigger
# 82 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 83 "data/maps/Route6_NorthEntrance/scripts.pory"

# 84 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTrigger::
# 85 "data/maps/Route6_NorthEntrance/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 86 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 87 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_set FLAG_GOT_TEA, Route6_NorthEntrance_EventScript_GiveTea
# 89 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_set FLAG_DEFEATED_LT_SURGE Route6_NorthEntrance_EventScript_BattleGuard
# 90 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_ThirstyOnGuardDuty
# 91 "data/maps/Route6_NorthEntrance/scripts.pory"
	closemessage
# 92 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_BlockPlayerEntry
# 93 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 94 "data/maps/Route6_NorthEntrance/scripts.pory"
	releaseall
# 95 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 96 "data/maps/Route6_NorthEntrance/scripts.pory"

# 97 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_BattleGuard::
# 98 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_FightGuard MSGBOX_YESNO
# 99 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route6_NorthEntrance_EventScript_NoGuard
# 100 "data/maps/Route6_NorthEntrance/scripts.pory"
	trainerbattle_single TRAINER_RANDOM_GRUNT, Route6_NorthEntrance_Text_RematchYesSurge, Route6_NorthEntrance_Text_RematchSurgeDefeat, Route6_NorthEntrance_EventScript_PostGuard, NO_MUSIC
# 101 "data/maps/Route6_NorthEntrance/scripts.pory"
	release
# 102 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 103 "data/maps/Route6_NorthEntrance/scripts.pory"

# 104 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_NoGuard::
# 105 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_NoFightGuard
# 106 "data/maps/Route6_NorthEntrance/scripts.pory"
	closemessage
# 107 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_BlockPlayerEntry
# 108 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 109 "data/maps/Route6_NorthEntrance/scripts.pory"
	releaseall
# 110 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 111 "data/maps/Route6_NorthEntrance/scripts.pory"

# 112 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_PostGuard::
# 113 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_PostGuard 
# 114 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 1
# 115 "data/maps/Route6_NorthEntrance/scripts.pory"
	setflag FLAG_GUARD_TEA
# 116 "data/maps/Route6_NorthEntrance/scripts.pory"
	release
# 117 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 118 "data/maps/Route6_NorthEntrance/scripts.pory"

# 119 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GiveTea::
# 120 "data/maps/Route6_NorthEntrance/scripts.pory"
	removeitem ITEM_TEA
# 121 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardDrinkTea
# 122 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 123 "data/maps/Route6_NorthEntrance/scripts.pory"

# 124 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardDrinkTea::
# 125 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_ThatTeaLooksTasty
# 126 "data/maps/Route6_NorthEntrance/scripts.pory"
	closemessage
# 127 "data/maps/Route6_NorthEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route6_NorthEntrance_EventScript_WalkToGuardLeft
# 128 "data/maps/Route6_NorthEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route6_NorthEntrance_EventScript_WalkToGuardMid
# 129 "data/maps/Route6_NorthEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route6_NorthEntrance_EventScript_WalkToGuardRight
# 130 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_ThanksIllShareTeaWithGuards
# 131 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 1
# 132 "data/maps/Route6_NorthEntrance/scripts.pory"
	releaseall
# 133 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 134 "data/maps/Route6_NorthEntrance/scripts.pory"

# 135 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_WalkToGuardLeft::
# 136 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_WalkToGuardLeft
# 137 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 138 "data/maps/Route6_NorthEntrance/scripts.pory"
	return
# 139 "data/maps/Route6_NorthEntrance/scripts.pory"

# 140 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_WalkToGuardMid::
# 141 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_WalkToGuardMid
# 142 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 143 "data/maps/Route6_NorthEntrance/scripts.pory"
	return
# 144 "data/maps/Route6_NorthEntrance/scripts.pory"

# 145 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_WalkToGuardRight::
# 146 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_WalkToGuardRight
# 147 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 148 "data/maps/Route6_NorthEntrance/scripts.pory"
	return
# 149 "data/maps/Route6_NorthEntrance/scripts.pory"

# 150 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Movement_WalkToGuardLeft::
# 151 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_right
# 152 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_right
# 153 "data/maps/Route6_NorthEntrance/scripts.pory"
	step_end
# 154 "data/maps/Route6_NorthEntrance/scripts.pory"

# 155 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Movement_WalkToGuardMid::
# 156 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_right
# 157 "data/maps/Route6_NorthEntrance/scripts.pory"
	step_end
# 158 "data/maps/Route6_NorthEntrance/scripts.pory"

# 159 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Movement_WalkToGuardRight::
# 160 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_in_place_right
# 161 "data/maps/Route6_NorthEntrance/scripts.pory"
	step_end
# 162 "data/maps/Route6_NorthEntrance/scripts.pory"

# 163 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Movement_BlockPlayerEntry::
# 164 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_down
# 165 "data/maps/Route6_NorthEntrance/scripts.pory"
	step_end
