# 1 "data/maps/SixIsland_GreenPath/scripts.pory"

# 2 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_MapScripts::
# 3 "data/maps/SixIsland_GreenPath/scripts.pory"
	.byte 0
# 4 "data/maps/SixIsland_GreenPath/scripts.pory"

# 5 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_EventScript_RightRouteSign::
# 6 "data/maps/SixIsland_GreenPath/scripts.pory"
	msgbox SixIsland_GreenPath_Text_LeftRouteSign, MSGBOX_SIGN
# 7 "data/maps/SixIsland_GreenPath/scripts.pory"
	end
# 8 "data/maps/SixIsland_GreenPath/scripts.pory"

# 9 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_EventScript_LeftRouteSign::
# 10 "data/maps/SixIsland_GreenPath/scripts.pory"
	msgbox SixIsland_GreenPath_Text_RightRouteSign, MSGBOX_SIGN
# 11 "data/maps/SixIsland_GreenPath/scripts.pory"
	end
# 12 "data/maps/SixIsland_GreenPath/scripts.pory"

# 13 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_EventScript_Hoenn::
# 14 "data/maps/SixIsland_GreenPath/scripts.pory"
	msgbox SixIsland_GreenPath_Text_Hoenn, MSGBOX_NPC
# 15 "data/maps/SixIsland_GreenPath/scripts.pory"
	end
# 16 "data/maps/SixIsland_GreenPath/scripts.pory"

# 17 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_EventScript_Paul::
# 18 "data/maps/SixIsland_GreenPath/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_PAUL, SixIsland_GreenPath_Text_PaulIntro, SixIsland_GreenPath_Text_PaulDefeat
# 19 "data/maps/SixIsland_GreenPath/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 20 "data/maps/SixIsland_GreenPath/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_GreenPath_EventScript_RematchPaul
# 21 "data/maps/SixIsland_GreenPath/scripts.pory"
	msgbox SixIsland_GreenPath_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
# 22 "data/maps/SixIsland_GreenPath/scripts.pory"
	end
# 23 "data/maps/SixIsland_GreenPath/scripts.pory"

# 24 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_EventScript_RematchPaul::
# 25 "data/maps/SixIsland_GreenPath/scripts.pory"
	trainerbattle_rematch TRAINER_COOLTRAINER_PAUL, SixIsland_GreenPath_Text_RematchPaulIntro, SixIsland_GreenPath_Text_PaulDefeat
# 26 "data/maps/SixIsland_GreenPath/scripts.pory"
	msgbox SixIsland_GreenPath_Text_PaulPostBattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/SixIsland_GreenPath/scripts.pory"
	end
# 28 "data/maps/SixIsland_GreenPath/scripts.pory"

# 29 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_RematchPaulIntro::
# 30 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "Time for another Island Battle!$"
# 31 "data/maps/SixIsland_GreenPath/scripts.pory"

# 32 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_PaulIntro::
# 33 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "Just so you know who I am,\n"
# 34 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "I'm a COOLTRAINER!$"
# 35 "data/maps/SixIsland_GreenPath/scripts.pory"

# 36 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_PaulDefeat::
# 37 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "You got me!$"
# 38 "data/maps/SixIsland_GreenPath/scripts.pory"

# 39 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_PaulPostBattle::
# 40 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "I like the remoteness here.\p"
# 41 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "But I feel like those strange caves\n"
# 42 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "nearby may ruin that!$"
# 43 "data/maps/SixIsland_GreenPath/scripts.pory"

# 44 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_EventScript_Gilbert::
# 45 "data/maps/SixIsland_GreenPath/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_GILBERT, SixIsland_GreenPath_Text_GilbertIntro, SixIsland_GreenPath_Text_GilbertDefeat
# 46 "data/maps/SixIsland_GreenPath/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 47 "data/maps/SixIsland_GreenPath/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_GreenPath_EventScript_GilbertRematch
# 48 "data/maps/SixIsland_GreenPath/scripts.pory"
	msgbox SixIsland_GreenPath_Text_GilbertPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/SixIsland_GreenPath/scripts.pory"
	end
# 50 "data/maps/SixIsland_GreenPath/scripts.pory"

# 51 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_EventScript_GilbertRematch::
# 52 "data/maps/SixIsland_GreenPath/scripts.pory"
	trainerbattle_rematch TRAINER_COOLTRAINER_GILBERT, SixIsland_GreenPath_Text_GilbertRematchIntro, SixIsland_GreenPath_Text_GilbertDefeat
# 53 "data/maps/SixIsland_GreenPath/scripts.pory"
	msgbox SixIsland_GreenPath_Text_GilbertPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/SixIsland_GreenPath/scripts.pory"
	end
# 55 "data/maps/SixIsland_GreenPath/scripts.pory"

# 56 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_GilbertRematchIntro::
# 57 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "The Water's heating up again!$"
# 58 "data/maps/SixIsland_GreenPath/scripts.pory"

# 59 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_Hoenn::
# 60 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "The SEVII ISLANDS share POKéMON\n"
# 61 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "from KANTO's nearby region,\l"
# 62 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "JOHTO.\p"
# 63 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "While the trainers may\n"
# 64 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "use HOENN POKéMON, none of them\l"
# 65 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "are found here naturally.\p"
# 66 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "Tourists bring their\n"
# 67 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "HOENN POKéMON along with them.$"
# 68 "data/maps/SixIsland_GreenPath/scripts.pory"

# 69 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_GilbertIntro::
# 70 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "Hey this is MY Island!$"
# 71 "data/maps/SixIsland_GreenPath/scripts.pory"

# 72 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_GilbertPostBattle::
# 73 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "I kinda want to build a\n"
# 74 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "base here.$"
# 75 "data/maps/SixIsland_GreenPath/scripts.pory"

# 76 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_GilbertDefeat::
# 77 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "Ah shucks!$"
# 78 "data/maps/SixIsland_GreenPath/scripts.pory"

# 79 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_EventScript_Painter::
# 80 "data/maps/SixIsland_GreenPath/scripts.pory"
	msgbox SixIsland_GreenPath_Text_Painter, MSGBOX_NPC
# 81 "data/maps/SixIsland_GreenPath/scripts.pory"
	end
# 82 "data/maps/SixIsland_GreenPath/scripts.pory"

# 83 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_Painter::
# 84 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "I've carved the ledge on\n"
# 85 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "this island for my art project.\p"
# 86 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "It's not like people go through\n"
# 87 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "this path anyways!$"
