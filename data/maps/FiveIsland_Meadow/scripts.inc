# 1 "data/maps/FiveIsland_Meadow/scripts.pory"

# 2 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_MapScripts::
# 3 "data/maps/FiveIsland_Meadow/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_Meadow_OnLoad
# 4 "data/maps/FiveIsland_Meadow/scripts.pory"
	.byte 0
# 5 "data/maps/FiveIsland_Meadow/scripts.pory"

# 6 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_OnLoad::
# 7 "data/maps/FiveIsland_Meadow/scripts.pory"
	call_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
# 8 "data/maps/FiveIsland_Meadow/scripts.pory"
	special CheckBeatSeviiChamps
# 9 "data/maps/FiveIsland_Meadow/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_Meadow_EventScript_ShowClerk
# 10 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 11 "data/maps/FiveIsland_Meadow/scripts.pory"

# 12 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_WarehouseDoor::
# 13 "data/maps/FiveIsland_Meadow/scripts.pory"
	lockall
# 14 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_set FLAG_UNLOCKED_ROCKET_WAREHOUSE, FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen
# 15 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_set FLAG_LEARNED_YES_NAH_CHANSEY, FiveIsland_Meadow_EventScript_OpenWarehouseDoor
# 16 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_EnteredPasswordAnotherNeeded
# 17 "data/maps/FiveIsland_Meadow/scripts.pory"
	releaseall
# 18 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 19 "data/maps/FiveIsland_Meadow/scripts.pory"

# 20 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_OpenWarehouseDoor::
# 21 "data/maps/FiveIsland_Meadow/scripts.pory"
	setflag FLAG_UNLOCKED_ROCKET_WAREHOUSE
# 22 "data/maps/FiveIsland_Meadow/scripts.pory"
	message FiveIsland_Meadow_Text_EnteredPasswordDoorOpened
# 23 "data/maps/FiveIsland_Meadow/scripts.pory"
	waitmessage
# 24 "data/maps/FiveIsland_Meadow/scripts.pory"
	delay 60
# 25 "data/maps/FiveIsland_Meadow/scripts.pory"
	call FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked
# 26 "data/maps/FiveIsland_Meadow/scripts.pory"
	special DrawWholeMapView
# 27 "data/maps/FiveIsland_Meadow/scripts.pory"
	playse SE_PIN
# 28 "data/maps/FiveIsland_Meadow/scripts.pory"
	waitse
# 29 "data/maps/FiveIsland_Meadow/scripts.pory"
	releaseall
# 30 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 31 "data/maps/FiveIsland_Meadow/scripts.pory"

# 32 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_WarehouseDoorAlreadyOpen::
# 33 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_WarehouseDoorAlreadyOpen
# 34 "data/maps/FiveIsland_Meadow/scripts.pory"
	releaseall
# 35 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 36 "data/maps/FiveIsland_Meadow/scripts.pory"

# 37 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_SetWarehouseDoorUnlocked::
# 38 "data/maps/FiveIsland_Meadow/scripts.pory"
	setmetatile 12, 21, METATILE_SeviiIslands45_RocketWarehouseDoor_Unlocked, 1
# 39 "data/maps/FiveIsland_Meadow/scripts.pory"
	return
# 40 "data/maps/FiveIsland_Meadow/scripts.pory"

# 41 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Rocket1::
# 42 "data/maps/FiveIsland_Meadow/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_49, FiveIsland_Meadow_Text_Rocket1Intro, FiveIsland_Meadow_Text_Rocket1Defeat
# 43 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
# 44 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 45 "data/maps/FiveIsland_Meadow/scripts.pory"

# 46 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Rocket2::
# 47 "data/maps/FiveIsland_Meadow/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_50, FiveIsland_Meadow_Text_Rocket2Intro, FiveIsland_Meadow_Text_Rocket2Defeat
# 48 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 50 "data/maps/FiveIsland_Meadow/scripts.pory"

# 51 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Rocket3::
# 52 "data/maps/FiveIsland_Meadow/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_51, FiveIsland_Meadow_Text_Rocket3Intro, FiveIsland_Meadow_Text_Rocket3Defeat
# 53 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Rocket3PostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 55 "data/maps/FiveIsland_Meadow/scripts.pory"

# 56 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Gym1::
# 57 "data/maps/FiveIsland_Meadow/scripts.pory"
	trainerbattle_single TRAINER_RUNNING_TRIATHLETE_F, FiveIsland_Meadow_Text_Gym1, FiveIsland_Meadow_Text_GymDefeat
# 58 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Gym1Post, MSGBOX_AUTOCLOSE
# 59 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 60 "data/maps/FiveIsland_Meadow/scripts.pory"

# 61 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Gym1::
# 62 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "You will tremble before\n"
# 63 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "these mighty BUGS!$"
# 64 "data/maps/FiveIsland_Meadow/scripts.pory"

# 65 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_GymDefeat::
# 66 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Oh, I failed the MASTER.$"
# 67 "data/maps/FiveIsland_Meadow/scripts.pory"

# 68 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Gym1Post::
# 69 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "I was supposed to\n"
# 70 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "look over this area\l"
# 71 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "for the MASTER,\l"
# 72 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "but I don't see him here.$"
# 73 "data/maps/FiveIsland_Meadow/scripts.pory"

# 74 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Gym2::
# 75 "data/maps/FiveIsland_Meadow/scripts.pory"
	trainerbattle_single TRAINER_RUNNING_TRIATHLETE_M, FiveIsland_Meadow_Text_Gym2, FiveIsland_Meadow_Text_Gym2Defeat
# 76 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Gym2Post, MSGBOX_AUTOCLOSE
# 77 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 78 "data/maps/FiveIsland_Meadow/scripts.pory"

# 79 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Gym2::
# 80 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Hey! I'll have you know\n"
# 81 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "my DUNSPARCE has taken\l"
# 82 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "down many great foes,\l"
# 83 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "even CLAIR!$"
# 84 "data/maps/FiveIsland_Meadow/scripts.pory"

# 85 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Gym2Defeat::
# 86 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "I thought it could work…$"
# 87 "data/maps/FiveIsland_Meadow/scripts.pory"

# 88 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Gym2Post::
# 89 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Even though the MASTER\n"
# 90 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "doesn't approve of\l"
# 91 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "DUNSPARCE, he is still\l"
# 92 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "one of the best!$"
# 93 "data/maps/FiveIsland_Meadow/scripts.pory"

# 94 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Gym3::
# 95 "data/maps/FiveIsland_Meadow/scripts.pory"
	trainerbattle_single TRAINER_POKEFAN_M, FiveIsland_Meadow_Text_Gym3, FiveIsland_Meadow_Text_Gym3Defeat
# 96 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Gym3Post, MSGBOX_AUTOCLOSE
# 97 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 98 "data/maps/FiveIsland_Meadow/scripts.pory"

# 99 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Gym3::
# 100 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "You shall fall to FURRET!$"
# 101 "data/maps/FiveIsland_Meadow/scripts.pory"

# 102 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Gym3Defeat::
# 103 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Looks like I fell.$"
# 104 "data/maps/FiveIsland_Meadow/scripts.pory"

# 105 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Gym3Post::
# 106 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "I actually saw\n"
# 107 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "the MASTER head south.\p"
# 108 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Could he be at the\n"
# 109 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "MEMORIAL PILLAR?$"
# 110 "data/maps/FiveIsland_Meadow/scripts.pory"

# 111 "data/maps/FiveIsland_Meadow/scripts.pory"

# 112 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Rocket::
# 113 "data/maps/FiveIsland_Meadow/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_46, FiveIsland_Meadow_Text_RocketIntro, FiveIsland_Meadow_Text_RocketDefeat
# 114 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_RocketPostBattle, MSGBOX_AUTOCLOSE
# 115 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 116 "data/maps/FiveIsland_Meadow/scripts.pory"

# 117 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_RocketIntro::
# 118 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Hey, I just got back\n"
# 119 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "from OUTCAST ISLAND and\l"
# 120 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "now there's guards!$"
# 121 "data/maps/FiveIsland_Meadow/scripts.pory"

# 122 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_RocketDefeat::
# 123 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Was I too late?$"
# 124 "data/maps/FiveIsland_Meadow/scripts.pory"

# 125 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_RocketPostBattle::
# 126 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Maybe it was a good thing\n"
# 127 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "I went to OUTCAST ISLAND.\p"
# 128 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Even though I found nothing…$"
# 129 "data/maps/FiveIsland_Meadow/scripts.pory"

# 130 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_ShowClerk::
# 131 "data/maps/FiveIsland_Meadow/scripts.pory"
	clearflag FLAG_SHOPCHAMP
# 132 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 133 "data/maps/FiveIsland_Meadow/scripts.pory"

# 134 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Clerk::
# 135 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 136 "data/maps/FiveIsland_Meadow/scripts.pory"
	lock
# 137 "data/maps/FiveIsland_Meadow/scripts.pory"
	faceplayer
# 138 "data/maps/FiveIsland_Meadow/scripts.pory"
	message FiveIsland_Meadow_Text_MayIHelpYou
# 139 "data/maps/FiveIsland_Meadow/scripts.pory"
	waitmessage
# 140 "data/maps/FiveIsland_Meadow/scripts.pory"
	pokemart FiveIsland_Meadow_Items
# 141 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox Text_PleaseComeAgain
# 142 "data/maps/FiveIsland_Meadow/scripts.pory"
	release
# 143 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 144 "data/maps/FiveIsland_Meadow/scripts.pory"

# 145 "data/maps/FiveIsland_Meadow/scripts.pory"
	.align 2
# 146 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Items::
# 147 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_SEA_INCENSE
# 148 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_LAX_INCENSE
# 149 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_MACHO_BRACE
# 150 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_EXP_SHARE
# 151 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_FOCUS_BAND
# 152 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_EVERSTONE
# 153 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_BRIGHT_POWDER
# 154 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_SHELL_BELL
# 155 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_QUICK_CLAW
# 156 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_WHITE_HERB
# 157 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_MENTAL_HERB
# 158 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_LUCKY_PUNCH
# 159 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_LIGHT_BALL
# 160 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_THICK_CLUB
# 161 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_PP_UP
# 162 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_SAFARI_BALL
# 163 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_WHITE_FLUTE
# 164 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_BLACK_FLUTE
# 165 "data/maps/FiveIsland_Meadow/scripts.pory"
	.2byte ITEM_NONE
# 166 "data/maps/FiveIsland_Meadow/scripts.pory"
	release
# 167 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 168 "data/maps/FiveIsland_Meadow/scripts.pory"

# 169 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Beast::
# 170 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_set FLAG_ENABLE_SHIP_NAVEL_ROCK, FiveIsland_Meadow_EventScript_Beast3
# 171 "data/maps/FiveIsland_Meadow/scripts.pory"
	call_if_unset FLAG_SEEN_BEAST, FiveIsland_Meadow_EventScript_BeastShow
# 172 "data/maps/FiveIsland_Meadow/scripts.pory"
	call_if_unset FLAG_ENTEI_FLAG, FiveIsland_Meadow_EventScript_Entei
# 173 "data/maps/FiveIsland_Meadow/scripts.pory"
	call_if_unset FLAG_RAIKOU_FLAG, FiveIsland_Meadow_EventScript_Raikou
# 174 "data/maps/FiveIsland_Meadow/scripts.pory"
	call_if_unset FLAG_SUICANE_FLAG, FiveIsland_Meadow_EventScript_Suicune
# 175 "data/maps/FiveIsland_Meadow/scripts.pory"
	special RoamingBeasts
# 176 "data/maps/FiveIsland_Meadow/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_Meadow_EventScript_GiveTicket
# 177 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Beasts22, MSGBOX_NPC
# 178 "data/maps/FiveIsland_Meadow/scripts.pory"
	release
# 179 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 180 "data/maps/FiveIsland_Meadow/scripts.pory"

# 181 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Suicune::
# 182 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_set FLAG_CAUGHT_SUICUNE, FiveIsland_Meadow_EventScript_Suicune2
# 183 "data/maps/FiveIsland_Meadow/scripts.pory"
	return
# 184 "data/maps/FiveIsland_Meadow/scripts.pory"

# 185 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Suicune2::
# 186 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Suicune, MSGBOX_NPC
# 187 "data/maps/FiveIsland_Meadow/scripts.pory"
	setflag FLAG_SUICANE_FLAG
# 188 "data/maps/FiveIsland_Meadow/scripts.pory"
	special InitRoamer
# 189 "data/maps/FiveIsland_Meadow/scripts.pory"
	return
# 190 "data/maps/FiveIsland_Meadow/scripts.pory"

# 191 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Suicune::
# 192 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Oh, you caught SUICUNE!\p"
# 193 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Must of been a lot of work\n"
# 194 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "to catch that POKEMON!\p"
# 195 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Perhaps the next one will roaming\n"
# 196 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "now that SUICUNE has been caught.\p"
# 197 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Good Luck!$"
# 198 "data/maps/FiveIsland_Meadow/scripts.pory"

# 199 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Entei::
# 200 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_set FLAG_CAUGHT_ENTEI, FiveIsland_Meadow_EventScript_Entei2
# 201 "data/maps/FiveIsland_Meadow/scripts.pory"
	return
# 202 "data/maps/FiveIsland_Meadow/scripts.pory"

# 203 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Entei2::
# 204 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Entei, MSGBOX_NPC
# 205 "data/maps/FiveIsland_Meadow/scripts.pory"
	setflag FLAG_ENTEI_FLAG
# 206 "data/maps/FiveIsland_Meadow/scripts.pory"
	special InitRoamer
# 207 "data/maps/FiveIsland_Meadow/scripts.pory"
	return
# 208 "data/maps/FiveIsland_Meadow/scripts.pory"

# 209 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Entei::
# 210 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Oh, you caught ENTEI!\p"
# 211 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Must of been a lot of work\n"
# 212 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "to catch that POKEMON!\p"
# 213 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Perhaps the next one will roaming\n"
# 214 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "now that ENTEI has been caught.\p"
# 215 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Good Luck!$"
# 216 "data/maps/FiveIsland_Meadow/scripts.pory"

# 217 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Raikou::
# 218 "data/maps/FiveIsland_Meadow/scripts.pory"
	goto_if_set FLAG_CAUGHT_RAIKOU, FiveIsland_Meadow_EventScript_Raikou2
# 219 "data/maps/FiveIsland_Meadow/scripts.pory"
	return
# 220 "data/maps/FiveIsland_Meadow/scripts.pory"

# 221 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Raikou2::
# 222 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Raikou, MSGBOX_NPC
# 223 "data/maps/FiveIsland_Meadow/scripts.pory"
	setflag FLAG_RAIKOU_FLAG
# 224 "data/maps/FiveIsland_Meadow/scripts.pory"
	special InitRoamer
# 225 "data/maps/FiveIsland_Meadow/scripts.pory"
	return
# 226 "data/maps/FiveIsland_Meadow/scripts.pory"

# 227 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_Text_Raikou::
# 228 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Oh, you caught RAIKOU!\p"
# 229 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Must of been a lot of work\n"
# 230 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "to catch that POKEMON!\p"
# 231 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Perhaps the next one will roaming\n"
# 232 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "now that RAIKOU has been caught.\p"
# 233 "data/maps/FiveIsland_Meadow/scripts.pory"
	.string "Good Luck!$"
# 234 "data/maps/FiveIsland_Meadow/scripts.pory"

# 235 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_BeastShow::
# 236 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Beasts, MSGBOX_NPC
# 237 "data/maps/FiveIsland_Meadow/scripts.pory"
	waitmessage
# 238 "data/maps/FiveIsland_Meadow/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAIKOU
# 239 "data/maps/FiveIsland_Meadow/scripts.pory"
	special SetSeenMon
# 240 "data/maps/FiveIsland_Meadow/scripts.pory"
	showmonpic SPECIES_RAIKOU, 10, 3
# 241 "data/maps/FiveIsland_Meadow/scripts.pory"
	waitbuttonpress
# 242 "data/maps/FiveIsland_Meadow/scripts.pory"
	hidemonpic
# 243 "data/maps/FiveIsland_Meadow/scripts.pory"
	setvar VAR_0x8004, SPECIES_ENTEI
# 244 "data/maps/FiveIsland_Meadow/scripts.pory"
	special SetSeenMon
# 245 "data/maps/FiveIsland_Meadow/scripts.pory"
	showmonpic SPECIES_ENTEI, 10, 3
# 246 "data/maps/FiveIsland_Meadow/scripts.pory"
	waitbuttonpress
# 247 "data/maps/FiveIsland_Meadow/scripts.pory"
	hidemonpic
# 248 "data/maps/FiveIsland_Meadow/scripts.pory"
	setvar VAR_0x8004, SPECIES_SUICUNE
# 249 "data/maps/FiveIsland_Meadow/scripts.pory"
	special SetSeenMon
# 250 "data/maps/FiveIsland_Meadow/scripts.pory"
	showmonpic SPECIES_SUICUNE, 10, 3
# 251 "data/maps/FiveIsland_Meadow/scripts.pory"
	waitbuttonpress
# 252 "data/maps/FiveIsland_Meadow/scripts.pory"
	hidemonpic
# 253 "data/maps/FiveIsland_Meadow/scripts.pory"
	setflag FLAG_SEEN_BEAST
# 254 "data/maps/FiveIsland_Meadow/scripts.pory"
	return
# 255 "data/maps/FiveIsland_Meadow/scripts.pory"

# 256 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_GiveTicket::
# 257 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Beasts2, 
# 258 "data/maps/FiveIsland_Meadow/scripts.pory"
	giveitem ITEM_MYSTIC_TICKET
# 259 "data/maps/FiveIsland_Meadow/scripts.pory"
	setflag FLAG_ENABLE_SHIP_NAVEL_ROCK
# 260 "data/maps/FiveIsland_Meadow/scripts.pory"
	releaseall
# 261 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
# 262 "data/maps/FiveIsland_Meadow/scripts.pory"

# 263 "data/maps/FiveIsland_Meadow/scripts.pory"
FiveIsland_Meadow_EventScript_Beast3::
# 264 "data/maps/FiveIsland_Meadow/scripts.pory"
	msgbox FiveIsland_Meadow_Text_Beasts2, MSGBOX_NPC
# 265 "data/maps/FiveIsland_Meadow/scripts.pory"
	releaseall
# 266 "data/maps/FiveIsland_Meadow/scripts.pory"
	end
