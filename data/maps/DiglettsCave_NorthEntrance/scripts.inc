# 1 "data/maps/DiglettsCave_NorthEntrance/scripts.pory"

# 2 "data/maps/DiglettsCave_NorthEntrance/scripts.pory"
DiglettsCave_NorthEntrance_MapScripts::
# 3 "data/maps/DiglettsCave_NorthEntrance/scripts.pory"
	.byte 0
# 4 "data/maps/DiglettsCave_NorthEntrance/scripts.pory"

# 5 "data/maps/DiglettsCave_NorthEntrance/scripts.pory"
DiglettsCave_NorthEntrance_EventScript_Hiker::
# 6 "data/maps/DiglettsCave_NorthEntrance/scripts.pory"
	msgbox DiglettsCave_NorthEntrance_RockTunnelPitchBlack, MSGBOX_NPC
# 7 "data/maps/DiglettsCave_NorthEntrance/scripts.pory"
	end
# 8 "data/maps/DiglettsCave_NorthEntrance/scripts.pory"

# 9 "data/maps/DiglettsCave_NorthEntrance/scripts.pory"
DiglettsCave_NorthEntrance_EventScript_SadOnix::
# 10 "data/maps/DiglettsCave_NorthEntrance/scripts.pory"
	lock
# 11 "data/maps/DiglettsCave_NorthEntrance/scripts.pory"
	faceplayer
# 12 "data/maps/DiglettsCave_NorthEntrance/scripts.pory"
	playmoncry SPECIES_ONIX, 0
# 13 "data/maps/DiglettsCave_NorthEntrance/scripts.pory"
	msgbox DiglettsCave_NorthEntrance_Text_SadOnix
# 14 "data/maps/DiglettsCave_NorthEntrance/scripts.pory"
	waitmoncry
# 15 "data/maps/DiglettsCave_NorthEntrance/scripts.pory"
	release
# 16 "data/maps/DiglettsCave_NorthEntrance/scripts.pory"
	end
