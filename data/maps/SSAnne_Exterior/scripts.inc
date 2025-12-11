# 1 "data/maps/SSAnne_Exterior/scripts.pory"

# 2 "data/maps/SSAnne_Exterior/scripts.pory"
.set LOCALID_SS_ANNE, 1
# 3 "data/maps/SSAnne_Exterior/scripts.pory"

# 4 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Exterior_MapScripts::
# 5 "data/maps/SSAnne_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SSAnne_Exterior_OnTransition
# 6 "data/maps/SSAnne_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SSAnne_Exterior_OnFrame
# 7 "data/maps/SSAnne_Exterior/scripts.pory"
	.byte 0
# 8 "data/maps/SSAnne_Exterior/scripts.pory"

# 9 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Exterior_OnTransition::
# 10 "data/maps/SSAnne_Exterior/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SSANNE_EXTERIOR
# 11 "data/maps/SSAnne_Exterior/scripts.pory"
	end
# 12 "data/maps/SSAnne_Exterior/scripts.pory"

# 13 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Exterior_OnFrame::
# 14 "data/maps/SSAnne_Exterior/scripts.pory"
	map_script_2 VAR_MAP_SCENE_VERMILION_CITY, 1, SSAnne_Exterior_ExitSSAnne
# 15 "data/maps/SSAnne_Exterior/scripts.pory"
	.2byte 0
# 16 "data/maps/SSAnne_Exterior/scripts.pory"

# 17 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Exterior_ExitSSAnne::
# 18 "data/maps/SSAnne_Exterior/scripts.pory"
	lockall
# 19 "data/maps/SSAnne_Exterior/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 20 "data/maps/SSAnne_Exterior/scripts.pory"
	call_if_le VAR_0x8005, 6, SSAnne_Exterior_WalkDown
# 21 "data/maps/SSAnne_Exterior/scripts.pory"
	call_if_ge VAR_0x8005, 7, SSAnne_Exterior_WalkInPlaceDown
# 22 "data/maps/SSAnne_Exterior/scripts.pory"
	fadenewbgm MUS_SURF
# 23 "data/maps/SSAnne_Exterior/scripts.pory"
	delay 50
# 24 "data/maps/SSAnne_Exterior/scripts.pory"
	special DoSSAnneDepartureCutscene
# 25 "data/maps/SSAnne_Exterior/scripts.pory"
	waitstate
# 26 "data/maps/SSAnne_Exterior/scripts.pory"
	removeobject LOCALID_SS_ANNE
# 27 "data/maps/SSAnne_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSAnne_Exterior_Movement_Exit
# 28 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmovement 0
# 29 "data/maps/SSAnne_Exterior/scripts.pory"
	setvar VAR_MAP_SCENE_VERMILION_CITY, 2
# 30 "data/maps/SSAnne_Exterior/scripts.pory"
	setvar VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 0
# 31 "data/maps/SSAnne_Exterior/scripts.pory"
	warp MAP_VERMILION_CITY, 23, 34
# 32 "data/maps/SSAnne_Exterior/scripts.pory"
	waitstate
# 33 "data/maps/SSAnne_Exterior/scripts.pory"
	releaseall
# 34 "data/maps/SSAnne_Exterior/scripts.pory"
	end
# 35 "data/maps/SSAnne_Exterior/scripts.pory"

# 36 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Exterior_EventScript_Meowth::
# 37 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox SSAnne_Deck_Text_Meowth, MSGBOX_SIGN
# 38 "data/maps/SSAnne_Exterior/scripts.pory"
	goto_if_unset FLAG_SHINY_DITTO, SSAnne_Exterior_EventScript_Ditto
# 39 "data/maps/SSAnne_Exterior/scripts.pory"
	end
# 40 "data/maps/SSAnne_Exterior/scripts.pory"

# 41 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Exterior_EventScript_Ditto::
# 42 "data/maps/SSAnne_Exterior/scripts.pory"
	playse SE_PIN
# 43 "data/maps/SSAnne_Exterior/scripts.pory"
	waitse
# 44 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox SSAnne_Deck_Text_Ditto, MSGBOX_SIGN
# 45 "data/maps/SSAnne_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 46 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmovement 0
# 47 "data/maps/SSAnne_Exterior/scripts.pory"
	delay 16
# 48 "data/maps/SSAnne_Exterior/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 49 "data/maps/SSAnne_Exterior/scripts.pory"
	waitse
# 50 "data/maps/SSAnne_Exterior/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
# 51 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmoncry
# 52 "data/maps/SSAnne_Exterior/scripts.pory"
	setflag FLAG_SHINY_CREATION
# 53 "data/maps/SSAnne_Exterior/scripts.pory"
	setwildbattle SPECIES_DITTO, 40
# 54 "data/maps/SSAnne_Exterior/scripts.pory"
	dowildbattle
# 55 "data/maps/SSAnne_Exterior/scripts.pory"
	special QuestLog_CutRecording
# 56 "data/maps/SSAnne_Exterior/scripts.pory"
	goto SSAnne_Exterior_EventScript_Ditto2
# 57 "data/maps/SSAnne_Exterior/scripts.pory"
	end
# 58 "data/maps/SSAnne_Exterior/scripts.pory"

# 59 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Exterior_EventScript_Ditto2::
# 60 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox SSAnne_Deck_Text_Meowth, MSGBOX_SIGN
# 61 "data/maps/SSAnne_Exterior/scripts.pory"
	setflag FLAG_SHINY_DITTO
# 62 "data/maps/SSAnne_Exterior/scripts.pory"
	release
# 63 "data/maps/SSAnne_Exterior/scripts.pory"
	end
# 64 "data/maps/SSAnne_Exterior/scripts.pory"

# 65 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Deck_Text_Meowth::
# 66 "data/maps/SSAnne_Exterior/scripts.pory"
    .string "Sounds like something is under here\n"  
# 67 "data/maps/SSAnne_Exterior/scripts.pory"
    .string "I should take a look.\p"  
# 68 "data/maps/SSAnne_Exterior/scripts.pory"
    .string "Oh, it's just a MEOWTH.$"  
# 69 "data/maps/SSAnne_Exterior/scripts.pory"

# 70 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Deck_Text_Ditto::
# 71 "data/maps/SSAnne_Exterior/scripts.pory"
    .string "Wait, is that a MEW?$"  
# 72 "data/maps/SSAnne_Exterior/scripts.pory"

# 73 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Exterior_WalkDown::
# 74 "data/maps/SSAnne_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SSAnne_Exterior_Movement_WalkDown
# 75 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmovement 0
# 76 "data/maps/SSAnne_Exterior/scripts.pory"
	return
# 77 "data/maps/SSAnne_Exterior/scripts.pory"

# 78 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Exterior_WalkInPlaceDown::
# 79 "data/maps/SSAnne_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 80 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmovement 0
# 81 "data/maps/SSAnne_Exterior/scripts.pory"
	return
# 82 "data/maps/SSAnne_Exterior/scripts.pory"

# 83 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Exterior_Movement_Exit::
# 84 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 85 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 86 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 87 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 88 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 89 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 90 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 91 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 92 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 93 "data/maps/SSAnne_Exterior/scripts.pory"
	step_end
# 94 "data/maps/SSAnne_Exterior/scripts.pory"

# 95 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Exterior_Movement_WalkDown::
# 96 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 97 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 98 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 99 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 100 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 101 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 102 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 103 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 104 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 105 "data/maps/SSAnne_Exterior/scripts.pory"
	step_end
