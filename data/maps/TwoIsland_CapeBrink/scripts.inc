# 1 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 2 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_MapScripts::
# 3 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	.byte 0
# 4 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 5 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_Clair::
# 6 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	lock
# 7 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	faceplayer
# 8 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_set FLAG_CLAIR_DEFEATED, TwoIsland_CapeBrink_EventScript_RematchClair
# 9 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_Clair, MSGBOX_YESNO
# 10 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TwoIsland_CapeBrink_EventScript_NoClair
# 11 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	trainerbattle_single TRAINER_CLAIR, TwoIsland_CapeBrink_Text_YesClair, TwoIsland_CapeBrink_Text_ClairDefeat, TwoIsland_CapeBrink_EventScript_PostClair, NO_MUSIC
# 12 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 13 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 14 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 15 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_PostClair::
# 16 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_ClairPostBattle
# 17 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	setflag FLAG_CLAIR_DEFEATED
# 18 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	cleartrainerflag TRAINER_CLAIR
# 19 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 20 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 21 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 22 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_CantRematchClair::
# 23 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_ClairPostBattle
# 24 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 25 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 26 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 27 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_NoClair::
# 28 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_NoClair
# 29 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 30 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 31 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 32 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_RematchClair::
# 33 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_RematchClair, MSGBOX_YESNO
# 34 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TwoIsland_CapeBrink_EventScript_NoClair
# 35 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	cleartrainerflag TRAINER_CLAIR
# 36 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	trainerbattle_single TRAINER_CLAIR, TwoIsland_CapeBrink_Text_YesRematchClair, TwoIsland_CapeBrink_Text_RematchClairDefeat, TwoIsland_CapeBrink_EventScript_PostRematchClair, NO_MUSIC
# 37 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 38 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 39 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 40 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_PostRematchClair::
# 41 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_RematchClairDefeat
# 42 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	cleartrainerflag TRAINER_CLAIR
# 43 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 44 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 45 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 46 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_Caseno::
# 47 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	lock
# 48 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	faceplayer
# 49 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_set FLAG_CASENO_DEFEATED, TwoIsland_CapeBrink_EventScript_RematchCaseno
# 50 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_Caseno, MSGBOX_YESNO
# 51 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TwoIsland_CapeBrink_EventScript_NoCaseno
# 52 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	trainerbattle_single TRAINER_CASENO, TwoIsland_CapeBrink_Text_YesCaseno, TwoIsland_CapeBrink_Text_CasenoDefeat, TwoIsland_CapeBrink_EventScript_PostCaseno, NO_MUSIC
# 53 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 54 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 55 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 56 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_PostCaseno::
# 57 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_CasenoPostBattle
# 58 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	setflag FLAG_CASENO_DEFEATED
# 59 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	cleartrainerflag TRAINER_CASENO
# 60 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 61 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 62 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 63 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_CantRematchCaseno::
# 64 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_CasenoPostBattle
# 65 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 66 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 67 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 68 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_NoCaseno::
# 69 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_NoCaseno
# 70 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 71 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 72 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 73 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_RematchCaseno::
# 74 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_RematchCaseno, MSGBOX_YESNO
# 75 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TwoIsland_CapeBrink_EventScript_NoCaseno
# 76 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	trainerbattle_single TRAINER_CASENO, TwoIsland_CapeBrink_Text_YesRematchCaseno, TwoIsland_CapeBrink_Text_RematchCasenoDefeat, TwoIsland_CapeBrink_EventScript_PostRematchCaseno, NO_MUSIC
# 77 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 78 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 79 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 80 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_PostRematchCaseno::
# 81 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_RematchCasenoDefeat
# 82 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	cleartrainerflag TRAINER_CASENO
# 83 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	release
# 84 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 85 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 86 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_Gym1::
# 87 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	trainerbattle_single TRAINER_RS_YOUNG_COUPLE, TwoIsland_CapeBrink_Text_Rocket1Intro, TwoIsland_CapeBrink_Text_Rocket1Defeat
# 88 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 90 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 91 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_Text_Rocket1Intro::
# 92 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	.string "Just so you know,\n"
# 93 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	.string "we do DOUBLE BATTLES here.$"
# 94 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 95 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_Text_Rocket1Defeat::
# 96 "data/maps/TwoIsland_CapeBrink/scripts.pory"
    .string "You're good at this.$"  
# 97 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 98 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_Text_Rocket1PostBattle::
# 99 "data/maps/TwoIsland_CapeBrink/scripts.pory"
    .string "I don't think you can stand up\n"  
# 100 "data/maps/TwoIsland_CapeBrink/scripts.pory"
    .string "to our MASTER just yet.\p"  
# 101 "data/maps/TwoIsland_CapeBrink/scripts.pory"
    .string "You should fight that AROMA LADY\n"  
# 102 "data/maps/TwoIsland_CapeBrink/scripts.pory"
    .string "before you do.$"  
# 103 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 104 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_EventScript_Gym2::
# 105 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	trainerbattle_single TRAINER_SWIMMING_TRIATHLETE_M, TwoIsland_CapeBrink_Text_Rocket2Intro, TwoIsland_CapeBrink_Text_Rocket2Defeat
# 106 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	msgbox TwoIsland_CapeBrink_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	end
# 108 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 109 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_Text_Rocket2Intro::
# 110 "data/maps/TwoIsland_CapeBrink/scripts.pory"
    .string "I'll show you the beauty of\n"  
# 111 "data/maps/TwoIsland_CapeBrink/scripts.pory"
    .string "a DOUBLE BATTLE!$"  
# 112 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 113 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_Text_Rocket2Defeat::
# 114 "data/maps/TwoIsland_CapeBrink/scripts.pory"
    .string "That wasn't beautiful!$"  
# 115 "data/maps/TwoIsland_CapeBrink/scripts.pory"

# 116 "data/maps/TwoIsland_CapeBrink/scripts.pory"
TwoIsland_CapeBrink_Text_Rocket2PostBattle::
# 117 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	.string "You might have beat me, but\n"
# 118 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	.string "are you ready for our\l"
# 119 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	.string "beautiful MASTER to show\l"
# 120 "data/maps/TwoIsland_CapeBrink/scripts.pory"
	.string "her expertise?$"
