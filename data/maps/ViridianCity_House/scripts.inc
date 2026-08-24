# 1 "data/maps/ViridianCity_House/scripts.pory"

# 2 "data/maps/ViridianCity_House/scripts.pory"
ViridianCity_House_MapScripts::
# 3 "data/maps/ViridianCity_House/scripts.pory"
	.byte 0
# 4 "data/maps/ViridianCity_House/scripts.pory"

# 5 "data/maps/ViridianCity_House/scripts.pory"
ViridianCity_House_EventScript_BaldingMan::
# 6 "data/maps/ViridianCity_House/scripts.pory"
	msgbox ViridianCity_House_Text_NicknamingIsFun, MSGBOX_NPC
# 7 "data/maps/ViridianCity_House/scripts.pory"
	end
# 8 "data/maps/ViridianCity_House/scripts.pory"

# 9 "data/maps/ViridianCity_House/scripts.pory"
ViridianCity_House_EventScript_LittleGirl::
# 10 "data/maps/ViridianCity_House/scripts.pory"
	msgbox ViridianCity_House_Text_MyDaddyLovesMonsToo, MSGBOX_NPC
# 11 "data/maps/ViridianCity_House/scripts.pory"
	end
# 12 "data/maps/ViridianCity_House/scripts.pory"

# 13 "data/maps/ViridianCity_House/scripts.pory"
ViridianCity_House_EventScript_Speary::
# 14 "data/maps/ViridianCity_House/scripts.pory"
	lock
# 15 "data/maps/ViridianCity_House/scripts.pory"
	faceplayer
# 16 "data/maps/ViridianCity_House/scripts.pory"
	waitse
# 17 "data/maps/ViridianCity_House/scripts.pory"
	playmoncry SPECIES_SPEAROW, CRY_MODE_NORMAL
# 18 "data/maps/ViridianCity_House/scripts.pory"
	msgbox ViridianCity_House_Text_Speary
# 19 "data/maps/ViridianCity_House/scripts.pory"
	settrainerflag TRAINER_BUG_CATCHER_RICK
# 20 "data/maps/ViridianCity_House/scripts.pory"
	settrainerflag TRAINER_BUG_CATCHER_SAMMY
# 21 "data/maps/ViridianCity_House/scripts.pory"
	settrainerflag TRAINER_BUG_CATCHER_DOUG
# 22 "data/maps/ViridianCity_House/scripts.pory"
	settrainerflag TRAINER_SAM
# 23 "data/maps/ViridianCity_House/scripts.pory"
	settrainerflag TRAINER_BUG_CATCHER_CHARLIE
# 24 "data/maps/ViridianCity_House/scripts.pory"
	settrainerflag TRAINER_BUG_CATCHER_ANTHONY        
# 25 "data/maps/ViridianCity_House/scripts.pory"
    setflag FLAG_BLUE_FOUGHT_ROUTE22
# 26 "data/maps/ViridianCity_House/scripts.pory"
    settrainerflag TRAINER_CAMPER_LIAM
# 27 "data/maps/ViridianCity_House/scripts.pory"
	waitmoncry
# 28 "data/maps/ViridianCity_House/scripts.pory"
	release
# 29 "data/maps/ViridianCity_House/scripts.pory"
	end
# 30 "data/maps/ViridianCity_House/scripts.pory"

# 31 "data/maps/ViridianCity_House/scripts.pory"
ViridianCity_House_EventScript_NicknameSign::
# 32 "data/maps/ViridianCity_House/scripts.pory"
	msgbox ViridianCity_House_Text_SpearowNameSpeary, MSGBOX_SIGN
# 33 "data/maps/ViridianCity_House/scripts.pory"
	end
