# 1 "data/maps/CeruleanCave_2F/scripts.pory"

# 2 "data/maps/CeruleanCave_2F/scripts.pory"
CeruleanCave_2F_MapScripts::
# 3 "data/maps/CeruleanCave_2F/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCave_2F/scripts.pory"

# 5 "data/maps/CeruleanCave_2F/scripts.pory"
CeruleanCave_2F_EventScript_Ditto::
# 6 "data/maps/CeruleanCave_2F/scripts.pory"
	trainerbattle_single TRAINER_DITTO, CeruleanCave_2F_Text_DittoIntro, CeruleanCave_2F_Text_DittoDefeat, CeruleanCave_2F_EventScript_DittoMan
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
# 13 "data/maps/CeruleanCave_2F/scripts.pory"

# 14 "data/maps/CeruleanCave_2F/scripts.pory"
CeruleanCave_2F_EventScript_DittoMan::
# 15 "data/maps/CeruleanCave_2F/scripts.pory"
	msgbox CeruleanCave_2F_Text_DittoPostBattle, MSGBOX_AUTOCLOSE
# 16 "data/maps/CeruleanCave_2F/scripts.pory"
 	setflag FLAG_DITTO_MAN
# 17 "data/maps/CeruleanCave_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 18 "data/maps/CeruleanCave_2F/scripts.pory"
	removeobject 14
# 19 "data/maps/CeruleanCave_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 20 "data/maps/CeruleanCave_2F/scripts.pory"
	end
