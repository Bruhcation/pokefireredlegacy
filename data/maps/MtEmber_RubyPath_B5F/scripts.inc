# 1 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 2 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_MapScripts::
# 3 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.byte 0
# 4 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 5 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_BrailleMessage::
# 6 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	lockall
# 7 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setvar VAR_0x8005, 130
# 8 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto_if_set FLAG_0x020, MtEmber_RubyPath_B5F_EventScript_Pokemon
# 9 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage_wait Braille_Text_Everything
# 10 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage_wait Braille_Text_HasMeaning1
# 11 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage_wait Braille_Text_Existence
# 12 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage_wait Braille_Text_HasMeaning2
# 13 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage_wait Braille_Text_BeingAlive
# 14 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage_wait Braille_Text_HasMeaning3
# 15 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage_wait Braille_Text_HaveDreams
# 16 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	braillemessage Braille_Text_UsePower
# 17 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	releaseall
# 19 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	end
# 20 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 21 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_Pokemon::
# 22 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	message MtEmber_RubyPath_B5F_Text_Notice
# 23 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmessage
# 24 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	playse SE_PIN
# 25 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 26 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmovement 0
# 27 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	delay 40
# 28 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	msgbox MtEmber_RubyPath_B5F_Text_Mon, MSGBOX_YESNO
# 29 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	closemessage
# 30 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	delay 40
# 31 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto_if_eq VAR_RESULT, NO, MtEmber_RubyPath_B5F_EventScript_NoWhitney
# 32 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto MtEmber_RubyPath_B5F_EventScript_Pokemon2
# 33 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	end
# 34 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 35 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_NoWhitney::
# 36 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	lock
# 37 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	faceplayer
# 38 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	playse SE_PIN
# 39 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitse
# 40 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 41 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmovement 0
# 42 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	msgbox MtEmber_RubyPath_B5F_Text_SummonMon
# 43 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	delay 16
# 44 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 45 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitse
# 46 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	playmoncry SPECIES_BLASTOISE, CRY_MODE_ENCOUNTER
# 47 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmoncry
# 48 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setflag FLAG_SHINY_CREATION
# 49 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setwildbattle SPECIES_BLASTOISE, 75
# 50 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	dowildbattle
# 51 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	special QuestLog_CutRecording
# 52 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto MtEmber_RubyPath_B5F_EventScript_Pokemon3
# 53 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 54 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_Text_Mon::
# 55 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "There's a Pokemon sealed\n"
# 56 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "in this room.$"
# 57 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "Want to release it?$"
# 58 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 59 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_Text_SummonMon4::
# 60 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "Despite your disapproval,\n"
# 61 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "a different POKEMON than\l"
# 62 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "what's sealed appears\l"
# 63 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "in your mind?$"
# 64 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_Text_Notice::
# 65 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "(You noticed a voice in the air.)\p"
# 66 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "(Perhaps it's the orb?)$"
# 67 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_Pokemon2::
# 68 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	lock
# 69 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	faceplayer
# 70 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	playse SE_PIN
# 71 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitse
# 72 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 73 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmovement 0
# 74 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	msgbox MtEmber_RubyPath_B5F_Text_SummonMon
# 75 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	delay 16
# 76 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 77 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.ifdef FIRERED
# 78 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	playmoncry SPECIES_CHARIZARD, CRY_MODE_ENCOUNTER
# 79 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmoncry
# 80 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setflag FLAG_SHINY_CREATION
# 81 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setwildbattle SPECIES_CHARIZARD, 75
# 82 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.else
# 83 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.ifdef LEAFGREEN
# 84 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	playmoncry SPECIES_VENUSAUR, CRY_MODE_ENCOUNTER
# 85 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	waitmoncry
# 86 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setflag FLAG_SHINY_CREATION
# 87 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	setwildbattle SPECIES_VENUSAUR, 75
# 88 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.endif
# 89 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.endif
# 90 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	dowildbattle
# 91 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	special QuestLog_CutRecording
# 92 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	goto MtEmber_RubyPath_B5F_EventScript_Pokemon3
# 93 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 94 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_EventScript_Pokemon3::
# 95 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	msgbox MtEmber_RubyPath_B5F_Text_SummonMon2
# 96 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	clearflag FLAG_0x020
# 97 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	release
# 98 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	end
# 99 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"

# 100 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_Text_SummonMon2::
# 101 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "The room sealed itself\n"
# 102 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "from the Shining POKEMON!$"
# 103 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
MtEmber_RubyPath_B5F_Text_SummonMon::
# 104 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "The shining POKEMON\n"
# 105 "data/maps/MtEmber_RubyPath_B5F/scripts.pory"
	.string "appears in your mind?$"
