# 1 "data/maps/SixIsland_WaterPath/scripts.pory"

# 2 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_MapScripts::
# 3 "data/maps/SixIsland_WaterPath/scripts.pory"
	.byte 0
# 4 "data/maps/SixIsland_WaterPath/scripts.pory"

# 5 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_EventScript_HornWantedSign::
# 6 "data/maps/SixIsland_WaterPath/scripts.pory"
	msgbox SixIsland_WaterPath_Text_WantedUltimateHorn, MSGBOX_SIGN
# 7 "data/maps/SixIsland_WaterPath/scripts.pory"
	end
# 8 "data/maps/SixIsland_WaterPath/scripts.pory"

# 9 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_EventScript_RouteSign::
# 10 "data/maps/SixIsland_WaterPath/scripts.pory"
	msgbox SixIsland_WaterPath_Text_RouteSign, MSGBOX_SIGN
# 11 "data/maps/SixIsland_WaterPath/scripts.pory"
	end
# 12 "data/maps/SixIsland_WaterPath/scripts.pory"

# 13 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_EventScript_Brooke::
# 14 "data/maps/SixIsland_WaterPath/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_BROOKE, SixIsland_WaterPath_Text_BrookeIntro, SixIsland_WaterPath_Text_BrookeDefeat
# 15 "data/maps/SixIsland_WaterPath/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 16 "data/maps/SixIsland_WaterPath/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_WaterPath_EventScript_BrookeRematch
# 17 "data/maps/SixIsland_WaterPath/scripts.pory"
	msgbox SixIsland_WaterPath_Text_BrookePostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/SixIsland_WaterPath/scripts.pory"
	end
# 19 "data/maps/SixIsland_WaterPath/scripts.pory"

# 20 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_EventScript_BrookeRematch::
# 21 "data/maps/SixIsland_WaterPath/scripts.pory"
	trainerbattle_rematch TRAINER_COOLTRAINER_BROOKE, SixIsland_WaterPath_Text_RematchBrookeIntro, SixIsland_WaterPath_Text_BrookeDefeat
# 22 "data/maps/SixIsland_WaterPath/scripts.pory"
	msgbox SixIsland_WaterPath_Text_BrookePostBattle, MSGBOX_AUTOCLOSE
# 23 "data/maps/SixIsland_WaterPath/scripts.pory"
	end
# 24 "data/maps/SixIsland_WaterPath/scripts.pory"

# 25 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_Text_BrookeIntro::
# 26 "data/maps/SixIsland_WaterPath/scripts.pory"
	.string "Just so you know,\n"
# 27 "data/maps/SixIsland_WaterPath/scripts.pory"
	.string "I am a very COOLTRAINER!$"
# 28 "data/maps/SixIsland_WaterPath/scripts.pory"

# 29 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_Text_BrookeDefeat::
# 30 "data/maps/SixIsland_WaterPath/scripts.pory"
	.string "Not again!$"
# 31 "data/maps/SixIsland_WaterPath/scripts.pory"

# 32 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_Text_BrookePostBattle::
# 33 "data/maps/SixIsland_WaterPath/scripts.pory"
	.string "I tried to pass VICTORY ROAD once.\p"
# 34 "data/maps/SixIsland_WaterPath/scripts.pory"
	.string "It didn't go well for me so I\n"
# 35 "data/maps/SixIsland_WaterPath/scripts.pory"
	.string "settled for the SEVII ISLANDS.$"
# 36 "data/maps/SixIsland_WaterPath/scripts.pory"

# 37 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_Text_RematchBrookeIntro::
# 38 "data/maps/SixIsland_WaterPath/scripts.pory"
	.string "I'm still swimming Strong!$"
# 39 "data/maps/SixIsland_WaterPath/scripts.pory"

# 40 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_Text_OwenIntro::
# 41 "data/maps/SixIsland_WaterPath/scripts.pory"
	.string "This island is great for Training!\p"
# 42 "data/maps/SixIsland_WaterPath/scripts.pory"
	.string "Guess you also figured!$"
# 43 "data/maps/SixIsland_WaterPath/scripts.pory"

# 44 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_Text_OwenDefeat::
# 45 "data/maps/SixIsland_WaterPath/scripts.pory"
	.string "Great Work!$"
# 46 "data/maps/SixIsland_WaterPath/scripts.pory"

# 47 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_Text_OwenPostBattle::
# 48 "data/maps/SixIsland_WaterPath/scripts.pory"
	.string "I've been training here for a while.\p"
# 49 "data/maps/SixIsland_WaterPath/scripts.pory"
	.string "I'm getting stronger every day!$"
# 50 "data/maps/SixIsland_WaterPath/scripts.pory"

# 51 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_EventScript_Owen::
# 52 "data/maps/SixIsland_WaterPath/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_OWEN, SixIsland_WaterPath_Text_OwenIntro, SixIsland_WaterPath_Text_OwenDefeat
# 53 "data/maps/SixIsland_WaterPath/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 54 "data/maps/SixIsland_WaterPath/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_WaterPath_EventScript_OwenRematch
# 55 "data/maps/SixIsland_WaterPath/scripts.pory"
	msgbox SixIsland_WaterPath_Text_OwenPostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/SixIsland_WaterPath/scripts.pory"
	end
# 57 "data/maps/SixIsland_WaterPath/scripts.pory"

# 58 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_EventScript_OwenRematch::
# 59 "data/maps/SixIsland_WaterPath/scripts.pory"
	trainerbattle_rematch TRAINER_COOLTRAINER_OWEN, SixIsland_WaterPath_Text_RematchOwenIntro, SixIsland_WaterPath_Text_OwenDefeat
# 60 "data/maps/SixIsland_WaterPath/scripts.pory"
	msgbox SixIsland_WaterPath_Text_OwenPostBattle, MSGBOX_AUTOCLOSE
# 61 "data/maps/SixIsland_WaterPath/scripts.pory"
	end
# 62 "data/maps/SixIsland_WaterPath/scripts.pory"

# 63 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_Text_RematchOwenIntro::
# 64 "data/maps/SixIsland_WaterPath/scripts.pory"
	.string "Back for more Training?$"
# 65 "data/maps/SixIsland_WaterPath/scripts.pory"

# 66 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_EventScript_TMGUY::
# 67 "data/maps/SixIsland_WaterPath/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 68 "data/maps/SixIsland_WaterPath/scripts.pory"
	lock
# 69 "data/maps/SixIsland_WaterPath/scripts.pory"
	faceplayer
# 70 "data/maps/SixIsland_WaterPath/scripts.pory"
	message SixIsland_WaterPath_Text_MayIHelpYou
# 71 "data/maps/SixIsland_WaterPath/scripts.pory"
	waitmessage
# 72 "data/maps/SixIsland_WaterPath/scripts.pory"
	pokemart SixIsland_WaterPath_TMGUY
# 73 "data/maps/SixIsland_WaterPath/scripts.pory"
	msgbox Text_PleaseComeAgain
# 74 "data/maps/SixIsland_WaterPath/scripts.pory"
	release
# 75 "data/maps/SixIsland_WaterPath/scripts.pory"
	end
# 76 "data/maps/SixIsland_WaterPath/scripts.pory"

# 77 "data/maps/SixIsland_WaterPath/scripts.pory"
	.align 2
# 78 "data/maps/SixIsland_WaterPath/scripts.pory"
SixIsland_WaterPath_TMGUY::
# 79 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM01
# 80 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM02
# 81 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM04
# 82 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM06
# 83 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM08
# 84 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM14
# 85 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM19
# 86 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM22
# 87 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM25
# 88 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM26
# 89 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM29
# 90 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM32
# 91 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM38
# 92 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_TM50
# 93 "data/maps/SixIsland_WaterPath/scripts.pory"
	.2byte ITEM_NONE
# 94 "data/maps/SixIsland_WaterPath/scripts.pory"
	release
# 95 "data/maps/SixIsland_WaterPath/scripts.pory"
	end
