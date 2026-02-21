# 1 "data/maps/Route21_South/scripts.pory"

# 2 "data/maps/Route21_South/scripts.pory"
.set LOCALID_MIRAGE, 6
# 3 "data/maps/Route21_South/scripts.pory"
Route21_South_MapScripts::
# 4 "data/maps/Route21_South/scripts.pory"
	.byte 0
# 5 "data/maps/Route21_South/scripts.pory"

# 6 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_OrbingCheck::
# 7 "data/maps/Route21_South/scripts.pory"
	lock
# 8 "data/maps/Route21_South/scripts.pory"
	faceplayer
# 9 "data/maps/Route21_South/scripts.pory"
	goto_if_unset FLAG_ORBING, Route21_South_EventScript_NeedOrb
# 10 "data/maps/Route21_South/scripts.pory"
	goto_if_set FLAG_CAUGHT_KYOGRE, Route21_South_EventScript_End
# 11 "data/maps/Route21_South/scripts.pory"
	goto_if_set FLAG_KYOGRE_CHECKED, Route21_South_EventScript_Orbing
# 12 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_RegiceCheck
# 13 "data/maps/Route21_South/scripts.pory"
	closemessage
# 14 "data/maps/Route21_South/scripts.pory"
	goto_if_unset FLAG_ORBING, Route21_South_EventScript_NoEligiblePkmn
# 15 "data/maps/Route21_South/scripts.pory"
	goto Route21_South_EventScript_Flag
# 16 "data/maps/Route21_South/scripts.pory"
	release
# 17 "data/maps/Route21_South/scripts.pory"
	end
# 18 "data/maps/Route21_South/scripts.pory"

# 19 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_NeedOrb::
# 20 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_NeedOrb
# 21 "data/maps/Route21_South/scripts.pory"
	release
# 22 "data/maps/Route21_South/scripts.pory"
	end
# 23 "data/maps/Route21_South/scripts.pory"

# 24 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_NoEligiblePkmn::
# 25 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_NoEligiblePkmn
# 26 "data/maps/Route21_South/scripts.pory"
	release
# 27 "data/maps/Route21_South/scripts.pory"
	end
# 28 "data/maps/Route21_South/scripts.pory"

# 29 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_Flag::
# 30 "data/maps/Route21_South/scripts.pory"
	setflag FLAG_KYOGRE_CHECKED
# 31 "data/maps/Route21_South/scripts.pory"
	goto Route21_South_EventScript_Orbing
# 32 "data/maps/Route21_South/scripts.pory"
	end
# 33 "data/maps/Route21_South/scripts.pory"

# 34 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_Orbing::
# 35 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_Whitney, MSGBOX_YESNO
# 36 "data/maps/Route21_South/scripts.pory"
	closemessage
# 37 "data/maps/Route21_South/scripts.pory"
	delay 40
# 38 "data/maps/Route21_South/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route21_South_EventScript_NoWhitney
# 39 "data/maps/Route21_South/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_M, Route21_South_Text_YesWhitney, Route21_South_Text_PostWhitney, Route21_South_EventScript_PostWhitney, NO_MUSIC
# 40 "data/maps/Route21_South/scripts.pory"
	release
# 41 "data/maps/Route21_South/scripts.pory"
	end
# 42 "data/maps/Route21_South/scripts.pory"

# 43 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_PostWhitney::
# 44 "data/maps/Route21_South/scripts.pory"
	special HealPlayerParty
# 45 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_WhitneyPostBattle
# 46 "data/maps/Route21_South/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 47 "data/maps/Route21_South/scripts.pory"
	special QuestLog_CutRecording
# 48 "data/maps/Route21_South/scripts.pory"
	lock
# 49 "data/maps/Route21_South/scripts.pory"
	faceplayer
# 50 "data/maps/Route21_South/scripts.pory"
	setwildbattle SPECIES_KYOGRE, 70
# 51 "data/maps/Route21_South/scripts.pory"
	waitse
# 52 "data/maps/Route21_South/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 53 "data/maps/Route21_South/scripts.pory"
	waitmessage
# 54 "data/maps/Route21_South/scripts.pory"
	waitmoncry
# 55 "data/maps/Route21_South/scripts.pory"
	delay 10
# 56 "data/maps/Route21_South/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 57 "data/maps/Route21_South/scripts.pory"
	waitbuttonpress
# 58 "data/maps/Route21_South/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 59 "data/maps/Route21_South/scripts.pory"
	special StartLegendaryBattle
# 60 "data/maps/Route21_South/scripts.pory"
	waitstate
# 61 "data/maps/Route21_South/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 62 "data/maps/Route21_South/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 63 "data/maps/Route21_South/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route21_South_EventScript_DefeatedCelebi
# 64 "data/maps/Route21_South/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route21_South_EventScript_RanFromCelebi
# 65 "data/maps/Route21_South/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route21_South_EventScript_RanFromCelebi
# 66 "data/maps/Route21_South/scripts.pory"
	setflag FLAG_CAUGHT_KYOGRE
# 67 "data/maps/Route21_South/scripts.pory"
	clearflag FLAG_WATER_TRAINER
# 68 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_EndWhitney
# 69 "data/maps/Route21_South/scripts.pory"
	waitmessage
# 70 "data/maps/Route21_South/scripts.pory"
	fadescreen FADE_TO_BLACK
# 71 "data/maps/Route21_South/scripts.pory"
	removeobject LOCALID_MIRAGE
# 72 "data/maps/Route21_South/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 73 "data/maps/Route21_South/scripts.pory"
	release
# 74 "data/maps/Route21_South/scripts.pory"
	end
# 75 "data/maps/Route21_South/scripts.pory"

# 76 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_DefeatedCelebi::
# 77 "data/maps/Route21_South/scripts.pory"
	setflag FLAG_CAUGHT_KYOGRE
# 78 "data/maps/Route21_South/scripts.pory"
	clearflag FLAG_WATER_TRAINER
# 79 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_EndWhitney
# 80 "data/maps/Route21_South/scripts.pory"
	waitmessage
# 81 "data/maps/Route21_South/scripts.pory"
	goto EventScript_RemoveStaticMon
# 82 "data/maps/Route21_South/scripts.pory"
	end
# 83 "data/maps/Route21_South/scripts.pory"

# 84 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_RanFromCelebi::
# 85 "data/maps/Route21_South/scripts.pory"
	setvar VAR_0x8004, SPECIES_KYOGRE
# 86 "data/maps/Route21_South/scripts.pory"
	clearflag FLAG_WATER_TRAINER
# 87 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_EndWhitney
# 88 "data/maps/Route21_South/scripts.pory"
	waitmessage
# 89 "data/maps/Route21_South/scripts.pory"
	goto EventScript_MonFlewAway
# 90 "data/maps/Route21_South/scripts.pory"
	end
# 91 "data/maps/Route21_South/scripts.pory"

# 92 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_NoWhitney::
# 93 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_NoWhitney
# 94 "data/maps/Route21_South/scripts.pory"
	release
# 95 "data/maps/Route21_South/scripts.pory"
	end
# 96 "data/maps/Route21_South/scripts.pory"

# 97 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_End::
# 98 "data/maps/Route21_South/scripts.pory"
	clearflag FLAG_WATER_TRAINER
# 99 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_EndWhitney
# 100 "data/maps/Route21_South/scripts.pory"
	waitmessage
# 101 "data/maps/Route21_South/scripts.pory"
	fadescreen FADE_TO_BLACK
# 102 "data/maps/Route21_South/scripts.pory"
	removeobject LOCALID_MIRAGE
# 103 "data/maps/Route21_South/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 104 "data/maps/Route21_South/scripts.pory"
	release
# 105 "data/maps/Route21_South/scripts.pory"
	end
# 106 "data/maps/Route21_South/scripts.pory"

# 107 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_NeedOrb::
# 108 "data/maps/Route21_South/scripts.pory"
	.string "You need the ORBING to face me.$"
# 109 "data/maps/Route21_South/scripts.pory"

# 110 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_NoEligiblePkmn::
# 111 "data/maps/Route21_South/scripts.pory"
	.string "You have not meet the requirements.\p"
# 112 "data/maps/Route21_South/scripts.pory"
	.string "Come back when you do.$"
# 113 "data/maps/Route21_South/scripts.pory"

# 114 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_RegiceCheck::
# 115 "data/maps/Route21_South/scripts.pory"
	.string "Hello there {PLAYER}.\p"
# 116 "data/maps/Route21_South/scripts.pory"
	.string "I am the Sea Mirage Trainer.\n"
# 117 "data/maps/Route21_South/scripts.pory"
	.string "Beat me and you shall face a\l"
# 118 "data/maps/Route21_South/scripts.pory"
	.string "special POKEMON.\p"
# 119 "data/maps/Route21_South/scripts.pory"
	.string "But first, I want to see a\n"
# 120 "data/maps/Route21_South/scripts.pory"
	.string "BLUE ORB, which is on a SAFFRON\l"
# 121 "data/maps/Route21_South/scripts.pory"
	.string "fan club member.\p"
# 122 "data/maps/Route21_South/scripts.pory"
	.string "He is trying to find someone,\n"
# 123 "data/maps/Route21_South/scripts.pory"
	.string "that has battled the,\l"
# 124 "data/maps/Route21_South/scripts.pory"
	.string "Many Strong Trainers around\n"
# 125 "data/maps/Route21_South/scripts.pory"
	.string "the KANTO REGION.$"
# 126 "data/maps/Route21_South/scripts.pory"
	
# 127 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_Whitney::
# 128 "data/maps/Route21_South/scripts.pory"
	.string "So, you wish to face me?$"
# 129 "data/maps/Route21_South/scripts.pory"

# 130 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_YesWhitney::
# 131 "data/maps/Route21_South/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 132 "data/maps/Route21_South/scripts.pory"

# 133 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_PostWhitney::
# 134 "data/maps/Route21_South/scripts.pory"
	.string "So you are worthy...$"
# 135 "data/maps/Route21_South/scripts.pory"

# 136 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_WhitneyPostBattle::
# 137 "data/maps/Route21_South/scripts.pory"
	.string "Alright, you have bested me.\p"
# 138 "data/maps/Route21_South/scripts.pory"
	.string "Be prepared to face REGICE!$"
# 139 "data/maps/Route21_South/scripts.pory"

# 140 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_EndWhitney::
# 141 "data/maps/Route21_South/scripts.pory"
	.string "Goodbye.$"
# 142 "data/maps/Route21_South/scripts.pory"

# 143 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_NoWhitney::
# 144 "data/maps/Route21_South/scripts.pory"
	.string "Alright, take your time.$"
