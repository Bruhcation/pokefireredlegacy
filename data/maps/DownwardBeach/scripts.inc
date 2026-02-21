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
DownwardBeach_Text_Sign::
# 16 "data/maps/DownwardBeach/scripts.pory"
	.string "Welcome to Southside Rock\n"
# 17 "data/maps/DownwardBeach/scripts.pory"
	.string "Training Spot of\l"
# 18 "data/maps/DownwardBeach/scripts.pory"
	.string "SEVII MASTER CASEY.\p"
# 19 "data/maps/DownwardBeach/scripts.pory"
	.string "Don't forget,\n"
# 20 "data/maps/DownwardBeach/scripts.pory"
	.string "A SEVII MASTER\l"
# 21 "data/maps/DownwardBeach/scripts.pory"
	.string "is the strongest trainer each\l"
# 22 "data/maps/DownwardBeach/scripts.pory"
	.string "SEVII ISLAND has.$"
# 23 "data/maps/DownwardBeach/scripts.pory"

# 24 "data/maps/DownwardBeach/scripts.pory"
DownwardBeach_Text_Npc::
# 25 "data/maps/DownwardBeach/scripts.pory"
	.string "Sorry,\n"
# 26 "data/maps/DownwardBeach/scripts.pory"
	.string "SEVII MASTER CASEY\l"
# 27 "data/maps/DownwardBeach/scripts.pory"
	.string "isn't available right now.\p"
# 28 "data/maps/DownwardBeach/scripts.pory"
	.string "In fact, all of the\n"
# 29 "data/maps/DownwardBeach/scripts.pory"
	.string "SEVII MASTERS are unavailable.$"
