# 1 "data/maps/SevenIsland_House_Room1/scripts.pory"

# 2 "data/maps/SevenIsland_House_Room1/scripts.pory"
.equ LOCALID_OLD_WOMAN, 1
# 3 "data/maps/SevenIsland_House_Room1/scripts.pory"

# 4 "data/maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_MapScripts::
# 5 "data/maps/SevenIsland_House_Room1/scripts.pory"
	.byte 0
# 6 "data/maps/SevenIsland_House_Room1/scripts.pory"

# 7 "data/maps/SevenIsland_House_Room1/scripts.pory"
SevenIsland_House_Room1_EventScript_OldWoman::
# 8 "data/maps/SevenIsland_House_Room1/scripts.pory"
	lock
# 9 "data/maps/SevenIsland_House_Room1/scripts.pory"
	faceplayer
# 10 "data/maps/SevenIsland_House_Room1/scripts.pory"
	msgbox SevenIsland_House_Room1_Text_OnlyEnjoymentWatchingBattles
# 11 "data/maps/SevenIsland_House_Room1/scripts.pory"
	release
# 12 "data/maps/SevenIsland_House_Room1/scripts.pory"
	end
