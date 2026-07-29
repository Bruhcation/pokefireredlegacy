# 1 "data/maps/Route23_UnusedHouse/scripts.pory"

# 2 "data/maps/Route23_UnusedHouse/scripts.pory"
Route23_UnusedHouse_MapScripts::
# 3 "data/maps/Route23_UnusedHouse/scripts.pory"
	.byte 0
# 4 "data/maps/Route23_UnusedHouse/scripts.pory"

# 5 "data/maps/Route23_UnusedHouse/scripts.pory"
Route23_UnusedHouse_EventScript_Medic::
# 6 "data/maps/Route23_UnusedHouse/scripts.pory"
	lock
# 7 "data/maps/Route23_UnusedHouse/scripts.pory"
	faceplayer
# 8 "data/maps/Route23_UnusedHouse/scripts.pory"
	msgbox Route23_UnusedHouse_Text_Medic
# 9 "data/maps/Route23_UnusedHouse/scripts.pory"
	closemessage
# 10 "data/maps/Route23_UnusedHouse/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 11 "data/maps/Route23_UnusedHouse/scripts.pory"
	msgbox Route23_UnusedHouse_Text_Medic2
# 12 "data/maps/Route23_UnusedHouse/scripts.pory"
	release
# 13 "data/maps/Route23_UnusedHouse/scripts.pory"
	end
