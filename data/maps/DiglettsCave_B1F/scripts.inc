# 1 "data/maps/DiglettsCave_B1F/scripts.pory"

# 2 "data/maps/DiglettsCave_B1F/scripts.pory"
.set LOCALID_MIRAGE, 1
# 3 "data/maps/DiglettsCave_B1F/scripts.pory"
.set LOCALID_GROUDON, 2
# 4 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_MapScripts::
# 5 "data/maps/DiglettsCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DiglettsCave_B1F_OnTransition
# 6 "data/maps/DiglettsCave_B1F/scripts.pory"
	.byte 0
# 7 "data/maps/DiglettsCave_B1F/scripts.pory"

# 8 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_OnTransition::
# 9 "data/maps/DiglettsCave_B1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_DIGLETTS_CAVE_B1F
# 10 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 11 "data/maps/DiglettsCave_B1F/scripts.pory"

# 12 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_OrbingCheck::
# 13 "data/maps/DiglettsCave_B1F/scripts.pory"
	lock
# 14 "data/maps/DiglettsCave_B1F/scripts.pory"
	faceplayer
# 15 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_unset FLAG_ORBING, DiglettsCave_B1F_EventScript_NeedOrb
# 16 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_set FLAG_CAUGHT_GROUDON, DiglettsCave_B1F_EventScript_End
# 17 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_set FLAG_GROUNDON_CHECKED, DiglettsCave_B1F_EventScript_Orbing
# 18 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_RegiceCheck
# 19 "data/maps/DiglettsCave_B1F/scripts.pory"
	closemessage
# 20 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_unset FLAG_ORBING, DiglettsCave_B1F_EventScript_NoEligiblePkmn
# 21 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq DiglettsCave_B1F_EventScript_Flag
# 22 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 23 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 24 "data/maps/DiglettsCave_B1F/scripts.pory"

# 25 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_NeedOrb::
# 26 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_NeedOrb
# 27 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 28 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 29 "data/maps/DiglettsCave_B1F/scripts.pory"

# 30 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_NeedOrb::
# 31 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "You need the RED ORB to face me.$"
# 32 "data/maps/DiglettsCave_B1F/scripts.pory"

# 33 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_NoEligiblePkmn::
# 34 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_NoEligiblePkmn
# 35 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 36 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 37 "data/maps/DiglettsCave_B1F/scripts.pory"

# 38 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_Flag::
# 39 "data/maps/DiglettsCave_B1F/scripts.pory"
	setflag FLAG_GROUNDON_CHECKED
# 40 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto DiglettsCave_B1F_EventScript_Orbing
# 41 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 42 "data/maps/DiglettsCave_B1F/scripts.pory"

# 43 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_Orbing::
# 44 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_Ground, MSGBOX_YESNO
# 45 "data/maps/DiglettsCave_B1F/scripts.pory"
	closemessage
# 46 "data/maps/DiglettsCave_B1F/scripts.pory"
	delay 40
# 47 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DiglettsCave_B1F_EventScript_NoGround
# 48 "data/maps/DiglettsCave_B1F/scripts.pory"
	trainerbattle_single TRAINER_AQUA_GRUNT_F, DiglettsCave_B1F_Text_YesGround, DiglettsCave_B1F_Text_PostGround, DiglettsCave_B1F_EventScript_PostGround, NO_MUSIC
# 49 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 50 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 51 "data/maps/DiglettsCave_B1F/scripts.pory"

# 52 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_PostGround::
# 53 "data/maps/DiglettsCave_B1F/scripts.pory"
	special HealPlayerParty
# 54 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_GroundPostBattle
# 55 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 56 "data/maps/DiglettsCave_B1F/scripts.pory"
	special QuestLog_CutRecording
# 57 "data/maps/DiglettsCave_B1F/scripts.pory"
	lock
# 58 "data/maps/DiglettsCave_B1F/scripts.pory"
	faceplayer
# 59 "data/maps/DiglettsCave_B1F/scripts.pory"
	setwildbattle SPECIES_GROUDON, 70
# 60 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitse
# 61 "data/maps/DiglettsCave_B1F/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 62 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitmessage
# 63 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitmoncry
# 64 "data/maps/DiglettsCave_B1F/scripts.pory"
	delay 10
# 65 "data/maps/DiglettsCave_B1F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 66 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitbuttonpress
# 67 "data/maps/DiglettsCave_B1F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 68 "data/maps/DiglettsCave_B1F/scripts.pory"
	special StartLegendaryBattle
# 69 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitstate
# 70 "data/maps/DiglettsCave_B1F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 71 "data/maps/DiglettsCave_B1F/scripts.pory"
	removeobject LOCALID_GROUDON
# 72 "data/maps/DiglettsCave_B1F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 73 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, DiglettsCave_B1F_EventScript_DefeatedCelebi
# 74 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, DiglettsCave_B1F_EventScript_RanFromCelebi
# 75 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, DiglettsCave_B1F_EventScript_RanFromCelebi
# 76 "data/maps/DiglettsCave_B1F/scripts.pory"
	setflag FLAG_CAUGHT_GROUDON
# 77 "data/maps/DiglettsCave_B1F/scripts.pory"
	clearflag FLAG_GROUND_TRAINER
# 78 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_EndGround
# 79 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitmessage
# 80 "data/maps/DiglettsCave_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 81 "data/maps/DiglettsCave_B1F/scripts.pory"
	removeobject LOCALID_MIRAGE
# 82 "data/maps/DiglettsCave_B1F/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 83 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 84 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 85 "data/maps/DiglettsCave_B1F/scripts.pory"

# 86 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_DefeatedCelebi::
# 87 "data/maps/DiglettsCave_B1F/scripts.pory"
	clearflag FLAG_GROUND_TRAINER
# 88 "data/maps/DiglettsCave_B1F/scripts.pory"
	setflag FLAG_CAUGHT_GROUDON
# 89 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_EndGround
# 90 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitmessage
# 91 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto EventScript_RemoveStaticMon
# 92 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 93 "data/maps/DiglettsCave_B1F/scripts.pory"

# 94 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_RanFromCelebi::
# 95 "data/maps/DiglettsCave_B1F/scripts.pory"
	setvar VAR_0x8004, SPECIES_GROUDON
# 96 "data/maps/DiglettsCave_B1F/scripts.pory"
	clearflag FLAG_GROUND_TRAINER
# 97 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_EndGround
# 98 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitmessage
# 99 "data/maps/DiglettsCave_B1F/scripts.pory"
	goto EventScript_MonFlewAway
# 100 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 101 "data/maps/DiglettsCave_B1F/scripts.pory"

# 102 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_NoGround::
# 103 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_NoGround
# 104 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 105 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 106 "data/maps/DiglettsCave_B1F/scripts.pory"

# 107 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_End::
# 108 "data/maps/DiglettsCave_B1F/scripts.pory"
	clearflag FLAG_GROUND_TRAINER
# 109 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_EndGround
# 110 "data/maps/DiglettsCave_B1F/scripts.pory"
	waitmessage
# 111 "data/maps/DiglettsCave_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 112 "data/maps/DiglettsCave_B1F/scripts.pory"
	removeobject LOCALID_MIRAGE
# 113 "data/maps/DiglettsCave_B1F/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 114 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 115 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 116 "data/maps/DiglettsCave_B1F/scripts.pory"

# 117 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_EventScript_Groudon::
# 118 "data/maps/DiglettsCave_B1F/scripts.pory"
	lock
# 119 "data/maps/DiglettsCave_B1F/scripts.pory"
	faceplayer
# 120 "data/maps/DiglettsCave_B1F/scripts.pory"
	msgbox DiglettsCave_B1F_Text_Groudon, MSGBOX_NPC
# 121 "data/maps/DiglettsCave_B1F/scripts.pory"
	release
# 122 "data/maps/DiglettsCave_B1F/scripts.pory"
	end
# 123 "data/maps/DiglettsCave_B1F/scripts.pory"

# 124 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_Groudon::
# 125 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "GROUR!!!$"
# 126 "data/maps/DiglettsCave_B1F/scripts.pory"

# 127 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_NoEligiblePkmn::
# 128 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "You have not meet the requirements.\p"
# 129 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Come back when you do.$"
# 130 "data/maps/DiglettsCave_B1F/scripts.pory"

# 131 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_RegiceCheck::
# 132 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Hello there {PLAYER}.\p"
# 133 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "I am the Land Mirage Trainer.\p"
# 134 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Beat me and you shall face a\n"
# 135 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "special POKEMON.\p"
# 136 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "But first, I want to see a\n"
# 137 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "RED ORB, which I think is related\l"
# 138 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "to the BLUE ORB.\p"
# 139 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Ask the Sea Mirage Trainer.$"
# 140 "data/maps/DiglettsCave_B1F/scripts.pory"

# 141 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_Ground::
# 142 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "So, you wish to face me?$"
# 143 "data/maps/DiglettsCave_B1F/scripts.pory"

# 144 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_YesGround::
# 145 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 146 "data/maps/DiglettsCave_B1F/scripts.pory"

# 147 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_PostGround::
# 148 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "So you are worthy...$"
# 149 "data/maps/DiglettsCave_B1F/scripts.pory"

# 150 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_GroundPostBattle::
# 151 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Alright, you have bested me.\p"
# 152 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Be prepared to face GROUDON!$"
# 153 "data/maps/DiglettsCave_B1F/scripts.pory"

# 154 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_EndGround::
# 155 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Goodbye.$"
# 156 "data/maps/DiglettsCave_B1F/scripts.pory"

# 157 "data/maps/DiglettsCave_B1F/scripts.pory"
DiglettsCave_B1F_Text_NoGround::
# 158 "data/maps/DiglettsCave_B1F/scripts.pory"
	.string "Alright, take your time.$"
