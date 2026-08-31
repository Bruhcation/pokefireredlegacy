# 1 "data/maps/SixIsland_OutcastIsland/scripts.pory"

# 2 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SixIsland_OutcastIsland_MapScripts::
# 3 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	.byte 0
# 4 "data/maps/SixIsland_OutcastIsland/scripts.pory"

# 5 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SixIsland_OutcastIsland_OnTransition:
# 6 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	call SixIsland_OutcastIsland_UpdateAlteringCaveMewtwo
# 7 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	end
# 8 "data/maps/SixIsland_OutcastIsland/scripts.pory"

# 9 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SixIsland_OutcastIsland_EventScript_Rocket::
# 10 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_46, SixIsland_OutcastIsland_Text_RocketIntro, SixIsland_OutcastIsland_Text_RocketDefeat
# 11 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	msgbox SixIsland_OutcastIsland_Text_RocketPostBattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	end
# 13 "data/maps/SixIsland_OutcastIsland/scripts.pory"

# 14 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SixIsland_OutcastIsland_UpdateAlteringCaveMewtwo::
# 15 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setflag FLAG_HIDE_TEAMPLAYER
# 16 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setflag FLAG_HIDE_JVTROVAO
# 17 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setflag FLAG_HIDE_SPIKE
# 18 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto SixIsland_OutcastIsland_UpdateAlteringCave
# 19 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 20 "data/maps/SixIsland_OutcastIsland/scripts.pory"

# 21 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SixIsland_OutcastIsland_UpdateAlteringCave::
# 22 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	random 10
# 23 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SetAlteringCave0
# 24 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SetAlteringCave1
# 25 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_eq VAR_RESULT, 2, SetAlteringCave2
# 26 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_eq VAR_RESULT, 3, SetAlteringCave3
# 27 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_eq VAR_RESULT, 4, SetAlteringCave4
# 28 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_eq VAR_RESULT, 5, SetAlteringCave5
# 29 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_eq VAR_RESULT, 6, SetAlteringCave6
# 30 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_eq VAR_RESULT, 7, SetAlteringCave7
# 31 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_eq VAR_RESULT, 8, SetAlteringCave8
# 32 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_eq VAR_RESULT, 9, SetAlteringCave9
# 33 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 34 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SetAlteringCave0::
# 35 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setvar VAR_ALTERING_CAVE_WILD_SET, 0
# 36 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_set FLAG_HIDE_SEVIIGUYS, EventScript_Return
# 37 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 38 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SetAlteringCave1::
# 39 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setvar VAR_ALTERING_CAVE_WILD_SET, 1
# 40 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_set FLAG_HIDE_SEVIIGUYS, EventScript_Return
# 41 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	clearflag FLAG_HIDE_SPIKE
# 42 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 43 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SetAlteringCave2::
# 44 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setvar VAR_ALTERING_CAVE_WILD_SET, 2
# 45 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_set FLAG_HIDE_SEVIIGUYS, EventScript_Return
# 46 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	clearflag FLAG_HIDE_JVTROVAO
# 47 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 48 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SetAlteringCave3::
# 49 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setvar VAR_ALTERING_CAVE_WILD_SET, 3
# 50 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_set FLAG_HIDE_SEVIIGUYS, EventScript_Return
# 51 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	clearflag FLAG_HIDE_JVTROVAO
# 52 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 53 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SetAlteringCave4::
# 54 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setvar VAR_ALTERING_CAVE_WILD_SET, 4
# 55 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_set FLAG_HIDE_SEVIIGUYS, EventScript_Return
# 56 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 57 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SetAlteringCave5::
# 58 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setvar VAR_ALTERING_CAVE_WILD_SET, 5
# 59 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_set FLAG_HIDE_SEVIIGUYS, EventScript_Return
# 60 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	clearflag FLAG_HIDE_SPIKE
# 61 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 62 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SetAlteringCave6::
# 63 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setvar VAR_ALTERING_CAVE_WILD_SET, 6
# 64 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_set FLAG_HIDE_SEVIIGUYS, EventScript_Return
# 65 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	clearflag FLAG_HIDE_SPIKE
# 66 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	clearflag FLAG_HIDE_JVTROVAO
# 67 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 68 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SetAlteringCave7::
# 69 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setvar VAR_ALTERING_CAVE_WILD_SET, 7
# 70 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_set FLAG_HIDE_SEVIIGUYS, EventScript_Return
# 71 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	clearflag FLAG_HIDE_SPIKE
# 72 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	clearflag FLAG_HIDE_JVTROVAO
# 73 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	clearflag FLAG_HIDE_TEAMPLAYER
# 74 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 75 "data/maps/SixIsland_OutcastIsland/scripts.pory"

# 76 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SetAlteringCave8::
# 77 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setvar VAR_ALTERING_CAVE_WILD_SET, 8
# 78 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_set FLAG_HIDE_SEVIIGUYS, EventScript_Return
# 79 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	clearflag FLAG_HIDE_TEAMPLAYER
# 80 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 81 "data/maps/SixIsland_OutcastIsland/scripts.pory"

# 82 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SetAlteringCave9::
# 83 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setvar VAR_ALTERING_CAVE_WILD_SET, 9
# 84 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_set FLAG_HIDE_SEVIIGUYS, EventScript_Return
# 85 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	clearflag FLAG_HIDE_TEAMPLAYER
# 86 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
# 87 "data/maps/SixIsland_OutcastIsland/scripts.pory"

# 88 "data/maps/SixIsland_OutcastIsland/scripts.pory"
SixIsland_OutcastIsland_EventScript_AlteringCaveDefault::
# 89 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	setvar VAR_ALTERING_CAVE_WILD_SET, 0
# 90 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	goto_if_set FLAG_HIDE_SEVIIGUYS, EventScript_Return
# 91 "data/maps/SixIsland_OutcastIsland/scripts.pory"
	return
