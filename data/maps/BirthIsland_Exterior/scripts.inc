# 1 "data/maps/BirthIsland_Exterior/scripts.pory"

# 2 "data/maps/BirthIsland_Exterior/scripts.pory"
.set LOCALID_DEOXYS_ROCK, 1
# 3 "data/maps/BirthIsland_Exterior/scripts.pory"
.set LOCALID_DEOXYS,      2
# 4 "data/maps/BirthIsland_Exterior/scripts.pory"
.set LOCALID_GIDEON,      3
# 5 "data/maps/BirthIsland_Exterior/scripts.pory"

# 6 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_MapScripts::
# 7 "data/maps/BirthIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BirthIsland_Exterior_OnTransition
# 8 "data/maps/BirthIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BirthIsland_Exterior_OnResume
# 9 "data/maps/BirthIsland_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, BirthIsland_Exterior_OnReturnToField
# 10 "data/maps/BirthIsland_Exterior/scripts.pory"
	.byte 0
# 11 "data/maps/BirthIsland_Exterior/scripts.pory"

# 12 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_OnReturnToField::
# 13 "data/maps/BirthIsland_Exterior/scripts.pory"
	special SetDeoxysTrianglePalette
# 14 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 15 "data/maps/BirthIsland_Exterior/scripts.pory"

# 16 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_OnTransition::
# 17 "data/maps/BirthIsland_Exterior/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_BIRTH_ISLAND_EXTERIOR
# 18 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_DEOXYS_N
# 19 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_DEOXYS_INTERACTION_STEP_COUNTER, 0
# 20 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_DEOXYS_INTERACTION_NUM, 0
# 21 "data/maps/BirthIsland_Exterior/scripts.pory"
	call_if_set FLAG_FOUGHT_DEOXYS, BirthIsland_Exterior_EventScript_HideDeoxysAndPuzzle
# 22 "data/maps/BirthIsland_Exterior/scripts.pory"
	call_if_unset FLAG_FOUGHT_DEOXYS, BirthIsland_Exterior_EventScript_TryShowDeoxysPuzzle
# 23 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 24 "data/maps/BirthIsland_Exterior/scripts.pory"

# 25 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_HideDeoxysAndPuzzle::
# 26 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_HIDE_DEOXYS
# 27 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_HIDE_BIRTH_ISLAND_METEORITE
# 28 "data/maps/BirthIsland_Exterior/scripts.pory"
	return
# 29 "data/maps/BirthIsland_Exterior/scripts.pory"

# 30 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_TryShowDeoxysPuzzle::
# 31 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_set FLAG_DEOXYS_FLEW_AWAY, EventScript_Return
# 32 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_unset FLAG_BIRTH_ISLAND_GIDEON, BirthIsland_Exterior_EventScript_HideDeoxysAndPuzzle
# 33 "data/maps/BirthIsland_Exterior/scripts.pory"
	clearflag FLAG_HIDE_BIRTH_ISLAND_METEORITE
# 34 "data/maps/BirthIsland_Exterior/scripts.pory"
	clearflag FLAG_SYS_DEOXYS_AWAKENED
# 35 "data/maps/BirthIsland_Exterior/scripts.pory"
	addobject LOCALID_DEOXYS_ROCK
# 36 "data/maps/BirthIsland_Exterior/scripts.pory"
	return
# 37 "data/maps/BirthIsland_Exterior/scripts.pory"

# 38 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_OnResume::
# 39 "data/maps/BirthIsland_Exterior/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, BirthIsland_Exterior_EventScript_TryRemoveDeoxys
# 40 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 41 "data/maps/BirthIsland_Exterior/scripts.pory"

# 42 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_TryRemoveDeoxys::
# 43 "data/maps/BirthIsland_Exterior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 44 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 45 "data/maps/BirthIsland_Exterior/scripts.pory"
	removeobject LOCALID_DEOXYS
# 46 "data/maps/BirthIsland_Exterior/scripts.pory"
	return
# 47 "data/maps/BirthIsland_Exterior/scripts.pory"

# 48 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_Triangle::
# 49 "data/maps/BirthIsland_Exterior/scripts.pory"
	lock
# 50 "data/maps/BirthIsland_Exterior/scripts.pory"
	faceplayer
# 51 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 52 "data/maps/BirthIsland_Exterior/scripts.pory"
	special QuestLog_CutRecording
# 53 "data/maps/BirthIsland_Exterior/scripts.pory"
	special DoDeoxysTriangleInteraction
# 54 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitstate
# 55 "data/maps/BirthIsland_Exterior/scripts.pory"
	switch VAR_RESULT
# 56 "data/maps/BirthIsland_Exterior/scripts.pory"
	case 0, BirthIsland_Exterior_EventScript_NotSolved1
# 57 "data/maps/BirthIsland_Exterior/scripts.pory"
	case 1, BirthIsland_Exterior_EventScript_NotSolved2
# 58 "data/maps/BirthIsland_Exterior/scripts.pory"
	case 2, BirthIsland_Exterior_EventScript_Deoxys
# 59 "data/maps/BirthIsland_Exterior/scripts.pory"
	case 3, BirthIsland_Exterior_EventScript_NotSolved3
# 60 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 61 "data/maps/BirthIsland_Exterior/scripts.pory"

# 62 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_NotSolved1::
# 63 "data/maps/BirthIsland_Exterior/scripts.pory"
	release
# 64 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 65 "data/maps/BirthIsland_Exterior/scripts.pory"

# 66 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_NotSolved2::
# 67 "data/maps/BirthIsland_Exterior/scripts.pory"
	release
# 68 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 69 "data/maps/BirthIsland_Exterior/scripts.pory"

# 70 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_NotSolved3::
# 71 "data/maps/BirthIsland_Exterior/scripts.pory"
	release
# 72 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 73 "data/maps/BirthIsland_Exterior/scripts.pory"

# 74 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_Deoxys::
# 75 "data/maps/BirthIsland_Exterior/scripts.pory"
	addobject LOCALID_DEOXYS
# 76 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitse
# 77 "data/maps/BirthIsland_Exterior/scripts.pory"
	setfieldeffectargument 0, LOCALID_DEOXYS_ROCK
# 78 "data/maps/BirthIsland_Exterior/scripts.pory"
	setfieldeffectargument 1, MAP_NUM(BIRTH_ISLAND_EXTERIOR)
# 79 "data/maps/BirthIsland_Exterior/scripts.pory"
	setfieldeffectargument 2, MAP_GROUP(BIRTH_ISLAND_EXTERIOR)
# 80 "data/maps/BirthIsland_Exterior/scripts.pory"
	dofieldeffect FLDEFF_DESTROY_DEOXYS_ROCK
# 81 "data/maps/BirthIsland_Exterior/scripts.pory"
	playbgm MUS_ENCOUNTER_DEOXYS, 0
# 82 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitfieldeffect FLDEFF_DESTROY_DEOXYS_ROCK
# 83 "data/maps/BirthIsland_Exterior/scripts.pory"
	applymovement LOCALID_DEOXYS, Movement_DeoxysApproach
# 84 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmovement 0
# 85 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitse
# 86 "data/maps/BirthIsland_Exterior/scripts.pory"
	playmoncry SPECIES_DEOXYS, CRY_MODE_ENCOUNTER
# 87 "data/maps/BirthIsland_Exterior/scripts.pory"
	delay 40
# 88 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmoncry
# 89 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_DEOXYS
# 90 "data/maps/BirthIsland_Exterior/scripts.pory"
	seteventmon SPECIES_DEOXYS, 70
# 91 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 92 "data/maps/BirthIsland_Exterior/scripts.pory"
	special StartLegendaryBattle
# 93 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitstate
# 94 "data/maps/BirthIsland_Exterior/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 95 "data/maps/BirthIsland_Exterior/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 96 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, BirthIsland_Exterior_EventScript_DefeatedDeoxys
# 97 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, BirthIsland_Exterior_EventScript_RanFromDeoxys
# 98 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, BirthIsland_Exterior_EventScript_RanFromDeoxys
# 99 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_FOUGHT_DEOXYS
# 100 "data/maps/BirthIsland_Exterior/scripts.pory"
	release
# 101 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 102 "data/maps/BirthIsland_Exterior/scripts.pory"

# 103 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_DefeatedDeoxys::
# 104 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_DEOXYS_FLEW_AWAY
# 105 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, SPECIES_DEOXYS
# 106 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto EventScript_MonFlewAway
# 107 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 108 "data/maps/BirthIsland_Exterior/scripts.pory"

# 109 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_RanFromDeoxys::
# 110 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_0x8004, SPECIES_DEOXYS
# 111 "data/maps/BirthIsland_Exterior/scripts.pory"
	goto EventScript_MonFlewAway
# 112 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 113 "data/maps/BirthIsland_Exterior/scripts.pory"

# 114 "data/maps/BirthIsland_Exterior/scripts.pory"
Movement_DeoxysApproach:
# 115 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_slower_down
# 116 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_slower_down
# 117 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_slower_down
# 118 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_slower_down
# 119 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_slower_down
# 120 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_slower_down
# 121 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_slower_down
# 122 "data/maps/BirthIsland_Exterior/scripts.pory"
	step_end
# 123 "data/maps/BirthIsland_Exterior/scripts.pory"

# 124 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_Gideon::
# 125 "data/maps/BirthIsland_Exterior/scripts.pory"
	lockall
# 126 "data/maps/BirthIsland_Exterior/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 127 "data/maps/BirthIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkUpPlayer
# 128 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmovement 0
# 129 "data/maps/BirthIsland_Exterior/scripts.pory"
	applymovement LOCALID_GIDEON, Movement_FaceDown
# 130 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmovement 0
# 131 "data/maps/BirthIsland_Exterior/scripts.pory"
	msgbox BirthIsland_Exterior_Text_Gideon
# 132 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmessage
# 133 "data/maps/BirthIsland_Exterior/scripts.pory"
	applymovement LOCALID_GIDEON, Movement_FaceUpNormal
# 134 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmovement 0
# 135 "data/maps/BirthIsland_Exterior/scripts.pory"
	msgbox BirthIsland_Exterior_Text_GideonYes
# 136 "data/maps/BirthIsland_Exterior/scripts.pory"
	applymovement LOCALID_GIDEON, Movement_FaceDown
# 137 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmovement 0
# 138 "data/maps/BirthIsland_Exterior/scripts.pory"
	msgbox BirthIsland_Exterior_Text_GideonLetsFight
# 139 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_FORCEANIM, 1
# 140 "data/maps/BirthIsland_Exterior/scripts.pory"
	trainerbattle_single TRAINER_GIDEON_REMATCH, BirthIsland_Exterior_Text_GideonIntro, BirthIsland_Exterior_Text_GideonDefeat, BirthIsland_Exterior_EventScript_GideonEnd, NO_MUSIC
# 141 "data/maps/BirthIsland_Exterior/scripts.pory"
	releaseall
# 142 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 143 "data/maps/BirthIsland_Exterior/scripts.pory"

# 144 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_NoThanks::
# 145 "data/maps/BirthIsland_Exterior/scripts.pory"
	msgbox BirthIsland_Exterior_Text_GideonNo
# 146 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmessage
# 147 "data/maps/BirthIsland_Exterior/scripts.pory"
	closemessage
# 148 "data/maps/BirthIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WalkDownPlayer
# 149 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmovement 0
# 150 "data/maps/BirthIsland_Exterior/scripts.pory"
	applymovement LOCALID_GIDEON, Movement_FaceUpNormal
# 151 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmovement 0
# 152 "data/maps/BirthIsland_Exterior/scripts.pory"
	releaseall
# 153 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 154 "data/maps/BirthIsland_Exterior/scripts.pory"

# 155 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_EventScript_GideonEnd::
# 156 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_FORCEANIM, 0
# 157 "data/maps/BirthIsland_Exterior/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 158 "data/maps/BirthIsland_Exterior/scripts.pory"
	special HealPlayerParty
# 159 "data/maps/BirthIsland_Exterior/scripts.pory"
	msgbox BirthIsland_Exterior_Text_GideonPostBattle
# 160 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmessage
# 161 "data/maps/BirthIsland_Exterior/scripts.pory"
	closemessage
# 162 "data/maps/BirthIsland_Exterior/scripts.pory"
	setflag FLAG_BIRTH_ISLAND_GIDEON
# 163 "data/maps/BirthIsland_Exterior/scripts.pory"
	applymovement LOCALID_GIDEON, Movement_FaceUpNormal
# 164 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmovement 0
# 165 "data/maps/BirthIsland_Exterior/scripts.pory"
	call BirthIsland_Exterior_PostGideon
# 166 "data/maps/BirthIsland_Exterior/scripts.pory"
	playse SE_PIN
# 167 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitse
# 168 "data/maps/BirthIsland_Exterior/scripts.pory"
	applymovement LOCALID_GIDEON, Movement_FaceDown
# 169 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmovement 0
# 170 "data/maps/BirthIsland_Exterior/scripts.pory"
	msgbox BirthIsland_Exterior_Text_GideonPostBattle2
# 171 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmessage
# 172 "data/maps/BirthIsland_Exterior/scripts.pory"
	closemessage
# 173 "data/maps/BirthIsland_Exterior/scripts.pory"
	applymovement LOCALID_GIDEON, Movement_GideonWalkDown
# 174 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmovement 0
# 175 "data/maps/BirthIsland_Exterior/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_FaceDown
# 176 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmovement 0
# 177 "data/maps/BirthIsland_Exterior/scripts.pory"
	msgbox BirthIsland_Exterior_Text_GideonLastWords
# 178 "data/maps/BirthIsland_Exterior/scripts.pory"
	closemessage
# 179 "data/maps/BirthIsland_Exterior/scripts.pory"
	applymovement LOCALID_GIDEON, Movement_WalkDownPlayer
# 180 "data/maps/BirthIsland_Exterior/scripts.pory"
	waitmovement 0
# 181 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_BIRTH_ISLAND_GIDEON, 1
# 182 "data/maps/BirthIsland_Exterior/scripts.pory"
	removeobject LOCALID_GIDEON
# 183 "data/maps/BirthIsland_Exterior/scripts.pory"
	releaseall
# 184 "data/maps/BirthIsland_Exterior/scripts.pory"
	end
# 185 "data/maps/BirthIsland_Exterior/scripts.pory"

# 186 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_PostGideon::
# 187 "data/maps/BirthIsland_Exterior/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_BIRTH_ISLAND_EXTERIOR
# 188 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_DEOXYS_N
# 189 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_DEOXYS_INTERACTION_STEP_COUNTER, 0
# 190 "data/maps/BirthIsland_Exterior/scripts.pory"
	setvar VAR_DEOXYS_INTERACTION_NUM, 0
# 191 "data/maps/BirthIsland_Exterior/scripts.pory"
	call_if_set FLAG_FOUGHT_DEOXYS, BirthIsland_Exterior_EventScript_HideDeoxysAndPuzzle
# 192 "data/maps/BirthIsland_Exterior/scripts.pory"
	call_if_unset FLAG_FOUGHT_DEOXYS, BirthIsland_Exterior_EventScript_TryShowDeoxysPuzzle
# 193 "data/maps/BirthIsland_Exterior/scripts.pory"
	return
# 194 "data/maps/BirthIsland_Exterior/scripts.pory"

# 195 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_Text_Gideon::
# 196 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "Fufufufu, I guess you got a\n"
# 197 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "ticket as well.\p"
# 198 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "Well did you guess I would\n"
# 199 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "of gotten one too?\p"
# 200 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "TEAM ROCKET managed to smuggle\n"
# 201 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "a ticket in one of the boxes\p"
# 202 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "But I managed to steal it from\n"
# 203 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "them also!$"
# 204 "data/maps/BirthIsland_Exterior/scripts.pory"

# 205 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_Text_GideonYes::
# 206 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "And now I have caught DEOXYS.\n"
# 207 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "However I feel a bit empty,\l"
# 208 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "with how I betrayed the\l"
# 209 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "SEVII MASTERS and the whole\l"
# 210 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "thing with TEAM ROCKET.\p"
# 211 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "And seeing now that my dream\n"
# 212 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "was holding back the\l"
# 213 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "SEVII ISLANDS and it's people,\l"
# 214 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "I feel like I could of done better.$"
# 215 "data/maps/BirthIsland_Exterior/scripts.pory"

# 216 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_Text_GideonLetsFight::
# 217 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "So I present a option,\n"
# 218 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "If you beat me in a battle with\l"
# 219 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "DEOXYS, i'll release it and\l"
# 220 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "let you catch it.\p"
# 221 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "So, let's fight.$"
# 222 "data/maps/BirthIsland_Exterior/scripts.pory"

# 223 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_Text_GideonNo::
# 224 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "Well be quick, or i'm taking\n"
# 225 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "DEOXYS!$"
# 226 "data/maps/BirthIsland_Exterior/scripts.pory"

# 227 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_Text_GideonIntro::
# 228 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "Alright than, I have felt stronger\n"
# 229 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "since last time.\p"
# 230 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "Let's fight for DEOXYS!$"
# 231 "data/maps/BirthIsland_Exterior/scripts.pory"

# 232 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_Text_GideonDefeat::
# 233 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "Well. That settles it.$"
# 234 "data/maps/BirthIsland_Exterior/scripts.pory"

# 235 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_Text_GideonPostBattle::
# 236 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "Seems like i'll release DEOXYS\n"
# 237 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "right now.$"
# 238 "data/maps/BirthIsland_Exterior/scripts.pory"

# 239 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_Text_GideonPostBattle2::
# 240 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "It was a good match {PLAYER}.\n"
# 241 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "I'll come back to the warehouse\l"
# 242 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "and finish what I started since\l"
# 243 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "last time.\p"
# 244 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "I'm not gonna come back as a\n"
# 245 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "SEVII MASTER, but i'll\l"
# 246 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "make sure my life isn't a waste.$"
# 247 "data/maps/BirthIsland_Exterior/scripts.pory"

# 248 "data/maps/BirthIsland_Exterior/scripts.pory"
BirthIsland_Exterior_Text_GideonLastWords::
# 249 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "Fufufufu,\n"
# 250 "data/maps/BirthIsland_Exterior/scripts.pory"
	.string "Good luck as CHAMPION {PLAYER}.$"
# 251 "data/maps/BirthIsland_Exterior/scripts.pory"

# 252 "data/maps/BirthIsland_Exterior/scripts.pory"
Movement_FaceUpNormal::
# 253 "data/maps/BirthIsland_Exterior/scripts.pory"
	face_up
# 254 "data/maps/BirthIsland_Exterior/scripts.pory"
	step_end
# 255 "data/maps/BirthIsland_Exterior/scripts.pory"

# 256 "data/maps/BirthIsland_Exterior/scripts.pory"
Movement_WalkUpPlayer::
# 257 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_up
# 258 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_up
# 259 "data/maps/BirthIsland_Exterior/scripts.pory"
	step_end
# 260 "data/maps/BirthIsland_Exterior/scripts.pory"

# 261 "data/maps/BirthIsland_Exterior/scripts.pory"
Movement_WalkDownPlayer::
# 262 "data/maps/BirthIsland_Exterior/scripts.pory"
	face_down
# 263 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_down
# 264 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_down
# 265 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_down
# 266 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_down
# 267 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_down
# 268 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_down
# 269 "data/maps/BirthIsland_Exterior/scripts.pory"
	step_end
# 270 "data/maps/BirthIsland_Exterior/scripts.pory"

# 271 "data/maps/BirthIsland_Exterior/scripts.pory"
Movement_GideonWalkDown::
# 272 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_right
# 273 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_down
# 274 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_down
# 275 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_down
# 276 "data/maps/BirthIsland_Exterior/scripts.pory"
	walk_left
# 277 "data/maps/BirthIsland_Exterior/scripts.pory"
	face_up
# 278 "data/maps/BirthIsland_Exterior/scripts.pory"
	step_end
# 279 "data/maps/BirthIsland_Exterior/scripts.pory"

# 280 "data/maps/BirthIsland_Exterior/scripts.pory"
Movement_FaceDown::
# 281 "data/maps/BirthIsland_Exterior/scripts.pory"
	face_down
# 282 "data/maps/BirthIsland_Exterior/scripts.pory"
	step_end
