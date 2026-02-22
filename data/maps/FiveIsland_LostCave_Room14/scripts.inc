# 1 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 2 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_MapScripts::
# 3 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	.byte 0
# 4 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 5 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_EventScript_Freddy::
# 6 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	lock
# 7 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	faceplayer
# 8 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	goto_if_set FLAG_DEFEATED_FREDDY, FiveIsland_LostCave_Room14_EventScript_RematchFreddy
# 9 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	msgbox FiveIsland_LostCave_Room14_Text_Freddy, MSGBOX_YESNO
# 10 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_LostCave_Room14_EventScript_NoFreddy
# 11 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	trainerbattle_single TRAINER_FREDDY, FiveIsland_LostCave_Room14_Text_YesFreddy, FiveIsland_LostCave_Room14_Text_FreddyDefeat, FiveIsland_LostCave_Room14_EventScript_PostFreddy, NO_MUSIC
# 12 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	release
# 13 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	end
# 14 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 15 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_EventScript_PostFreddy::
# 16 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	msgbox FiveIsland_LostCave_Room14_Text_FreddyPostBattle
# 17 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	setflag FLAG_DEFEATED_FREDDY
# 18 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	cleartrainerflag TRAINER_FREDDY
# 19 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	release
# 20 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	end
# 21 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 22 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_EventScript_NoFreddy::
# 23 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	msgbox FiveIsland_LostCave_Room14_Text_NoFreddy
# 24 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	release
# 25 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	end
# 26 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 27 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_EventScript_RematchFreddy::
# 28 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	msgbox FiveIsland_LostCave_Room14_Text_RematchFreddy, MSGBOX_YESNO
# 29 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_LostCave_Room14_EventScript_NoFreddy
# 30 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	trainerbattle_single TRAINER_FREDDY, FiveIsland_LostCave_Room14_Text_YesFreddy, FiveIsland_LostCave_Room14_Text_RematchFreddyDefeat, FiveIsland_LostCave_Room14_EventScript_PostRematchFreddy, NO_MUSIC
# 31 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	release
# 32 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	end
# 33 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 34 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_EventScript_PostRematchFreddy::
# 35 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	msgbox FiveIsland_LostCave_Room14_Text_PostRematchFreddy
# 36 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	cleartrainerflag TRAINER_FREDDY
# 37 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	release
# 38 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
	end
# 39 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 40 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_Text_Freddy::
# 41 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
    .string "Har Har Har Har Har.$"
# 42 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 43 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_Text_FreddyDefeat::
# 44 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
    .string "Har Har Har Har Har!$"
# 45 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 46 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_Text_FreddyPostBattle::
# 47 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
    .string "Har Har Har Har Har!$"
# 48 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 49 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_Text_NoFreddy::
# 50 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
    .string "Har Har Har Har Har!$"
# 51 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 52 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_Text_YesFreddy::
# 53 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
    .string "Har Har Har Har Har!$"
# 54 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 55 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_Text_RematchFreddy::
# 56 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
    .string "Har Har Har Har Har?$"
# 57 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 58 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 59 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_Text_RematchFreddyDefeat::
# 60 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
    .string "Har!$"
# 61 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"

# 62 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
FiveIsland_LostCave_Room14_Text_PostRematchFreddy::
# 63 "data/maps/FiveIsland_LostCave_Room14/scripts.pory"
    .string "Har Har Har.$"
