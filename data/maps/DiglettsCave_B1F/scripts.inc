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
DiglettsCave_B1F_EventScript_OrbingCheck::
# 12 "data/maps/DiglettsCave_B1F/scripts.pory"
	lock
# 13 "data/maps/DiglettsCave_B1F/scripts.pory"
	faceplayer
# 14 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_unset FLAG_ORBING, DiglettsCave_B1F_EventScript_NeedOrb
# 15 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_set FLAG_CAUGHT_GROUDON, DiglettsCave_B1F_EventScript_End
# 16 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_set FLAG_GROUNDON_CHECKED, DiglettsCave_B1F_EventScript_Orbing
# 17 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_RegiceCheck
# 18 "data/maps/DiglettsCave_B1F/scripts.pory"
	closemessage
# 19 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_unset FLAG_ORBING, DiglettsCave_B1F_EventScript_NoEligiblePkmn
# 20 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq DiglettsCave_B1F_EventScript_Flag
# 21 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 22 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 23 "data/maps/DiglettsCave_B1F/scripts.pory"

# 24 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_NeedOrb::
# 25 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_NeedOrb
# 26 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 27 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 28 "data/maps/DiglettsCave_B1F/scripts.pory"

# 29 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_NeedOrb::
# 30 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "You need the ORBING to face me.$"
# 31 "data/maps/DiglettsCave_B1F/scripts.pory"

# 32 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_NoEligiblePkmn::
# 33 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_NoEligiblePkmn
# 34 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 35 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 36 "data/maps/DiglettsCave_B1F/scripts.pory"

# 37 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_Flag::
# 38 "data/maps/DiglettsCave_B1F/scripts.pory"
	setflag FLAG_GROUNDON_CHECKED
# 39 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto DiglettsCave_B1F_EventScript_Orbing
# 40 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 41 "data/maps/DiglettsCave_B1F/scripts.pory"

# 42 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_Orbing::
# 43 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_Whitney, MSGBOX_YESNO
# 44 "data/maps/DiglettsCave_B1F/scripts.pory"
	closemessage
# 45 "data/maps/DiglettsCave_B1F/scripts.pory"
	delay 40
# 46 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DiglettsCave_B1F_EventScript_NoWhitney
# 47 "data/maps/DiglettsCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_F, DiglettsCave_B1F_Text_YesWhitney, DiglettsCave_B1F_Text_PostWhitney, DiglettsCave_B1F_EventScript_PostWhitney, NO_MUSIC
# 48 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 49 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 50 "data/maps/DiglettsCave_B1F/scripts.pory"

# 51 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_PostWhitney::
# 52 "data/maps/DiglettsCave_B1F/scripts.pory"
	special HealPlayerParty
# 53 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_WhitneyPostBattle
# 54 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 55 "data/maps/DiglettsCave_B1F/scripts.pory"
	special QuestLog_CutRecording
# 56 "data/maps/DiglettsCave_B1F/scripts.pory"
	lock
# 57 "data/maps/DiglettsCave_B1F/scripts.pory"
	faceplayer
# 58 "data/maps/DiglettsCave_B1F/scripts.pory"
	setwildbattle SPECIES_GROUDON, 70
# 59 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitse
# 60 "data/maps/DiglettsCave_B1F/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 61 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitmessage
# 62 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitmoncry
# 63 "data/maps/DiglettsCave_B1F/scripts.pory"
	delay 10
# 64 "data/maps/DiglettsCave_B1F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 65 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitbuttonpress
# 66 "data/maps/DiglettsCave_B1F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 67 "data/maps/DiglettsCave_B1F/scripts.pory"
	special StartLegendaryBattle
# 68 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitstate
# 69 "data/maps/DiglettsCave_B1F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 70 "data/maps/DiglettsCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 71 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, DiglettsCave_B1F_EventScript_DefeatedCelebi
# 72 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, DiglettsCave_B1F_EventScript_RanFromCelebi
# 73 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, DiglettsCave_B1F_EventScript_RanFromCelebi
# 74 "data/maps/DiglettsCave_B1F/scripts.pory"
	setflag FLAG_CAUGHT_GROUDON
# 75 "data/maps/DiglettsCave_B1F/scripts.pory"
	clearflag FLAG_GROUND_TRAINER
# 76 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_EndWhitney
# 77 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitmessage
# 78 "data/maps/DiglettsCave_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 79 "data/maps/DiglettsCave_B1F/scripts.pory"
	removeobject LOCALID_MIRAGE
# 80 "data/maps/DiglettsCave_B1F/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 81 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 82 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 83 "data/maps/DiglettsCave_B1F/scripts.pory"

# 84 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_DefeatedCelebi::
# 85 "data/maps/DiglettsCave_B1F/scripts.pory"
	clearflag FLAG_GROUND_TRAINER
# 86 "data/maps/DiglettsCave_B1F/scripts.pory"
	setflag FLAG_CAUGHT_GROUDON
# 87 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_EndWhitney
# 88 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitmessage
# 89 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto EventScript_RemoveStaticMon
# 90 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 91 "data/maps/DiglettsCave_B1F/scripts.pory"

# 92 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_RanFromCelebi::
# 93 "data/maps/DiglettsCave_B1F/scripts.pory"
	setvar VAR_0x8004, SPECIES_GROUDON
# 94 "data/maps/DiglettsCave_B1F/scripts.pory"
	clearflag FLAG_GROUND_TRAINER
# 95 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_EndWhitney
# 96 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitmessage
# 97 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto EventScript_MonFlewAway
# 98 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 99 "data/maps/DiglettsCave_B1F/scripts.pory"

# 100 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_NoWhitney::
# 101 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_NoWhitney
# 102 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 103 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 104 "data/maps/DiglettsCave_B1F/scripts.pory"

# 105 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_End::
# 106 "data/maps/DiglettsCave_B1F/scripts.pory"
	clearflag FLAG_GROUND_TRAINER
# 107 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_EndWhitney
# 108 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitmessage
# 109 "data/maps/DiglettsCave_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 110 "data/maps/DiglettsCave_B1F/scripts.pory"
	removeobject LOCALID_MIRAGE
# 111 "data/maps/DiglettsCave_B1F/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 112 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 113 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 114 "data/maps/DiglettsCave_B1F/scripts.pory"

# 115 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_NoEligiblePkmn::
# 116 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "You have not meet the requirements.\p"
# 117 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Come back when you do.$"
# 118 "data/maps/DiglettsCave_B1F/scripts.pory"

# 119 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_RegiceCheck::
# 120 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Hello there {PLAYER}.\p"
# 121 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "I am the Land Mirage Trainer.\p"
# 122 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Beat me and you shall face a\n"
# 123 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "special POKEMON.\p"
# 124 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "But first, I want to see a\n"
# 125 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "RED ORB, which I think is related\l"
# 126 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "to the BLUE ORB.\p"
# 127 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Ask the Sea Mirage Trainer.$"
# 128 "data/maps/DiglettsCave_B1F/scripts.pory"

# 129 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_Whitney::
# 130 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "So, you wish to face me?$"
# 131 "data/maps/DiglettsCave_B1F/scripts.pory"

# 132 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_YesWhitney::
# 133 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 134 "data/maps/DiglettsCave_B1F/scripts.pory"

# 135 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_PostWhitney::
# 136 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "So you are worthy...$"
# 137 "data/maps/DiglettsCave_B1F/scripts.pory"

# 138 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_WhitneyPostBattle::
# 139 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Alright, you have bested me.\p"
# 140 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Be prepared to face GROUDON!$"
# 141 "data/maps/DiglettsCave_B1F/scripts.pory"

# 142 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_EndWhitney::
# 143 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Goodbye.$"
# 144 "data/maps/DiglettsCave_B1F/scripts.pory"

# 145 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_NoWhitney::
# 146 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Alright, take your time.$"
