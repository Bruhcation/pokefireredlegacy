# 1 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"

# 2 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
FiveIsland_LostCave_Room11_MapScripts::
# 3 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.byte 0
# 4 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"

# 5 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
FiveIsland_LostCave_Room11_EventScript_Armstrong::
# 6 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	lock
# 7 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	faceplayer
# 8 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	goto_if_set FLAG_ARMSTRONG_CLONE, FiveIsland_LostCave_Room11_EventScript_RematchArmstrong
# 9 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	msgbox FiveIsland_LostCave_Room11_Text_Armstrong, MSGBOX_YESNO
# 10 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_LostCave_Room11_EventScript_NoArmstrong
# 11 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	trainerbattle_single TRAINER_MIRAGESTRONG, FiveIsland_LostCave_Room11_Text_YesArmstrong, FiveIsland_LostCave_Room11_Text_ArmstrongDefeat, FiveIsland_LostCave_Room11_EventScript_PostArmstrong, NO_MUSIC
# 12 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	release
# 13 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	end
# 14 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"

# 15 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
FiveIsland_LostCave_Room11_EventScript_PostArmstrong::
# 16 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	msgbox FiveIsland_LostCave_Room11_Text_ArmstrongPostBattle
# 17 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	setflag FLAG_ARMSTRONG_CLONE
# 18 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	cleartrainerflag TRAINER_MIRAGESTRONG
# 19 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	release
# 20 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	end
# 21 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"

# 22 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
FiveIsland_LostCave_Room11_EventScript_NoArmstrong::
# 23 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	msgbox FiveIsland_LostCave_Room11_Text_NoArmstrong
# 24 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	release
# 25 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	end
# 26 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"

# 27 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
FiveIsland_LostCave_Room11_EventScript_RematchArmstrong::
# 28 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	msgbox FiveIsland_LostCave_Room11_Text_RematchArmstrong, MSGBOX_YESNO
# 29 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_LostCave_Room11_EventScript_NoArmstrong
# 30 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	trainerbattle_single TRAINER_MIRAGESTRONG, FiveIsland_LostCave_Room11_Text_YesRematchArmstrong, FiveIsland_LostCave_Room11_Text_RematchArmstrongDefeat, FiveIsland_LostCave_Room11_EventScript_PostRematchArmstrong, NO_MUSIC
# 31 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	release
# 32 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	end
# 33 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"

# 34 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
FiveIsland_LostCave_Room11_EventScript_PostRematchArmstrong::
# 35 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	msgbox FiveIsland_LostCave_Room11_Text_RematchArmstrongDefeat
# 36 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	cleartrainerflag TRAINER_MIRAGESTRONG
# 37 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	release
# 38 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	end
# 39 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"

# 40 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
FiveIsland_LostCave_Room11_Text_Armstrong::
# 41 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "Hey there {PLAYER}.\n"
# 42 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "Just letting you know I'm\l"
# 43 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "not real.\p"
# 44 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "I'm a manifestation of ARMSTRONG.\n"
# 45 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "The one the creator wanted\l"
# 46 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "to face somewhere else.\p"
# 47 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "An epic battle of all proportions!\n"
# 48 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "A true battle of strength!\p"
# 49 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "So, do you wish to face me?$"
# 50 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"

# 51 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
FiveIsland_LostCave_Room11_Text_ArmstrongDefeat::
# 52 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "How did I lose?$"
# 53 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"

# 54 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
FiveIsland_LostCave_Room11_Text_ArmstrongPostBattle::
# 55 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "Congratulations.\p"
# 56 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "Your strength transcends\n"
# 57 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "anything the Creator gets to\l"
# 58 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "throw at you now.\p"
# 59 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "Consider yourself a\n"
# 60 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "POKEMON MASTER!\p"
# 61 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "{PLAYER}!$"
# 62 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"

# 63 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
FiveIsland_LostCave_Room11_Text_NoArmstrong::
# 64 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "You're not strong enough.$"
# 65 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"

# 66 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
FiveIsland_LostCave_Room11_Text_YesArmstrong::
# 67 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "Let the ending battle begin!$"
# 68 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"

# 69 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
FiveIsland_LostCave_Room11_Text_RematchArmstrong::
# 70 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
    .string "You want to battle again?$"
# 71 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"

# 72 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"

# 73 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
FiveIsland_LostCave_Room11_Text_RematchArmstrongDefeat::
# 74 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
    .string "As expected…$"
# 75 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"

# 76 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
FiveIsland_LostCave_Room11_Text_YesRematchArmstrong::
# 77 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
    .string "I already know the result.$"
# 78 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"

# 79 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
FiveIsland_LostCave_Room11_Text_RematchArmstrongPostBattle::
# 80 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "I guess I'll let you know\n"
# 81 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "who I'm based off of.\p"
# 82 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "It's SENATOR ARMSTRONG.\n"
# 83 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "You can find more about me\l"
# 84 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "somewhere else...\p"
# 85 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "There wasn't much else\n"
# 86 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "for the creator to base\l"
# 87 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "on for this hack besides\l"
# 88 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "the JOHTO GYM Leaders,\l"
# 89 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "Who are supposed to be weaker\l"
# 90 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "than the KANTO GYM Leaders.\p"
# 91 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "So a lot of new ideas\n"
# 92 "data/maps/FiveIsland_LostCave_Room11/scripts.pory"
	.string "had to be made which you saw.$"
