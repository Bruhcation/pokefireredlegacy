# 1 "data/maps/SaffronCity_Dojo/scripts.pory"

# 2 "data/maps/SaffronCity_Dojo/scripts.pory"
.equ LOCALID_KARATE_MASTER, 5
# 3 "data/maps/SaffronCity_Dojo/scripts.pory"

# 4 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_MapScripts::
# 5 "data/maps/SaffronCity_Dojo/scripts.pory"
	.byte 0
# 6 "data/maps/SaffronCity_Dojo/scripts.pory"

# 7 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_TriggerMasterBattleLeft::
# 8 "data/maps/SaffronCity_Dojo/scripts.pory"
	lockall
# 9 "data/maps/SaffronCity_Dojo/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
# 10 "data/maps/SaffronCity_Dojo/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterLeft
# 11 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitmovement 0
# 12 "data/maps/SaffronCity_Dojo/scripts.pory"
	releaseall
# 13 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 14 "data/maps/SaffronCity_Dojo/scripts.pory"

# 15 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_TriggerMasterBattleRight::
# 16 "data/maps/SaffronCity_Dojo/scripts.pory"
	lockall
# 17 "data/maps/SaffronCity_Dojo/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
# 18 "data/maps/SaffronCity_Dojo/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterRight
# 19 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitmovement 0
# 20 "data/maps/SaffronCity_Dojo/scripts.pory"
	releaseall
# 21 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 22 "data/maps/SaffronCity_Dojo/scripts.pory"

# 23 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_HitmonleeBall::
# 24 "data/maps/SaffronCity_Dojo/scripts.pory"
	lock
# 25 "data/maps/SaffronCity_Dojo/scripts.pory"
	faceplayer
# 26 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_AlreadyGotHitmon
# 27 "data/maps/SaffronCity_Dojo/scripts.pory"
	showmonpic SPECIES_HITMONLEE, 10, 3
# 28 "data/maps/SaffronCity_Dojo/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_HITMONLEE
# 29 "data/maps/SaffronCity_Dojo/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterUp
# 30 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitmovement 0
# 31 "data/maps/SaffronCity_Dojo/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 32 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_YouWantHitmonlee, MSGBOX_YESNO
# 33 "data/maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_RestorePrevTextColor
# 34 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SaffronCity_Dojo_EventScript_GiveHitmon
# 35 "data/maps/SaffronCity_Dojo/scripts.pory"
	hidemonpic
# 36 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
# 37 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 38 "data/maps/SaffronCity_Dojo/scripts.pory"

# 39 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_AlreadyGotHitmon::
# 40 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_BetterNotGetGreedy
# 41 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
# 42 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 43 "data/maps/SaffronCity_Dojo/scripts.pory"

# 44 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_HitmonchanBall::
# 45 "data/maps/SaffronCity_Dojo/scripts.pory"
	lock
# 46 "data/maps/SaffronCity_Dojo/scripts.pory"
	faceplayer
# 47 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_AlreadyGotHitmon
# 48 "data/maps/SaffronCity_Dojo/scripts.pory"
	showmonpic SPECIES_HITMONCHAN, 10, 3
# 49 "data/maps/SaffronCity_Dojo/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_HITMONCHAN
# 50 "data/maps/SaffronCity_Dojo/scripts.pory"
	applymovement LOCALID_KARATE_MASTER, Common_Movement_WalkInPlaceFasterUp
# 51 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitmovement 0
# 52 "data/maps/SaffronCity_Dojo/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 53 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_YouWantHitmonchan, MSGBOX_YESNO
# 54 "data/maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_RestorePrevTextColor
# 55 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SaffronCity_Dojo_EventScript_GiveHitmon
# 56 "data/maps/SaffronCity_Dojo/scripts.pory"
	hidemonpic
# 57 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
# 58 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 59 "data/maps/SaffronCity_Dojo/scripts.pory"

# 60 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_GiveHitmon::
# 61 "data/maps/SaffronCity_Dojo/scripts.pory"
	hidemonpic
# 62 "data/maps/SaffronCity_Dojo/scripts.pory"
	call_if_set FLAG_KOICHI_REMATCH, SaffronCity_Dojo_EventScript_Shiny
# 63 "data/maps/SaffronCity_Dojo/scripts.pory"
	givemon VAR_TEMP_1, 25
# 64 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SaffronCity_Dojo_EventScript_ReceivedHitmonParty
# 65 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, 1, SaffronCity_Dojo_EventScript_ReceivedHitmonPC
# 66 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, 2, EventScript_NoMoreRoomForPokemon
# 67 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
# 68 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 69 "data/maps/SaffronCity_Dojo/scripts.pory"

# 70 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_Shiny::
# 71 "data/maps/SaffronCity_Dojo/scripts.pory"
	setflag FLAG_SHINY_CREATION
# 72 "data/maps/SaffronCity_Dojo/scripts.pory"
	return
# 73 "data/maps/SaffronCity_Dojo/scripts.pory"

# 74 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_ReceivedHitmonParty::
# 75 "data/maps/SaffronCity_Dojo/scripts.pory"
	removeobject VAR_LAST_TALKED
# 76 "data/maps/SaffronCity_Dojo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 77 "data/maps/SaffronCity_Dojo/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 78 "data/maps/SaffronCity_Dojo/scripts.pory"
	message SaffronCity_Dojo_Text_ReceivedMonFromKarateMaster
# 79 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitmessage
# 80 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitfanfare
# 81 "data/maps/SaffronCity_Dojo/scripts.pory"
	setflag FLAG_GOT_HITMON_FROM_DOJO
# 82 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 83 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SaffronCity_Dojo_EventScript_EndGiveMon
# 84 "data/maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 85 "data/maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_ChangePokemonNickname
# 86 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto SaffronCity_Dojo_EventScript_EndGiveMon
# 87 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 88 "data/maps/SaffronCity_Dojo/scripts.pory"

# 89 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_ReceivedHitmonPC::
# 90 "data/maps/SaffronCity_Dojo/scripts.pory"
	removeobject VAR_LAST_TALKED
# 91 "data/maps/SaffronCity_Dojo/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 92 "data/maps/SaffronCity_Dojo/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 93 "data/maps/SaffronCity_Dojo/scripts.pory"
	message SaffronCity_Dojo_Text_ReceivedMonFromKarateMaster
# 94 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitmessage
# 95 "data/maps/SaffronCity_Dojo/scripts.pory"
	waitfanfare
# 96 "data/maps/SaffronCity_Dojo/scripts.pory"
	setflag FLAG_GOT_HITMON_FROM_DOJO
# 97 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 98 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SaffronCity_Dojo_EventScript_TransferredHitmonToPC
# 99 "data/maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 100 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto SaffronCity_Dojo_EventScript_TransferredHitmonToPC
# 101 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 102 "data/maps/SaffronCity_Dojo/scripts.pory"

# 103 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_TransferredHitmonToPC::
# 104 "data/maps/SaffronCity_Dojo/scripts.pory"
	call EventScript_TransferredToPC
# 105 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto SaffronCity_Dojo_EventScript_EndGiveMon
# 106 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 107 "data/maps/SaffronCity_Dojo/scripts.pory"

# 108 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_EndGiveMon::
# 109 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
# 110 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 111 "data/maps/SaffronCity_Dojo/scripts.pory"

# 112 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_Statue::
# 113 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_FightingDojo, MSGBOX_SIGN
# 114 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 115 "data/maps/SaffronCity_Dojo/scripts.pory"

# 116 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_LeftScroll::
# 117 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_EnemiesOnEverySide, MSGBOX_SIGN
# 118 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 119 "data/maps/SaffronCity_Dojo/scripts.pory"

# 120 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_RightScroll::
# 121 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_GoesAroundComesAround, MSGBOX_SIGN
# 122 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 123 "data/maps/SaffronCity_Dojo/scripts.pory"

# 124 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_Hitoshi::
# 125 "data/maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_HITOSHI, SaffronCity_Dojo_Text_HitoshiIntro, SaffronCity_Dojo_Text_HitoshiDefeat
# 126 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_HitoshiPostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 128 "data/maps/SaffronCity_Dojo/scripts.pory"

# 129 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_Hideki::
# 130 "data/maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_HIDEKI, SaffronCity_Dojo_Text_HidekiIntro, SaffronCity_Dojo_Text_HidekiDefeat
# 131 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_HidekiPostBattle, MSGBOX_AUTOCLOSE
# 132 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 133 "data/maps/SaffronCity_Dojo/scripts.pory"

# 134 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_Aaron::
# 135 "data/maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_AARON, SaffronCity_Dojo_Text_AaronIntro, SaffronCity_Dojo_Text_AaronDefeat
# 136 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_AaronPostBattle, MSGBOX_AUTOCLOSE
# 137 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 138 "data/maps/SaffronCity_Dojo/scripts.pory"

# 139 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_Mike::
# 140 "data/maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_MIKE, SaffronCity_Dojo_Text_MikeIntro, SaffronCity_Dojo_Text_MikeDefeat
# 141 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_MikePostBattle, MSGBOX_AUTOCLOSE
# 142 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 143 "data/maps/SaffronCity_Dojo/scripts.pory"

# 144 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_MasterKoichi::
# 145 "data/maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_KOICHI, SaffronCity_Dojo_Text_MasterKoichiIntro, SaffronCity_Dojo_Text_MasterKoichiDefeat, SaffronCity_Dojo_EventScript_DefeatedMasterKoichi
# 146 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_set FLAG_GOT_HITMON_FROM_DOJO, SaffronCity_Dojo_EventScript_MasterKoichiAlreadyGotHitmon
# 147 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_ChoosePrizedFightingMon, MSGBOX_AUTOCLOSE
# 148 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 149 "data/maps/SaffronCity_Dojo/scripts.pory"

# 150 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_MasterKoichiRematch::
# 151 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_set FLAG_KOICHI_REMATCH, SaffronCity_Dojo_EventScript_RematchKarate
# 152 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_Karate, MSGBOX_YESNO
# 153 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SaffronCity_Dojo_EventScript_NoKarate
# 154 "data/maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_RS_CAMPER, SaffronCity_Dojo_Text_YesKarate, SaffronCity_Dojo_Text_KarateDefeat, SaffronCity_Dojo_EventScript_PostKarate, NO_MUSIC
# 155 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
# 156 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 157 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_PostKarate::
# 158 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_KaratePostBattle
# 159 "data/maps/SaffronCity_Dojo/scripts.pory"
	setflag FLAG_KOICHI_REMATCH
# 160 "data/maps/SaffronCity_Dojo/scripts.pory"
	cleartrainerflag TRAINER_RS_CAMPER
# 161 "data/maps/SaffronCity_Dojo/scripts.pory"
	clearflag FLAG_GOT_HITMON_FROM_DOJO
# 162 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
# 163 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 164 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_NoKarate::
# 165 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_NoKarate
# 166 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
# 167 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 168 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_RematchKarate::
# 169 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_RematchKarate, MSGBOX_YESNO
# 170 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SaffronCity_Dojo_EventScript_NoKarate
# 171 "data/maps/SaffronCity_Dojo/scripts.pory"
	trainerbattle_single TRAINER_RS_CAMPER, SaffronCity_Dojo_Text_YesRematchKarate, SaffronCity_Dojo_Text_RematchKarateDefeat, SaffronCity_Dojo_EventScript_PostRematchKarate, NO_MUSIC
# 172 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
# 173 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 174 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_PostRematchKarate::
# 175 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_RematchKarateDefeat
# 176 "data/maps/SaffronCity_Dojo/scripts.pory"
	cleartrainerflag TRAINER_RS_CAMPER
# 177 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
# 178 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 179 "data/maps/SaffronCity_Dojo/scripts.pory"
	
# 180 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_MasterKoichiAlreadyGotHitmon::
# 181 "data/maps/SaffronCity_Dojo/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, SaffronCity_Dojo_EventScript_MasterKoichiRematch
# 182 "data/maps/SaffronCity_Dojo/scripts.pory"
	msgbox SaffronCity_Dojo_Text_StayAndTrainWithUs
# 183 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
# 184 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 185 "data/maps/SaffronCity_Dojo/scripts.pory"

# 186 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_EventScript_DefeatedMasterKoichi::
# 187 "data/maps/SaffronCity_Dojo/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRON_CITY_DOJO, 1
# 188 "data/maps/SaffronCity_Dojo/scripts.pory"
	release
# 189 "data/maps/SaffronCity_Dojo/scripts.pory"
	end
# 190 "data/maps/SaffronCity_Dojo/scripts.pory"

# 191 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_Text_Karate::
# 192 "data/maps/SaffronCity_Dojo/scripts.pory"
    .string "Ah, the CHAMPION. I see you\n"
# 193 "data/maps/SaffronCity_Dojo/scripts.pory"
    .string "defeated Master BRUNO.\p"
# 194 "data/maps/SaffronCity_Dojo/scripts.pory"
    .string "If so, I would like to face\n"
# 195 "data/maps/SaffronCity_Dojo/scripts.pory"
    .string "you again. You can have one\l"
# 196 "data/maps/SaffronCity_Dojo/scripts.pory"
    .string "more of our prized POKÉMON.\p"
# 197 "data/maps/SaffronCity_Dojo/scripts.pory"
    .string "But expect no mercy! This\n"
# 198 "data/maps/SaffronCity_Dojo/scripts.pory"
    .string "is me at my strongest!$"
# 199 "data/maps/SaffronCity_Dojo/scripts.pory"

# 200 "data/maps/SaffronCity_Dojo/scripts.pory"

# 201 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_Text_KarateDefeat::
# 202 "data/maps/SaffronCity_Dojo/scripts.pory"
    .string "Humbled again.$"
# 203 "data/maps/SaffronCity_Dojo/scripts.pory"

# 204 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_Text_KaratePostBattle::
# 205 "data/maps/SaffronCity_Dojo/scripts.pory"
    .string "You truly are a master at\n"
# 206 "data/maps/SaffronCity_Dojo/scripts.pory"
    .string "battles.$"
# 207 "data/maps/SaffronCity_Dojo/scripts.pory"

# 208 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_Text_NoKarate::
# 209 "data/maps/SaffronCity_Dojo/scripts.pory"
    .string "Not ready, huh?$"
# 210 "data/maps/SaffronCity_Dojo/scripts.pory"

# 211 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_Text_YesKarate::
# 212 "data/maps/SaffronCity_Dojo/scripts.pory"
    .string "Prepare for a match you\n"
# 213 "data/maps/SaffronCity_Dojo/scripts.pory"
    .string "won't forget!$"
# 214 "data/maps/SaffronCity_Dojo/scripts.pory"

# 215 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_Text_RematchKarate::
# 216 "data/maps/SaffronCity_Dojo/scripts.pory"
    .string "Back for another battle?$"
# 217 "data/maps/SaffronCity_Dojo/scripts.pory"

# 218 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_Text_RematchKarateDefeat::
# 219 "data/maps/SaffronCity_Dojo/scripts.pory"
    .string "Humbled once again.\p"
# 220 "data/maps/SaffronCity_Dojo/scripts.pory"

# 221 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_Text_YesRematchKarate::
# 222 "data/maps/SaffronCity_Dojo/scripts.pory"
    .string "Fight once again!$"
# 223 "data/maps/SaffronCity_Dojo/scripts.pory"

# 224 "data/maps/SaffronCity_Dojo/scripts.pory"
SaffronCity_Dojo_Text_RematchKaratePostBattle::
# 225 "data/maps/SaffronCity_Dojo/scripts.pory"
    .string "I've got nothing else to\n"
# 226 "data/maps/SaffronCity_Dojo/scripts.pory"
    .string "say.$"
