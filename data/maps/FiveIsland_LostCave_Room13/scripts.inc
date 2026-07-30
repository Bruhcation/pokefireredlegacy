# 1 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 2 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_MapScripts::
# 3 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.byte 0
# 4 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 5 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_EventScript_Oak::
# 6 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	goto_if_set FLAG_DEFEATED_OAK_REMATCH, FiveIsland_LostCave_Room13_EventScript_RematchOak
# 7 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	cleartrainerflag TRAINER_OAK2
# 8 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	msgbox FiveIsland_LostCave_Room13_Text_Oak, MSGBOX_YESNO
# 9 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_LostCave_Room13_EventScript_NoOak
# 10 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	trainerbattle_single TRAINER_OAK2, FiveIsland_LostCave_Room13_Text_YesOak, FiveIsland_LostCave_Room13_Text_OakDefeat, FiveIsland_LostCave_Room13_EventScript_PostOak, NO_MUSIC
# 11 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	release
# 12 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	end
# 13 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 14 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_EventScript_PostOak::
# 15 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	msgbox FiveIsland_LostCave_Room13_Text_OakPostBattle
# 16 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	setflag FLAG_DEFEATED_OAK_REMATCH
# 17 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	cleartrainerflag TRAINER_OAK2
# 18 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	release
# 19 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	end
# 20 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 21 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_EventScript_CantRematchOak::
# 22 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	msgbox FiveIsland_LostCave_Room13_Text_OakPostBattle
# 23 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	release
# 24 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	end
# 25 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 26 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_EventScript_NoOak::
# 27 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	msgbox FiveIsland_LostCave_Room13_Text_NoOak
# 28 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	release
# 29 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	end
# 30 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 31 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_EventScript_RematchOak::
# 32 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	msgbox FiveIsland_LostCave_Room13_Text_RematchOak, MSGBOX_YESNO
# 33 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_LostCave_Room13_EventScript_NoOak
# 34 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	trainerbattle_single TRAINER_OAK2, FiveIsland_LostCave_Room13_Text_YesRematchOak, FiveIsland_LostCave_Room13_Text_RematchOakDefeat, FiveIsland_LostCave_Room13_EventScript_PostRematchOak, NO_MUSIC
# 35 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	release
# 36 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	end
# 37 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 38 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_EventScript_PostRematchOak::
# 39 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	msgbox FiveIsland_LostCave_Room13_Text_RematchOakDefeat
# 40 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	cleartrainerflag TRAINER_OAK2
# 41 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	release
# 42 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	end
# 43 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 44 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_Text_Oak::
# 45 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "Oh, Hi there {PLAYER}!\n"
# 46 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "I might of gotten a little lost...\p"
# 47 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "I might not even be myself!\p"
# 48 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "But anyways, do you want to rematch\n"
# 49 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "my strongest team?$"
# 50 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 51 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_Text_OakDefeat::
# 52 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "As expected, {PLAYER}!$"
# 53 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 54 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_Text_OakPostBattle::
# 55 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "I'm beginning to feel a\n"
# 56 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "little more real after\l"
# 57 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "this battle!$"
# 58 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 59 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_Text_NoOak::
# 60 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "I'll get out of here soon!$"
# 61 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 62 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_Text_YesOak::
# 63 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "Alright, lets battle!$"
# 64 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 65 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_Text_RematchOak::
# 66 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "Want to go at it again?$"
# 67 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 68 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_Text_RematchOakDefeat::
# 69 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "As expected, {PLAYER}!$"
# 70 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 71 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_Text_YesRematchOak::
# 72 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "Alright, lets battle!$"
# 73 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"

# 74 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
FiveIsland_LostCave_Room13_Text_RematchOakPostBattle::
# 75 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "I'm beginning to feel a\n"
# 76 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "little more real after\l"
# 77 "data/maps/FiveIsland_LostCave_Room13/scripts.pory"
	.string "this battle!$"
