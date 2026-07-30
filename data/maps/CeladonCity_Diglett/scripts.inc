# 1 "data/maps/CeladonCity_Diglett/scripts.pory"

# 2 "data/maps/CeladonCity_Diglett/scripts.pory"
CeladonCity_Diglett_MapScripts::
# 3 "data/maps/CeladonCity_Diglett/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_Diglett/scripts.pory"

# 5 "data/maps/CeladonCity_Diglett/scripts.pory"

# 6 "data/maps/CeladonCity_Diglett/scripts.pory"
CeladonCity_Diglett_EventScript_Hiker::
# 7 "data/maps/CeladonCity_Diglett/scripts.pory"
	lock
# 8 "data/maps/CeladonCity_Diglett/scripts.pory"
	faceplayer
# 9 "data/maps/CeladonCity_Diglett/scripts.pory"
	return
# 10 "data/maps/CeladonCity_Diglett/scripts.pory"
	end
# 11 "data/maps/CeladonCity_Diglett/scripts.pory"

# 12 "data/maps/CeladonCity_Diglett/scripts.pory"
CeladonCity_Diglett_EventScript_GuardHater::
# 13 "data/maps/CeladonCity_Diglett/scripts.pory"
	goto_if_set FLAG_GOT_DIG_NUGGET, CeladonCity_Diglett_EventScript_GuardHaterThanksPost
# 14 "data/maps/CeladonCity_Diglett/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_ROUTE5_ROUTE6_ROUTE7_ROUTE8_GATES, 1, CeladonCity_Diglett_EventScript_GuardHaterThanks
# 15 "data/maps/CeladonCity_Diglett/scripts.pory"
	return
# 16 "data/maps/CeladonCity_Diglett/scripts.pory"
	end
# 17 "data/maps/CeladonCity_Diglett/scripts.pory"

# 18 "data/maps/CeladonCity_Diglett/scripts.pory"
CeladonCity_Diglett_EventScript_GuardHaterThanks::
# 19 "data/maps/CeladonCity_Diglett/scripts.pory"
	checkitem ITEM_NUGGET
# 20 "data/maps/CeladonCity_Diglett/scripts.pory"
	giveitem ITEM_NUGGET
# 21 "data/maps/CeladonCity_Diglett/scripts.pory"
	setflag FLAG_GOT_DIG_NUGGET
# 22 "data/maps/CeladonCity_Diglett/scripts.pory"
	goto CeladonCity_Diglett_EventScript_GuardHaterThanksPost
# 23 "data/maps/CeladonCity_Diglett/scripts.pory"
	release
# 24 "data/maps/CeladonCity_Diglett/scripts.pory"
	end
# 25 "data/maps/CeladonCity_Diglett/scripts.pory"

# 26 "data/maps/CeladonCity_Diglett/scripts.pory"
CeladonCity_Diglett_EventScript_GuardHaterThanksPost::
# 27 "data/maps/CeladonCity_Diglett/scripts.pory"
	end
