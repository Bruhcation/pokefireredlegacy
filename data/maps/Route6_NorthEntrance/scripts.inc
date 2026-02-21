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
	goto_if_set FLAG_GUARD_TEA, Route6_NorthEntrance_EventScript_GiveTeaFightPre
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
Route6_NorthEntrance_EventScript_GiveTeaFightPre::
# 58 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_set FLAG_GOT_TEA, Route6_NorthEntrance_EventScript_GiveTeaFight
# 59 "data/maps/Route6_NorthEntrance/scripts.pory"
	return
# 60 "data/maps/Route6_NorthEntrance/scripts.pory"

# 61 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardDrinkFightTea::
# 62 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route5_SouthEntrance_Text_ThatFightTeaLooksTasty
# 63 "data/maps/Route6_NorthEntrance/scripts.pory"
	closemessage
# 64 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route5_SouthEntrance_Text_ThanksIllShareFightTeaWithGuards
# 65 "data/maps/Route6_NorthEntrance/scripts.pory"
	giveitem ITEM_NUGGET
# 66 "data/maps/Route6_NorthEntrance/scripts.pory"
	clearflag FLAG_GUARD_TEA
# 67 "data/maps/Route6_NorthEntrance/scripts.pory"
	releaseall
# 68 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 69 "data/maps/Route6_NorthEntrance/scripts.pory"

# 70 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTriggerLeft::
# 71 "data/maps/Route6_NorthEntrance/scripts.pory"
	lockall
# 72 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 0
# 73 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardTrigger
# 74 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 75 "data/maps/Route6_NorthEntrance/scripts.pory"

# 76 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTriggerMid::
# 77 "data/maps/Route6_NorthEntrance/scripts.pory"
	lockall
# 78 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 79 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardTrigger
# 80 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 81 "data/maps/Route6_NorthEntrance/scripts.pory"

# 82 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTriggerRight::
# 83 "data/maps/Route6_NorthEntrance/scripts.pory"
	lockall
# 84 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_TEMP_1, 2
# 85 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardTrigger
# 86 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 87 "data/maps/Route6_NorthEntrance/scripts.pory"

# 88 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardTrigger::
# 89 "data/maps/Route6_NorthEntrance/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 90 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 91 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_set FLAG_GOT_TEA, Route6_NorthEntrance_EventScript_GiveTea
# 93 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_set FLAG_DEFEATED_LT_SURGE Route6_NorthEntrance_EventScript_BattleGuard
# 94 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_ThirstyOnGuardDuty
# 95 "data/maps/Route6_NorthEntrance/scripts.pory"
	closemessage
# 96 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_BlockPlayerEntry
# 97 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 98 "data/maps/Route6_NorthEntrance/scripts.pory"
	releaseall
# 99 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 100 "data/maps/Route6_NorthEntrance/scripts.pory"

# 101 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_BattleGuard::
# 102 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_FightGuard MSGBOX_YESNO
# 103 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route6_NorthEntrance_EventScript_NoGuard
# 104 "data/maps/Route6_NorthEntrance/scripts.pory"
	trainerbattle_single TRAINER_RANDOM_GRUNT, Route6_NorthEntrance_Text_RematchYesSurge, Route6_NorthEntrance_Text_RematchSurgeDefeat, Route6_NorthEntrance_EventScript_PostGuard, NO_MUSIC
# 105 "data/maps/Route6_NorthEntrance/scripts.pory"
	release
# 106 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 107 "data/maps/Route6_NorthEntrance/scripts.pory"

# 108 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_NoGuard::
# 109 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_NoFightGuard
# 110 "data/maps/Route6_NorthEntrance/scripts.pory"
	closemessage
# 111 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_BlockPlayerEntry
# 112 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 113 "data/maps/Route6_NorthEntrance/scripts.pory"
	releaseall
# 114 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 115 "data/maps/Route6_NorthEntrance/scripts.pory"

# 116 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_PostGuard::
# 117 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_PostGuard 
# 118 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 1
# 119 "data/maps/Route6_NorthEntrance/scripts.pory"
	setflag FLAG_GUARD_TEA
# 120 "data/maps/Route6_NorthEntrance/scripts.pory"
	release
# 121 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 122 "data/maps/Route6_NorthEntrance/scripts.pory"

# 123 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GiveTea::
# 124 "data/maps/Route6_NorthEntrance/scripts.pory"
	removeitem ITEM_TEA
# 125 "data/maps/Route6_NorthEntrance/scripts.pory"
	goto Route6_NorthEntrance_EventScript_GuardDrinkTea
# 126 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 127 "data/maps/Route6_NorthEntrance/scripts.pory"

# 128 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_GuardDrinkTea::
# 129 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_ThatTeaLooksTasty
# 130 "data/maps/Route6_NorthEntrance/scripts.pory"
	closemessage
# 131 "data/maps/Route6_NorthEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route6_NorthEntrance_EventScript_WalkToGuardLeft
# 132 "data/maps/Route6_NorthEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route6_NorthEntrance_EventScript_WalkToGuardMid
# 133 "data/maps/Route6_NorthEntrance/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route6_NorthEntrance_EventScript_WalkToGuardRight
# 134 "data/maps/Route6_NorthEntrance/scripts.pory"
	msgbox Route6_NorthEntrance_Text_ThanksIllShareTeaWithGuards
# 135 "data/maps/Route6_NorthEntrance/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 1
# 136 "data/maps/Route6_NorthEntrance/scripts.pory"
	releaseall
# 137 "data/maps/Route6_NorthEntrance/scripts.pory"
	end
# 138 "data/maps/Route6_NorthEntrance/scripts.pory"

# 139 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_WalkToGuardLeft::
# 140 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_WalkToGuardLeft
# 141 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 142 "data/maps/Route6_NorthEntrance/scripts.pory"
	return
# 143 "data/maps/Route6_NorthEntrance/scripts.pory"

# 144 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_WalkToGuardMid::
# 145 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_WalkToGuardMid
# 146 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 147 "data/maps/Route6_NorthEntrance/scripts.pory"
	return
# 148 "data/maps/Route6_NorthEntrance/scripts.pory"

# 149 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_EventScript_WalkToGuardRight::
# 150 "data/maps/Route6_NorthEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route6_NorthEntrance_Movement_WalkToGuardRight
# 151 "data/maps/Route6_NorthEntrance/scripts.pory"
	waitmovement 0
# 152 "data/maps/Route6_NorthEntrance/scripts.pory"
	return
# 153 "data/maps/Route6_NorthEntrance/scripts.pory"

# 154 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Movement_WalkToGuardLeft::
# 155 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_right
# 156 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_right
# 157 "data/maps/Route6_NorthEntrance/scripts.pory"
	step_end
# 158 "data/maps/Route6_NorthEntrance/scripts.pory"

# 159 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Movement_WalkToGuardMid::
# 160 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_right
# 161 "data/maps/Route6_NorthEntrance/scripts.pory"
	step_end
# 162 "data/maps/Route6_NorthEntrance/scripts.pory"

# 163 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Movement_WalkToGuardRight::
# 164 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_in_place_right
# 165 "data/maps/Route6_NorthEntrance/scripts.pory"
	step_end
# 166 "data/maps/Route6_NorthEntrance/scripts.pory"

# 167 "data/maps/Route6_NorthEntrance/scripts.pory"
Route6_NorthEntrance_Movement_BlockPlayerEntry::
# 168 "data/maps/Route6_NorthEntrance/scripts.pory"
	walk_down
# 169 "data/maps/Route6_NorthEntrance/scripts.pory"
	step_end
