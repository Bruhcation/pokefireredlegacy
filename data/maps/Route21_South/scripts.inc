# 1 "data/maps/Route21_South/scripts.pory"

# 2 "data/maps/Route21_South/scripts.pory"
.set LOCALID_MIRAGE, 6
# 3 "data/maps/Route21_South/scripts.pory"
.set LOCALID_KYOGRE, 7
# 4 "data/maps/Route21_South/scripts.pory"
Route21_South_MapScripts::
# 5 "data/maps/Route21_South/scripts.pory"
	.byte 0
# 6 "data/maps/Route21_South/scripts.pory"

# 7 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_OrbingCheck::
# 8 "data/maps/Route21_South/scripts.pory"
	lock
# 9 "data/maps/Route21_South/scripts.pory"
	faceplayer
# 10 "data/maps/Route21_South/scripts.pory"
	goto_if_unset FLAG_ORBING, Route21_South_EventScript_NeedOrb
# 11 "data/maps/Route21_South/scripts.pory"
	goto_if_set FLAG_CAUGHT_KYOGRE, Route21_South_EventScript_End
# 12 "data/maps/Route21_South/scripts.pory"
	goto_if_set FLAG_KYOGRE_CHECKED, Route21_South_EventScript_Orbing
# 13 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_RegiceCheck
# 14 "data/maps/Route21_South/scripts.pory"
	closemessage
# 15 "data/maps/Route21_South/scripts.pory"
	goto_if_unset FLAG_ORBING, Route21_South_EventScript_NoEligiblePkmn
# 16 "data/maps/Route21_South/scripts.pory"
	goto Route21_South_EventScript_Flag
# 17 "data/maps/Route21_South/scripts.pory"
	release
# 18 "data/maps/Route21_South/scripts.pory"
	end
# 19 "data/maps/Route21_South/scripts.pory"

# 20 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_NeedOrb::
# 21 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_NeedOrb
# 22 "data/maps/Route21_South/scripts.pory"
	release
# 23 "data/maps/Route21_South/scripts.pory"
	end
# 24 "data/maps/Route21_South/scripts.pory"

# 25 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_NoEligiblePkmn::
# 26 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_NoEligiblePkmn
# 27 "data/maps/Route21_South/scripts.pory"
	release
# 28 "data/maps/Route21_South/scripts.pory"
	end
# 29 "data/maps/Route21_South/scripts.pory"

# 30 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_Flag::
# 31 "data/maps/Route21_South/scripts.pory"
	setflag FLAG_KYOGRE_CHECKED
# 32 "data/maps/Route21_South/scripts.pory"
	goto Route21_South_EventScript_Orbing
# 33 "data/maps/Route21_South/scripts.pory"
	end
# 34 "data/maps/Route21_South/scripts.pory"

# 35 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_Orbing::
# 36 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_Water, MSGBOX_YESNO
# 37 "data/maps/Route21_South/scripts.pory"
	closemessage
# 38 "data/maps/Route21_South/scripts.pory"
	delay 40
# 39 "data/maps/Route21_South/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route21_South_EventScript_NoWater
# 40 "data/maps/Route21_South/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_M, Route21_South_Text_YesWater, Route21_South_Text_PostWater, Route21_South_EventScript_PostWater, NO_MUSIC
# 41 "data/maps/Route21_South/scripts.pory"
	release
# 42 "data/maps/Route21_South/scripts.pory"
	end
# 43 "data/maps/Route21_South/scripts.pory"

# 44 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_PostWater::
# 45 "data/maps/Route21_South/scripts.pory"
	special HealPlayerParty
# 46 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_WaterPostBattle
# 47 "data/maps/Route21_South/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 48 "data/maps/Route21_South/scripts.pory"
	special QuestLog_CutRecording
# 49 "data/maps/Route21_South/scripts.pory"
	lock
# 50 "data/maps/Route21_South/scripts.pory"
	faceplayer
# 51 "data/maps/Route21_South/scripts.pory"
	setwildbattle SPECIES_KYOGRE, 70
# 52 "data/maps/Route21_South/scripts.pory"
	waitse
# 53 "data/maps/Route21_South/scripts.pory"
	playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
# 54 "data/maps/Route21_South/scripts.pory"
	waitmessage
# 55 "data/maps/Route21_South/scripts.pory"
	waitmoncry
# 56 "data/maps/Route21_South/scripts.pory"
	delay 10
# 57 "data/maps/Route21_South/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 58 "data/maps/Route21_South/scripts.pory"
	waitbuttonpress
# 59 "data/maps/Route21_South/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 60 "data/maps/Route21_South/scripts.pory"
	special StartLegendaryBattle
# 61 "data/maps/Route21_South/scripts.pory"
	waitstate
# 62 "data/maps/Route21_South/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 63 "data/maps/Route21_South/scripts.pory"
	removeobject LOCALID_KYOGRE
# 64 "data/maps/Route21_South/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 65 "data/maps/Route21_South/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route21_South_EventScript_DefeatedCelebi
# 66 "data/maps/Route21_South/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route21_South_EventScript_RanFromCelebi
# 67 "data/maps/Route21_South/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route21_South_EventScript_RanFromCelebi
# 68 "data/maps/Route21_South/scripts.pory"
	setflag FLAG_CAUGHT_KYOGRE
# 69 "data/maps/Route21_South/scripts.pory"
	clearflag FLAG_WATER_TRAINER
# 70 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_EndWater
# 71 "data/maps/Route21_South/scripts.pory"
	waitmessage
# 72 "data/maps/Route21_South/scripts.pory"
	fadescreen FADE_TO_BLACK
# 73 "data/maps/Route21_South/scripts.pory"
	removeobject LOCALID_MIRAGE
# 74 "data/maps/Route21_South/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 75 "data/maps/Route21_South/scripts.pory"
	release
# 76 "data/maps/Route21_South/scripts.pory"
	end
# 77 "data/maps/Route21_South/scripts.pory"

# 78 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_DefeatedCelebi::
# 79 "data/maps/Route21_South/scripts.pory"
	setflag FLAG_CAUGHT_KYOGRE
# 80 "data/maps/Route21_South/scripts.pory"
	clearflag FLAG_WATER_TRAINER
# 81 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_EndWater
# 82 "data/maps/Route21_South/scripts.pory"
	waitmessage
# 83 "data/maps/Route21_South/scripts.pory"
	goto EventScript_RemoveStaticMon
# 84 "data/maps/Route21_South/scripts.pory"
	end
# 85 "data/maps/Route21_South/scripts.pory"

# 86 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_RanFromCelebi::
# 87 "data/maps/Route21_South/scripts.pory"
	setvar VAR_0x8004, SPECIES_KYOGRE
# 88 "data/maps/Route21_South/scripts.pory"
	clearflag FLAG_WATER_TRAINER
# 89 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_EndWater
# 90 "data/maps/Route21_South/scripts.pory"
	waitmessage
# 91 "data/maps/Route21_South/scripts.pory"
	goto EventScript_MonFlewAway
# 92 "data/maps/Route21_South/scripts.pory"
	end
# 93 "data/maps/Route21_South/scripts.pory"

# 94 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_NoWater::
# 95 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_NoWater
# 96 "data/maps/Route21_South/scripts.pory"
	release
# 97 "data/maps/Route21_South/scripts.pory"
	end
# 98 "data/maps/Route21_South/scripts.pory"

# 99 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_End::
# 100 "data/maps/Route21_South/scripts.pory"
	clearflag FLAG_WATER_TRAINER
# 101 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_EndWater
# 102 "data/maps/Route21_South/scripts.pory"
	waitmessage
# 103 "data/maps/Route21_South/scripts.pory"
	fadescreen FADE_TO_BLACK
# 104 "data/maps/Route21_South/scripts.pory"
	removeobject LOCALID_MIRAGE
# 105 "data/maps/Route21_South/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 106 "data/maps/Route21_South/scripts.pory"
	release
# 107 "data/maps/Route21_South/scripts.pory"
	end
# 108 "data/maps/Route21_South/scripts.pory"

# 109 "data/maps/Route21_South/scripts.pory"
Route21_South_EventScript_Kyogre::
# 110 "data/maps/Route21_South/scripts.pory"
	lock
# 111 "data/maps/Route21_South/scripts.pory"
	faceplayer
# 112 "data/maps/Route21_South/scripts.pory"
	msgbox Route21_South_Text_Kyogre, MSGBOX_NPC
# 113 "data/maps/Route21_South/scripts.pory"
	release
# 114 "data/maps/Route21_South/scripts.pory"
	end
# 115 "data/maps/Route21_South/scripts.pory"

# 116 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_Kyogre::
# 117 "data/maps/Route21_South/scripts.pory"
	.string "KYO!$"
# 118 "data/maps/Route21_South/scripts.pory"

# 119 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_NeedOrb::
# 120 "data/maps/Route21_South/scripts.pory"
	.string "You need the BLUE ORB to face me.$"
# 121 "data/maps/Route21_South/scripts.pory"

# 122 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_NoEligiblePkmn::
# 123 "data/maps/Route21_South/scripts.pory"
	.string "You have not meet the requirements.\p"
# 124 "data/maps/Route21_South/scripts.pory"
	.string "Come back when you do.$"
# 125 "data/maps/Route21_South/scripts.pory"

# 126 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_RegiceCheck::
# 127 "data/maps/Route21_South/scripts.pory"
	.string "Hello there {PLAYER}.\p"
# 128 "data/maps/Route21_South/scripts.pory"
	.string "I am the Sea Mirage Trainer.\n"
# 129 "data/maps/Route21_South/scripts.pory"
	.string "Beat me and you shall face a\l"
# 130 "data/maps/Route21_South/scripts.pory"
	.string "special POKEMON.\p"
# 131 "data/maps/Route21_South/scripts.pory"
	.string "But first, I want to see a\n"
# 132 "data/maps/Route21_South/scripts.pory"
	.string "BLUE ORB, which is on a SAFFRON\l"
# 133 "data/maps/Route21_South/scripts.pory"
	.string "fan club member.\p"
# 134 "data/maps/Route21_South/scripts.pory"
	.string "He is trying to find someone,\n"
# 135 "data/maps/Route21_South/scripts.pory"
	.string "that has battled the,\l"
# 136 "data/maps/Route21_South/scripts.pory"
	.string "Many Strong Trainers around\n"
# 137 "data/maps/Route21_South/scripts.pory"
	.string "the KANTO REGION.$"
# 138 "data/maps/Route21_South/scripts.pory"
	
# 139 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_Water::
# 140 "data/maps/Route21_South/scripts.pory"
	.string "So, you wish to face me?$"
# 141 "data/maps/Route21_South/scripts.pory"

# 142 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_YesWater::
# 143 "data/maps/Route21_South/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 144 "data/maps/Route21_South/scripts.pory"

# 145 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_PostWater::
# 146 "data/maps/Route21_South/scripts.pory"
	.string "So you are worthy...$"
# 147 "data/maps/Route21_South/scripts.pory"

# 148 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_WaterPostBattle::
# 149 "data/maps/Route21_South/scripts.pory"
	.string "Alright, you have bested me.\p"
# 150 "data/maps/Route21_South/scripts.pory"
	.string "Be prepared to face REGICE!$"
# 151 "data/maps/Route21_South/scripts.pory"

# 152 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_EndWater::
# 153 "data/maps/Route21_South/scripts.pory"
	.string "Goodbye.$"
# 154 "data/maps/Route21_South/scripts.pory"

# 155 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_NoWater::
# 156 "data/maps/Route21_South/scripts.pory"
	.string "Alright, take your time.$"
# 157 "data/maps/Route21_South/scripts.pory"

# 158 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_ChaseIntro::
# 159 "data/maps/Route21_South/scripts.pory"
	.string "I'm actually a CUE BALL you know!$"
# 160 "data/maps/Route21_South/scripts.pory"

# 161 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_ChaseDefeat::
# 162 "data/maps/Route21_South/scripts.pory"
	.string "Cheap Shot!$"
# 163 "data/maps/Route21_South/scripts.pory"

# 164 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_ChasePostBattle::
# 165 "data/maps/Route21_South/scripts.pory"
	.string "I can swim good for a CUE BALL!$"
# 166 "data/maps/Route21_South/scripts.pory"

# 167 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_RematchChaseIntro::
# 168 "data/maps/Route21_South/scripts.pory"
	.string "You better stay upfloat or else!$"
# 169 "data/maps/Route21_South/scripts.pory"

# 170 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_ChaseKyogre::
# 171 "data/maps/Route21_South/scripts.pory"
	.string "Uh oh! I have to keep upfloat,\n"
# 172 "data/maps/Route21_South/scripts.pory"
	.string "or else KYOGRES Waves will\l"
# 173 "data/maps/Route21_South/scripts.pory"
	.string "get to me!$"
# 174 "data/maps/Route21_South/scripts.pory"

# 175 "data/maps/Route21_South/scripts.pory"
Route21_South_Text_ChaseKyogre2::
# 176 "data/maps/Route21_South/scripts.pory"
	.string "Sigh... I was worried there for\n"
# 177 "data/maps/Route21_South/scripts.pory"
	.string "a second.$"
