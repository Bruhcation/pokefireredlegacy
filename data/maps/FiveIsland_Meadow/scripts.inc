# 1 "data/maps/FiveIsland_Meadow/scripts.pory"

# 2 "data/maps/FiveIsland_Meadow/scripts.pory"
.set LOCALID_ROCKET, 11
# 3 "data/maps/FiveIsland_Meadow/scripts.pory"

# 4 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_MapScripts::
# 5 "data/maps/FiveIsland_Meadow/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_Meadow_OnLoad
# 6 "data/maps/FiveIsland_Meadow/scripts.pory"
	.byte 0
# 7 "data/maps/FiveIsland_Meadow/scripts.pory"

# 8 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_OnLoad::
# 9 "data/maps/FiveIsland_Meadow/scripts.pory"
	setobjectxyperm LOCALID_ROCKET, 14, 23
# 10 "data/maps/FiveIsland_Meadow/scripts.pory"
	applymovement LOCALID_ROCKET, Common_Movement_FaceUp
# 11 "data/maps/FiveIsland_Meadow/scripts.pory"
	call_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
# 12 "data/maps/FiveIsland_Meadow/scripts.pory"
	special CheckBeatSeviiChamps
# 13 "data/maps/FiveIsland_Meadow/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_Meadow_EventScript_ShowClerk
# 14 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 15 "data/maps/FiveIsland_Meadow/scripts.pory"

# 16 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_WarehouseDoor::
# 17 "data/maps/FiveIsland_Meadow/scripts.pory"
	lockall
# 18 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen
# 19 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_set FLAG_LEARNED_YES_NAH_CHANSEY, FiveIsland_Meadow_EventScript_OpenWarehouseDoor
# 20 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_EnteredPasswordAnotherNeeded
# 21 "data/maps/FiveIsland_Meadow/scripts.pory"
	releaseall
# 22 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 23 "data/maps/FiveIsland_Meadow/scripts.pory"

# 24 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_OpenWarehouseDoor::
# 25 "data/maps/FiveIsland_Meadow/scripts.pory"
	setflag FLAG_UNLOCKED_ROCKET_WAREHOUSE
# 26 "data/maps/FiveIsland_Meadow/scripts.pory"
	message FiveIsland_Meadow_Text_EnteredPasswordDoorOpened
# 27 "data/maps/FiveIsland_Meadow/scripts.pory"
	waitmessage
# 28 "data/maps/FiveIsland_Meadow/scripts.pory"
	delay 60
# 29 "data/maps/FiveIsland_Meadow/scripts.pory"
	call FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
# 30 "data/maps/FiveIsland_Meadow/scripts.pory"
	special DrawWholeMapView
# 31 "data/maps/FiveIsland_Meadow/scripts.pory"
	playse SE_PIN
# 32 "data/maps/FiveIsland_Meadow/scripts.pory"
	waitse
# 33 "data/maps/FiveIsland_Meadow/scripts.pory"
	releaseall
# 34 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 35 "data/maps/FiveIsland_Meadow/scripts.pory"

# 36 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen::
# 37 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_WarehouseDoorAlreadyOpen
# 38 "data/maps/FiveIsland_Meadow/scripts.pory"
	releaseall
# 39 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 40 "data/maps/FiveIsland_Meadow/scripts.pory"

# 41 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked::
# 42 "data/maps/FiveIsland_Meadow/scripts.pory"
	setmetatile 12, 21, METATILE_SeviiIslands45_RocketWarehouseDoor_Unlocked, 1
# 43 "data/maps/FiveIsland_Meadow/scripts.pory"
	return
# 44 "data/maps/FiveIsland_Meadow/scripts.pory"

# 45 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Rocket1::
# 46 "data/maps/FiveIsland_Meadow/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_49, FiveIsland_Meadow_Text_Rocket1Intro, FiveIsland_Meadow_Text_Rocket1Defeat
# 47 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 49 "data/maps/FiveIsland_Meadow/scripts.pory"

# 50 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Rocket2::
# 51 "data/maps/FiveIsland_Meadow/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_50, FiveIsland_Meadow_Text_Rocket2Intro, FiveIsland_Meadow_Text_Rocket2Defeat
# 52 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 54 "data/maps/FiveIsland_Meadow/scripts.pory"

# 55 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Rocket3::
# 56 "data/maps/FiveIsland_Meadow/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_51, FiveIsland_Meadow_Text_Rocket3Intro, FiveIsland_Meadow_Text_Rocket3Defeat
# 57 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket3PostBattle, MSGBOX_AUTOCLOSE
# 58 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 59 "data/maps/FiveIsland_Meadow/scripts.pory"

# 60 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Gym1::
# 61 "data/maps/FiveIsland_Meadow/scripts.pory"
	trainerbattle_single TRAINER_LEDO, FiveIsland_Meadow_Text_Gym1, FiveIsland_Meadow_Text_GymDefeat
# 62 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Gym1Post, MSGBOX_AUTOCLOSE
# 63 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 64 "data/maps/FiveIsland_Meadow/scripts.pory"

# 65 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Gym1::
# 66 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "You will tremble before\n"
# 67 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "these mighty BUGS!$"
# 68 "data/maps/FiveIsland_Meadow/scripts.pory"

# 69 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_GymDefeat::
# 70 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Oh, I failed the MASTER.$"
# 71 "data/maps/FiveIsland_Meadow/scripts.pory"

# 72 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Gym1Post::
# 73 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "I was supposed to\n"
# 74 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "look over this area\l"
# 75 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "for the MASTER,\l"
# 76 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "but I don't see him here.$"
# 77 "data/maps/FiveIsland_Meadow/scripts.pory"

# 78 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Gym2::
# 79 "data/maps/FiveIsland_Meadow/scripts.pory"
	trainerbattle_single TRAINER_DUNE, FiveIsland_Meadow_Text_Gym2, FiveIsland_Meadow_Text_Gym2Defeat
# 80 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Gym2Post, MSGBOX_AUTOCLOSE
# 81 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 82 "data/maps/FiveIsland_Meadow/scripts.pory"

# 83 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Gym2::
# 84 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Hey! I'll have you know\n"
# 85 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "my DUNSPARCE has taken\l"
# 86 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "down many great foes,\l"
# 87 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "even CLAIR!$"
# 88 "data/maps/FiveIsland_Meadow/scripts.pory"

# 89 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Gym2Defeat::
# 90 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "I thought it could work…$"
# 91 "data/maps/FiveIsland_Meadow/scripts.pory"

# 92 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Gym2Post::
# 93 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Even though the MASTER\n"
# 94 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "doesn't approve of\l"
# 95 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "DUNSPARCE, he is still\l"
# 96 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "one of the best!$"
# 97 "data/maps/FiveIsland_Meadow/scripts.pory"

# 98 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Gym3::
# 99 "data/maps/FiveIsland_Meadow/scripts.pory"
	trainerbattle_single TRAINER_CAMMY, FiveIsland_Meadow_Text_Gym3, FiveIsland_Meadow_Text_Gym3Defeat
# 100 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Gym3Post, MSGBOX_AUTOCLOSE
# 101 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 102 "data/maps/FiveIsland_Meadow/scripts.pory"

# 103 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Gym3::
# 104 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "You shall fall to FURRET!$"
# 105 "data/maps/FiveIsland_Meadow/scripts.pory"

# 106 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Gym3Defeat::
# 107 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Looks like I fell.$"
# 108 "data/maps/FiveIsland_Meadow/scripts.pory"

# 109 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Gym3Post::
# 110 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "I actually saw\n"
# 111 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "the MASTER head south.\p"
# 112 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Could he be at the\n"
# 113 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "MEMORIAL PILLAR?$"
# 114 "data/maps/FiveIsland_Meadow/scripts.pory"

# 115 "data/maps/FiveIsland_Meadow/scripts.pory"

# 116 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Rocket::
# 117 "data/maps/FiveIsland_Meadow/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_46, FiveIsland_Meadow_Text_RocketIntro, FiveIsland_Meadow_Text_RocketDefeat
# 118 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_set FLAG_ENABLE_SHIP_BIRTH_ISLAND, FiveIsland_Meadow_EventScript_RocketBlocking
# 119 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_RocketPostBattle, MSGBOX_AUTOCLOSE
# 120 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 121 "data/maps/FiveIsland_Meadow/scripts.pory"

# 122 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_RocketBlocking::
# 123 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_set FLAG_BIRTH_ISLAND_GIDEON, EventScript_Return
# 124 "data/maps/FiveIsland_Meadow/scripts.pory"
	setflag FLAG_HIDE_BIRTH_ISLAND_METEORITE
# 125 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_RocketBlock, MSGBOX_NPC
# 126 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 127 "data/maps/FiveIsland_Meadow/scripts.pory"

# 128 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_RocketIntro::
# 129 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Hey, I just got back\n"
# 130 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "from OUTCAST ISLAND and\l"
# 131 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "now there's guards!$"
# 132 "data/maps/FiveIsland_Meadow/scripts.pory"

# 133 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_RocketDefeat::
# 134 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Was I too late?$"
# 135 "data/maps/FiveIsland_Meadow/scripts.pory"

# 136 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_RocketPostBattle::
# 137 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Maybe it was a good thing\n"
# 138 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "I went to OUTCAST ISLAND.\p"
# 139 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Even though I found nothing…$"
# 140 "data/maps/FiveIsland_Meadow/scripts.pory"

# 141 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_ShowClerk::
# 142 "data/maps/FiveIsland_Meadow/scripts.pory"
	clearflag FLAG_SHOPCHAMP
# 143 "data/maps/FiveIsland_Meadow/scripts.pory"
	call_if_set FLAG_BIRTH_ISLAND_GIDEON, FiveIsland_Meadow_NotBlockingWarehouse
# 144 "data/maps/FiveIsland_Meadow/scripts.pory"
	call_if_unset FLAG_BIRTH_ISLAND_GIDEON, FiveIsland_Meadow_BlockingWarehouse
# 145 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 146 "data/maps/FiveIsland_Meadow/scripts.pory"

# 147 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_BlockingWarehouse::
# 148 "data/maps/FiveIsland_Meadow/scripts.pory"
	setobjectxyperm LOCALID_ROCKET, 12, 22
# 149 "data/maps/FiveIsland_Meadow/scripts.pory"
	applymovement LOCALID_ROCKET, Common_Movement_FaceDown
# 150 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 151 "data/maps/FiveIsland_Meadow/scripts.pory"

# 152 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_NotBlockingWarehouse::
# 153 "data/maps/FiveIsland_Meadow/scripts.pory"
	setobjectxyperm LOCALID_ROCKET, 14, 23
# 154 "data/maps/FiveIsland_Meadow/scripts.pory"
	applymovement LOCALID_ROCKET, Common_Movement_FaceUp
# 155 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 156 "data/maps/FiveIsland_Meadow/scripts.pory"

# 157 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Clerk::
# 158 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 159 "data/maps/FiveIsland_Meadow/scripts.pory"
	lock
# 160 "data/maps/FiveIsland_Meadow/scripts.pory"
	faceplayer
# 161 "data/maps/FiveIsland_Meadow/scripts.pory"
	message FiveIsland_Meadow_Text_MayIHelpYou
# 162 "data/maps/FiveIsland_Meadow/scripts.pory"
	waitmessage
# 163 "data/maps/FiveIsland_Meadow/scripts.pory"
	pokemart FiveIsland_Meadow_Items
# 164 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox Text_PleaseComeAgain
# 165 "data/maps/FiveIsland_Meadow/scripts.pory"
	release
# 166 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 167 "data/maps/FiveIsland_Meadow/scripts.pory"

# 168 "data/maps/FiveIsland_Meadow/scripts.pory"
	.align 2
# 169 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Items::
# 170 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 171 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 172 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 173 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_SCOPE_LENS
# 174 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 175 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 176 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_EVERSTONE
# 177 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 178 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 179 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 180 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 181 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 182 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_LUCKY_PUNCH
# 183 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 184 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_THICK_CLUB
# 185 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_PP_UP
# 186 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_SAFARI_BALL
# 187 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_WHITE_FLUTE
# 188 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_BLACK_FLUTE
# 189 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_NONE
# 190 "data/maps/FiveIsland_Meadow/scripts.pory"
	release
# 191 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 192 "data/maps/FiveIsland_Meadow/scripts.pory"

# 193 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Beast::
# 194 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_set FLAG_ENABLE_SHIP_NAVEL_ROCK, FiveIsland_Meadow_EventScript_Beast3
# 195 "data/maps/FiveIsland_Meadow/scripts.pory"
	call_if_unset FLAG_SEEN_BEAST, FiveIsland_Meadow_EventScript_BeastShow
# 196 "data/maps/FiveIsland_Meadow/scripts.pory"
	call_if_unset FLAG_ENTEI_FLAG, FiveIsland_Meadow_EventScript_Entei
# 197 "data/maps/FiveIsland_Meadow/scripts.pory"
	call_if_unset FLAG_RAIKOU_FLAG, FiveIsland_Meadow_EventScript_Raikou
# 198 "data/maps/FiveIsland_Meadow/scripts.pory"
	call_if_unset FLAG_SUICANE_FLAG, FiveIsland_Meadow_EventScript_Suicune
# 199 "data/maps/FiveIsland_Meadow/scripts.pory"
	special RoamingBeasts
# 200 "data/maps/FiveIsland_Meadow/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_Meadow_EventScript_GiveTicket
# 201 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Beasts22, MSGBOX_NPC
# 202 "data/maps/FiveIsland_Meadow/scripts.pory"
	release
# 203 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 204 "data/maps/FiveIsland_Meadow/scripts.pory"

# 205 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Suicune::
# 206 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_set FLAG_CAUGHT_SUICUNE, FiveIsland_Meadow_EventScript_Suicune2
# 207 "data/maps/FiveIsland_Meadow/scripts.pory"
	return
# 208 "data/maps/FiveIsland_Meadow/scripts.pory"

# 209 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Suicune2::
# 210 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Suicune, MSGBOX_NPC
# 211 "data/maps/FiveIsland_Meadow/scripts.pory"
	setflag FLAG_SUICANE_FLAG
# 212 "data/maps/FiveIsland_Meadow/scripts.pory"
	special InitRoamer
# 213 "data/maps/FiveIsland_Meadow/scripts.pory"
	return
# 214 "data/maps/FiveIsland_Meadow/scripts.pory"

# 215 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Suicune::
# 216 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Oh, you caught SUICUNE!\p"
# 217 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Must of been a lot of work\n"
# 218 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "to catch that POKEMON!\p"
# 219 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Perhaps the next one will roaming\n"
# 220 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "now that SUICUNE has been caught.\p"
# 221 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Good Luck!$"
# 222 "data/maps/FiveIsland_Meadow/scripts.pory"

# 223 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Entei::
# 224 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_set FLAG_CAUGHT_ENTEI, FiveIsland_Meadow_EventScript_Entei2
# 225 "data/maps/FiveIsland_Meadow/scripts.pory"
	return
# 226 "data/maps/FiveIsland_Meadow/scripts.pory"

# 227 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Entei2::
# 228 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Entei, MSGBOX_NPC
# 229 "data/maps/FiveIsland_Meadow/scripts.pory"
	setflag FLAG_ENTEI_FLAG
# 230 "data/maps/FiveIsland_Meadow/scripts.pory"
	special InitRoamer
# 231 "data/maps/FiveIsland_Meadow/scripts.pory"
	return
# 232 "data/maps/FiveIsland_Meadow/scripts.pory"

# 233 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Entei::
# 234 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Oh, you caught ENTEI!\p"
# 235 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Must of been a lot of work\n"
# 236 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "to catch that POKEMON!\p"
# 237 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Perhaps the next one will roaming\n"
# 238 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "now that ENTEI has been caught.\p"
# 239 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Good Luck!$"
# 240 "data/maps/FiveIsland_Meadow/scripts.pory"

# 241 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Raikou::
# 242 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_set FLAG_CAUGHT_RAIKOU, FiveIsland_Meadow_EventScript_Raikou2
# 243 "data/maps/FiveIsland_Meadow/scripts.pory"
	return
# 244 "data/maps/FiveIsland_Meadow/scripts.pory"

# 245 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Raikou2::
# 246 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Raikou, MSGBOX_NPC
# 247 "data/maps/FiveIsland_Meadow/scripts.pory"
	setflag FLAG_RAIKOU_FLAG
# 248 "data/maps/FiveIsland_Meadow/scripts.pory"
	special InitRoamer
# 249 "data/maps/FiveIsland_Meadow/scripts.pory"
	return
# 250 "data/maps/FiveIsland_Meadow/scripts.pory"

# 251 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Raikou::
# 252 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Oh, you caught RAIKOU!\p"
# 253 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Must of been a lot of work\n"
# 254 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "to catch that POKEMON!\p"
# 255 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Perhaps the next one will roaming\n"
# 256 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "now that RAIKOU has been caught.\p"
# 257 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Good Luck!$"
# 258 "data/maps/FiveIsland_Meadow/scripts.pory"

# 259 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_BeastShow::
# 260 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Beasts, MSGBOX_NPC
# 261 "data/maps/FiveIsland_Meadow/scripts.pory"
	waitmessage
# 262 "data/maps/FiveIsland_Meadow/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAIKOU
# 263 "data/maps/FiveIsland_Meadow/scripts.pory"
	special SetSeenMon
# 264 "data/maps/FiveIsland_Meadow/scripts.pory"
	showmonpic SPECIES_RAIKOU, 10, 3
# 265 "data/maps/FiveIsland_Meadow/scripts.pory"
	waitbuttonpress
# 266 "data/maps/FiveIsland_Meadow/scripts.pory"
	hidemonpic
# 267 "data/maps/FiveIsland_Meadow/scripts.pory"
	setvar VAR_0x8004, SPECIES_ENTEI
# 268 "data/maps/FiveIsland_Meadow/scripts.pory"
	special SetSeenMon
# 269 "data/maps/FiveIsland_Meadow/scripts.pory"
	showmonpic SPECIES_ENTEI, 10, 3
# 270 "data/maps/FiveIsland_Meadow/scripts.pory"
	waitbuttonpress
# 271 "data/maps/FiveIsland_Meadow/scripts.pory"
	hidemonpic
# 272 "data/maps/FiveIsland_Meadow/scripts.pory"
	setvar VAR_0x8004, SPECIES_SUICUNE
# 273 "data/maps/FiveIsland_Meadow/scripts.pory"
	special SetSeenMon
# 274 "data/maps/FiveIsland_Meadow/scripts.pory"
	showmonpic SPECIES_SUICUNE, 10, 3
# 275 "data/maps/FiveIsland_Meadow/scripts.pory"
	waitbuttonpress
# 276 "data/maps/FiveIsland_Meadow/scripts.pory"
	hidemonpic
# 277 "data/maps/FiveIsland_Meadow/scripts.pory"
	setflag FLAG_SEEN_BEAST
# 278 "data/maps/FiveIsland_Meadow/scripts.pory"
	return
# 279 "data/maps/FiveIsland_Meadow/scripts.pory"

# 280 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_GiveTicket::
# 281 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Beasts2, 
# 282 "data/maps/FiveIsland_Meadow/scripts.pory"
	giveitem ITEM_MYSTIC_TICKET
# 283 "data/maps/FiveIsland_Meadow/scripts.pory"
	setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
# 284 "data/maps/FiveIsland_Meadow/scripts.pory"
	releaseall
# 285 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 286 "data/maps/FiveIsland_Meadow/scripts.pory"

# 287 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Beast3::
# 288 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Beasts2, MSGBOX_NPC
# 289 "data/maps/FiveIsland_Meadow/scripts.pory"
	releaseall
# 290 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 291 "data/maps/FiveIsland_Meadow/scripts.pory"

# 292 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_RocketBlock::
# 293 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "GIDEON all of a sudden told me to\n"
# 294 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "block the door as he rushed out!\p"
# 295 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "I don't know what he was doing\n"
# 296 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "but he seemed alone, and a bunch\l"
# 297 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "of policeman are trying to get\l"
# 298 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "get out?$"
