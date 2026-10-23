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
	special EasterEggCheck
# 8 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_LostCave_Room1_ShowEasterEggs
# 9 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
	setflag FLAG_HIDE_EASTER
# 10 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
	end
# 11 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"

# 12 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
FiveIsland_LostCave_Room1_ShowEasterEggs::
# 13 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
	clearflag FLAG_HIDE_EASTER
# 14 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
	end
# 15 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"

# 16 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"

# 17 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
FiveIsland_LostCave_Room1_EventScript_Lawson::
# 18 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
	trainerbattle_single TRAINER_RUIN_MANIAC_LAWSON, FiveIsland_LostCave_Room1_Text_LawsonIntro, FiveIsland_LostCave_Room1_Text_LawsonDefeat
# 19 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
	msgbox FiveIsland_LostCave_Room1_Text_LawsonPostBattle, MSGBOX_AUTOCLOSE
# 20 "data/maps/FiveIsland_LostCave_Room1/scripts.pory"
	end
