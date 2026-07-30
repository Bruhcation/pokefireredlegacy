# 1 "data/maps/Route5/scripts.pory"

# 2 "data/maps/Route5/scripts.pory"
.set LOCALID_BRO, 2
# 3 "data/maps/Route5/scripts.pory"
.set LOCALID_SIS, 3
# 4 "data/maps/Route5/scripts.pory"
Route5_MapScripts::
# 5 "data/maps/Route5/scripts.pory"
	.byte 0
# 6 "data/maps/Route5/scripts.pory"

# 7 "data/maps/Route5/scripts.pory"
Route5_EventScript_UndergroundPathSign::
# 8 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_UndergroundPathSign, MSGBOX_SIGN
# 9 "data/maps/Route5/scripts.pory"
	end
# 10 "data/maps/Route5/scripts.pory"

# 11 "data/maps/Route5/scripts.pory"
Route5_EventScript_Bro::
# 12 "data/maps/Route5/scripts.pory"
	lock 
# 13 "data/maps/Route5/scripts.pory"
	faceplayer
# 14 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_CAUGHT_LATIOS, Route5_EventScript_End
# 15 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_BEAT_TWINS, Route5_EventScript_PostWhitney
# 16 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_LATIOS_CHECKED, Route5_EventScript_Orbing
# 17 "data/maps/Route5/scripts.pory"
	goto Route5_EventScript_OrbingCheck
# 18 "data/maps/Route5/scripts.pory"

# 19 "data/maps/Route5/scripts.pory"
Route5_EventScript_Sis::
# 20 "data/maps/Route5/scripts.pory"
	lock 
# 21 "data/maps/Route5/scripts.pory"
	faceplayer
# 22 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_CAUGHT_LATIAS, Route5_EventScript_End
# 23 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_BEAT_TWINS, Route5_EventScript_PostWhitneyLatias
# 24 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_LATIOS_CHECKED, Route5_EventScript_Orbing
# 25 "data/maps/Route5/scripts.pory"
	goto Route5_EventScript_OrbingCheck
# 26 "data/maps/Route5/scripts.pory"

# 27 "data/maps/Route5/scripts.pory"
Route5_EventScript_OrbingCheck::
# 28 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_LATIOS_CHECKED, Route5_EventScript_Orbing
# 29 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_RegiceCheck
# 30 "data/maps/Route5/scripts.pory"
	closemessage
# 31 "data/maps/Route5/scripts.pory"
	setvar VAR_0x8005, 1
# 32 "data/maps/Route5/scripts.pory"
	setvar 0x8004, FAMECHECKER_OAK
# 33 "data/maps/Route5/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 34 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route5_EventScript_Flag
# 35 "data/maps/Route5/scripts.pory"
	goto Route5_EventScript_NoEligiblePkmn
# 36 "data/maps/Route5/scripts.pory"
	release
# 37 "data/maps/Route5/scripts.pory"
	end
# 38 "data/maps/Route5/scripts.pory"

# 39 "data/maps/Route5/scripts.pory"
Route5_EventScript_NoEligiblePkmn::
# 40 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_NoEligiblePkmn
# 41 "data/maps/Route5/scripts.pory"
	release
# 42 "data/maps/Route5/scripts.pory"
	end
# 43 "data/maps/Route5/scripts.pory"

# 44 "data/maps/Route5/scripts.pory"
Route5_EventScript_Flag::
# 45 "data/maps/Route5/scripts.pory"
	setvar 0x8004, FAMECHECKER_DAISY
# 46 "data/maps/Route5/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 47 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route5_EventScript_NoEligiblePkmn
# 48 "data/maps/Route5/scripts.pory"
	special LatiosRequirements
# 49 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route5_EventScript_NoEligiblePkmn
# 50 "data/maps/Route5/scripts.pory"
	setflag FLAG_LATIOS_CHECKED
# 51 "data/maps/Route5/scripts.pory"
	goto Route5_EventScript_Orbing
# 52 "data/maps/Route5/scripts.pory"
	end
# 53 "data/maps/Route5/scripts.pory"

# 54 "data/maps/Route5/scripts.pory"
Route5_EventScript_Orbing::
# 55 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_Whitney, MSGBOX_YESNO
# 56 "data/maps/Route5/scripts.pory"
	closemessage
# 57 "data/maps/Route5/scripts.pory"
	delay 40
# 58 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route5_EventScript_NoWhitney
# 59 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_RS_RUIN_MANIAC, Route5_Text_YesWhitney, Route5_Text_PostWhitney, Route5_EventScript_PostFlags, NO_MUSIC
# 60 "data/maps/Route5/scripts.pory"
	release
# 61 "data/maps/Route5/scripts.pory"
	end
# 62 "data/maps/Route5/scripts.pory"

# 63 "data/maps/Route5/scripts.pory"
Route5_EventScript_PostFlags::
# 64 "data/maps/Route5/scripts.pory"
	setflag FLAG_BEAT_TWINS
# 65 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_YouWon
# 66 "data/maps/Route5/scripts.pory"
	release
# 67 "data/maps/Route5/scripts.pory"
	end
# 68 "data/maps/Route5/scripts.pory"

# 69 "data/maps/Route5/scripts.pory"
Route5_EventScript_PostWhitney::
# 70 "data/maps/Route5/scripts.pory"
	special HealPlayerParty
# 71 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_WhitneyPostBattle, MSGBOX_YESNO
# 72 "data/maps/Route5/scripts.pory"
	closemessage
# 73 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route5_EventScript_NoWhitney
# 74 "data/maps/Route5/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 75 "data/maps/Route5/scripts.pory"
	special QuestLog_CutRecording
# 76 "data/maps/Route5/scripts.pory"
	lock
# 77 "data/maps/Route5/scripts.pory"
	faceplayer
# 78 "data/maps/Route5/scripts.pory"
	setwildbattle SPECIES_LATIOS, 70
# 79 "data/maps/Route5/scripts.pory"
	waitse
# 80 "data/maps/Route5/scripts.pory"
	playmoncry SPECIES_LATIOS, CRY_MODE_ENCOUNTER
# 81 "data/maps/Route5/scripts.pory"
	waitmessage
# 82 "data/maps/Route5/scripts.pory"
	waitmoncry
# 83 "data/maps/Route5/scripts.pory"
	delay 10
# 84 "data/maps/Route5/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 85 "data/maps/Route5/scripts.pory"
	waitbuttonpress
# 86 "data/maps/Route5/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 87 "data/maps/Route5/scripts.pory"
	special StartLegendaryBattle
# 88 "data/maps/Route5/scripts.pory"
	waitstate
# 89 "data/maps/Route5/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 90 "data/maps/Route5/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 91 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route5_EventScript_DefeatedCelebi
# 92 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route5_EventScript_RanFromCelebi
# 93 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route5_EventScript_RanFromCelebi
# 94 "data/maps/Route5/scripts.pory"
	setflag FLAG_CAUGHT_LATIOS
# 95 "data/maps/Route5/scripts.pory"
	setflag FLAG_BRO_TRAINER
# 96 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndWhitney
# 97 "data/maps/Route5/scripts.pory"
	waitmessage
# 98 "data/maps/Route5/scripts.pory"
	release
# 99 "data/maps/Route5/scripts.pory"
	end
# 100 "data/maps/Route5/scripts.pory"

# 101 "data/maps/Route5/scripts.pory"
Route5_EventScript_PostWhitneyLatias::
# 102 "data/maps/Route5/scripts.pory"
	special HealPlayerParty
# 103 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_WhitneyPostBattle
# 104 "data/maps/Route5/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 105 "data/maps/Route5/scripts.pory"
	special QuestLog_CutRecording
# 106 "data/maps/Route5/scripts.pory"
	lock
# 107 "data/maps/Route5/scripts.pory"
	faceplayer
# 108 "data/maps/Route5/scripts.pory"
	setwildbattle SPECIES_LATIAS, 70
# 109 "data/maps/Route5/scripts.pory"
	waitse
# 110 "data/maps/Route5/scripts.pory"
	playmoncry SPECIES_LATIAS, CRY_MODE_ENCOUNTER
# 111 "data/maps/Route5/scripts.pory"
	waitmessage
# 112 "data/maps/Route5/scripts.pory"
	waitmoncry
# 113 "data/maps/Route5/scripts.pory"
	delay 10
# 114 "data/maps/Route5/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 115 "data/maps/Route5/scripts.pory"
	waitbuttonpress
# 116 "data/maps/Route5/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 117 "data/maps/Route5/scripts.pory"
	special StartLegendaryBattle
# 118 "data/maps/Route5/scripts.pory"
	waitstate
# 119 "data/maps/Route5/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 120 "data/maps/Route5/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 121 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route5_EventScript_DefeatedLatias
# 122 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route5_EventScript_RanFromLatias
# 123 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route5_EventScript_RanFromLatias
# 124 "data/maps/Route5/scripts.pory"
	setflag FLAG_CAUGHT_LATIAS
# 125 "data/maps/Route5/scripts.pory"
	setflag FLAG_SIS_TRAINER
# 126 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndWhitney
# 127 "data/maps/Route5/scripts.pory"
	waitmessage
# 128 "data/maps/Route5/scripts.pory"
	release
# 129 "data/maps/Route5/scripts.pory"
	end
# 130 "data/maps/Route5/scripts.pory"

# 131 "data/maps/Route5/scripts.pory"
Route5_EventScript_DefeatedCelebi::
# 132 "data/maps/Route5/scripts.pory"
	setflag FLAG_CAUGHT_LATIOS
# 133 "data/maps/Route5/scripts.pory"
	setflag FLAG_BRO_TRAINER
# 134 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndWhitney
# 135 "data/maps/Route5/scripts.pory"
	waitmessage
# 136 "data/maps/Route5/scripts.pory"
	goto EventScript_RemoveStaticMon
# 137 "data/maps/Route5/scripts.pory"
	end
# 138 "data/maps/Route5/scripts.pory"

# 139 "data/maps/Route5/scripts.pory"
Route5_EventScript_RanFromCelebi::
# 140 "data/maps/Route5/scripts.pory"
	setvar VAR_0x8004, SPECIES_LATIOS
# 141 "data/maps/Route5/scripts.pory"
	setflag FLAG_BRO_TRAINER
# 142 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndWhitney
# 143 "data/maps/Route5/scripts.pory"
	waitmessage
# 144 "data/maps/Route5/scripts.pory"
	goto EventScript_MonFlewAway
# 145 "data/maps/Route5/scripts.pory"
	end
# 146 "data/maps/Route5/scripts.pory"

# 147 "data/maps/Route5/scripts.pory"
Route5_EventScript_DefeatedLatias::
# 148 "data/maps/Route5/scripts.pory"
	setflag FLAG_CAUGHT_LATIAS
# 149 "data/maps/Route5/scripts.pory"
	setflag FLAG_SIS_TRAINER
# 150 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndWhitney
# 151 "data/maps/Route5/scripts.pory"
	waitmessage
# 152 "data/maps/Route5/scripts.pory"
	goto EventScript_RemoveStaticMon
# 153 "data/maps/Route5/scripts.pory"
	end
# 154 "data/maps/Route5/scripts.pory"

# 155 "data/maps/Route5/scripts.pory"
Route5_EventScript_RanFromLatias::
# 156 "data/maps/Route5/scripts.pory"
	setvar VAR_0x8004, SPECIES_LATIAS
# 157 "data/maps/Route5/scripts.pory"
	setflag FLAG_SIS_TRAINER
# 158 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndWhitney
# 159 "data/maps/Route5/scripts.pory"
	waitmessage
# 160 "data/maps/Route5/scripts.pory"
	goto EventScript_MonFlewAway
# 161 "data/maps/Route5/scripts.pory"
	end
# 162 "data/maps/Route5/scripts.pory"

# 163 "data/maps/Route5/scripts.pory"
Route5_EventScript_NoWhitney::
# 164 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_NoWhitney
# 165 "data/maps/Route5/scripts.pory"
	release
# 166 "data/maps/Route5/scripts.pory"
	end
# 167 "data/maps/Route5/scripts.pory"

# 168 "data/maps/Route5/scripts.pory"
Route5_EventScript_End::
# 169 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndWhitney
# 170 "data/maps/Route5/scripts.pory"
	release
# 171 "data/maps/Route5/scripts.pory"
	end
# 172 "data/maps/Route5/scripts.pory"

# 173 "data/maps/Route5/scripts.pory"
Route5_Text_NoEligiblePkmn::
# 174 "data/maps/Route5/scripts.pory"
	.string "You have not meet the requirements.\p"
# 175 "data/maps/Route5/scripts.pory"
	.string "Come back when you do.$"
# 176 "data/maps/Route5/scripts.pory"

# 177 "data/maps/Route5/scripts.pory"
Route5_Text_RegiceCheck::
# 178 "data/maps/Route5/scripts.pory"
	.string "Hello there {PLAYER}.\p"
# 179 "data/maps/Route5/scripts.pory"
	.string "We are the JET TWINS.\p"
# 180 "data/maps/Route5/scripts.pory"
	.string "Beat us and you shall face two\n"
# 181 "data/maps/Route5/scripts.pory"
	.string "special POKEMON.\p"
# 182 "data/maps/Route5/scripts.pory"
	.string "But first, I want to see a\n"
# 183 "data/maps/Route5/scripts.pory"
	.string "Knowledge on the DAISY flower,\l"
# 184 "data/maps/Route5/scripts.pory"
	.string "and the OAK tree.\p"
# 185 "data/maps/Route5/scripts.pory"
	.string "As well as the REGIS\n"
# 186 "data/maps/Route5/scripts.pory"
	.string "and the ALIEN.$"
# 187 "data/maps/Route5/scripts.pory"

# 188 "data/maps/Route5/scripts.pory"
Route5_Text_Whitney::
# 189 "data/maps/Route5/scripts.pory"
	.string "So, you wish to face us?$"
# 190 "data/maps/Route5/scripts.pory"

# 191 "data/maps/Route5/scripts.pory"
Route5_Text_YesWhitney::
# 192 "data/maps/Route5/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 193 "data/maps/Route5/scripts.pory"

# 194 "data/maps/Route5/scripts.pory"
Route5_Text_PostWhitney::
# 195 "data/maps/Route5/scripts.pory"
	.string "So you are worthy...$"
# 196 "data/maps/Route5/scripts.pory"

# 197 "data/maps/Route5/scripts.pory"
Route5_Text_YouWon::
# 198 "data/maps/Route5/scripts.pory"
	.string "Talk to us again to\n"
# 199 "data/maps/Route5/scripts.pory"
	.string "face LATIOS and LATIAS.$"
# 200 "data/maps/Route5/scripts.pory"

# 201 "data/maps/Route5/scripts.pory"
Route5_Text_WhitneyPostBattle::
# 202 "data/maps/Route5/scripts.pory"
	.string "Alright, you have bested me.\p"
# 203 "data/maps/Route5/scripts.pory"
	.string "Be prepared to face IT!$"
# 204 "data/maps/Route5/scripts.pory"

# 205 "data/maps/Route5/scripts.pory"
Route5_Text_EndWhitney::
# 206 "data/maps/Route5/scripts.pory"
	.string "You had one chance,\n"
# 207 "data/maps/Route5/scripts.pory"
	.string "Goodbye.$"
# 208 "data/maps/Route5/scripts.pory"

# 209 "data/maps/Route5/scripts.pory"
Route5_Text_NoWhitney::
# 210 "data/maps/Route5/scripts.pory"
	.string "Alright, take your time.$"
