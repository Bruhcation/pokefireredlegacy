# 1 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"

# 2 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
FiveIsland_LostCave_Room1_MapScripts::
# 3 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_LostCave_Room1_OnTransition
# 4 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
	.byte 0
# 5 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"

# 6 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
FiveIsland_LostCave_Room1_OnTransition::
# 7 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
	goto_if_set FLAG_HIDE_EASTER, FiveIsland_LostCave_Room1_EventScript_Mirage
# 8 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
	end
# 9 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"

# 10 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
FiveIsland_LostCave_Room1_EventScript_Mirage::
# 11 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
	goto_if_set FLAG_JIRACHI_WISH_GOT, FiveIsland_LostCave_Room1_EventScript_MirageShow
# 12 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
	end
# 13 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"

# 14 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
FiveIsland_LostCave_Room1_EventScript_MirageShow::
# 15 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
	setflag FLAG_MIRAGE_FLAG
# 16 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
	end
# 17 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"

# 18 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
FiveIsland_LostCave_Room1_EventScript_Lawson::
# 19 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
	trainerbattle_single TRAINER_RUIN_MANIAC_LAWSON, FiveIsland_LostCave_Room1_Text_LawsonIntro, FiveIsland_LostCave_Room1_Text_LawsonDefeat
# 20 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
	msgbox FiveIsland_LostCave_Room1_Text_LawsonPostBattle, MSGBOX_AUTOCLOSE
# 21 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
	end
