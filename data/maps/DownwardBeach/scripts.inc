# 1 "data/maps/DownwardBeach/scripts.pory"

# 2 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_MapScripts::
# 3 "data/maps/DownwardBeach/scripts.pory"
	.byte 0
# 4 "data/maps/DownwardBeach/scripts.pory"

# 5 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_EventScript_Sign::
# 6 "data/maps/DownwardBeach/scripts.pory"
	msgbox DownwardBeach_Text_Sign, MSGBOX_SIGN
# 7 "data/maps/DownwardBeach/scripts.pory"
	release
# 8 "data/maps/DownwardBeach/scripts.pory"
	end
# 9 "data/maps/DownwardBeach/scripts.pory"

# 10 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_EventScript_Npc::
# 11 "data/maps/DownwardBeach/scripts.pory"
	msgbox DownwardBeach_Text_Npc, MSGBOX_NPC
# 12 "data/maps/DownwardBeach/scripts.pory"
	release
# 13 "data/maps/DownwardBeach/scripts.pory"
	end
# 14 "data/maps/DownwardBeach/scripts.pory"

# 15 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_EventScript_Reed::
# 16 "data/maps/DownwardBeach/scripts.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_REED, DownwardBeach_Text_ReedIntro, DownwardBeach_Text_ReedDefeat
# 17 "data/maps/DownwardBeach/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 18 "data/maps/DownwardBeach/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DownwardBeach_EventScript_RematchReed
# 19 "data/maps/DownwardBeach/scripts.pory"
	msgbox DownwardBeach_Text_ReedPostBattle, MSGBOX_AUTOCLOSE
# 20 "data/maps/DownwardBeach/scripts.pory"
	end
# 21 "data/maps/DownwardBeach/scripts.pory"

# 22 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_EventScript_RematchReed::
# 23 "data/maps/DownwardBeach/scripts.pory"
	trainerbattle_rematch TRAINER_BIRD_KEEPER_REED, DownwardBeach_Text_RematchReedIntro, DownwardBeach_Text_ReedDefeat
# 24 "data/maps/DownwardBeach/scripts.pory"
	msgbox DownwardBeach_Text_ReedPostBattle, MSGBOX_AUTOCLOSE
# 25 "data/maps/DownwardBeach/scripts.pory"
	end
# 26 "data/maps/DownwardBeach/scripts.pory"

# 27 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_Text_ReedIntro::
# 28 "data/maps/DownwardBeach/scripts.pory"
	.string "My birds soar farther than\n"
# 29 "data/maps/DownwardBeach/scripts.pory"
	.string "the ocean horizon!$"
# 30 "data/maps/DownwardBeach/scripts.pory"

# 31 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_Text_ReedDefeat::
# 32 "data/maps/DownwardBeach/scripts.pory"
	.string "Even tailwinds can't carry me\n"
# 33 "data/maps/DownwardBeach/scripts.pory"
	.string "to victory every time…$"
# 34 "data/maps/DownwardBeach/scripts.pory"

# 35 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_Text_ReedPostBattle::
# 36 "data/maps/DownwardBeach/scripts.pory"
	.string "Out here on the island,\n"
# 37 "data/maps/DownwardBeach/scripts.pory"
	.string "the wind makes my birds\l"
# 38 "data/maps/DownwardBeach/scripts.pory"
	.string "stronger every day$"
# 39 "data/maps/DownwardBeach/scripts.pory"

# 40 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_Text_RematchReedIntro::
# 41 "data/maps/DownwardBeach/scripts.pory"
	.string "Wanna soar the skies again?$"
# 42 "data/maps/DownwardBeach/scripts.pory"

# 43 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_EventScript_Randall::
# 44 "data/maps/DownwardBeach/scripts.pory"
	trainerbattle_single TRAINER_ROCKER_RANDALL, DownwardBeach_Text_RandallIntro, DownwardBeach_Text_RandallDefeat
# 45 "data/maps/DownwardBeach/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 46 "data/maps/DownwardBeach/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DownwardBeach_EventScript_RematchRandall
# 47 "data/maps/DownwardBeach/scripts.pory"
	msgbox DownwardBeach_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/DownwardBeach/scripts.pory"
	end
# 49 "data/maps/DownwardBeach/scripts.pory"

# 50 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_EventScript_RematchRandall::
# 51 "data/maps/DownwardBeach/scripts.pory"
	trainerbattle_rematch TRAINER_ROCKER_RANDALL, DownwardBeach_Text_RematchRandallIntro, DownwardBeach_Text_RandallDefeat
# 52 "data/maps/DownwardBeach/scripts.pory"
	msgbox DownwardBeach_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/DownwardBeach/scripts.pory"
	end
# 54 "data/maps/DownwardBeach/scripts.pory"

# 55 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_Text_RandallIntro::
# 56 "data/maps/DownwardBeach/scripts.pory"
	.string "Yo!\p"
# 57 "data/maps/DownwardBeach/scripts.pory"
	.string "The waves on this island\n"
# 58 "data/maps/DownwardBeach/scripts.pory"
	.string "got a wicked rhythm!\p"
# 59 "data/maps/DownwardBeach/scripts.pory"
	.string "Think you can handle the volume?!$"
# 60 "data/maps/DownwardBeach/scripts.pory"

# 61 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_Text_RandallDefeat::
# 62 "data/maps/DownwardBeach/scripts.pory"
	.string "You totally blew out my speakers!$"
# 63 "data/maps/DownwardBeach/scripts.pory"

# 64 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_Text_RandallPostBattle::
# 65 "data/maps/DownwardBeach/scripts.pory"
	.string "My Pokémon and I jam to the\n"
# 66 "data/maps/DownwardBeach/scripts.pory"
	.string "crashing waves every night!$"
# 67 "data/maps/DownwardBeach/scripts.pory"

# 68 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_Text_RematchRandallIntro::
# 69 "data/maps/DownwardBeach/scripts.pory"
	.string "Ready to rock again?$"
# 70 "data/maps/DownwardBeach/scripts.pory"

# 71 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_EventScript_Norton::
# 72 "data/maps/DownwardBeach/scripts.pory"
	trainerbattle_single TRAINER_GENTLEMAN_NORTON, DownwardBeach_Text_NortonIntro, DownwardBeach_Text_NortonDefeat
# 73 "data/maps/DownwardBeach/scripts.pory"
	msgbox DownwardBeach_Text_NortonPostBattle, MSGBOX_AUTOCLOSE
# 74 "data/maps/DownwardBeach/scripts.pory"
	end
# 75 "data/maps/DownwardBeach/scripts.pory"

# 76 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_Text_NortonIntro::
# 77 "data/maps/DownwardBeach/scripts.pory"
	.string "Good heavens…\p"
# 78 "data/maps/DownwardBeach/scripts.pory"
	.string "these caverns are riddled\n"
# 79 "data/maps/DownwardBeach/scripts.pory"
	.string "with holes!$"
# 80 "data/maps/DownwardBeach/scripts.pory"

# 81 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_Text_NortonDefeat::
# 82 "data/maps/DownwardBeach/scripts.pory"
	.string "My word…\p"
# 83 "data/maps/DownwardBeach/scripts.pory"
	.string "I appear to have stumbled\n"
# 84 "data/maps/DownwardBeach/scripts.pory"
	.string "into defeat as well.$"
# 85 "data/maps/DownwardBeach/scripts.pory"

# 86 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_Text_NortonPostBattle::
# 87 "data/maps/DownwardBeach/scripts.pory"
	.string "One can never tell what\n"
# 88 "data/maps/DownwardBeach/scripts.pory"
	.string "may be lurking beneath.$"
# 89 "data/maps/DownwardBeach/scripts.pory"

# 90 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_Text_Sign::
# 91 "data/maps/DownwardBeach/scripts.pory"
	.string "Welcome to SOUTHSIDE ROCK\n"
# 92 "data/maps/DownwardBeach/scripts.pory"
	.string "Training Spot of\l"
# 93 "data/maps/DownwardBeach/scripts.pory"
	.string "SEVII MASTER CASEY.\p"
# 94 "data/maps/DownwardBeach/scripts.pory"
	.string "Don't forget,\n"
# 95 "data/maps/DownwardBeach/scripts.pory"
	.string "A SEVII MASTER\l"
# 96 "data/maps/DownwardBeach/scripts.pory"
	.string "is the strongest trainer each\l"
# 97 "data/maps/DownwardBeach/scripts.pory"
	.string "SEVII ISLAND has.$"
# 98 "data/maps/DownwardBeach/scripts.pory"

# 99 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_Text_Npc::
# 100 "data/maps/DownwardBeach/scripts.pory"
	.string "Sorry,\n"
# 101 "data/maps/DownwardBeach/scripts.pory"
	.string "This cave is currently\l"
# 102 "data/maps/DownwardBeach/scripts.pory"
	.string "being cleared of rocks and is\l"
# 103 "data/maps/DownwardBeach/scripts.pory"
	.string "unavailable at the moment.$"
