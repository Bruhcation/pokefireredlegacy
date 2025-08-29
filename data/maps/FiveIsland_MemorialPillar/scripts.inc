# 1 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 2 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
.set LOCALID_MEMORIAL_MAN, 1
# 3 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
.set LOCALID_OLD_LADY, 7
# 4 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
.set LOCALID_CELEBI, 8
# 5 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
.set LOCALID_SUDOWOODO, 9
# 6 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 7 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_MapScripts::
# 8 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, FiveIsland_MemorialPillar_OnResume
# 9 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_MemorialPillar_OnTransition
# 10 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.byte 0
# 11 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 12 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_OnResume::
# 13 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, FiveIsland_MemorialPillar_EventScript_TryRemoveSudowoodo
# 14 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 15 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 16 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_TryRemoveSudowoodo::
# 17 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 18 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_CAUGHT
# 19 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_ne EventScript_Return
# 20 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	removeobject VAR_LAST_TALKED
# 21 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	return
# 22 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 23 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_OnTransition::
# 24 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	call_if_unset FLAG_DEFEATED_SUDOWOODO, FiveIsland_MemorialPillar_EventScript_ShowSudowoodo
# 25 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 26 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 27 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_ShowSudowoodo:: 
# 28 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_CAUGHT_SUDOWOODO, EventScript_Return
# 29 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
# 30 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	return
# 31 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 32 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_Sudowoodo::
# 33 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	lock
# 34 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	faceplayer
# 35 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitse
# 36 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	playse SE_UNLOCK
# 37 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_SUDOWOODO, FiveIsland_MemorialPillar_Movement_SudowoodoShake
# 38 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 39 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	checkitem ITEM_FRESH_WATER, 1
# 40 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	compare VAR_RESULT, TRUE
# 41 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq FiveIsland_MemorialPillar_EventScript_AskWaterSudowoodo
# 42 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 43 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 44 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 45 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_AskWaterSudowoodo::
# 46 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_UseFreshWater MSGBOX_YESNO
# 47 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	compare VAR_RESULT, YES
# 48 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq FiveIsland_MemorialPillar_EventScript_WaterSudowoodo
# 49 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 50 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 51 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 52 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_UseFreshWater::
# 53 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "It's a weird tree.\n"
# 54 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "Water it with a FRESH WATER?$"
# 55 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 56 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_WaterSudowoodo:: @ 8242CFC
# 57 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	lock
# 58 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	faceplayer
# 59 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	removeitem ITEM_FRESH_WATER, 1
# 60 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	playse SE_UNLOCK
# 61 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_SUDOWOODO, FiveIsland_MemorialPillar_Movement_SudowoodoShakeAngry
# 62 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 63 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_SUDOWOODO, FiveIsland_MemorialPillar_Movement_SudowoodoShakeAngry
# 64 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 65 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_SUDOWOODO, FiveIsland_MemorialPillar_Movement_SudowoodoShakeAngry
# 66 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 67 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox gText_Sudowoodo_Attacked, MSGBOX_DEFAULT
# 68 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	closemessage
# 69 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitse
# 70 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	playmoncry SPECIES_SUDOWOODO, 2
# 71 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay 40
# 72 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmoncry
# 73 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_SUDOWOODO
# 74 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setwildbattle SPECIES_SUDOWOODO, 50, ITEM_NONE
# 75 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 76 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	dowildbattle
# 77 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 78 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 79 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 80 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq FiveIsland_MemorialPillar_EventScript_DefeatedSudowoodo
# 81 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 82 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq FiveIsland_MemorialPillar_EventScript_RanFromSudowoodo
# 83 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 84 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq FiveIsland_MemorialPillar_EventScript_RanFromSudowoodo
# 85 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_CAUGHT_SUDOWOODO
# 86 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 87 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 88 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 89 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
gText_Sudowoodo_Attacked:: @ 82731BD
# 90 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "The weird tree doesn't like the\n"
# 91 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "FRESH WATER!\p"
# 92 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "The weird tree attacked!$"
# 93 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 94 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_DefeatedSudowoodo:: @ 8242D60
# 95 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_DEFEATED_SUDOWOODO
# 96 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_RanFromSudowoodo
# 97 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 98 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 99 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_RanFromSudowoodo::
# 100 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	fadescreen FADE_TO_BLACK
# 101 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    removeobject VAR_LAST_TALKED
# 102 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    fadescreen FADE_FROM_BLACK
# 103 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    msgbox Text_WeirdTreeFledSomewhere
# 104 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    release
# 105 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    end
# 106 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 107 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
Text_WeirdTreeFledSomewhere::
# 108 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "The weird tree fled elsewhere…$"
# 109 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 110 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Movement_SudowoodoShake: @ 8242D69
# 111 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_right
# 112 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_8
# 113 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_down
# 114 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_8
# 115 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_left
# 116 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_8
# 117 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_down
# 118 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_8
# 119 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_right
# 120 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_8
# 121 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_down
# 122 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_8
# 123 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_left
# 124 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_8
# 125 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_down
# 126 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	step_end
# 127 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 128 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Movement_SudowoodoShakeAngry: @ 8242D69
# 129 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_right
# 130 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_2
# 131 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_down
# 132 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_2
# 133 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_left
# 134 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_2
# 135 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_down
# 136 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_2
# 137 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_right
# 138 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_2
# 139 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_down
# 140 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_2
# 141 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_left
# 142 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_2
# 143 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_down
# 144 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	step_end
# 145 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 146 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_MemorialMan::
# 147 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	lock
# 148 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42
# 149 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_ReturnedForTM42
# 150 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrub
# 151 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	closemessage
# 152 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_FacePlayer
# 153 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 154 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay 45
# 155 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_YourMonsLookHealthy
# 156 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
# 157 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 158 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix
# 159 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 160 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 161 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 162 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42::
# 163 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrubTectonix
# 164 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 165 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 166 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 167 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_ReturnedForTM42::
# 168 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks
# 169 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 170 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
# 171 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
# 172 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 173 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 174 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 175 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_Memorial::
# 176 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 177 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	special QuestLog_CutRecording
# 178 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	lockall
# 179 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
# 180 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
# 181 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering
# 182 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	checkitem ITEM_LEMONADE
# 183 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade
# 184 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 185 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 186 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 187 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade::
# 188 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering, MSGBOX_YESNO
# 189 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FiveIsland_MemorialPillar_EventScript_PlaceLemonade
# 190 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 191 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 192 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 193 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_PlaceLemonade::
# 194 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	removeitem ITEM_LEMONADE
# 195 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade
# 196 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	closemessage
# 197 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
# 198 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 199 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay 45
# 200 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 201 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 202 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 203 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis
# 204 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 205 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
# 206 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
# 207 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 208 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 209 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 210 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_ReceivedTM42::
# 211 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo
# 212 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
# 213 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 214 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_GOT_TM42_AT_MEMORIAL_PILLAR
# 215 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	return
# 216 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 217 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_NoRoomForTM42::
# 218 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR
# 219 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_DontHaveRoomForIt
# 220 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 221 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 222 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 223 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced::
# 224 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonix
# 225 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 226 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 227 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 228 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_Oman::
# 229 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	lock
# 230 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	faceplayer
# 231 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_OMAN_DEFEATED, FiveIsland_MemorialPillar_EventScript_RematchOman
# 232 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_Oman, MSGBOX_YESNO
# 233 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_MemorialPillar_EventScript_NoOman
# 234 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	trainerbattle_single TRAINER_OMAN, FiveIsland_MemorialPillar_Text_YesOman, FiveIsland_MemorialPillar_Text_OmanDefeat, FiveIsland_MemorialPillar_EventScript_PostOman, NO_MUSIC
# 235 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 236 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 237 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 238 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_PostOman::
# 239 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_OmanPostBattle
# 240 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_OMAN_DEFEATED
# 241 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	cleartrainerflag TRAINER_OMAN
# 242 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 243 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 244 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 245 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_CantRematchOman::
# 246 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_OmanPostBattle
# 247 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 248 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 249 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 250 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_NoOman::
# 251 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_NoOman
# 252 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 253 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 254 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 255 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_RematchOman::
# 256 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_RematchOman, MSGBOX_YESNO
# 257 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_MemorialPillar_EventScript_NoOman
# 258 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	trainerbattle_single TRAINER_OMAN, FiveIsland_MemorialPillar_Text_YesRematchOman, FiveIsland_MemorialPillar_Text_RematchOmanDefeat, FiveIsland_MemorialPillar_EventScript_PostRematchOman, NO_MUSIC
# 259 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 260 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 261 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 262 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_PostRematchOman::
# 263 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_RematchOmanDefeat
# 264 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	cleartrainerflag TRAINER_OMAN
# 265 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	message Text_6Leaders
# 266 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 267 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 268 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 269 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_CelebiQuest::
# 270 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_OLD_LEAD, FiveIsland_MemorialPillar_EventScript_CelebiQuest3
# 271 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	special CheckGotAllItems
# 272 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_MemorialPillar_EventScript_CelebiQuest2	
# 273 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_CelebiQuest, MSGBOX_NPC
# 274 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 275 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 276 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 277 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_CelebiQuest2::
# 278 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_SPAWN_CELEBI
# 279 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	clearflag FLAG_CELEBI_EVENT
# 280 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_CELEBI, FiveIsland_MemorialPillar_Movement_Celebi
# 281 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 282 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitse
# 283 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	playse SE_PIN
# 284 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_OLD_LADY, Common_Movement_FaceUp
# 285 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 286 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 287 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitse
# 288 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_NORMAL
# 289 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_CelebiQuest2
# 290 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 291 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_CELEBI_EVENT
# 292 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	fadescreen FADE_TO_BLACK
# 293 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	removeobject 8
# 294 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 295 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_OLD_LEAD
# 296 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 297 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 298 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 299 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_CelebiQuest3::
# 300 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_CelebiQuest3, MSGBOX_NPC
# 301 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 302 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 303 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 304 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_CelebiQuest::
# 305 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "Once a lonely ONIX pined\n"
# 306 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "for a friend to join him\l"
# 307 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "by his side.\p"
# 308 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Then SQUIRTLE swam unto his shore\n"
# 309 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "and forged a bond forevermore.\p"
# 310 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "To the FOREST of BERRIES\n"
# 311 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "they made their way\l"
# 312 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "and found more friends\l"
# 313 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "with whom to play…\p"
# 314 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "MEOWTH, NATU, LARVITAR,\n"
# 315 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "DELIBIRD and CHARMANDER.\p"
# 316 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "But then time fell upon the eve…\n"
# 317 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "With regret, they all did leave.\p"
# 318 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "LARVITAR left for the\n"
# 319 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "canyon's peak…\p"
# 320 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "MEOWTH headed to the\n"
# 321 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "golden beach…\p"
# 322 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "CHARMANDER to the mountain\n"
# 323 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "of embers…\p"
# 324 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "DELIBIRD down the ice cellar…\p"
# 325 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "NATU to its puzzled hole…\p"
# 326 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "SQUIRTLE beneath the fallen waves…\p"
# 327 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "And ONIX to its island home,\n"
# 328 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "once again left all alone.\p"
# 329 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "Flowers, rocks, and One toe marks,\n"
# 330 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "all decorate their homes.$"
# 331 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "Should these friends again convene,\n"
# 332 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "they'll be welcomed by\l"
# 333 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "the fey of green.$"
# 334 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 335 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_CelebiQuest2::
# 336 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Lululalala!$"
# 337 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 338 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_CelebiQuest3::
# 339 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "What was that green thing?$"
# 340 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 341 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Movement_Celebi::
# 342 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	walk_down
# 343 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	walk_down
# 344 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	walk_down
# 345 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	walk_down
# 346 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	walk_down
# 347 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	step_end
