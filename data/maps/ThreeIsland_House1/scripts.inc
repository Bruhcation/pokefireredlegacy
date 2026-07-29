# 1 "data/maps/ThreeIsland_House1/scripts.pory"

# 2 "data/maps/ThreeIsland_House1/scripts.pory"
ThreeIsland_House1_MapScripts::
# 3 "data/maps/ThreeIsland_House1/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, ThreeIsland_House1_OnLoad
# 4 "data/maps/ThreeIsland_House1/scripts.pory"
	.byte 0
# 5 "data/maps/ThreeIsland_House1/scripts.pory"

# 6 "data/maps/ThreeIsland_House1/scripts.pory"
ThreeIsland_House1_OnLoad::
# 7 "data/maps/ThreeIsland_House1/scripts.pory"
	special CheckBeatJohto
# 8 "data/maps/ThreeIsland_House1/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, ThreeIsland_House1_EventScript_ShowClerk
# 9 "data/maps/ThreeIsland_House1/scripts.pory"
	end
# 10 "data/maps/ThreeIsland_House1/scripts.pory"

# 11 "data/maps/ThreeIsland_House1/scripts.pory"
ThreeIsland_House1_EventScript_ShowClerk::
# 12 "data/maps/ThreeIsland_House1/scripts.pory"
	clearflag FLAG_SHOPJOHTO
# 13 "data/maps/ThreeIsland_House1/scripts.pory"
	end
# 14 "data/maps/ThreeIsland_House1/scripts.pory"

# 15 "data/maps/ThreeIsland_House1/scripts.pory"
ThreeIsland_House1_EventScript_Lostelle::
# 16 "data/maps/ThreeIsland_House1/scripts.pory"
	lock
# 17 "data/maps/ThreeIsland_House1/scripts.pory"
	faceplayer
# 18 "data/maps/ThreeIsland_House1/scripts.pory"
	special BufferBigGuyOrBigGirlString
# 19 "data/maps/ThreeIsland_House1/scripts.pory"
	msgbox ThreeIsland_House1_Text_YoureAlwaysSoCool
# 20 "data/maps/ThreeIsland_House1/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 21 "data/maps/ThreeIsland_House1/scripts.pory"
	waitmessage
# 22 "data/maps/ThreeIsland_House1/scripts.pory"
	call_if_unset FLAG_SHOPJOHTO, ThreeIsland_House1_EventScript_Berry2
# 23 "data/maps/ThreeIsland_House1/scripts.pory"
	pokemart ThreeIsland_House1_MartBerries
# 24 "data/maps/ThreeIsland_House1/scripts.pory"
	msgbox Text_PleaseComeAgain
# 25 "data/maps/ThreeIsland_House1/scripts.pory"
	release
# 26 "data/maps/ThreeIsland_House1/scripts.pory"
	end
# 27 "data/maps/ThreeIsland_House1/scripts.pory"

# 28 "data/maps/ThreeIsland_House1/scripts.pory"
ThreeIsland_House1_EventScript_Berry2::
# 29 "data/maps/ThreeIsland_House1/scripts.pory"
	pokemart ThreeIsland_House1_MartBerries2
# 30 "data/maps/ThreeIsland_House1/scripts.pory"
	msgbox Text_PleaseComeAgain
# 31 "data/maps/ThreeIsland_House1/scripts.pory"
	release
# 32 "data/maps/ThreeIsland_House1/scripts.pory"
	end
# 33 "data/maps/ThreeIsland_House1/scripts.pory"

# 34 "data/maps/ThreeIsland_House1/scripts.pory"
	.align 2
# 35 "data/maps/ThreeIsland_House1/scripts.pory"
ThreeIsland_House1_MartBerries::
# 36 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 37 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 38 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 39 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 40 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 41 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 42 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 43 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 44 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 45 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 46 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 47 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 48 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 49 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 50 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 51 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 52 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_NONE
# 53 "data/maps/ThreeIsland_House1/scripts.pory"
	release
# 54 "data/maps/ThreeIsland_House1/scripts.pory"
	end
# 55 "data/maps/ThreeIsland_House1/scripts.pory"

# 56 "data/maps/ThreeIsland_House1/scripts.pory"
	.align 2
# 57 "data/maps/ThreeIsland_House1/scripts.pory"
ThreeIsland_House1_MartBerries2::
# 58 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 59 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_CHESTO_BERRY
# 60 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_PECHA_BERRY
# 61 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_RAWST_BERRY
# 62 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_ASPEAR_BERRY
# 63 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_PERSIM_BERRY
# 64 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_LEPPA_BERRY
# 65 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_ORAN_BERRY
# 66 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_BERRY_JUICE
# 67 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 68 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_LUM_BERRY
# 69 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_FIGY_BERRY
# 70 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_WIKI_BERRY
# 71 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_MAGO_BERRY
# 72 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_AGUAV_BERRY
# 73 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_IAPAPA_BERRY
# 74 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_LIECHI_BERRY
# 75 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_GANLON_BERRY
# 76 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_SALAC_BERRY
# 77 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_APICOT_BERRY
# 78 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_PETAYA_BERRY
# 79 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_LANSAT_BERRY
# 80 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_STARF_BERRY
# 81 "data/maps/ThreeIsland_House1/scripts.pory"
	.2byte ITEM_NONE
# 82 "data/maps/ThreeIsland_House1/scripts.pory"
	release
# 83 "data/maps/ThreeIsland_House1/scripts.pory"
	end
# 84 "data/maps/ThreeIsland_House1/scripts.pory"

# 85 "data/maps/ThreeIsland_House1/scripts.pory"
ThreeIsland_House1_EventScript_DisplayCase::
# 86 "data/maps/ThreeIsland_House1/scripts.pory"
	msgbox ThreeIsland_House1_Text_RareRocksGemsDisplayed, MSGBOX_SIGN
# 87 "data/maps/ThreeIsland_House1/scripts.pory"
	end
