# 1 "data/maps/TwoIsland/scripts.pory"

# 2 "data/maps/TwoIsland/scripts.pory"
TwoIsland_MapScripts::
# 3 "data/maps/TwoIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_OnTransition
# 4 "data/maps/TwoIsland/scripts.pory"
	.byte 0
# 5 "data/maps/TwoIsland/scripts.pory"

# 6 "data/maps/TwoIsland/scripts.pory"
TwoIsland_OnTransition::
# 7 "data/maps/TwoIsland/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_TWO_ISLAND
# 8 "data/maps/TwoIsland/scripts.pory"
	setflag FLAG_VISITED_TWO_ISLAND
# 9 "data/maps/TwoIsland/scripts.pory"
	call TwoIsland_EventScript_SetShopState
# 10 "data/maps/TwoIsland/scripts.pory"
	end
# 11 "data/maps/TwoIsland/scripts.pory"

# 12 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_SetShopState::
# 13 "data/maps/TwoIsland/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, TwoIsland_EventScript_SetShopStateAfterHoennLink
# 14 "data/maps/TwoIsland/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, TwoIsland_EventScript_SetShopStateAfterChampion
# 15 "data/maps/TwoIsland/scripts.pory"
	goto_if_set FLAG_RESCUED_LOSTELLE, TwoIsland_EventScript_SetShopStateAfterLostelleRescue
# 16 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_SetShopStateDefault
# 17 "data/maps/TwoIsland/scripts.pory"
	end
# 18 "data/maps/TwoIsland/scripts.pory"

# 19 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterHoennLink::
# 20 "data/maps/TwoIsland/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_SetShopInitial
# 21 "data/maps/TwoIsland/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_EXPANDED_1, TwoIsland_EventScript_SetShopExpanded1
# 22 "data/maps/TwoIsland/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_EXPANDED_2, TwoIsland_EventScript_SetShopExpanded2
# 23 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded3
# 24 "data/maps/TwoIsland/scripts.pory"
	end
# 25 "data/maps/TwoIsland/scripts.pory"

# 26 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterChampion::
# 27 "data/maps/TwoIsland/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_SetShopInitial
# 28 "data/maps/TwoIsland/scripts.pory"
	goto_if_unset FLAG_RESCUED_LOSTELLE, TwoIsland_EventScript_SetShopInitial
# 29 "data/maps/TwoIsland/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_EXPANDED_1, TwoIsland_EventScript_SetShopExpanded1
# 30 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded2
# 31 "data/maps/TwoIsland/scripts.pory"
	end
# 32 "data/maps/TwoIsland/scripts.pory"

# 33 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_SetShopStateAfterLostelleRescue::
# 34 "data/maps/TwoIsland/scripts.pory"
	goto_if_unset FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_SetShopInitial
# 35 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_SetShopExpanded1
# 36 "data/maps/TwoIsland/scripts.pory"
	end
# 37 "data/maps/TwoIsland/scripts.pory"

# 38 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_SetShopStateDefault::
# 39 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_SetShopInitial
# 40 "data/maps/TwoIsland/scripts.pory"
	end
# 41 "data/maps/TwoIsland/scripts.pory"

# 42 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_SetShopInitial::
# 43 "data/maps/TwoIsland/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 1
# 44 "data/maps/TwoIsland/scripts.pory"
	return
# 45 "data/maps/TwoIsland/scripts.pory"

# 46 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_SetShopExpanded1::
# 47 "data/maps/TwoIsland/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 2
# 48 "data/maps/TwoIsland/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_WOMAN
# 49 "data/maps/TwoIsland/scripts.pory"
	return
# 50 "data/maps/TwoIsland/scripts.pory"

# 51 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_SetShopExpanded2::
# 52 "data/maps/TwoIsland/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 3
# 53 "data/maps/TwoIsland/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_BEAUTY
# 54 "data/maps/TwoIsland/scripts.pory"
	return
# 55 "data/maps/TwoIsland/scripts.pory"

# 56 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_SetShopExpanded3::
# 57 "data/maps/TwoIsland/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND, 4
# 58 "data/maps/TwoIsland/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_SUPER_NERD
# 59 "data/maps/TwoIsland/scripts.pory"
	return
# 60 "data/maps/TwoIsland/scripts.pory"

# 61 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_Clerk::
# 62 "data/maps/TwoIsland/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 63 "data/maps/TwoIsland/scripts.pory"
	lock
# 64 "data/maps/TwoIsland/scripts.pory"
	faceplayer
# 65 "data/maps/TwoIsland/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 4, TwoIsland_EventScript_ClerkShopExpanded3
# 66 "data/maps/TwoIsland/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 3, TwoIsland_EventScript_ClerkShopExpanded2
# 67 "data/maps/TwoIsland/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 2, TwoIsland_EventScript_ClerkShopExpanded1
# 68 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_ClerkShopInitial
# 69 "data/maps/TwoIsland/scripts.pory"
	end
# 70 "data/maps/TwoIsland/scripts.pory"

# 71 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_ClerkShopExpanded3::
# 72 "data/maps/TwoIsland/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_EXPANDED_3, TwoIsland_EventScript_ClerkShopSkipIntro
# 73 "data/maps/TwoIsland/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_EXPANDED_3
# 74 "data/maps/TwoIsland/scripts.pory"
	message TwoIsland_Text_BringingItemsFromDistantLands
# 75 "data/maps/TwoIsland/scripts.pory"
	waitmessage
# 76 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded3
# 77 "data/maps/TwoIsland/scripts.pory"
	end
# 78 "data/maps/TwoIsland/scripts.pory"

# 79 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_ClerkShopExpanded2::
# 80 "data/maps/TwoIsland/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_EXPANDED_2, TwoIsland_EventScript_ClerkShopSkipIntro
# 81 "data/maps/TwoIsland/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_EXPANDED_2
# 82 "data/maps/TwoIsland/scripts.pory"
	message TwoIsland_Text_HopeYouGiveItYourBest
# 83 "data/maps/TwoIsland/scripts.pory"
	waitmessage
# 84 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded2
# 85 "data/maps/TwoIsland/scripts.pory"
	end
# 86 "data/maps/TwoIsland/scripts.pory"

# 87 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_ClerkShopExpanded1::
# 88 "data/maps/TwoIsland/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_EXPANDED_1, TwoIsland_EventScript_ClerkShopSkipIntro
# 89 "data/maps/TwoIsland/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_EXPANDED_1
# 90 "data/maps/TwoIsland/scripts.pory"
	message TwoIsland_Text_AddedMerchandiseForLostelle
# 91 "data/maps/TwoIsland/scripts.pory"
	waitmessage
# 92 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_ShopExpanded1
# 93 "data/maps/TwoIsland/scripts.pory"
	end
# 94 "data/maps/TwoIsland/scripts.pory"

# 95 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_ClerkShopInitial::
# 96 "data/maps/TwoIsland/scripts.pory"
	goto_if_set FLAG_TWO_ISLAND_SHOP_INTRODUCED, TwoIsland_EventScript_ClerkShopSkipIntro
# 97 "data/maps/TwoIsland/scripts.pory"
	setflag FLAG_TWO_ISLAND_SHOP_INTRODUCED
# 98 "data/maps/TwoIsland/scripts.pory"
	message TwoIsland_Text_WelcomeToShopMerchandiseLimited
# 99 "data/maps/TwoIsland/scripts.pory"
	waitmessage
# 100 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_ShopInitial
# 101 "data/maps/TwoIsland/scripts.pory"
	end
# 102 "data/maps/TwoIsland/scripts.pory"

# 103 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_ClerkShopSkipIntro::
# 104 "data/maps/TwoIsland/scripts.pory"
	message Text_MayIHelpYou
# 105 "data/maps/TwoIsland/scripts.pory"
	waitmessage
# 106 "data/maps/TwoIsland/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 4, TwoIsland_EventScript_ShopExpanded3
# 107 "data/maps/TwoIsland/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 3, TwoIsland_EventScript_ShopExpanded2
# 108 "data/maps/TwoIsland/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_TWO_ISLAND, 2, TwoIsland_EventScript_ShopExpanded1
# 109 "data/maps/TwoIsland/scripts.pory"
	goto TwoIsland_EventScript_ShopInitial
# 110 "data/maps/TwoIsland/scripts.pory"
	end
# 111 "data/maps/TwoIsland/scripts.pory"

# 112 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_ShopInitial::
# 113 "data/maps/TwoIsland/scripts.pory"
	pokemart TwoIsland_Items_ShopInitial
# 114 "data/maps/TwoIsland/scripts.pory"
	msgbox Text_PleaseComeAgain
# 115 "data/maps/TwoIsland/scripts.pory"
	release
# 116 "data/maps/TwoIsland/scripts.pory"
	end
# 117 "data/maps/TwoIsland/scripts.pory"

# 118 "data/maps/TwoIsland/scripts.pory"
	.align 2
# 119 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Items_ShopInitial::
# 120 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_POKE_BALL
# 121 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 122 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 123 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_NONE
# 124 "data/maps/TwoIsland/scripts.pory"
	release
# 125 "data/maps/TwoIsland/scripts.pory"
	end
# 126 "data/maps/TwoIsland/scripts.pory"

# 127 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_ShopExpanded1::
# 128 "data/maps/TwoIsland/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded1
# 129 "data/maps/TwoIsland/scripts.pory"
	msgbox Text_PleaseComeAgain
# 130 "data/maps/TwoIsland/scripts.pory"
	release
# 131 "data/maps/TwoIsland/scripts.pory"
	end
# 132 "data/maps/TwoIsland/scripts.pory"

# 133 "data/maps/TwoIsland/scripts.pory"
	.align 2
# 134 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Items_ShopExpanded1::
# 135 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_POKE_BALL
# 136 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 137 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 138 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 139 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 140 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_SODA_POP
# 141 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 142 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 143 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_MOON_STONE
# 144 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_SUN_STONE
# 145 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 146 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 147 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_METAL_COAT
# 148 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_NONE
# 149 "data/maps/TwoIsland/scripts.pory"
	release
# 150 "data/maps/TwoIsland/scripts.pory"
	end
# 151 "data/maps/TwoIsland/scripts.pory"

# 152 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_ShopExpanded2::
# 153 "data/maps/TwoIsland/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded2
# 154 "data/maps/TwoIsland/scripts.pory"
	msgbox Text_PleaseComeAgain
# 155 "data/maps/TwoIsland/scripts.pory"
	release
# 156 "data/maps/TwoIsland/scripts.pory"
	end
# 157 "data/maps/TwoIsland/scripts.pory"

# 158 "data/maps/TwoIsland/scripts.pory"
	.align 2
# 159 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Items_ShopExpanded2::
# 160 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_POKE_BALL
# 161 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 162 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 163 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 164 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 165 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 166 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 167 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_LEMONADE
# 168 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_SODA_POP
# 169 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 170 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 171 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 172 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 173 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_METAL_COAT
# 174 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 175 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_MOON_STONE
# 176 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_SUN_STONE
# 177 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_NONE
# 178 "data/maps/TwoIsland/scripts.pory"
	release
# 179 "data/maps/TwoIsland/scripts.pory"
	end
# 180 "data/maps/TwoIsland/scripts.pory"

# 181 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_ShopExpanded3::
# 182 "data/maps/TwoIsland/scripts.pory"
	pokemart TwoIsland_Items_ShopExpanded3
# 183 "data/maps/TwoIsland/scripts.pory"
	msgbox Text_PleaseComeAgain
# 184 "data/maps/TwoIsland/scripts.pory"
	release
# 185 "data/maps/TwoIsland/scripts.pory"
	end
# 186 "data/maps/TwoIsland/scripts.pory"

# 187 "data/maps/TwoIsland/scripts.pory"
	.align 2
# 188 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Items_ShopExpanded3::
# 189 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_POKE_BALL
# 190 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 191 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 192 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 193 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 194 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_LEMONADE
# 195 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_SODA_POP
# 196 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_FRESH_WATER
# 197 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_MOOMOO_MILK
# 198 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
# 199 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
# 200 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 201 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 202 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_POMEG_BERRY
# 203 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_KELPSY_BERRY
# 204 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_QUALOT_BERRY
# 205 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_HONDEW_BERRY
# 206 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_GREPA_BERRY
# 207 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_TAMATO_BERRY
# 208 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_BRICK_PIECE
# 209 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 210 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_METAL_POWDER
# 211 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_SMOKE_BALL
# 212 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_STICK
# 213 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 214 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 215 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_METAL_COAT
# 216 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_SOOTHE_BELL
# 217 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_MOON_STONE
# 218 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_SUN_STONE
# 219 "data/maps/TwoIsland/scripts.pory"
	.2byte ITEM_NONE
# 220 "data/maps/TwoIsland/scripts.pory"
	release
# 221 "data/maps/TwoIsland/scripts.pory"
	end
# 222 "data/maps/TwoIsland/scripts.pory"

# 223 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_Sailor::
# 224 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_FellowMovedFromCeladonCity, MSGBOX_NPC
# 225 "data/maps/TwoIsland/scripts.pory"
	end
# 226 "data/maps/TwoIsland/scripts.pory"

# 227 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_Woman::
# 228 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_ShopkeepersBrotherWorksGameCorner, MSGBOX_NPC
# 229 "data/maps/TwoIsland/scripts.pory"
	end
# 230 "data/maps/TwoIsland/scripts.pory"

# 231 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_Beauty::
# 232 "data/maps/TwoIsland/scripts.pory"
	lock
# 233 "data/maps/TwoIsland/scripts.pory"
	faceplayer
# 234 "data/maps/TwoIsland/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 4
# 235 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_BrunoCameToIslandWhileBack
# 236 "data/maps/TwoIsland/scripts.pory"
	release
# 237 "data/maps/TwoIsland/scripts.pory"
	end
# 238 "data/maps/TwoIsland/scripts.pory"

# 239 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_SuperNerd::
# 240 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_BuyRareItemsHere, MSGBOX_NPC
# 241 "data/maps/TwoIsland/scripts.pory"
	end
# 242 "data/maps/TwoIsland/scripts.pory"

# 243 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_Boy::
# 244 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_OldWomanLivesOutOnCape, MSGBOX_NPC
# 245 "data/maps/TwoIsland/scripts.pory"
	end
# 246 "data/maps/TwoIsland/scripts.pory"

# 247 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_LittleBoy::
# 248 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_HaveYouTriedJumpingGame, MSGBOX_NPC
# 249 "data/maps/TwoIsland/scripts.pory"
	end
# 250 "data/maps/TwoIsland/scripts.pory"

# 251 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_IslandSign::
# 252 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_IslandSign, MSGBOX_SIGN
# 253 "data/maps/TwoIsland/scripts.pory"
	end
# 254 "data/maps/TwoIsland/scripts.pory"

# 255 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_JoyfulGameCornerSign::
# 256 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_JoyfulGameCornerSign, MSGBOX_SIGN
# 257 "data/maps/TwoIsland/scripts.pory"
	end
# 258 "data/maps/TwoIsland/scripts.pory"

# 259 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_FastCurrentSign::
# 260 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_DangerFastCurrent, MSGBOX_SIGN
# 261 "data/maps/TwoIsland/scripts.pory"
	end
# 262 "data/maps/TwoIsland/scripts.pory"

# 263 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_Casey::
# 264 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_Casey, MSGBOX_NPC
# 265 "data/maps/TwoIsland/scripts.pory"
	end
# 266 "data/maps/TwoIsland/scripts.pory"

# 267 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Text_Casey::
# 268 "data/maps/TwoIsland/scripts.pory"
	.string "Casey brings fury into \n"
# 269 "data/maps/TwoIsland/scripts.pory"
	.string "her double battles,\l"
# 270 "data/maps/TwoIsland/scripts.pory"
	.string "while also using cute POKéMON\l"
# 271 "data/maps/TwoIsland/scripts.pory"
	.string "in a interesting way.\p"
# 272 "data/maps/TwoIsland/scripts.pory"
	.string "Perhaps I should work on\n"
# 273 "data/maps/TwoIsland/scripts.pory"
	.string "my Double Battle Skills.$"
# 274 "data/maps/TwoIsland/scripts.pory"

# 275 "data/maps/TwoIsland/scripts.pory"
TwoIsland_EventScript_CaveSign::
# 276 "data/maps/TwoIsland/scripts.pory"
	msgbox TwoIsland_Text_CaveSign, MSGBOX_SIGN
# 277 "data/maps/TwoIsland/scripts.pory"
	end
# 278 "data/maps/TwoIsland/scripts.pory"

# 279 "data/maps/TwoIsland/scripts.pory"
TwoIsland_Text_CaveSign::
# 280 "data/maps/TwoIsland/scripts.pory"
	.string "WARNING: Dangerous Path\n"
# 281 "data/maps/TwoIsland/scripts.pory"
	.string "South of here.\p"
# 282 "data/maps/TwoIsland/scripts.pory"
	.string "Beware of Dark Caves and\n"
# 283 "data/maps/TwoIsland/scripts.pory"
	.string "High Currents!$"
