# 1 "data/maps/OneIsland_TreasureBeach/scripts.pory"

# 2 "data/maps/OneIsland_TreasureBeach/scripts.pory"
OneIsland_TreasureBeach_MapScripts::
# 3 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	.byte 0
# 4 "data/maps/OneIsland_TreasureBeach/scripts.pory"

# 5 "data/maps/OneIsland_TreasureBeach/scripts.pory"
OneIsland_TreasureBeach_EventScript_Boy::
# 6 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	msgbox OneIsland_TreasureBeach_Text_GoodThingsWashUpOnBeach, MSGBOX_NPC
# 7 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	end
# 8 "data/maps/OneIsland_TreasureBeach/scripts.pory"

# 9 "data/maps/OneIsland_TreasureBeach/scripts.pory"
OneIsland_TreasureBeach_EventScript_Jasmine::
# 10 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	lock
# 11 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	faceplayer
# 12 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	goto_if_set FLAG_JASMINE_DEFEATED, OneIsland_TreasureBeach_EventScript_RematchJasmine
# 13 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	msgbox OneIsland_TreasureBeach_Text_Jasmine, MSGBOX_YESNO
# 14 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_TreasureBeach_EventScript_NoJasmine
# 15 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, OneIsland_TreasureBeach_Text_YesJasmine, OneIsland_TreasureBeach_Text_JasmineDefeat, OneIsland_TreasureBeach_EventScript_PostJasmine, NO_MUSIC
# 16 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	release
# 17 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	end
# 18 "data/maps/OneIsland_TreasureBeach/scripts.pory"

# 19 "data/maps/OneIsland_TreasureBeach/scripts.pory"
OneIsland_TreasureBeach_EventScript_PostJasmine::
# 20 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	msgbox OneIsland_TreasureBeach_Text_JasminePostBattle
# 21 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	setflag FLAG_JASMINE_DEFEATED
# 22 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	cleartrainerflag TRAINER_JASMINE
# 23 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	release
# 24 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	end
# 25 "data/maps/OneIsland_TreasureBeach/scripts.pory"

# 26 "data/maps/OneIsland_TreasureBeach/scripts.pory"
OneIsland_TreasureBeach_EventScript_CantRematchJasmine::
# 27 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	msgbox OneIsland_TreasureBeach_Text_JasminePostBattle
# 28 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	release
# 29 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	end
# 30 "data/maps/OneIsland_TreasureBeach/scripts.pory"

# 31 "data/maps/OneIsland_TreasureBeach/scripts.pory"
OneIsland_TreasureBeach_EventScript_NoJasmine::
# 32 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	msgbox OneIsland_TreasureBeach_Text_NoJasmine
# 33 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	release
# 34 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	end
# 35 "data/maps/OneIsland_TreasureBeach/scripts.pory"

# 36 "data/maps/OneIsland_TreasureBeach/scripts.pory"
OneIsland_TreasureBeach_EventScript_RematchJasmine::
# 37 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	msgbox OneIsland_TreasureBeach_Text_RematchJasmine, MSGBOX_YESNO
# 38 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	goto_if_eq VAR_RESULT, NO, OneIsland_TreasureBeach_EventScript_NoJasmine
# 39 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, OneIsland_TreasureBeach_Text_YesRematchJasmine, OneIsland_TreasureBeach_Text_RematchJasmineDefeat, OneIsland_TreasureBeach_EventScript_PostRematchJasmine, NO_MUSIC
# 40 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	release
# 41 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	end
# 42 "data/maps/OneIsland_TreasureBeach/scripts.pory"

# 43 "data/maps/OneIsland_TreasureBeach/scripts.pory"
OneIsland_TreasureBeach_EventScript_PostRematchJasmine::
# 44 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	msgbox OneIsland_TreasureBeach_Text_RematchJasmineDefeat
# 45 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	cleartrainerflag TRAINER_JASMINE
# 46 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	release
# 47 "data/maps/OneIsland_TreasureBeach/scripts.pory"
	end
