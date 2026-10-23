# 1 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 2 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_MapScripts::
# 3 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.byte 0
# 4 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 5 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_EventScript_Oak::
# 6 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	lock
# 7 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	faceplayer
# 8 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	goto_if_set FLAG_DEFEATED_OAK_REMATCH, FiveIsland_LostCave_Room13_EventScript_RematchOak
# 9 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	cleartrainerflag TRAINER_OAK2
# 10 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	msgbox FiveIsland_LostCave_Room13_Text_Oak, MSGBOX_YESNO
# 11 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_LostCave_Room13_EventScript_NoOak
# 12 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	trainerbattle_single TRAINER_OAK2, FiveIsland_LostCave_Room13_Text_YesOak, FiveIsland_LostCave_Room13_Text_OakDefeat, FiveIsland_LostCave_Room13_EventScript_PostOak, NO_MUSIC
# 13 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	release
# 14 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	end
# 15 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 16 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_EventScript_PostOak::
# 17 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	msgbox FiveIsland_LostCave_Room13_Text_OakPostBattle
# 18 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	setflag FLAG_DEFEATED_OAK_REMATCH
# 19 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	cleartrainerflag TRAINER_OAK2
# 20 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	release
# 21 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	end
# 22 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 23 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_EventScript_CantRematchOak::
# 24 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	msgbox FiveIsland_LostCave_Room13_Text_OakPostBattle
# 25 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	release
# 26 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	end
# 27 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 28 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_EventScript_NoOak::
# 29 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	msgbox FiveIsland_LostCave_Room13_Text_NoOak
# 30 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	release
# 31 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	end
# 32 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 33 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_EventScript_RematchOak::
# 34 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	msgbox FiveIsland_LostCave_Room13_Text_RematchOak, MSGBOX_YESNO
# 35 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_LostCave_Room13_EventScript_NoOak
# 36 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	trainerbattle_single TRAINER_OAK2, FiveIsland_LostCave_Room13_Text_YesRematchOak, FiveIsland_LostCave_Room13_Text_RematchOakDefeat, FiveIsland_LostCave_Room13_EventScript_PostRematchOak, NO_MUSIC
# 37 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	release
# 38 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	end
# 39 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 40 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_EventScript_PostRematchOak::
# 41 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	msgbox FiveIsland_LostCave_Room13_Text_RematchOakDefeat
# 42 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	cleartrainerflag TRAINER_OAK2
# 43 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	release
# 44 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	end
# 45 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 46 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_Text_Oak::
# 47 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "Oh, Hi there {PLAYER}!\n"
# 48 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "I might of gotten a little lost...\p"
# 49 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "I might not even be myself!\p"
# 50 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "But anyways, do you want to rematch\n"
# 51 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "my strongest team?$"
# 52 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 53 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_Text_OakDefeat::
# 54 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "As expected, {PLAYER}!$"
# 55 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 56 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_Text_OakPostBattle::
# 57 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "I'm beginning to feel a\n"
# 58 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "little more real after\l"
# 59 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "this battle!$"
# 60 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 61 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_Text_NoOak::
# 62 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "I'll get out of here soon!$"
# 63 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 64 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_Text_YesOak::
# 65 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "Alright, lets battle!$"
# 66 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 67 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_Text_RematchOak::
# 68 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "Want to go at it again?$"
# 69 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 70 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_Text_RematchOakDefeat::
# 71 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "As expected, {PLAYER}!$"
# 72 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 73 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_Text_YesRematchOak::
# 74 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "Alright, lets battle!$"
# 75 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 76 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_Text_RematchOakPostBattle::
# 77 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "I'm beginning to feel a\n"
# 78 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "little more real after\l"
# 79 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "this battle!$"
