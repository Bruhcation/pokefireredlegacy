# 1 "data/maps/DiglettsCave_B1F/scripts.pory"

# 2 "data/maps/DiglettsCave_B1F/scripts.pory"
.set LOCALID_MIRAGE, 1
# 3 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_MapScripts::
# 4 "data/maps/DiglettsCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DiglettsCave_B1F_OnTransition
# 5 "data/maps/DiglettsCave_B1F/scripts.pory"
	.byte 0
# 6 "data/maps/DiglettsCave_B1F/scripts.pory"

# 7 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_OnTransition::
# 8 "data/maps/DiglettsCave_B1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_DIGLETTS_CAVE_B1F
# 9 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 10 "data/maps/DiglettsCave_B1F/scripts.pory"

# 11 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_Freddy::
# 12 "data/maps/DiglettsCave_B1F/scripts.pory"
	lock
# 13 "data/maps/DiglettsCave_B1F/scripts.pory"
	faceplayer
# 14 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_set FLAG_DEFEATED_FREDDY, DiglettsCave_B1F_EventScript_RematchFreddy
# 15 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_Freddy, MSGBOX_YESNO
# 16 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DiglettsCave_B1F_EventScript_NoFreddy
# 17 "data/maps/DiglettsCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_FREDDY, DiglettsCave_B1F_Text_YesFreddy, DiglettsCave_B1F_Text_FreddyDefeat, DiglettsCave_B1F_EventScript_PostFreddy, NO_MUSIC
# 18 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 19 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 20 "data/maps/DiglettsCave_B1F/scripts.pory"

# 21 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_PostFreddy::
# 22 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_FreddyPostBattle
# 23 "data/maps/DiglettsCave_B1F/scripts.pory"
	setflag FLAG_DEFEATED_FREDDY
# 24 "data/maps/DiglettsCave_B1F/scripts.pory"
	cleartrainerflag TRAINER_FREDDY
# 25 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 26 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 27 "data/maps/DiglettsCave_B1F/scripts.pory"

# 28 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_NoFreddy::
# 29 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_NoFreddy
# 30 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 31 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 32 "data/maps/DiglettsCave_B1F/scripts.pory"

# 33 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_RematchFreddy::
# 34 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_RematchFreddy, MSGBOX_YESNO
# 35 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DiglettsCave_B1F_EventScript_NoFreddy
# 36 "data/maps/DiglettsCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_FREDDY, DiglettsCave_B1F_Text_YesFreddy, DiglettsCave_B1F_Text_RematchFreddyDefeat, DiglettsCave_B1F_EventScript_PostRematchFreddy, NO_MUSIC
# 37 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 38 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 39 "data/maps/DiglettsCave_B1F/scripts.pory"

# 40 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_PostRematchFreddy::
# 41 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_PostRematchFreddy
# 42 "data/maps/DiglettsCave_B1F/scripts.pory"
	cleartrainerflag TRAINER_FREDDY
# 43 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 44 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 45 "data/maps/DiglettsCave_B1F/scripts.pory"

# 46 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_OrbingCheck::
# 47 "data/maps/DiglettsCave_B1F/scripts.pory"
	lock
# 48 "data/maps/DiglettsCave_B1F/scripts.pory"
	faceplayer
# 49 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_unset FLAG_ORBING, DiglettsCave_B1F_EventScript_NeedOrb
# 50 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_set FLAG_CAUGHT_GROUDON, DiglettsCave_B1F_EventScript_End
# 51 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_set FLAG_GROUNDON_CHECKED, DiglettsCave_B1F_EventScript_Orbing
# 52 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_RegiceCheck
# 53 "data/maps/DiglettsCave_B1F/scripts.pory"
	closemessage
# 54 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_unset FLAG_ORBING, DiglettsCave_B1F_EventScript_NoEligiblePkmn
# 55 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq DiglettsCave_B1F_EventScript_Flag
# 56 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 57 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 58 "data/maps/DiglettsCave_B1F/scripts.pory"

# 59 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_NeedOrb::
# 60 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_NeedOrb
# 61 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 62 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 63 "data/maps/DiglettsCave_B1F/scripts.pory"

# 64 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_NeedOrb::
# 65 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "You need the ORBING to face me.$"
# 66 "data/maps/DiglettsCave_B1F/scripts.pory"

# 67 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_NoEligiblePkmn::
# 68 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_NoEligiblePkmn
# 69 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 70 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 71 "data/maps/DiglettsCave_B1F/scripts.pory"

# 72 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_Flag::
# 73 "data/maps/DiglettsCave_B1F/scripts.pory"
	setflag FLAG_GROUNDON_CHECKED
# 74 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto DiglettsCave_B1F_EventScript_Orbing
# 75 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 76 "data/maps/DiglettsCave_B1F/scripts.pory"

# 77 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_Orbing::
# 78 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_Whitney, MSGBOX_YESNO
# 79 "data/maps/DiglettsCave_B1F/scripts.pory"
	closemessage
# 80 "data/maps/DiglettsCave_B1F/scripts.pory"
	delay 40
# 81 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DiglettsCave_B1F_EventScript_NoWhitney
# 82 "data/maps/DiglettsCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_F, DiglettsCave_B1F_Text_YesWhitney, DiglettsCave_B1F_Text_PostWhitney, DiglettsCave_B1F_EventScript_PostWhitney, NO_MUSIC
# 83 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 84 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 85 "data/maps/DiglettsCave_B1F/scripts.pory"

# 86 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_PostWhitney::
# 87 "data/maps/DiglettsCave_B1F/scripts.pory"
	special HealPlayerParty
# 88 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_WhitneyPostBattle
# 89 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 90 "data/maps/DiglettsCave_B1F/scripts.pory"
	special QuestLog_CutRecording
# 91 "data/maps/DiglettsCave_B1F/scripts.pory"
	lock
# 92 "data/maps/DiglettsCave_B1F/scripts.pory"
	faceplayer
# 93 "data/maps/DiglettsCave_B1F/scripts.pory"
	setwildbattle SPECIES_GROUDON, 70
# 94 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitse
# 95 "data/maps/DiglettsCave_B1F/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 96 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitmessage
# 97 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitmoncry
# 98 "data/maps/DiglettsCave_B1F/scripts.pory"
	delay 10
# 99 "data/maps/DiglettsCave_B1F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 100 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitbuttonpress
# 101 "data/maps/DiglettsCave_B1F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 102 "data/maps/DiglettsCave_B1F/scripts.pory"
	special StartLegendaryBattle
# 103 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitstate
# 104 "data/maps/DiglettsCave_B1F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 105 "data/maps/DiglettsCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 106 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, DiglettsCave_B1F_EventScript_DefeatedCelebi
# 107 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, DiglettsCave_B1F_EventScript_RanFromCelebi
# 108 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, DiglettsCave_B1F_EventScript_RanFromCelebi
# 109 "data/maps/DiglettsCave_B1F/scripts.pory"
	setflag FLAG_CAUGHT_GROUDON
# 110 "data/maps/DiglettsCave_B1F/scripts.pory"
	clearflag FLAG_GROUND_TRAINER
# 111 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_EndWhitney
# 112 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitmessage
# 113 "data/maps/DiglettsCave_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 114 "data/maps/DiglettsCave_B1F/scripts.pory"
	removeobject LOCALID_MIRAGE
# 115 "data/maps/DiglettsCave_B1F/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 116 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 117 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 118 "data/maps/DiglettsCave_B1F/scripts.pory"

# 119 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_DefeatedCelebi::
# 120 "data/maps/DiglettsCave_B1F/scripts.pory"
	clearflag FLAG_GROUND_TRAINER
# 121 "data/maps/DiglettsCave_B1F/scripts.pory"
	setflag FLAG_CAUGHT_GROUDON
# 122 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_EndWhitney
# 123 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitmessage
# 124 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto EventScript_RemoveStaticMon
# 125 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 126 "data/maps/DiglettsCave_B1F/scripts.pory"

# 127 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_RanFromCelebi::
# 128 "data/maps/DiglettsCave_B1F/scripts.pory"
	setvar VAR_0x8004, SPECIES_GROUDON
# 129 "data/maps/DiglettsCave_B1F/scripts.pory"
	clearflag FLAG_GROUND_TRAINER
# 130 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_EndWhitney
# 131 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitmessage
# 132 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto EventScript_MonFlewAway
# 133 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 134 "data/maps/DiglettsCave_B1F/scripts.pory"

# 135 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_NoWhitney::
# 136 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_NoWhitney
# 137 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 138 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 139 "data/maps/DiglettsCave_B1F/scripts.pory"

# 140 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_End::
# 141 "data/maps/DiglettsCave_B1F/scripts.pory"
	clearflag FLAG_GROUND_TRAINER
# 142 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_EndWhitney
# 143 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitmessage
# 144 "data/maps/DiglettsCave_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 145 "data/maps/DiglettsCave_B1F/scripts.pory"
	removeobject LOCALID_MIRAGE
# 146 "data/maps/DiglettsCave_B1F/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 147 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 148 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 149 "data/maps/DiglettsCave_B1F/scripts.pory"

# 150 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_NoEligiblePkmn::
# 151 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "You have not meet the requirements.\p"
# 152 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Come back when you do.$"
# 153 "data/maps/DiglettsCave_B1F/scripts.pory"

# 154 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_RegiceCheck::
# 155 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Hello there {PLAYER}.\p"
# 156 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "I am the Land Mirage Trainer.\p"
# 157 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Beat me and you shall face a\n"
# 158 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "special POKEMON.\p"
# 159 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "But first, I want to see a\n"
# 160 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "RED ORB, which I think is related\l"
# 161 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "to the BLUE ORB.\p"
# 162 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Ask the Sea Mirage Trainer.$"
# 163 "data/maps/DiglettsCave_B1F/scripts.pory"

# 164 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_Whitney::
# 165 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "So, you wish to face me?$"
# 166 "data/maps/DiglettsCave_B1F/scripts.pory"

# 167 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_YesWhitney::
# 168 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 169 "data/maps/DiglettsCave_B1F/scripts.pory"

# 170 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_PostWhitney::
# 171 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "So you are worthy...$"
# 172 "data/maps/DiglettsCave_B1F/scripts.pory"

# 173 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_WhitneyPostBattle::
# 174 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Alright, you have bested me.\p"
# 175 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Be prepared to face GROUDON!$"
# 176 "data/maps/DiglettsCave_B1F/scripts.pory"

# 177 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_EndWhitney::
# 178 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Goodbye.$"
# 179 "data/maps/DiglettsCave_B1F/scripts.pory"

# 180 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_NoWhitney::
# 181 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Alright, take your time.$"
