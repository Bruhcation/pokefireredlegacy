# 1 "data/maps/ViridianForest/scripts.pory"

# 2 "data/maps/ViridianForest/scripts.pory"
.set LOCALID_HEX, 13
# 3 "data/maps/ViridianForest/scripts.pory"
ViridianForest_MapScripts::
# 4 "data/maps/ViridianForest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianForest_OnTransition
# 5 "data/maps/ViridianForest/scripts.pory"
	.byte 0
# 6 "data/maps/ViridianForest/scripts.pory"

# 7 "data/maps/ViridianForest/scripts.pory"
ViridianForest_OnTransition::
# 8 "data/maps/ViridianForest/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_FOREST
# 9 "data/maps/ViridianForest/scripts.pory"
	end
# 10 "data/maps/ViridianForest/scripts.pory"

# 11 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Youngster::
# 12 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_FriendsItchingToBattle, MSGBOX_NPC
# 13 "data/maps/ViridianForest/scripts.pory"
	end
# 14 "data/maps/ViridianForest/scripts.pory"

# 15 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Boy::
# 16 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_RanOutOfPokeBalls, MSGBOX_NPC
# 17 "data/maps/ViridianForest/scripts.pory"
	end
# 18 "data/maps/ViridianForest/scripts.pory"

# 19 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_TrainerTips1::
# 20 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_AvoidGrassyAreasWhenWeak, MSGBOX_SIGN
# 21 "data/maps/ViridianForest/scripts.pory"
	end
# 22 "data/maps/ViridianForest/scripts.pory"

# 23 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_TrainerTips2::
# 24 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_UseAntidoteForPoison, MSGBOX_SIGN
# 25 "data/maps/ViridianForest/scripts.pory"
	end
# 26 "data/maps/ViridianForest/scripts.pory"

# 27 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_TrainerTips3::
# 28 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_ContactOakViaPCToRatePokedex, MSGBOX_SIGN
# 29 "data/maps/ViridianForest/scripts.pory"
	end
# 30 "data/maps/ViridianForest/scripts.pory"

# 31 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_TrainerTips4::
# 32 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_CantCatchOwnedMons, MSGBOX_SIGN
# 33 "data/maps/ViridianForest/scripts.pory"
	end
# 34 "data/maps/ViridianForest/scripts.pory"

# 35 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_TrainerTips5::
# 36 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_WeakenMonsBeforeCapture, MSGBOX_SIGN
# 37 "data/maps/ViridianForest/scripts.pory"
	end
# 38 "data/maps/ViridianForest/scripts.pory"

# 39 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_ExitSign::
# 40 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_LeavingViridianForest, MSGBOX_SIGN
# 41 "data/maps/ViridianForest/scripts.pory"
	end
# 42 "data/maps/ViridianForest/scripts.pory"

# 43 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Rick::
# 44 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_RICK, ViridianForest_Text_RickIntro, ViridianForest_Text_RickDefeat
# 45 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/ViridianForest/scripts.pory"
	end
# 47 "data/maps/ViridianForest/scripts.pory"

# 48 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Doug::
# 49 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_DOUG, ViridianForest_Text_DougIntro, ViridianForest_Text_DougDefeat
# 50 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_DougPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/ViridianForest/scripts.pory"
	end
# 52 "data/maps/ViridianForest/scripts.pory"

# 53 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Sammy::
# 54 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_SAMMY, ViridianForest_Text_SammyIntro, ViridianForest_Text_SammyDefeat
# 55 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_SammyPostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/ViridianForest/scripts.pory"
	end
# 57 "data/maps/ViridianForest/scripts.pory"

# 58 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Anthony::
# 59 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_ANTHONY, ViridianForest_Text_AnthonyIntro, ViridianForest_Text_AnthonyDefeat
# 60 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 61 "data/maps/ViridianForest/scripts.pory"
	end
# 62 "data/maps/ViridianForest/scripts.pory"

# 63 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Charlie::
# 64 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_CHARLIE, ViridianForest_Text_CharlieIntro, ViridianForest_Text_CharlieDefeat
# 65 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
# 66 "data/maps/ViridianForest/scripts.pory"
	end
# 67 "data/maps/ViridianForest/scripts.pory"

# 68 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Lass::
# 69 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_RS_FISHERMAN, ViridianForest_Text_LassIntro, ViridianForest_Text_LassDefeat
# 70 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_LassPostBattle, MSGBOX_AUTOCLOSE
# 71 "data/maps/ViridianForest/scripts.pory"
	end
# 72 "data/maps/ViridianForest/scripts.pory"

# 73 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Hex_Maniac::
# 74 "data/maps/ViridianForest/scripts.pory"
	lock
# 75 "data/maps/ViridianForest/scripts.pory"
	goto_if_set FLAG_BINARY_GUY, ViridianForest_EventScript_Hex_Maniac5
# 76 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_Hex_Maniac
# 77 "data/maps/ViridianForest/scripts.pory"
	waitmessage
# 78 "data/maps/ViridianForest/scripts.pory"
	applymovement LOCALID_HEX, Common_Movement_FacePlayer
# 79 "data/maps/ViridianForest/scripts.pory"
	waitmovement 0
# 80 "data/maps/ViridianForest/scripts.pory"
	playse SE_PIN
# 81 "data/maps/ViridianForest/scripts.pory"
	applymovement LOCALID_HEX, Common_Movement_ExclamationMarkDelay
# 82 "data/maps/ViridianForest/scripts.pory"
	waitmovement 0
# 83 "data/maps/ViridianForest/scripts.pory"
	waitbuttonpress
# 84 "data/maps/ViridianForest/scripts.pory"
	trainerbattle_single TRAINER_HEX_MANIAC, ViridianForest_Text_Hex_Maniac2, ViridianForest_Text_Hex_Maniac3, ViridianForest_EventScript_Hex_Maniac5
# 85 "data/maps/ViridianForest/scripts.pory"
	end
# 86 "data/maps/ViridianForest/scripts.pory"

# 87 "data/maps/ViridianForest/scripts.pory"
ViridianForest_EventScript_Hex_Maniac5::
# 88 "data/maps/ViridianForest/scripts.pory"
	msgbox ViridianForest_Text_Hex_Maniac4, MSGBOX_AUTOCLOSE
# 89 "data/maps/ViridianForest/scripts.pory"
	setflag FLAG_BINARY_GUY
# 90 "data/maps/ViridianForest/scripts.pory"
	end
# 91 "data/maps/ViridianForest/scripts.pory"

# 92 "data/maps/ViridianForest/scripts.pory"
ViridianForest_Text_Hex_Maniac::
# 93 "data/maps/ViridianForest/scripts.pory"
	.string "Hey there new trainer! Do you\n"
# 94 "data/maps/ViridianForest/scripts.pory"
	.string "want to become CHAMPION one day?\p"
# 95 "data/maps/ViridianForest/scripts.pory"
	.string "For a beginner like you,\n"
# 96 "data/maps/ViridianForest/scripts.pory"
	.string "a WEEDLE will bring you to\l"
# 97 "data/maps/ViridianForest/scripts.pory"
	.string "the HALL OF FAME while\l"
# 98 "data/maps/ViridianForest/scripts.pory"
	.string "being very easy to raise!\p"
# 99 "data/maps/ViridianForest/scripts.pory"
	.string "PROFESSOR OAK'S starters are very\n"
# 100 "data/maps/ViridianForest/scripts.pory"
	.string "hard to raise so should\l"
# 101 "data/maps/ViridianForest/scripts.pory"
	.string "begin raising a WEEDLE!$"
# 102 "data/maps/ViridianForest/scripts.pory"

# 103 "data/maps/ViridianForest/scripts.pory"
ViridianForest_Text_Hex_Maniac2::
# 104 "data/maps/ViridianForest/scripts.pory"
	.string "Wait, you're already CHAMPION?\p"
# 105 "data/maps/ViridianForest/scripts.pory"
	.string "Well, guess my plan of tricking\n"
# 106 "data/maps/ViridianForest/scripts.pory"
	.string "New Trainers to use Weaker POKEMON\l"
# 107 "data/maps/ViridianForest/scripts.pory"
	.string "so I can become CHAMPION is OVER!\p"
# 108 "data/maps/ViridianForest/scripts.pory"
	.string "So I'm gonna take it from YOU now!\p"
# 109 "data/maps/ViridianForest/scripts.pory"
    .string "Are you ready?$"
# 110 "data/maps/ViridianForest/scripts.pory"

# 111 "data/maps/ViridianForest/scripts.pory"
ViridianForest_Text_Hex_Maniac3::
# 112 "data/maps/ViridianForest/scripts.pory"
    .string "Welp.$"
# 113 "data/maps/ViridianForest/scripts.pory"

# 114 "data/maps/ViridianForest/scripts.pory"
ViridianForest_Text_Hex_Maniac4::
# 115 "data/maps/ViridianForest/scripts.pory"
	.string "You can't stop me, go away!\p"
# 116 "data/maps/ViridianForest/scripts.pory"
	.string "I ain't wasting my trip\n"
# 117 "data/maps/ViridianForest/scripts.pory"
	.string "from HOENN like that!\p"
# 118 "data/maps/ViridianForest/scripts.pory"
	.string "I'll be training to defeat you!$"
