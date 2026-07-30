# 1 "data/maps/SilphCo_1F/scripts.pory"

# 2 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_MapScripts::
# 3 "data/maps/SilphCo_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SilphCo_1F_OnTransition
# 4 "data/maps/SilphCo_1F/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_1F/scripts.pory"

# 6 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_OnTransition::
# 7 "data/maps/SilphCo_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SILPH_CO_1F
# 8 "data/maps/SilphCo_1F/scripts.pory"
	end
# 9 "data/maps/SilphCo_1F/scripts.pory"

# 10 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_EventScript_Receptionist::
# 11 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_Text_WelcomePresidentInBoardroom, MSGBOX_NPC
# 12 "data/maps/SilphCo_1F/scripts.pory"
	end
# 13 "data/maps/SilphCo_1F/scripts.pory"

# 14 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_EventScript_FloorSign::
# 15 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_Text_FloorSign, MSGBOX_SIGN
# 16 "data/maps/SilphCo_1F/scripts.pory"
	end
# 17 "data/maps/SilphCo_1F/scripts.pory"

# 18 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_EventScript_CouchWoman::
# 19 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_Text_CouchWoman, MSGBOX_NPC
# 20 "data/maps/SilphCo_1F/scripts.pory"
	end
# 21 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_Text_CouchWoman:
# 22 "data/maps/SilphCo_1F/scripts.pory"
	.string "I was captured by TEAM ROCKET.\p"
# 23 "data/maps/SilphCo_1F/scripts.pory"
	.string "I wonder if our insurance plan\n"
# 24 "data/maps/SilphCo_1F/scripts.pory"
	.string "covers that kind of thing…?$"
# 25 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_EventScript_CouchMan::
# 26 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_Text_CouchMan, MSGBOX_NPC
# 27 "data/maps/SilphCo_1F/scripts.pory"
	end
# 28 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_Text_CouchMan:
# 29 "data/maps/SilphCo_1F/scripts.pory"
	.string "I heard that the one who took on\n"
# 30 "data/maps/SilphCo_1F/scripts.pory"
	.string "TEAM ROCKET was actually some kid!\p"
# 31 "data/maps/SilphCo_1F/scripts.pory"
	.string "Wait, could it be you…?\n"
# 32 "data/maps/SilphCo_1F/scripts.pory"
	.string "No, no, couldn't be…$"
# 33 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_EventScript_FountainMan::
# 34 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_Text_FountainMan, MSGBOX_NPC
# 35 "data/maps/SilphCo_1F/scripts.pory"
	end
# 36 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_Text_FountainMan:
# 37 "data/maps/SilphCo_1F/scripts.pory"
	.string "Any tool can be used for good\n"
# 38 "data/maps/SilphCo_1F/scripts.pory"
	.string "or evil, depending on the user.\p"
# 39 "data/maps/SilphCo_1F/scripts.pory"
	.string "I shudder to think what would've\n"
# 40 "data/maps/SilphCo_1F/scripts.pory"
	.string "happened if TEAM ROCKET had gotten\l"
# 41 "data/maps/SilphCo_1F/scripts.pory"
	.string "their hands on SILPH technology…$"
# 42 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_EventScript_CushionMan::
# 43 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_Text_CushionMan, MSGBOX_NPC
# 44 "data/maps/SilphCo_1F/scripts.pory"
	end
# 45 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_Text_CushionMan:
# 46 "data/maps/SilphCo_1F/scripts.pory"
	.string "I came back from playing hooky only\n"
# 47 "data/maps/SilphCo_1F/scripts.pory"
	.string "to find out the company had been\l"
# 48 "data/maps/SilphCo_1F/scripts.pory"
	.string "taken over!\l"
# 49 "data/maps/SilphCo_1F/scripts.pory"
	.string "That was quite a surprise, for sure.$"
# 50 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_EventScript_WalkingWoman::
# 51 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_Text_WalkingWoman, MSGBOX_NPC
# 52 "data/maps/SilphCo_1F/scripts.pory"
	end
# 53 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_Text_WalkingWoman:
# 54 "data/maps/SilphCo_1F/scripts.pory"
	.string "A lot of work's piled up, so we\n"
# 55 "data/maps/SilphCo_1F/scripts.pory"
	.string "need to get cracking!$"
# 56 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_EventScript_Painting::
# 57 "data/maps/SilphCo_1F/scripts.pory"
	goto_if_unset FLAG_HIDE_SAFFRON_CIVILIANS, SilphCo_1F_EventScript_NewPainting
# 58 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_EventScript_NewPainting, MSGBOX_SIGN
# 59 "data/maps/SilphCo_1F/scripts.pory"
	end
# 60 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_EventScript_NewPainting::
# 61 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_Text_NewPainting, MSGBOX_SIGN
# 62 "data/maps/SilphCo_1F/scripts.pory"
	end
# 63 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_Text_NewPainting:
# 64 "data/maps/SilphCo_1F/scripts.pory"
	.string "It's a gorgeous painting of a cabin\n"
# 65 "data/maps/SilphCo_1F/scripts.pory"
	.string "surrounded by a field of flowers.$"
