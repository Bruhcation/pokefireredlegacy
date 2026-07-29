# 1 "data/maps/Route9/scripts.pory"

# 2 "data/maps/Route9/scripts.pory"
Route9_MapScripts::
# 3 "data/maps/Route9/scripts.pory"
	.byte 0
# 4 "data/maps/Route9/scripts.pory"

# 5 "data/maps/Route9/scripts.pory"
Route9_EventScript_RouteSign::
# 6 "data/maps/Route9/scripts.pory"
	msgbox Route9_Text_RouteSign, MSGBOX_SIGN
# 7 "data/maps/Route9/scripts.pory"
	end
# 8 "data/maps/Route9/scripts.pory"

# 9 "data/maps/Route9/scripts.pory"
Route9_EventScript_Psyduck::
# 10 "data/maps/Route9/scripts.pory"
	lock
# 11 "data/maps/Route9/scripts.pory"
	faceplayer
# 12 "data/maps/Route9/scripts.pory"
	waitse
# 13 "data/maps/Route9/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 14 "data/maps/Route9/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Psyduck
# 15 "data/maps/Route9/scripts.pory"
	waitmoncry
# 16 "data/maps/Route9/scripts.pory"
	release
# 17 "data/maps/Route9/scripts.pory"
	end
