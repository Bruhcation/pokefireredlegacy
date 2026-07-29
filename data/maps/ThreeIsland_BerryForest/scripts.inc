# 1 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 2 "data/maps/ThreeIsland_BerryForest/scripts.pory"
.set LOCALID_LOSTELLE, 1
# 3 "data/maps/ThreeIsland_BerryForest/scripts.pory"
.set LOCALID_CELEBI, 14
# 4 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 5 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_MapScripts::
# 6 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_BerryForest_OnTransition
# 7 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ThreeIsland_BerryForest_OnResume
# 8 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.byte 0
# 9 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 10 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_OnResume::
# 11 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, ThreeIsland_BerryForest_EventScript_TryRemoveCelebi
# 12 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 13 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 14 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_TryRemoveCelebi::
# 15 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 16 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 17 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	removeobject VAR_LAST_TALKED
# 18 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	return
# 19 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 20 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_OnTransition::
# 21 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_THREE_ISLAND_BERRY_FOREST
# 22 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setescapewarp MAP_THREE_ISLAND_BOND_BRIDGE, 12, 6
# 23 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_set FLAG_SPAWN_CELEBI, ThreeIsland_BerryForest_YesItem
# 24 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 25 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 26 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_YesItem::
# 27 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	call_if_unset FLAG_FOUGHT_CELEBI, ThreeIsland_BerryForest_EventScript_ShowCelebi
# 28 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 29 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 30 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_ShowCelebi::
# 31 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	clearflag FLAG_CELEBI
# 32 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	return
# 33 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 34 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_Celebi::
# 35 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 36 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	special QuestLog_CutRecording
# 37 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	lock
# 38 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	faceplayer
# 39 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setwildbattle SPECIES_CELEBI, 50
# 40 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitse
# 41 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_ENCOUNTER
# 42 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	message ThreeIsland_BerryForest_Text_Gyaoo
# 43 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmessage
# 44 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmoncry
# 45 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	delay 10
# 46 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 47 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitbuttonpress
# 48 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 49 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	special StartLegendaryBattle
# 50 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitstate
# 51 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 52 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 53 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ThreeIsland_BerryForest_EventScript_DefeatedCelebi
# 54 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ThreeIsland_BerryForest_EventScript_RanFromCelebi
# 55 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ThreeIsland_BerryForest_EventScript_RanFromCelebi
# 56 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_FOUGHT_CELEBI
# 57 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	clearflag FLAG_SPAWN_CELEBI
# 58 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 59 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 60 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 61 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Text_Gyaoo::
# 62 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "Celebi!$"
# 63 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 64 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_DefeatedCelebi::
# 65 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_FOUGHT_CELEBI
# 66 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	clearflag FLAG_SPAWN_CELEBI
# 67 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto EventScript_RemoveStaticMon
# 68 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 69 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 70 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_RanFromCelebi::
# 71 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setvar VAR_0x8004, SPECIES_CELEBI
# 72 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto EventScript_MonFlewAway
# 73 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 74 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 75 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_Lostelle::
# 76 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	lock
# 77 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	faceplayer
# 78 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_HelpScaryPokemon
# 79 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	playse SE_PIN
# 80 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	applymovement LOCALID_LOSTELLE, Common_Movement_ExclamationMark
# 81 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmovement 0
# 82 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	applymovement LOCALID_LOSTELLE, ThreeIsland_BerryForest_Movement_LostelleLookAround
# 83 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmovement 0
# 84 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_HereItComesAgain
# 85 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 86 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitse
# 87 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
# 88 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmoncry
# 89 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setwildbattle SPECIES_HYPNO, 55
# 90 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	dowildbattle
# 91 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	special QuestLog_CutRecording
# 92 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	applymovement LOCALID_LOSTELLE, Common_Movement_FacePlayer
# 93 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitmovement 0
# 94 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_ThankYouHaveThis
# 95 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	giveitem ITEM_IAPAPA_BERRY
# 96 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, ThreeIsland_BerryForest_EventScript_NoRoomForBerry
# 97 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	special BufferBigGuyOrBigGirlString
# 98 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_LetsGoHome
# 99 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	closemessage
# 100 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_RESCUED_LOSTELLE
# 101 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_HIDE_LOSTELLE_IN_BERRY_FOREST
# 102 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setvar VAR_MAP_SCENE_TWO_ISLAND_JOYFUL_GAME_CORNER, 2
# 103 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	clearflag FLAG_HIDE_TWO_ISLAND_GAME_CORNER_LOSTELLE
# 104 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	warp MAP_TWO_ISLAND_JOYFUL_GAME_CORNER, 6, 6
# 105 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	waitstate
# 106 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 107 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 108 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 109 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_NoRoomForBerry::
# 110 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_BerryPouchIsFull
# 111 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	return
# 112 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 113 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Movement_LostelleLookAround::
# 114 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	walk_in_place_faster_left
# 115 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	delay_16
# 116 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	walk_in_place_faster_right
# 117 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	delay_8
# 118 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	walk_in_place_faster_left
# 119 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	step_end
# 120 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 121 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_WelcomeSign::
# 122 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_WelcomeToBerryForest, MSGBOX_SIGN
# 123 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 124 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 125 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_BewareSign::
# 126 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_BewareWildBerryLovingMons, MSGBOX_SIGN
# 127 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 128 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 129 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_CruelKing::
# 130 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	lock
# 131 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	faceplayer
# 132 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_set FLAG_CRUELKING_DEFEATED, ThreeIsland_BerryForest_EventScript_RematchCruelKing
# 133 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_CruelKing, MSGBOX_YESNO
# 134 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ThreeIsland_BerryForest_EventScript_NoCruelKing
# 135 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	trainerbattle_single TRAINER_CRUEL_KING, ThreeIsland_BerryForest_Text_YesCruelKing, ThreeIsland_BerryForest_Text_CruelKingDefeat, ThreeIsland_BerryForest_EventScript_PostCruelKing, NO_MUSIC
# 136 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 137 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 138 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 139 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_PostCruelKing::
# 140 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_CruelKingPostBattle
# 141 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	setflag FLAG_CRUELKING_DEFEATED
# 142 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	cleartrainerflag TRAINER_CRUEL_KING
# 143 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	message Text_6Leaders
# 144 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 145 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 146 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 147 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_CantRematchCruelKing::
# 148 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_CruelKingPostBattle
# 149 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 150 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 151 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 152 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_NoCruelKing::
# 153 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_NoCruelKing
# 154 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 155 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 156 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 157 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_RematchCruelKing::
# 158 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_RematchCruelKing, MSGBOX_YESNO
# 159 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ThreeIsland_BerryForest_EventScript_NoCruelKing
# 160 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	trainerbattle_single TRAINER_CRUEL_KING, ThreeIsland_BerryForest_Text_YesRematchCruelKing, ThreeIsland_BerryForest_Text_RematchCruelKingDefeat, ThreeIsland_BerryForest_EventScript_PostRematchCruelKing, NO_MUSIC
# 161 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 162 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 163 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 164 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_PostRematchCruelKing::
# 165 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_RematchCruelKingDefeat
# 166 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	cleartrainerflag TRAINER_CRUEL_KING
# 167 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	release
# 168 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 169 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 170 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_Gym1::
# 171 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	trainerbattle_single TRAINER_SR_AND_JR, ThreeIsland_BerryForest_Text_Rocket1Intro, ThreeIsland_BerryForest_Text_Rocket1Defeat
# 172 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_Rocket1PostBattle, MSGBOX_AUTOCLOSE
# 173 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 174 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 175 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Text_Rocket1Intro::
# 176 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "How dare you trespass on the\n"
# 177 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "domain of the CRUEL KING?!$"
# 178 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 179 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Text_Rocket1Defeat::
# 180 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "You got this one.$"
# 181 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 182 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Text_Rocket1PostBattle::
# 183 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "The CRUEL KING is not to be\n"
# 184 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "messed with!$"
# 185 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 186 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_Gym2::
# 187 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	trainerbattle_single TRAINER_SWIMMING_TRIATHLETE_F, ThreeIsland_BerryForest_Text_Rocket2Intro, ThreeIsland_BerryForest_Text_Rocket2Defeat
# 188 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
# 189 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 190 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 191 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Text_Rocket2Intro::
# 192 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "Honestly, I just like playing\n"
# 193 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "in the berry forest.\p"
# 194 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Text_Rocket2Defeat::
# 195 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "Oh, wow!$"
# 196 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 197 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Text_Rocket2PostBattle::
# 198 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "Despite his name, the CRUEL KING\n"
# 199 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "is actually pretty nice.\l"
# 200 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "He's just into his theatrics.$"
# 201 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 202 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_EventScript_Gym3::
# 203 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	trainerbattle_single TRAINER_POKEFAN_F, ThreeIsland_BerryForest_Text_Rocket3Intro, ThreeIsland_BerryForest_Text_Rocket3Defeat
# 204 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	msgbox ThreeIsland_BerryForest_Text_Rocket3PostBattle, MSGBOX_AUTOCLOSE
# 205 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	end
# 206 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 207 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Text_Rocket3Intro::
# 208 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "If you dare to challenge the\n"
# 209 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "CRUEL KING, take heed of what\l"
# 210 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "the forest has revealed to me…\p"
# 211 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "You see, in this forest,\n"
# 212 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "I had a revelation.\p"
# 213 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "The most important thing in this\n"
# 214 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "world is pure, unadulterated power!\p"
# 215 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "WITNESS THE POWER!$"
# 216 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 217 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Text_Rocket3Defeat::
# 218 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "…$"
# 219 "data/maps/ThreeIsland_BerryForest/scripts.pory"

# 220 "data/maps/ThreeIsland_BerryForest/scripts.pory"
ThreeIsland_BerryForest_Text_Rocket3PostBattle::
# 221 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "Do what you have to do…\l"
# 222 "data/maps/ThreeIsland_BerryForest/scripts.pory"
	.string "Fight the CRUEL KING!$"
