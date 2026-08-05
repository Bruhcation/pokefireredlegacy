# 1 "data/maps/Route10/scripts.pory"

# 2 "data/maps/Route10/scripts.pory"

# 3 "data/maps/Route10/scripts.pory"
.set LOCALID_GIRL, 11
# 4 "data/maps/Route10/scripts.pory"
.set LOCALID_JIRACHI, 12
# 5 "data/maps/Route10/scripts.pory"
Route10_MapScripts::
# 6 "data/maps/Route10/scripts.pory"
	.byte 0
# 7 "data/maps/Route10/scripts.pory"

# 8 "data/maps/Route10/scripts.pory"
Route10_EventScript_Unused::
# 9 "data/maps/Route10/scripts.pory"
	end
# 10 "data/maps/Route10/scripts.pory"

# 11 "data/maps/Route10/scripts.pory"
Route10_EventScript_NorthRockTunnelSign::
# 12 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_RockTunnelDetourToLavender, MSGBOX_SIGN
# 13 "data/maps/Route10/scripts.pory"
	end
# 14 "data/maps/Route10/scripts.pory"

# 15 "data/maps/Route10/scripts.pory"
Route10_EventScript_SouthRockTunnelSign::
# 16 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_RockTunnel, MSGBOX_SIGN
# 17 "data/maps/Route10/scripts.pory"
	setflag FLAG_HACK_OPTION_MENU
# 18 "data/maps/Route10/scripts.pory"
	end
# 19 "data/maps/Route10/scripts.pory"

# 20 "data/maps/Route10/scripts.pory"
Route10_EventScript_PowerPlantSign::
# 21 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_PowerPlant, MSGBOX_SIGN
# 22 "data/maps/Route10/scripts.pory"
	end
# 23 "data/maps/Route10/scripts.pory"

# 24 "data/maps/Route10/scripts.pory"
Route10_EventScript_Girl::
# 25 "data/maps/Route10/scripts.pory"
	goto_if_set FLAG_JIRACHI, Route10_EventScript_GirlSurpised
# 26 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_Girl, MSGBOX_NPC
# 27 "data/maps/Route10/scripts.pory"
	end
# 28 "data/maps/Route10/scripts.pory"

# 29 "data/maps/Route10/scripts.pory"
Route10_EventScript_GirlSurpised::
# 30 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_GirlSurprisedJirachi, MSGBOX_NPC
# 31 "data/maps/Route10/scripts.pory"
	end
# 32 "data/maps/Route10/scripts.pory"

# 33 "data/maps/Route10/scripts.pory"
Route10_EventScript_Rock::
# 34 "data/maps/Route10/scripts.pory"
	goto_if_set FLAG_JIRACHI, Route10_EventScript_End
# 35 "data/maps/Route10/scripts.pory"
	call_if_set FLAG_SYS_CAN_LINK_WITH_RS, Route10_EventScript_Interact
# 36 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_Rock, MSGBOX_SIGN
# 37 "data/maps/Route10/scripts.pory"
	release
# 38 "data/maps/Route10/scripts.pory"
	end
# 39 "data/maps/Route10/scripts.pory"

# 40 "data/maps/Route10/scripts.pory"
Route10_EventScript_Interact::
# 41 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_WeirdRock, MSGBOX_YESNO
# 42 "data/maps/Route10/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route10_EventScript_No
# 43 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_Appeared
# 44 "data/maps/Route10/scripts.pory"
	call Route10_EventScript_Jirachi
# 45 "data/maps/Route10/scripts.pory"
	release
# 46 "data/maps/Route10/scripts.pory"
	end
# 47 "data/maps/Route10/scripts.pory"

# 48 "data/maps/Route10/scripts.pory"
Route10_EventScript_No::
# 49 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_No, MSGBOX_NPC
# 50 "data/maps/Route10/scripts.pory"
	release
# 51 "data/maps/Route10/scripts.pory"
	end
# 52 "data/maps/Route10/scripts.pory"

# 53 "data/maps/Route10/scripts.pory"
Route10_EventScript_End::
# 54 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_CrackedRock, MSGBOX_SIGN
# 55 "data/maps/Route10/scripts.pory"
	setflag FLAG_JIRACHI_WISH_GOT
# 56 "data/maps/Route10/scripts.pory"
	setvar VAR_MTMOONB2F, 1
# 57 "data/maps/Route10/scripts.pory"
	setvar VAR_MTMOON1F, 1
# 58 "data/maps/Route10/scripts.pory"
	setvar VAR_VIRFOREST, 1
# 59 "data/maps/Route10/scripts.pory"
	setvar VAR_ROCK_TUNNEL, 1
# 60 "data/maps/Route10/scripts.pory"
	setvar VAR_ROCK_TUNNEL2, 1
# 61 "data/maps/Route10/scripts.pory"
	setvar VAR_VICTORYROAD, 1
# 62 "data/maps/Route10/scripts.pory"
	release
# 63 "data/maps/Route10/scripts.pory"
	end
# 64 "data/maps/Route10/scripts.pory"

# 65 "data/maps/Route10/scripts.pory"
Route10_EventScript_Jirachi::
# 66 "data/maps/Route10/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 67 "data/maps/Route10/scripts.pory"
	special QuestLog_CutRecording
# 68 "data/maps/Route10/scripts.pory"
	lock
# 69 "data/maps/Route10/scripts.pory"
	faceplayer
# 70 "data/maps/Route10/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 71 "data/maps/Route10/scripts.pory"
	applymovement LOCALID_GIRL, Common_Movement_ExclamationMark
# 72 "data/maps/Route10/scripts.pory"
	applymovement LOCALID_GIRL, Common_Movement_FaceRight
# 73 "data/maps/Route10/scripts.pory"
	playse SE_PIN
# 74 "data/maps/Route10/scripts.pory"
	waitse
# 75 "data/maps/Route10/scripts.pory"
	fadescreen FADE_TO_BLACK
# 76 "data/maps/Route10/scripts.pory"
	addobject LOCALID_JIRACHI
# 77 "data/maps/Route10/scripts.pory"
	applymovement LOCALID_JIRACHI, Common_Movement_FacePlayer
# 78 "data/maps/Route10/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 79 "data/maps/Route10/scripts.pory"
	setwildbattle SPECIES_JIRACHI, 50
# 80 "data/maps/Route10/scripts.pory"
	waitse
# 81 "data/maps/Route10/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 82 "data/maps/Route10/scripts.pory"
	message Route10_Text_Gyaoo
# 83 "data/maps/Route10/scripts.pory"
	waitmessage
# 84 "data/maps/Route10/scripts.pory"
	waitmoncry
# 85 "data/maps/Route10/scripts.pory"
	delay 10
# 86 "data/maps/Route10/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 87 "data/maps/Route10/scripts.pory"
	waitbuttonpress
# 88 "data/maps/Route10/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 89 "data/maps/Route10/scripts.pory"
	special StartLegendaryBattle
# 90 "data/maps/Route10/scripts.pory"
	waitstate
# 91 "data/maps/Route10/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 92 "data/maps/Route10/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 93 "data/maps/Route10/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route10_EventScript_DefeatedJirachi
# 94 "data/maps/Route10/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route10_EventScript_RanFromJirachi
# 95 "data/maps/Route10/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route10_EventScript_RanFromJirachi
# 96 "data/maps/Route10/scripts.pory"
	setflag FLAG_JIRACHI
# 97 "data/maps/Route10/scripts.pory"
    fadescreen FADE_TO_BLACK
# 98 "data/maps/Route10/scripts.pory"
	removeobject LOCALID_JIRACHI
# 99 "data/maps/Route10/scripts.pory"
    fadescreen FADE_FROM_BLACK
# 100 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_Wish
# 101 "data/maps/Route10/scripts.pory"
	goto Route10_EventScript_HoennWish
# 102 "data/maps/Route10/scripts.pory"
	release
# 103 "data/maps/Route10/scripts.pory"
	end
# 104 "data/maps/Route10/scripts.pory"

# 105 "data/maps/Route10/scripts.pory"
Route10_EventScript_DefeatedJirachi::
# 106 "data/maps/Route10/scripts.pory"
	setvar VAR_0x8004, SPECIES_JIRACHI
# 107 "data/maps/Route10/scripts.pory"
    fadescreen FADE_TO_BLACK
# 108 "data/maps/Route10/scripts.pory"
	removeobject LOCALID_JIRACHI
# 109 "data/maps/Route10/scripts.pory"
    fadescreen FADE_FROM_BLACK
# 110 "data/maps/Route10/scripts.pory"
    bufferspeciesname STR_VAR_1, VAR_0x8004
# 111 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_WentBack
# 112 "data/maps/Route10/scripts.pory"
	release
# 113 "data/maps/Route10/scripts.pory"
	end
# 114 "data/maps/Route10/scripts.pory"

# 115 "data/maps/Route10/scripts.pory"
Route10_EventScript_RanFromJirachi::
# 116 "data/maps/Route10/scripts.pory"
	setvar VAR_0x8004, SPECIES_JIRACHI
# 117 "data/maps/Route10/scripts.pory"
    fadescreen FADE_TO_BLACK
# 118 "data/maps/Route10/scripts.pory"
	removeobject LOCALID_JIRACHI
# 119 "data/maps/Route10/scripts.pory"
    fadescreen FADE_FROM_BLACK
# 120 "data/maps/Route10/scripts.pory"
    bufferspeciesname STR_VAR_1, VAR_0x8004
# 121 "data/maps/Route10/scripts.pory"
	msgbox Route10_Text_WentBack
# 122 "data/maps/Route10/scripts.pory"
	release
# 123 "data/maps/Route10/scripts.pory"
	end
# 124 "data/maps/Route10/scripts.pory"

# 125 "data/maps/Route10/scripts.pory"
Route10_Text_Gyaoo::
# 126 "data/maps/Route10/scripts.pory"
	.string "Jirachi!$"
# 127 "data/maps/Route10/scripts.pory"

# 128 "data/maps/Route10/scripts.pory"
Route10_Text_CrackedRock::
# 129 "data/maps/Route10/scripts.pory"
	.string "The rock is cracked.\p"
# 130 "data/maps/Route10/scripts.pory"
	.string "It looks like something was inside.$"
# 131 "data/maps/Route10/scripts.pory"

# 132 "data/maps/Route10/scripts.pory"
Route10_Text_Girl::
# 133 "data/maps/Route10/scripts.pory"
	.string "I kinda get weird vibes\n"
# 134 "data/maps/Route10/scripts.pory"
	.string "from this rock.\p"
# 135 "data/maps/Route10/scripts.pory"
	.string "It feels like this rock can\n"
# 136 "data/maps/Route10/scripts.pory"
	.string "make wishes or something.$"
# 137 "data/maps/Route10/scripts.pory"

# 138 "data/maps/Route10/scripts.pory"
Route10_Text_Rock::
# 139 "data/maps/Route10/scripts.pory"
	.string "The weird rock is shaking a bit.$"
# 140 "data/maps/Route10/scripts.pory"

# 141 "data/maps/Route10/scripts.pory"
Route10_Text_No::
# 142 "data/maps/Route10/scripts.pory"
	.string "Guess Not.$"
# 143 "data/maps/Route10/scripts.pory"

# 144 "data/maps/Route10/scripts.pory"
Route10_Text_WeirdRock::
# 145 "data/maps/Route10/scripts.pory"
	.string "The weird rock is shaking a lot.\p"
# 146 "data/maps/Route10/scripts.pory"
	.string "Will you Interact with it?$"
# 147 "data/maps/Route10/scripts.pory"

# 148 "data/maps/Route10/scripts.pory"
Route10_Text_Appeared::
# 149 "data/maps/Route10/scripts.pory"
	.string "Huh, something appeared?\n$"
# 150 "data/maps/Route10/scripts.pory"

# 151 "data/maps/Route10/scripts.pory"
Route10_Text_Wish::
# 152 "data/maps/Route10/scripts.pory"
	.string "A Wish was made subconsciously...\p"
# 153 "data/maps/Route10/scripts.pory"
	.string "New POKEMON might be lurking\n"
# 154 "data/maps/Route10/scripts.pory"
	.string "around the KANTO region.$"
# 155 "data/maps/Route10/scripts.pory"

# 156 "data/maps/Route10/scripts.pory"
Route10_Text_GirlSurprisedJirachi::
# 157 "data/maps/Route10/scripts.pory"
	.string "W-Was that a JIRACHI I saw?\p"
# 158 "data/maps/Route10/scripts.pory"
	.string "I heard it can grant wishes!$"
# 159 "data/maps/Route10/scripts.pory"

# 160 "data/maps/Route10/scripts.pory"
Route10_Text_WentBack::
# 161 "data/maps/Route10/scripts.pory"
	.string "JIRACHI went back to\n"
# 162 "data/maps/Route10/scripts.pory"
	.string "the rock it was sleeping in.$"
# 163 "data/maps/Route10/scripts.pory"

# 164 "data/maps/Route10/scripts.pory"
Route10_EventScript_HoennWish::
# 165 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE1, 1
# 166 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE2, 1
# 167 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE3, 1
# 168 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE4, 1
# 169 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE5, 1
# 170 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE6, 1
# 171 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE7, 1
# 172 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE8, 1
# 173 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE9, 1
# 174 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE10, 1
# 175 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE11, 1
# 176 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE12, 1
# 177 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE13, 1
# 178 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE14, 1
# 179 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE15, 1
# 180 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE16, 1
# 181 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE17, 1
# 182 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE18, 1
# 183 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE19, 1
# 184 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE20, 1
# 185 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE21, 1
# 186 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE211, 1
# 187 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE22, 1
# 188 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE24, 1
# 189 "data/maps/Route10/scripts.pory"
	setvar VAR_ROUTE25, 1
# 190 "data/maps/Route10/scripts.pory"
	setvar VAR_MANSION1, 1
# 191 "data/maps/Route10/scripts.pory"
	setvar VAR_MANSION2, 1
# 192 "data/maps/Route10/scripts.pory"
	setvar VAR_MANSION3, 1
# 193 "data/maps/Route10/scripts.pory"
	setvar VAR_MANSIONB1F, 1
# 194 "data/maps/Route10/scripts.pory"
	setvar VAR_POWERPLANT, 1
# 195 "data/maps/Route10/scripts.pory"
	setvar VAR_DIGLETTCAVE, 1
# 196 "data/maps/Route10/scripts.pory"
	setvar VAR_SAFARIZONE, 1
# 197 "data/maps/Route10/scripts.pory"
	setvar VAR_SEAFOAM1, 1
# 198 "data/maps/Route10/scripts.pory"
	setvar VAR_SEAFOAM2, 1
# 199 "data/maps/Route10/scripts.pory"
	setvar VAR_SEAFOAM3, 1
# 200 "data/maps/Route10/scripts.pory"
	setvar VAR_SEAFOAM4, 1
# 201 "data/maps/Route10/scripts.pory"
	setvar VAR_SEAFOAM5, 1
# 202 "data/maps/Route10/scripts.pory"
	setvar VAR_TOWER3, 1
# 203 "data/maps/Route10/scripts.pory"
	setvar VAR_TOWER4, 1
# 204 "data/maps/Route10/scripts.pory"
	setvar VAR_TOWER5, 1
# 205 "data/maps/Route10/scripts.pory"
	setvar VAR_TOWER6, 1
# 206 "data/maps/Route10/scripts.pory"
	setvar VAR_TOWER7, 1
# 207 "data/maps/Route10/scripts.pory"
	setvar VAR_CERULEAN, 1
# 208 "data/maps/Route10/scripts.pory"
	setvar VAR_VERMILION, 1
# 209 "data/maps/Route10/scripts.pory"
	setvar VAR_MTMOONB2F, 1
# 210 "data/maps/Route10/scripts.pory"
	setvar VAR_MTMOON1F, 1
# 211 "data/maps/Route10/scripts.pory"
	setvar VAR_VIRFOREST, 1
# 212 "data/maps/Route10/scripts.pory"
	setvar VAR_ROCK_TUNNEL, 1
# 213 "data/maps/Route10/scripts.pory"
	setvar VAR_ROCK_TUNNEL2, 1
# 214 "data/maps/Route10/scripts.pory"
	setvar VAR_VICTORYROAD, 1
# 215 "data/maps/Route10/scripts.pory"
	clearflag FLAG_GOT_CLAW
# 216 "data/maps/Route10/scripts.pory"
	clearflag FLAG_GOT_ROOT
# 217 "data/maps/Route10/scripts.pory"
	clearflag FLAG_JIRACHI_WISH
# 218 "data/maps/Route10/scripts.pory"
	clearflag FLAG_GROUND_TRAINER
# 219 "data/maps/Route10/scripts.pory"
	clearflag FLAG_WATER_TRAINER              
# 220 "data/maps/Route10/scripts.pory"
	clearflag FLAG_ICE_TRAINER         
# 221 "data/maps/Route10/scripts.pory"
	clearflag FLAG_STEEL_TRAINER               
# 222 "data/maps/Route10/scripts.pory"
	clearflag FLAG_BRO_TRAINER              
# 223 "data/maps/Route10/scripts.pory"
	clearflag FLAG_SIS_TRAINER            
# 224 "data/maps/Route10/scripts.pory"
	clearflag FLAG_ROCK_TRAINER              
# 225 "data/maps/Route10/scripts.pory"
	clearflag FLAG_DRAGON_TRAINER  
# 226 "data/maps/Route10/scripts.pory"
	setflag FLAG_JIRACHI_WISH_GOT
# 227 "data/maps/Route10/scripts.pory"
	release
# 228 "data/maps/Route10/scripts.pory"
	end
