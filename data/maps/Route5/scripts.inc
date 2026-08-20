# 1 "data/maps/Route5/scripts.pory"

# 2 "data/maps/Route5/scripts.pory"
.set LOCALID_BRO, 2
# 3 "data/maps/Route5/scripts.pory"
.set LOCALID_SIS, 3
# 4 "data/maps/Route5/scripts.pory"
.set LOCALID_LATIAS, 4
# 5 "data/maps/Route5/scripts.pory"
.set LOCALID_LATIOS, 5
# 6 "data/maps/Route5/scripts.pory"
Route5_MapScripts::
# 7 "data/maps/Route5/scripts.pory"
	.byte 0
# 8 "data/maps/Route5/scripts.pory"

# 9 "data/maps/Route5/scripts.pory"
Route5_EventScript_UndergroundPathSign::
# 10 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_UndergroundPathSign, MSGBOX_SIGN
# 11 "data/maps/Route5/scripts.pory"
	end
# 12 "data/maps/Route5/scripts.pory"

# 13 "data/maps/Route5/scripts.pory"
Route5_EventScript_Bro::
# 14 "data/maps/Route5/scripts.pory"
	lock 
# 15 "data/maps/Route5/scripts.pory"
	faceplayer
# 16 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_CAUGHT_LATIOS, Route5_EventScript_End
# 17 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_BEAT_TWINS, Route5_EventScript_PostSilbings
# 18 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_LATIOS_CHECKED, Route5_EventScript_Orbing
# 19 "data/maps/Route5/scripts.pory"
	goto Route5_EventScript_OrbingCheck
# 20 "data/maps/Route5/scripts.pory"

# 21 "data/maps/Route5/scripts.pory"
Route5_EventScript_Sis::
# 22 "data/maps/Route5/scripts.pory"
	lock 
# 23 "data/maps/Route5/scripts.pory"
	faceplayer
# 24 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_CAUGHT_LATIAS, Route5_EventScript_End
# 25 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_BEAT_TWINS, Route5_EventScript_PostSilbingsLatias
# 26 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_LATIOS_CHECKED, Route5_EventScript_Orbing
# 27 "data/maps/Route5/scripts.pory"
	goto Route5_EventScript_OrbingCheck
# 28 "data/maps/Route5/scripts.pory"

# 29 "data/maps/Route5/scripts.pory"
Route5_EventScript_OrbingCheck::
# 30 "data/maps/Route5/scripts.pory"
	goto_if_set FLAG_LATIOS_CHECKED, Route5_EventScript_Orbing
# 31 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_RegiceCheck
# 32 "data/maps/Route5/scripts.pory"
	closemessage
# 33 "data/maps/Route5/scripts.pory"
	setvar VAR_0x8005, 1
# 34 "data/maps/Route5/scripts.pory"
	setvar 0x8004, FAMECHECKER_OAK
# 35 "data/maps/Route5/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 36 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route5_EventScript_Flag
# 37 "data/maps/Route5/scripts.pory"
	goto Route5_EventScript_NoEligiblePkmn
# 38 "data/maps/Route5/scripts.pory"
	release
# 39 "data/maps/Route5/scripts.pory"
	end
# 40 "data/maps/Route5/scripts.pory"

# 41 "data/maps/Route5/scripts.pory"
Route5_EventScript_NoEligiblePkmn::
# 42 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_NoEligiblePkmn
# 43 "data/maps/Route5/scripts.pory"
	release
# 44 "data/maps/Route5/scripts.pory"
	end
# 45 "data/maps/Route5/scripts.pory"

# 46 "data/maps/Route5/scripts.pory"
Route5_EventScript_Flag::
# 47 "data/maps/Route5/scripts.pory"
	setvar 0x8004, FAMECHECKER_DAISY
# 48 "data/maps/Route5/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 49 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route5_EventScript_NoEligiblePkmn
# 50 "data/maps/Route5/scripts.pory"
	special LatiosRequirements
# 51 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route5_EventScript_NoEligiblePkmn
# 52 "data/maps/Route5/scripts.pory"
	setflag FLAG_LATIOS_CHECKED
# 53 "data/maps/Route5/scripts.pory"
	goto Route5_EventScript_Orbing
# 54 "data/maps/Route5/scripts.pory"
	end
# 55 "data/maps/Route5/scripts.pory"

# 56 "data/maps/Route5/scripts.pory"
Route5_EventScript_Orbing::
# 57 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_Silbings, MSGBOX_YESNO
# 58 "data/maps/Route5/scripts.pory"
	closemessage
# 59 "data/maps/Route5/scripts.pory"
	delay 40
# 60 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route5_EventScript_NoSilbings
# 61 "data/maps/Route5/scripts.pory"
	trainerbattle_single TRAINER_BRO_SIS, Route5_Text_YesSilbings, Route5_Text_PostSilbings, Route5_EventScript_PostFlags, NO_MUSIC
# 62 "data/maps/Route5/scripts.pory"
	release
# 63 "data/maps/Route5/scripts.pory"
	end
# 64 "data/maps/Route5/scripts.pory"

# 65 "data/maps/Route5/scripts.pory"
Route5_EventScript_PostFlags::
# 66 "data/maps/Route5/scripts.pory"
	setflag FLAG_BEAT_TWINS
# 67 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_YouWon
# 68 "data/maps/Route5/scripts.pory"
	release
# 69 "data/maps/Route5/scripts.pory"
	end
# 70 "data/maps/Route5/scripts.pory"

# 71 "data/maps/Route5/scripts.pory"
Route5_EventScript_PostSilbings::
# 72 "data/maps/Route5/scripts.pory"
	special HealPlayerParty
# 73 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_SilbingsPostBattle, MSGBOX_YESNO
# 74 "data/maps/Route5/scripts.pory"
	closemessage
# 75 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route5_EventScript_NoSilbings
# 76 "data/maps/Route5/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 77 "data/maps/Route5/scripts.pory"
	special QuestLog_CutRecording
# 78 "data/maps/Route5/scripts.pory"
	lock
# 79 "data/maps/Route5/scripts.pory"
	faceplayer
# 80 "data/maps/Route5/scripts.pory"
	setwildbattle SPECIES_LATIOS, 70
# 81 "data/maps/Route5/scripts.pory"
	waitse
# 82 "data/maps/Route5/scripts.pory"
	playmoncry SPECIES_LATIOS, CRY_MODE_ENCOUNTER
# 83 "data/maps/Route5/scripts.pory"
	waitmessage
# 84 "data/maps/Route5/scripts.pory"
	waitmoncry
# 85 "data/maps/Route5/scripts.pory"
	delay 10
# 86 "data/maps/Route5/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 87 "data/maps/Route5/scripts.pory"
	waitbuttonpress
# 88 "data/maps/Route5/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 89 "data/maps/Route5/scripts.pory"
	special StartLegendaryBattle
# 90 "data/maps/Route5/scripts.pory"
	waitstate
# 91 "data/maps/Route5/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 92 "data/maps/Route5/scripts.pory"
	removeobject LOCALID_LATIOS
# 93 "data/maps/Route5/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 94 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route5_EventScript_DefeatedCelebi
# 95 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route5_EventScript_RanFromCelebi
# 96 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route5_EventScript_RanFromCelebi
# 97 "data/maps/Route5/scripts.pory"
	setflag FLAG_CAUGHT_LATIOS
# 98 "data/maps/Route5/scripts.pory"
	setflag FLAG_BRO_TRAINER
# 99 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndSilbings
# 100 "data/maps/Route5/scripts.pory"
	waitmessage
# 101 "data/maps/Route5/scripts.pory"
	release
# 102 "data/maps/Route5/scripts.pory"
	end
# 103 "data/maps/Route5/scripts.pory"

# 104 "data/maps/Route5/scripts.pory"
Route5_EventScript_PostSilbingsLatias::
# 105 "data/maps/Route5/scripts.pory"
	special HealPlayerParty
# 106 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_SilbingsPostBattle
# 107 "data/maps/Route5/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 108 "data/maps/Route5/scripts.pory"
	special QuestLog_CutRecording
# 109 "data/maps/Route5/scripts.pory"
	lock
# 110 "data/maps/Route5/scripts.pory"
	faceplayer
# 111 "data/maps/Route5/scripts.pory"
	setwildbattle SPECIES_LATIAS, 70
# 112 "data/maps/Route5/scripts.pory"
	waitse
# 113 "data/maps/Route5/scripts.pory"
	playmoncry SPECIES_LATIAS, CRY_MODE_ENCOUNTER
# 114 "data/maps/Route5/scripts.pory"
	waitmessage
# 115 "data/maps/Route5/scripts.pory"
	waitmoncry
# 116 "data/maps/Route5/scripts.pory"
	delay 10
# 117 "data/maps/Route5/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 118 "data/maps/Route5/scripts.pory"
	waitbuttonpress
# 119 "data/maps/Route5/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 120 "data/maps/Route5/scripts.pory"
	special StartLegendaryBattle
# 121 "data/maps/Route5/scripts.pory"
	waitstate
# 122 "data/maps/Route5/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 123 "data/maps/Route5/scripts.pory"
	removeobject LOCALID_LATIAS
# 124 "data/maps/Route5/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 125 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route5_EventScript_DefeatedLatias
# 126 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route5_EventScript_RanFromLatias
# 127 "data/maps/Route5/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route5_EventScript_RanFromLatias
# 128 "data/maps/Route5/scripts.pory"
	setflag FLAG_CAUGHT_LATIAS
# 129 "data/maps/Route5/scripts.pory"
	setflag FLAG_SIS_TRAINER
# 130 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndSilbings
# 131 "data/maps/Route5/scripts.pory"
	waitmessage
# 132 "data/maps/Route5/scripts.pory"
	release
# 133 "data/maps/Route5/scripts.pory"
	end
# 134 "data/maps/Route5/scripts.pory"

# 135 "data/maps/Route5/scripts.pory"
Route5_EventScript_DefeatedCelebi::
# 136 "data/maps/Route5/scripts.pory"
	setflag FLAG_CAUGHT_LATIOS
# 137 "data/maps/Route5/scripts.pory"
	setflag FLAG_BRO_TRAINER
# 138 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndSilbings
# 139 "data/maps/Route5/scripts.pory"
	waitmessage
# 140 "data/maps/Route5/scripts.pory"
	goto EventScript_RemoveStaticMon
# 141 "data/maps/Route5/scripts.pory"
	end
# 142 "data/maps/Route5/scripts.pory"

# 143 "data/maps/Route5/scripts.pory"
Route5_EventScript_RanFromCelebi::
# 144 "data/maps/Route5/scripts.pory"
	setvar VAR_0x8004, SPECIES_LATIOS
# 145 "data/maps/Route5/scripts.pory"
	setflag FLAG_BRO_TRAINER
# 146 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndSilbings
# 147 "data/maps/Route5/scripts.pory"
	waitmessage
# 148 "data/maps/Route5/scripts.pory"
	goto EventScript_MonFlewAway
# 149 "data/maps/Route5/scripts.pory"
	end
# 150 "data/maps/Route5/scripts.pory"

# 151 "data/maps/Route5/scripts.pory"
Route5_EventScript_DefeatedLatias::
# 152 "data/maps/Route5/scripts.pory"
	setflag FLAG_CAUGHT_LATIAS
# 153 "data/maps/Route5/scripts.pory"
	setflag FLAG_SIS_TRAINER
# 154 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndSilbings
# 155 "data/maps/Route5/scripts.pory"
	waitmessage
# 156 "data/maps/Route5/scripts.pory"
	goto EventScript_RemoveStaticMon
# 157 "data/maps/Route5/scripts.pory"
	end
# 158 "data/maps/Route5/scripts.pory"

# 159 "data/maps/Route5/scripts.pory"
Route5_EventScript_RanFromLatias::
# 160 "data/maps/Route5/scripts.pory"
	setvar VAR_0x8004, SPECIES_LATIAS
# 161 "data/maps/Route5/scripts.pory"
	setflag FLAG_SIS_TRAINER
# 162 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndSilbings
# 163 "data/maps/Route5/scripts.pory"
	waitmessage
# 164 "data/maps/Route5/scripts.pory"
	goto EventScript_MonFlewAway
# 165 "data/maps/Route5/scripts.pory"
	end
# 166 "data/maps/Route5/scripts.pory"

# 167 "data/maps/Route5/scripts.pory"
Route5_EventScript_Latias::
# 168 "data/maps/Route5/scripts.pory"
	lock
# 169 "data/maps/Route5/scripts.pory"
	faceplayer
# 170 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_Latias, MSGBOX_NPC
# 171 "data/maps/Route5/scripts.pory"
	release
# 172 "data/maps/Route5/scripts.pory"
	end
# 173 "data/maps/Route5/scripts.pory"

# 174 "data/maps/Route5/scripts.pory"
Route5_EventScript_Latios::
# 175 "data/maps/Route5/scripts.pory"
	lock
# 176 "data/maps/Route5/scripts.pory"
	faceplayer
# 177 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_Latios, MSGBOX_NPC
# 178 "data/maps/Route5/scripts.pory"
	release
# 179 "data/maps/Route5/scripts.pory"
	end
# 180 "data/maps/Route5/scripts.pory"

# 181 "data/maps/Route5/scripts.pory"
Route5_Text_Latios::
# 182 "data/maps/Route5/scripts.pory"
	.string "LATIOS!$"
# 183 "data/maps/Route5/scripts.pory"

# 184 "data/maps/Route5/scripts.pory"
Route5_Text_Latias::
# 185 "data/maps/Route5/scripts.pory"
	.string "LATIAS!$"
# 186 "data/maps/Route5/scripts.pory"

# 187 "data/maps/Route5/scripts.pory"
Route5_EventScript_NoSilbings::
# 188 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_NoSilbings
# 189 "data/maps/Route5/scripts.pory"
	release
# 190 "data/maps/Route5/scripts.pory"
	end
# 191 "data/maps/Route5/scripts.pory"

# 192 "data/maps/Route5/scripts.pory"
Route5_EventScript_End::
# 193 "data/maps/Route5/scripts.pory"
	msgbox Route5_Text_EndSilbings
# 194 "data/maps/Route5/scripts.pory"
	release
# 195 "data/maps/Route5/scripts.pory"
	end
# 196 "data/maps/Route5/scripts.pory"

# 197 "data/maps/Route5/scripts.pory"
Route5_Text_NoEligiblePkmn::
# 198 "data/maps/Route5/scripts.pory"
	.string "You have not meet the requirements.\p"
# 199 "data/maps/Route5/scripts.pory"
	.string "Come back when you do.$"
# 200 "data/maps/Route5/scripts.pory"

# 201 "data/maps/Route5/scripts.pory"
Route5_Text_RegiceCheck::
# 202 "data/maps/Route5/scripts.pory"
	.string "Hello there {PLAYER}.\p"
# 203 "data/maps/Route5/scripts.pory"
	.string "We are the JET TWINS.\p"
# 204 "data/maps/Route5/scripts.pory"
	.string "Beat us and you shall face two\n"
# 205 "data/maps/Route5/scripts.pory"
	.string "special POKEMON.\p"
# 206 "data/maps/Route5/scripts.pory"
	.string "But first, I want to see a\n"
# 207 "data/maps/Route5/scripts.pory"
	.string "Knowledge on the DAISY flower,\l"
# 208 "data/maps/Route5/scripts.pory"
	.string "and the OAK tree.\p"
# 209 "data/maps/Route5/scripts.pory"
	.string "As well as the REGIS\n"
# 210 "data/maps/Route5/scripts.pory"
	.string "and the ALIEN.$"
# 211 "data/maps/Route5/scripts.pory"

# 212 "data/maps/Route5/scripts.pory"
Route5_Text_Silbings::
# 213 "data/maps/Route5/scripts.pory"
	.string "So, you wish to face us?$"
# 214 "data/maps/Route5/scripts.pory"

# 215 "data/maps/Route5/scripts.pory"
Route5_Text_YesSilbings::
# 216 "data/maps/Route5/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 217 "data/maps/Route5/scripts.pory"

# 218 "data/maps/Route5/scripts.pory"
Route5_Text_PostSilbings::
# 219 "data/maps/Route5/scripts.pory"
	.string "So you are worthy...$"
# 220 "data/maps/Route5/scripts.pory"

# 221 "data/maps/Route5/scripts.pory"
Route5_Text_YouWon::
# 222 "data/maps/Route5/scripts.pory"
	.string "Talk to us again to\n"
# 223 "data/maps/Route5/scripts.pory"
	.string "face LATIOS and LATIAS.$"
# 224 "data/maps/Route5/scripts.pory"

# 225 "data/maps/Route5/scripts.pory"
Route5_Text_SilbingsPostBattle::
# 226 "data/maps/Route5/scripts.pory"
	.string "Alright, you have bested me.\p"
# 227 "data/maps/Route5/scripts.pory"
	.string "Be prepared to face IT!$"
# 228 "data/maps/Route5/scripts.pory"

# 229 "data/maps/Route5/scripts.pory"
Route5_Text_EndSilbings::
# 230 "data/maps/Route5/scripts.pory"
	.string "You had one chance,\n"
# 231 "data/maps/Route5/scripts.pory"
	.string "Goodbye.$"
# 232 "data/maps/Route5/scripts.pory"

# 233 "data/maps/Route5/scripts.pory"
Route5_Text_NoSilbings::
# 234 "data/maps/Route5/scripts.pory"
	.string "Alright, take your time.$"
