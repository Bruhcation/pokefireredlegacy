# 1 "data/maps/VictoryRoad_2F/scripts.pory"

# 2 "data/maps/VictoryRoad_2F/scripts.pory"
.set LOCALID_BOULDER1, 11
# 3 "data/maps/VictoryRoad_2F/scripts.pory"
.set LOCALID_BOULDER2, 12
# 4 "data/maps/VictoryRoad_2F/scripts.pory"

# 5 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_MapScripts::
# 6 "data/maps/VictoryRoad_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VictoryRoad_2F_OnLoad
# 7 "data/maps/VictoryRoad_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VictoryRoad_2F_OnTransition
# 8 "data/maps/VictoryRoad_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, VictoryRoad_2F_OnResume
# 9 "data/maps/VictoryRoad_2F/scripts.pory"
	.byte 0
# 10 "data/maps/VictoryRoad_2F/scripts.pory"

# 11 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_OnLoad::
# 12 "data/maps/VictoryRoad_2F/scripts.pory"
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100, VictoryRoad_2F_EventScript_SetRockBarrier1
# 13 "data/maps/VictoryRoad_2F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100, VictoryRoad_2F_EventScript_MoveSwitch1Boulder
# 14 "data/maps/VictoryRoad_2F/scripts.pory"
	call_if_ne VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100, VictoryRoad_2F_EventScript_SetRockBarrier2
# 15 "data/maps/VictoryRoad_2F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100, VictoryRoad_2F_EventScript_MoveSwitch2Boulder
# 16 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 17 "data/maps/VictoryRoad_2F/scripts.pory"

# 18 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_OnTransition::
# 19 "data/maps/VictoryRoad_2F/scripts.pory"
	call_if_unset FLAG_FOUGHT_MOLTRES, VictoryRoad_2F_EventScript_ShowMoltres
# 20 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 21 "data/maps/VictoryRoad_2F/scripts.pory"

# 22 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_OnResume::
# 23 "data/maps/VictoryRoad_2F/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, VictoryRoad_2F_EventScript_TryRemoveMoltres
# 24 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 25 "data/maps/VictoryRoad_2F/scripts.pory"

# 26 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_TryRemoveMoltres::
# 27 "data/maps/VictoryRoad_2F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 28 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 29 "data/maps/VictoryRoad_2F/scripts.pory"
	removeobject VAR_LAST_TALKED
# 30 "data/maps/VictoryRoad_2F/scripts.pory"
	return
# 31 "data/maps/VictoryRoad_2F/scripts.pory"

# 32 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_ShowMoltres::
# 33 "data/maps/VictoryRoad_2F/scripts.pory"
	clearflag FLAG_HIDE_MOLTRES
# 34 "data/maps/VictoryRoad_2F/scripts.pory"
	return
# 35 "data/maps/VictoryRoad_2F/scripts.pory"

# 36 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_MoveSwitch1Boulder::
# 37 "data/maps/VictoryRoad_2F/scripts.pory"
	setobjectxyperm LOCALID_BOULDER1, 2, 19
# 38 "data/maps/VictoryRoad_2F/scripts.pory"
	return
# 39 "data/maps/VictoryRoad_2F/scripts.pory"

# 40 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_MoveSwitch2Boulder::
# 41 "data/maps/VictoryRoad_2F/scripts.pory"
	setobjectxyperm LOCALID_BOULDER2, 14, 19
# 42 "data/maps/VictoryRoad_2F/scripts.pory"
	return
# 43 "data/maps/VictoryRoad_2F/scripts.pory"

# 44 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_SetRockBarrier1::
# 45 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 13, 10, METATILE_Cave_RockBarrier_Top, 1
# 46 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 13, 11, METATILE_Cave_RockBarrier_Bottom, 1
# 47 "data/maps/VictoryRoad_2F/scripts.pory"
	return
# 48 "data/maps/VictoryRoad_2F/scripts.pory"

# 49 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_SetRockBarrier2::
# 50 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 33, 16, METATILE_Cave_RockBarrier_Top, 1
# 51 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 33, 17, METATILE_Cave_RockBarrier_Bottom, 1
# 52 "data/maps/VictoryRoad_2F/scripts.pory"
	return
# 53 "data/maps/VictoryRoad_2F/scripts.pory"

# 54 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Moltres::
# 55 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 56 "data/maps/VictoryRoad_2F/scripts.pory"
	special QuestLog_CutRecording
# 57 "data/maps/VictoryRoad_2F/scripts.pory"
	lock
# 58 "data/maps/VictoryRoad_2F/scripts.pory"
	faceplayer
# 59 "data/maps/VictoryRoad_2F/scripts.pory"
	setwildbattle SPECIES_MOLTRES, 55
# 60 "data/maps/VictoryRoad_2F/scripts.pory"
	waitse
# 61 "data/maps/VictoryRoad_2F/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
# 62 "data/maps/VictoryRoad_2F/scripts.pory"
	message Text_Gyaoo
# 63 "data/maps/VictoryRoad_2F/scripts.pory"
	waitmessage
# 64 "data/maps/VictoryRoad_2F/scripts.pory"
	waitmoncry
# 65 "data/maps/VictoryRoad_2F/scripts.pory"
	delay 10
# 66 "data/maps/VictoryRoad_2F/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 67 "data/maps/VictoryRoad_2F/scripts.pory"
	waitbuttonpress
# 68 "data/maps/VictoryRoad_2F/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 69 "data/maps/VictoryRoad_2F/scripts.pory"
	special StartLegendaryBattle
# 70 "data/maps/VictoryRoad_2F/scripts.pory"
	waitstate
# 71 "data/maps/VictoryRoad_2F/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 72 "data/maps/VictoryRoad_2F/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 73 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, VictoryRoad_2F_EventScript_DefeatedMoltres
# 74 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, VictoryRoad_2F_EventScript_RanFromMoltres
# 75 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, VictoryRoad_2F_EventScript_RanFromMoltres
# 76 "data/maps/VictoryRoad_2F/scripts.pory"
	setflag FLAG_FOUGHT_MOLTRES
# 77 "data/maps/VictoryRoad_2F/scripts.pory"
	release
# 78 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 79 "data/maps/VictoryRoad_2F/scripts.pory"

# 80 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_DefeatedMoltres::
# 81 "data/maps/VictoryRoad_2F/scripts.pory"
	setflag FLAG_FOUGHT_MOLTRES
# 82 "data/maps/VictoryRoad_2F/scripts.pory"
	goto EventScript_RemoveStaticMon
# 83 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 84 "data/maps/VictoryRoad_2F/scripts.pory"

# 85 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_RanFromMoltres::
# 86 "data/maps/VictoryRoad_2F/scripts.pory"
	setvar VAR_0x8004, SPECIES_MOLTRES
# 87 "data/maps/VictoryRoad_2F/scripts.pory"
	goto EventScript_MonFlewAway
# 88 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 89 "data/maps/VictoryRoad_2F/scripts.pory"

# 90 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch1::
# 91 "data/maps/VictoryRoad_2F/scripts.pory"
	lockall
# 92 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100, VictoryRoad_2F_EventScript_FloorSwitch1AlreadyPressed
# 93 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 13, 10, METATILE_Cave_Floor_Ledge_Top, 0
# 94 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 13, 11, METATILE_Cave_Floor_Ledge_Bottom, 0
# 95 "data/maps/VictoryRoad_2F/scripts.pory"
	playse SE_ICE_BREAK
# 96 "data/maps/VictoryRoad_2F/scripts.pory"
	special DrawWholeMapView
# 97 "data/maps/VictoryRoad_2F/scripts.pory"
	waitse
# 98 "data/maps/VictoryRoad_2F/scripts.pory"
	copyobjectxytoperm LOCALID_BOULDER1
# 99 "data/maps/VictoryRoad_2F/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 100
# 100 "data/maps/VictoryRoad_2F/scripts.pory"
	releaseall
# 101 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 102 "data/maps/VictoryRoad_2F/scripts.pory"

# 103 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch1AlreadyPressed::
# 104 "data/maps/VictoryRoad_2F/scripts.pory"
	releaseall
# 105 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 106 "data/maps/VictoryRoad_2F/scripts.pory"

# 107 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch2::
# 108 "data/maps/VictoryRoad_2F/scripts.pory"
	lockall
# 109 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100, VictoryRoad_2F_EventScript_FloorSwitch2AlreadyPressed
# 110 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 33, 16, METATILE_Cave_Floor_Ledge_Top, 0
# 111 "data/maps/VictoryRoad_2F/scripts.pory"
	setmetatile 33, 17, METATILE_Cave_Floor_Ledge_Bottom, 0
# 112 "data/maps/VictoryRoad_2F/scripts.pory"
	playse SE_ICE_BREAK
# 113 "data/maps/VictoryRoad_2F/scripts.pory"
	special DrawWholeMapView
# 114 "data/maps/VictoryRoad_2F/scripts.pory"
	waitse
# 115 "data/maps/VictoryRoad_2F/scripts.pory"
	copyobjectxytoperm LOCALID_BOULDER2
# 116 "data/maps/VictoryRoad_2F/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 100
# 117 "data/maps/VictoryRoad_2F/scripts.pory"
	releaseall
# 118 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 119 "data/maps/VictoryRoad_2F/scripts.pory"

# 120 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_FloorSwitch2AlreadyPressed::
# 121 "data/maps/VictoryRoad_2F/scripts.pory"
	releaseall
# 122 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 123 "data/maps/VictoryRoad_2F/scripts.pory"

# 124 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Dawson::
# 125 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_POKEMANIAC_DAWSON, VictoryRoad_2F_Text_DawsonIntro, VictoryRoad_2F_Text_DawsonDefeat
# 126 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_DawsonPostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 128 "data/maps/VictoryRoad_2F/scripts.pory"

# 129 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_MoltresUnused::
# 130 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_set FLAG_FOUGHT_MOLTRES, VictoryRoad_2F_EventScript_MoltresDefeated
# 131 "data/maps/VictoryRoad_2F/scripts.pory"
	lock
# 132 "data/maps/VictoryRoad_2F/scripts.pory"
	faceplayer
# 133 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_NoMoltresPostBattle, MSGBOX_AUTOCLOSE
# 134 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 135 "data/maps/VictoryRoad_2F/scripts.pory"

# 136 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_MoltresDefeated::
# 137 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_MOLTON, VictoryRoad_2F_Text_MoltresIntro, VictoryRoad_2F_Text_MoltresDefeat
# 138 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_MoltresPostBattle, MSGBOX_AUTOCLOSE
# 139 "data/maps/VictoryRoad_2F/scripts.pory"
	checkitemspace ITEM_TM38
# 140 "data/maps/VictoryRoad_2F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CinnabarIsland_Gym_EventScript_NoRoomForTM38
# 141 "data/maps/VictoryRoad_2F/scripts.pory"
	giveitem ITEM_TM38	
# 142 "data/maps/VictoryRoad_2F/scripts.pory"
	setflag FLAG_MOLTRES_TRAINER
# 143 "data/maps/VictoryRoad_2F/scripts.pory"
	closemessage
# 144 "data/maps/VictoryRoad_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 145 "data/maps/VictoryRoad_2F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 146 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 147 "data/maps/VictoryRoad_2F/scripts.pory"

# 148 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_Text_NoMoltresPostBattle::
# 149 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "Ahh! There's no Moltres here!$"
# 150 "data/maps/VictoryRoad_2F/scripts.pory"

# 151 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_Text_MoltresIntro::
# 152 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "Wait you actually fought MOLTRES?\p"
# 153 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "Well than, let me test your\n"
# 154 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "abilities!$"
# 155 "data/maps/VictoryRoad_2F/scripts.pory"

# 156 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_Text_MoltresDefeat::
# 157 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "You were worthy!$"
# 158 "data/maps/VictoryRoad_2F/scripts.pory"

# 159 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_Text_MoltresPostBattle::
# 160 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "I was trying to find MOLTRES\n"
# 161 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "for a long time.\p"
# 162 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "But I think i'll give up\n"
# 163 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "after fighting you!\p"
# 164 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "Take this TM meant for\n"
# 165 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "a great MOLTRES!$"
# 166 "data/maps/VictoryRoad_2F/scripts.pory"

# 167 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Daisuke::
# 168 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_DAISUKE, VictoryRoad_2F_Text_DaisukeIntro, VictoryRoad_2F_Text_DaisukeDefeat
# 169 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 170 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 171 "data/maps/VictoryRoad_2F/scripts.pory"

# 172 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Nelson::
# 173 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_NELSON, VictoryRoad_2F_Text_NelsonIntro, VictoryRoad_2F_Text_NelsonDefeat
# 174 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_NelsonPostBattle, MSGBOX_AUTOCLOSE
# 175 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 176 "data/maps/VictoryRoad_2F/scripts.pory"

# 177 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Gregory::
# 178 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_GREGORY, VictoryRoad_2F_Text_GregoryIntro, VictoryRoad_2F_Text_GregoryDefeat
# 179 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_GregoryPostBattle, MSGBOX_AUTOCLOSE
# 180 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 181 "data/maps/VictoryRoad_2F/scripts.pory"

# 182 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Julie::
# 183 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_JULIE, VictoryRoad_2F_Text_JulieIntro, VictoryRoad_2F_Text_JulieDefeat
# 184 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_JuliePostBattle, MSGBOX_AUTOCLOSE
# 185 "data/maps/VictoryRoad_2F/scripts.pory"
	end
# 186 "data/maps/VictoryRoad_2F/scripts.pory"

# 187 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_Text_JulieIntro::
# 188 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "Victory Road tests\n"
# 189 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "more than strength.\p"
# 190 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "It tests resolve.\p"
# 191 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "Show me you have both!$"
# 192 "data/maps/VictoryRoad_2F/scripts.pory"

# 193 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_Text_JulieDefeat::
# 194 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "No way...\n"
# 195 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "I pushed myself to the limit…!$"
# 196 "data/maps/VictoryRoad_2F/scripts.pory"

# 197 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_Text_JuliePostBattle::
# 198 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "You have earned this win.\n"
# 199 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "Keep going,\l"
# 200 "data/maps/VictoryRoad_2F/scripts.pory"
	.string "the Pokémon League is just ahead.$"
# 201 "data/maps/VictoryRoad_2F/scripts.pory"

# 202 "data/maps/VictoryRoad_2F/scripts.pory"

# 203 "data/maps/VictoryRoad_2F/scripts.pory"
VictoryRoad_2F_EventScript_Vincent::
# 204 "data/maps/VictoryRoad_2F/scripts.pory"
	trainerbattle_single TRAINER_TAMER_VINCENT, VictoryRoad_2F_Text_VincentIntro, VictoryRoad_2F_Text_VincentDefeat
# 205 "data/maps/VictoryRoad_2F/scripts.pory"
	msgbox VictoryRoad_2F_Text_VincentPostBattle, MSGBOX_AUTOCLOSE
# 206 "data/maps/VictoryRoad_2F/scripts.pory"
	end
