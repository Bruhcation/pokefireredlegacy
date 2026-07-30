# 1 "data/maps/CeruleanCave_2F/scripts.pory"

# 2 "data/maps/CeruleanCave_2F/scripts.pory"
CeruleanCave_2F_MapScripts::
# 3 "data/maps/CeruleanCave_2F/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCave_2F/scripts.pory"

# 5 "data/maps/CeruleanCave_2F/scripts.pory"
CeruleanCave_2F_Ditto::
# 6 "data/maps/CeruleanCave_2F/scripts.pory"
	trainerbattle_single TRAINER_DITTO, CeruleanCave_2F_Text_DittoIntro, CeruleanCave_2F_Text_DittoDefeat
# 7 "data/maps/CeruleanCave_2F/scripts.pory"
	msgbox CeruleanCave_2F_Text_DittoPostBattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/CeruleanCave_2F/scripts.pory"
 	setflag FLAG_DITTO_MAN
# 9 "data/maps/CeruleanCave_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 10 "data/maps/CeruleanCave_2F/scripts.pory"
	removeobject 14
# 11 "data/maps/CeruleanCave_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 12 "data/maps/CeruleanCave_2F/scripts.pory"
	end
