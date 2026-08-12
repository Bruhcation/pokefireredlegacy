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
	waitse
# 35 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	playse SE_UNLOCK
# 36 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_SUDOWOODO, FiveIsland_MemorialPillar_Movement_SudowoodoShake
# 37 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 38 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	checkitem ITEM_FRESH_WATER, 1
# 39 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	compare VAR_RESULT, TRUE
# 40 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq FiveIsland_MemorialPillar_EventScript_AskWaterSudowoodo
# 41 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 42 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 43 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 44 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_AskWaterSudowoodo::
# 45 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_UseFreshWater MSGBOX_YESNO
# 46 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	compare VAR_RESULT, YES
# 47 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq FiveIsland_MemorialPillar_EventScript_WaterSudowoodo
# 48 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 49 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 50 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 51 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_UseFreshWater::
# 52 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "It's a weird tree.\n"
# 53 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "Water it with a FRESH WATER?$"
# 54 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 55 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_WaterSudowoodo:: @ 8242CFC
# 56 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	lock
# 57 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	faceplayer
# 58 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	removeitem ITEM_FRESH_WATER, 1
# 59 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	playse SE_UNLOCK
# 60 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_SUDOWOODO, FiveIsland_MemorialPillar_Movement_SudowoodoShakeAngry
# 61 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 62 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_SUDOWOODO, FiveIsland_MemorialPillar_Movement_SudowoodoShakeAngry
# 63 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 64 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_SUDOWOODO, FiveIsland_MemorialPillar_Movement_SudowoodoShakeAngry
# 65 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 66 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox gText_Sudowoodo_Attacked, MSGBOX_DEFAULT
# 67 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	closemessage
# 68 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitse
# 69 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	playmoncry SPECIES_SUDOWOODO, 2
# 70 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay 40
# 71 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmoncry
# 72 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_SUDOWOODO
# 73 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setwildbattle SPECIES_SUDOWOODO, 50, ITEM_NONE
# 74 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 75 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	dowildbattle
# 76 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 77 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 78 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_WON
# 79 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq FiveIsland_MemorialPillar_EventScript_DefeatedSudowoodo
# 80 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_RAN
# 81 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq FiveIsland_MemorialPillar_EventScript_RanFromSudowoodo
# 82 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	compare VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED
# 83 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq FiveIsland_MemorialPillar_EventScript_RanFromSudowoodo
# 84 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_CAUGHT_SUDOWOODO
# 85 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 86 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 87 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 88 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
gText_Sudowoodo_Attacked:: @ 82731BD
# 89 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "The weird tree doesn't like the\n"
# 90 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "FRESH WATER!\p"
# 91 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "The weird tree attacked!$"
# 92 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 93 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_DefeatedSudowoodo:: @ 8242D60
# 94 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_DEFEATED_SUDOWOODO
# 95 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto FiveIsland_MemorialPillar_EventScript_RanFromSudowoodo
# 96 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 97 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 98 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_RanFromSudowoodo::
# 99 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	fadescreen FADE_TO_BLACK
# 100 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    removeobject VAR_LAST_TALKED
# 101 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    fadescreen FADE_FROM_BLACK
# 102 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    msgbox Text_WeirdTreeFledSomewhere
# 103 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    release
# 104 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    end
# 105 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 106 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
Text_WeirdTreeFledSomewhere::
# 107 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "The weird tree fled elsewhere…$"
# 108 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 109 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Movement_SudowoodoShake: @ 8242D69
# 110 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_right
# 111 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_8
# 112 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_down
# 113 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_8
# 114 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_left
# 115 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_8
# 116 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_down
# 117 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_8
# 118 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_right
# 119 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_8
# 120 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_down
# 121 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_8
# 122 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_left
# 123 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_8
# 124 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_down
# 125 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	step_end
# 126 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 127 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Movement_SudowoodoShakeAngry: @ 8242D69
# 128 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_right
# 129 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_2
# 130 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_down
# 131 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_2
# 132 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_left
# 133 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_2
# 134 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_down
# 135 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_2
# 136 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_right
# 137 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_2
# 138 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_down
# 139 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_2
# 140 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_left
# 141 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay_2
# 142 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	face_down
# 143 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	step_end
# 144 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 145 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_MemorialMan::
# 146 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	lock
# 147 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42
# 148 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_ReturnedForTM42
# 149 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrub
# 150 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	closemessage
# 151 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_FacePlayer
# 152 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 153 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay 45
# 154 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_YourMonsLookHealthy
# 155 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
# 156 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 157 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThisIsWhereIBuriedMyOnix
# 158 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 159 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 160 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 161 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_AlreadyGotTM42::
# 162 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ScrubScrubTectonix
# 163 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 164 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 165 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 166 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_ReturnedForTM42::
# 167 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_StillHaveThingAsMyThanks
# 168 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 169 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
# 170 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
# 171 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 172 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 173 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 174 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_Memorial::
# 175 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 176 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	special QuestLog_CutRecording
# 177 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	lockall
# 178 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_GOT_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
# 179 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR, FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced
# 180 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonixLemonadeOffering
# 181 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	checkitem ITEM_LEMONADE
# 182 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade
# 183 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 184 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 185 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 186 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_AskPlaceLemonade::
# 187 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_LeaveAnotherLemonadeOffering, MSGBOX_YESNO
# 188 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, YES, FiveIsland_MemorialPillar_EventScript_PlaceLemonade
# 189 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 190 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 191 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 192 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_PlaceLemonade::
# 193 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	removeitem ITEM_LEMONADE
# 194 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_PlacedCanOfLemonade
# 195 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	closemessage
# 196 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
# 197 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 198 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	delay 45
# 199 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 200 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 201 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 202 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_ThankYouPleaseTakeThis
# 203 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	giveitem ITEM_LUCKY_EGG
# 204 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FiveIsland_MemorialPillar_EventScript_NoRoomForTM42
# 205 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	call FiveIsland_MemorialPillar_EventScript_ReceivedTM42
# 206 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 207 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 208 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 209 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_ReceivedTM42::
# 210 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_BeGoodToYourMonsToo
# 211 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_MEMORIAL_MAN, Common_Movement_WalkInPlaceFasterUp
# 212 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 213 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_GOT_TM42_AT_MEMORIAL_PILLAR
# 214 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	return
# 215 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 216 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_NoRoomForTM42::
# 217 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_TM42_AT_MEMORIAL_PILLAR
# 218 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_DontHaveRoomForIt
# 219 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 220 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 221 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 222 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_MemorialLemonadeAlreadyPlaced::
# 223 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_HereLiesTectonix
# 224 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	releaseall
# 225 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 226 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 227 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_Oman::
# 228 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	lock
# 229 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	faceplayer
# 230 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_OMAN_DEFEATED, FiveIsland_MemorialPillar_EventScript_RematchOman
# 231 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_Oman, MSGBOX_YESNO
# 232 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_MemorialPillar_EventScript_NoOman
# 233 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	trainerbattle_single TRAINER_OMAN, FiveIsland_MemorialPillar_Text_YesOman, FiveIsland_MemorialPillar_Text_OmanDefeat, FiveIsland_MemorialPillar_EventScript_PostOman, NO_MUSIC
# 234 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 235 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 236 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 237 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_PostOman::
# 238 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_OmanPostBattle
# 239 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_OMAN_DEFEATED
# 240 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	cleartrainerflag TRAINER_OMAN
# 241 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 242 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 243 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 244 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_CantRematchOman::
# 245 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_OmanPostBattle
# 246 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 247 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 248 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 249 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_NoOman::
# 250 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_NoOman
# 251 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 252 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 253 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 254 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_RematchOman::
# 255 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_RematchOman, MSGBOX_YESNO
# 256 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_MemorialPillar_EventScript_NoOman
# 257 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	trainerbattle_single TRAINER_OMAN, FiveIsland_MemorialPillar_Text_YesRematchOman, FiveIsland_MemorialPillar_Text_RematchOmanDefeat, FiveIsland_MemorialPillar_EventScript_PostRematchOman, NO_MUSIC
# 258 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 259 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 260 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 261 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_PostRematchOman::
# 262 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_RematchOmanDefeat
# 263 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	cleartrainerflag TRAINER_OMAN
# 264 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	message Text_6Leaders
# 265 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 266 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 267 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 268 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_CelebiQuest::
# 269 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	goto_if_set FLAG_OLD_LEAD, FiveIsland_MemorialPillar_EventScript_CelebiQuest3
# 270 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	special CheckGotAllItems
# 271 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_MemorialPillar_EventScript_CelebiQuest2	
# 272 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_CelebiQuest, MSGBOX_NPC
# 273 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 274 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 275 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 276 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_CelebiQuest2::
# 277 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_SPAWN_CELEBI
# 278 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	clearflag FLAG_CELEBI_EVENT
# 279 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_CELEBI, FiveIsland_MemorialPillar_Movement_Celebi
# 280 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 281 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitse
# 282 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	playse SE_PIN
# 283 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement LOCALID_OLD_LADY, Common_Movement_FaceUp
# 284 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 285 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 286 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitse
# 287 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	playmoncry SPECIES_CELEBI, CRY_MODE_NORMAL
# 288 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_CelebiQuest2
# 289 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	waitmovement 0
# 290 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_CELEBI_EVENT
# 291 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	fadescreen FADE_TO_BLACK
# 292 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	removeobject 8
# 293 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 294 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	setflag FLAG_OLD_LEAD
# 295 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 296 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 297 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 298 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_CelebiQuest3::
# 299 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_CelebiQuest3, MSGBOX_NPC
# 300 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 301 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 302 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 303 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_EventScript_Frog::
# 304 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	msgbox FiveIsland_MemorialPillar_Text_Frog, MSGBOX_NPC
# 305 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	release
# 306 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	end
# 307 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 308 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_CelebiQuest::
# 309 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "Once a lonely ONIX pined\n"
# 310 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "for a friend to join him\l"
# 311 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "by his side.\p"
# 312 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Then SQUIRTLE swam unto his shore\n"
# 313 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "and forged a bond forevermore.\p"
# 314 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "To the FOREST of BERRIES\n"
# 315 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "they made their way\l"
# 316 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "and found more friends\l"
# 317 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "with whom to play…\p"
# 318 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "MEOWTH, NATU, LARVITAR,\n"
# 319 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "DELIBIRD and CHARMANDER.\p"
# 320 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "But then time fell upon the eve…\n"
# 321 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "With regret, they all did leave.\p"
# 322 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "LARVITAR left for the\n"
# 323 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "canyon's peak…\p"
# 324 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "MEOWTH headed to the\n"
# 325 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "golden beach…\p"
# 326 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "CHARMANDER to the mountain\n"
# 327 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "of embers…\p"
# 328 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "DELIBIRD down the ice cellar…\p"
# 329 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "NATU to its puzzled hole…\p"
# 330 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "SQUIRTLE beneath the fallen waves…\p"
# 331 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "And ONIX to its island home,\n"
# 332 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "once again left all alone.\p"
# 333 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "Flowers, rocks, and One toe marks,\n"
# 334 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "all decorate their homes.$"
# 335 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "Should these friends again convene,\n"
# 336 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "they'll be welcomed by\l"
# 337 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	.string "the fey of green.$"
# 338 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 339 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_CelebiQuest2::
# 340 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Lululalala!$"
# 341 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 342 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Text_CelebiQuest3::
# 343 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "What was that green thing?\p"
# 344 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "It seemed like something?\n"
# 345 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
    .string "Out of Berry Forest1$"
# 346 "data/maps/FiveIsland_MemorialPillar/scripts.pory"

# 347 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
FiveIsland_MemorialPillar_Movement_Celebi::
# 348 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	walk_down
# 349 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	walk_down
# 350 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	walk_down
# 351 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	walk_down
# 352 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	walk_down
# 353 "data/maps/FiveIsland_MemorialPillar/scripts.pory"
	step_end
