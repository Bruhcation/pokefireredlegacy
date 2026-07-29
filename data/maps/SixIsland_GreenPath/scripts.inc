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
SixIsland_GreenPath_EventScript_Hannah::
# 30 "data/maps/SixIsland_GreenPath/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_HANNAH, SixIsland_GreenPath_Text_HannahIntro, SixIsland_GreenPath_Text_HannahDefeat
# 31 "data/maps/SixIsland_GreenPath/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 32 "data/maps/SixIsland_GreenPath/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_GreenPath_EventScript_RematchHannah
# 33 "data/maps/SixIsland_GreenPath/scripts.pory"
	msgbox SixIsland_GreenPath_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 34 "data/maps/SixIsland_GreenPath/scripts.pory"
	end
# 35 "data/maps/SixIsland_GreenPath/scripts.pory"

# 36 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_EventScript_RematchHannah::
# 37 "data/maps/SixIsland_GreenPath/scripts.pory"
	trainerbattle_rematch TRAINER_PICNICKER_HANNAH, SixIsland_GreenPath_Text_RematchHannahIntro, SixIsland_GreenPath_Text_HannahDefeat
# 38 "data/maps/SixIsland_GreenPath/scripts.pory"
	msgbox SixIsland_GreenPath_Text_HannahPostBattle, MSGBOX_AUTOCLOSE
# 39 "data/maps/SixIsland_GreenPath/scripts.pory"
	end
# 40 "data/maps/SixIsland_GreenPath/scripts.pory"

# 41 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_HannahIntro::
# 42 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "This island is sooo pretty!\n"
# 43 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "And I'm aching for a battle!$"
# 44 "data/maps/SixIsland_GreenPath/scripts.pory"

# 45 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_HannahDefeat::
# 46 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "Aww… there goes my island mood!$"
# 47 "data/maps/SixIsland_GreenPath/scripts.pory"

# 48 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_HannahPostBattle::
# 49 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "These wild islands are a sight\n"
# 50 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "to behold!$"
# 51 "data/maps/SixIsland_GreenPath/scripts.pory"

# 52 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_RematchHannahIntro::
# 53 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "Aching for a battle again?$"
# 54 "data/maps/SixIsland_GreenPath/scripts.pory"

# 55 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_EventScript_John::
# 56 "data/maps/SixIsland_GreenPath/scripts.pory"
	trainerbattle_single TRAINER_TAMER_JOHN, SixIsland_GreenPath_Text_JohnIntro, SixIsland_GreenPath_Text_JohnDefeat
# 57 "data/maps/SixIsland_GreenPath/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 58 "data/maps/SixIsland_GreenPath/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_GreenPath_EventScript_RematchJohn
# 59 "data/maps/SixIsland_GreenPath/scripts.pory"
	msgbox SixIsland_GreenPath_Text_JohnPostBattle, MSGBOX_AUTOCLOSE
# 60 "data/maps/SixIsland_GreenPath/scripts.pory"
	end
# 61 "data/maps/SixIsland_GreenPath/scripts.pory"

# 62 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_EventScript_RematchJohn::
# 63 "data/maps/SixIsland_GreenPath/scripts.pory"
	trainerbattle_rematch TRAINER_TAMER_JOHN, SixIsland_GreenPath_Text_RematchJohnIntro, SixIsland_GreenPath_Text_JohnDefeat
# 64 "data/maps/SixIsland_GreenPath/scripts.pory"
	msgbox SixIsland_GreenPath_Text_JohnPostBattle, MSGBOX_AUTOCLOSE
# 65 "data/maps/SixIsland_GreenPath/scripts.pory"
	end
# 66 "data/maps/SixIsland_GreenPath/scripts.pory"

# 67 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_JohnIntro::
# 68 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "My POKEMON will whip you up\n"
# 69 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "on this island!$"
# 70 "data/maps/SixIsland_GreenPath/scripts.pory"

# 71 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_JohnDefeat::
# 72 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "Looks like I got whipped.$"
# 73 "data/maps/SixIsland_GreenPath/scripts.pory"

# 74 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_JohnPostBattle::
# 75 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "My Rhydon can somehow use Surf.\p"
# 76 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "That how I got on this island!$"
# 77 "data/maps/SixIsland_GreenPath/scripts.pory"

# 78 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_RematchJohnIntro::
# 79 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "Ready for another whipping?$"
# 80 "data/maps/SixIsland_GreenPath/scripts.pory"

# 81 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_EventScript_Walter::
# 82 "data/maps/SixIsland_GreenPath/scripts.pory"
	trainerbattle_single TRAINER_GENTLEMAN_WALTER, SixIsland_GreenPath_Text_WalterIntro, SixIsland_GreenPath_Text_WalterDefeat
# 83 "data/maps/SixIsland_GreenPath/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 84 "data/maps/SixIsland_GreenPath/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_GreenPath_EventScript_RematchWalter
# 85 "data/maps/SixIsland_GreenPath/scripts.pory"
	msgbox SixIsland_GreenPath_Text_WalterPostBattle, MSGBOX_AUTOCLOSE
# 86 "data/maps/SixIsland_GreenPath/scripts.pory"
	end
# 87 "data/maps/SixIsland_GreenPath/scripts.pory"

# 88 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_EventScript_RematchWalter::
# 89 "data/maps/SixIsland_GreenPath/scripts.pory"
	trainerbattle_rematch TRAINER_GENTLEMAN_WALTER, SixIsland_GreenPath_Text_RematchWalterIntro, SixIsland_GreenPath_Text_WalterDefeat
# 90 "data/maps/SixIsland_GreenPath/scripts.pory"
	msgbox SixIsland_GreenPath_Text_WalterPostBattle, MSGBOX_AUTOCLOSE
# 91 "data/maps/SixIsland_GreenPath/scripts.pory"
	end
# 92 "data/maps/SixIsland_GreenPath/scripts.pory"

# 93 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_WalterIntro::
# 94 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "Why are you here?\p"
# 95 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "You somehow got business on\n"
# 96 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "this island?$"
# 97 "data/maps/SixIsland_GreenPath/scripts.pory"

# 98 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_WalterDefeat::
# 99 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "You might not be one of them.$"
# 100 "data/maps/SixIsland_GreenPath/scripts.pory"

# 101 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_WalterPostBattle::
# 102 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "Well, I guess I can trust you.$"
# 103 "data/maps/SixIsland_GreenPath/scripts.pory"

# 104 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_RematchWalterIntro::
# 105 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "I'm up for another battle.$"
# 106 "data/maps/SixIsland_GreenPath/scripts.pory"

# 107 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_RematchPaulIntro::
# 108 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "Time for another Island Battle!$"
# 109 "data/maps/SixIsland_GreenPath/scripts.pory"

# 110 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_PaulIntro::
# 111 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "Just so you know who I am,\n"
# 112 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "I'm a COOLTRAINER!$"
# 113 "data/maps/SixIsland_GreenPath/scripts.pory"

# 114 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_PaulDefeat::
# 115 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "You got me!$"
# 116 "data/maps/SixIsland_GreenPath/scripts.pory"

# 117 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_PaulPostBattle::
# 118 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "I like the remoteness here.\p"
# 119 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "But I feel like those strange caves\n"
# 120 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "nearby may ruin that!$"
# 121 "data/maps/SixIsland_GreenPath/scripts.pory"

# 122 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_EventScript_Gilbert::
# 123 "data/maps/SixIsland_GreenPath/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_GILBERT, SixIsland_GreenPath_Text_GilbertIntro, SixIsland_GreenPath_Text_GilbertDefeat
# 124 "data/maps/SixIsland_GreenPath/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 125 "data/maps/SixIsland_GreenPath/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, SixIsland_GreenPath_EventScript_GilbertRematch
# 126 "data/maps/SixIsland_GreenPath/scripts.pory"
	msgbox SixIsland_GreenPath_Text_GilbertPostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/SixIsland_GreenPath/scripts.pory"
	end
# 128 "data/maps/SixIsland_GreenPath/scripts.pory"

# 129 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_EventScript_GilbertRematch::
# 130 "data/maps/SixIsland_GreenPath/scripts.pory"
	trainerbattle_rematch TRAINER_COOLTRAINER_GILBERT, SixIsland_GreenPath_Text_GilbertRematchIntro, SixIsland_GreenPath_Text_GilbertDefeat
# 131 "data/maps/SixIsland_GreenPath/scripts.pory"
	msgbox SixIsland_GreenPath_Text_GilbertPostBattle, MSGBOX_AUTOCLOSE
# 132 "data/maps/SixIsland_GreenPath/scripts.pory"
	end
# 133 "data/maps/SixIsland_GreenPath/scripts.pory"

# 134 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_GilbertRematchIntro::
# 135 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "The Water's heating up again!$"
# 136 "data/maps/SixIsland_GreenPath/scripts.pory"

# 137 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_Hoenn::
# 138 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "The SEVII ISLANDS share POKéMON\n"
# 139 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "from KANTO's nearby region,\l"
# 140 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "JOHTO.\p"
# 141 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "While the trainers may\n"
# 142 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "use HOENN POKéMON, none of them\l"
# 143 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "are found here naturally.\p"
# 144 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "Tourists bring their\n"
# 145 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "HOENN POKéMON along with them.$"
# 146 "data/maps/SixIsland_GreenPath/scripts.pory"

# 147 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_GilbertIntro::
# 148 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "Hey this is MY Island!$"
# 149 "data/maps/SixIsland_GreenPath/scripts.pory"

# 150 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_GilbertPostBattle::
# 151 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "I kinda want to build a\n"
# 152 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "base here.$"
# 153 "data/maps/SixIsland_GreenPath/scripts.pory"

# 154 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_GilbertDefeat::
# 155 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "Ah shucks!$"
# 156 "data/maps/SixIsland_GreenPath/scripts.pory"

# 157 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_EventScript_Painter::
# 158 "data/maps/SixIsland_GreenPath/scripts.pory"
	msgbox SixIsland_GreenPath_Text_Painter, MSGBOX_NPC
# 159 "data/maps/SixIsland_GreenPath/scripts.pory"
	end
# 160 "data/maps/SixIsland_GreenPath/scripts.pory"

# 161 "data/maps/SixIsland_GreenPath/scripts.pory"
SixIsland_GreenPath_Text_Painter::
# 162 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "I've carved the ledge on\n"
# 163 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "this island for my art project.\p"
# 164 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "It's not like people go through\n"
# 165 "data/maps/SixIsland_GreenPath/scripts.pory"
	.string "this path anyways!$"
