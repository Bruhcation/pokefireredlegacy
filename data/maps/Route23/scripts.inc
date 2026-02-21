# 1 "data/maps/Route23/scripts.pory"

# 2 "data/maps/Route23/scripts.pory"
.set LOCALID_CASCADE_BADGE_GUARD, 1
# 3 "data/maps/Route23/scripts.pory"
.set LOCALID_THUNDER_BADGE_GUARD, 2
# 4 "data/maps/Route23/scripts.pory"
.set LOCALID_RAINBOW_BADGE_GUARD, 3
# 5 "data/maps/Route23/scripts.pory"
.set LOCALID_SOUL_BADGE_GUARD,    4
# 6 "data/maps/Route23/scripts.pory"
.set LOCALID_MARSH_BADGE_GUARD,   5
# 7 "data/maps/Route23/scripts.pory"
.set LOCALID_VOLCANO_BADGE_GUARD, 6
# 8 "data/maps/Route23/scripts.pory"
.set LOCALID_EARTH_BADGE_GUARD,   7
# 9 "data/maps/Route23/scripts.pory"
.set LOCALID_MIRAGE, 10
# 10 "data/maps/Route23/scripts.pory"

# 11 "data/maps/Route23/scripts.pory"
Route23_MapScripts::
# 12 "data/maps/Route23/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route23_OnTransition
# 13 "data/maps/Route23/scripts.pory"
	.byte 0
# 14 "data/maps/Route23/scripts.pory"

# 15 "data/maps/Route23/scripts.pory"
Route23_OnTransition::
# 16 "data/maps/Route23/scripts.pory"
	end
# 17 "data/maps/Route23/scripts.pory"

# 18 "data/maps/Route23/scripts.pory"
Route23_EventScript_CascadeBadgeGuard::
# 19 "data/maps/Route23/scripts.pory"
	lock
# 20 "data/maps/Route23/scripts.pory"
	faceplayer
# 21 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 2
# 22 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_CASCADE_BADGE
# 23 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 24 "data/maps/Route23/scripts.pory"
	end
# 25 "data/maps/Route23/scripts.pory"

# 26 "data/maps/Route23/scripts.pory"
Route23_EventScript_ThunderBadgeGuard::
# 27 "data/maps/Route23/scripts.pory"
	lock
# 28 "data/maps/Route23/scripts.pory"
	faceplayer
# 29 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 3
# 30 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_THUNDER_BADGE
# 31 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 32 "data/maps/Route23/scripts.pory"
	end
# 33 "data/maps/Route23/scripts.pory"

# 34 "data/maps/Route23/scripts.pory"
Route23_EventScript_RainbowBadgeGuard::
# 35 "data/maps/Route23/scripts.pory"
	lock
# 36 "data/maps/Route23/scripts.pory"
	faceplayer
# 37 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 4
# 38 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_RAINBOW_BADGE
# 39 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 40 "data/maps/Route23/scripts.pory"
	end
# 41 "data/maps/Route23/scripts.pory"

# 42 "data/maps/Route23/scripts.pory"
Route23_EventScript_SoulBadgeGuard::
# 43 "data/maps/Route23/scripts.pory"
	lock
# 44 "data/maps/Route23/scripts.pory"
	faceplayer
# 45 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 5
# 46 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SOUL_BADGE
# 47 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 48 "data/maps/Route23/scripts.pory"
	end
# 49 "data/maps/Route23/scripts.pory"

# 50 "data/maps/Route23/scripts.pory"
Route23_EventScript_MarshBadgeGuard::
# 51 "data/maps/Route23/scripts.pory"
	lock
# 52 "data/maps/Route23/scripts.pory"
	faceplayer
# 53 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 6
# 54 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MARSH_BADGE
# 55 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 56 "data/maps/Route23/scripts.pory"
	end
# 57 "data/maps/Route23/scripts.pory"

# 58 "data/maps/Route23/scripts.pory"
Route23_EventScript_VolcanoBadgeGuard::
# 59 "data/maps/Route23/scripts.pory"
	lock
# 60 "data/maps/Route23/scripts.pory"
	faceplayer
# 61 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 7
# 62 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_VOLCANO_BADGE
# 63 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 64 "data/maps/Route23/scripts.pory"
	end
# 65 "data/maps/Route23/scripts.pory"

# 66 "data/maps/Route23/scripts.pory"
Route23_EventScript_EarthBadgeGuard::
# 67 "data/maps/Route23/scripts.pory"
	lock
# 68 "data/maps/Route23/scripts.pory"
	faceplayer
# 69 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 8
# 70 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_EARTH_BADGE
# 71 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 72 "data/maps/Route23/scripts.pory"
	end
# 73 "data/maps/Route23/scripts.pory"

# 74 "data/maps/Route23/scripts.pory"
Route23_EventScript_CascadeBadgeGuardTrigger::
# 75 "data/maps/Route23/scripts.pory"
	lockall
# 76 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 2
# 77 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_CASCADE_BADGE_GUARD
# 78 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_CASCADE_BADGE
# 79 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 80 "data/maps/Route23/scripts.pory"
	end
# 81 "data/maps/Route23/scripts.pory"

# 82 "data/maps/Route23/scripts.pory"
Route23_EventScript_ThunderBadgeGuardTrigger::
# 83 "data/maps/Route23/scripts.pory"
	lockall
# 84 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 3
# 85 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_THUNDER_BADGE_GUARD
# 86 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_THUNDER_BADGE
# 87 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 88 "data/maps/Route23/scripts.pory"
	end
# 89 "data/maps/Route23/scripts.pory"

# 90 "data/maps/Route23/scripts.pory"
Route23_EventScript_RainbowBadgeGuardTrigger::
# 91 "data/maps/Route23/scripts.pory"
	lockall
# 92 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 4
# 93 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_RAINBOW_BADGE_GUARD
# 94 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_RAINBOW_BADGE
# 95 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 96 "data/maps/Route23/scripts.pory"
	end
# 97 "data/maps/Route23/scripts.pory"

# 98 "data/maps/Route23/scripts.pory"
Route23_EventScript_SoulBadgeGuardTrigger::
# 99 "data/maps/Route23/scripts.pory"
	lockall
# 100 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 5
# 101 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_SOUL_BADGE_GUARD
# 102 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SOUL_BADGE
# 103 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 104 "data/maps/Route23/scripts.pory"
	end
# 105 "data/maps/Route23/scripts.pory"

# 106 "data/maps/Route23/scripts.pory"
Route23_EventScript_MarshBadgeGuardTrigger::
# 107 "data/maps/Route23/scripts.pory"
	lockall
# 108 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 6
# 109 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_MARSH_BADGE_GUARD
# 110 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MARSH_BADGE
# 111 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 112 "data/maps/Route23/scripts.pory"
	end
# 113 "data/maps/Route23/scripts.pory"

# 114 "data/maps/Route23/scripts.pory"
Route23_EventScript_VolcanoBadgeGuardTrigger::
# 115 "data/maps/Route23/scripts.pory"
	lockall
# 116 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 7
# 117 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_VOLCANO_BADGE_GUARD
# 118 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_VOLCANO_BADGE
# 119 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 120 "data/maps/Route23/scripts.pory"
	end
# 121 "data/maps/Route23/scripts.pory"

# 122 "data/maps/Route23/scripts.pory"
Route23_EventScript_EarthBadgeGuardTrigger::
# 123 "data/maps/Route23/scripts.pory"
	lockall
# 124 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 8
# 125 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_EARTH_BADGE_GUARD
# 126 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_EARTH_BADGE
# 127 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 128 "data/maps/Route23/scripts.pory"
	end
# 129 "data/maps/Route23/scripts.pory"

# 130 "data/maps/Route23/scripts.pory"
Route23_EventScript_VictoryRoadGateSign::
# 131 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_VictoryRoadGateSign, MSGBOX_SIGN
# 132 "data/maps/Route23/scripts.pory"
	end
# 133 "data/maps/Route23/scripts.pory"

# 134 "data/maps/Route23/scripts.pory"
Route23_EventScript_RestSign::
# 135 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_RestHouse, MSGBOX_SIGN
# 136 "data/maps/Route23/scripts.pory"
	end
# 137 "data/maps/Route23/scripts.pory"

# 138 "data/maps/Route23/scripts.pory"
Route23_EventScript_NotReady::
# 139 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_NotReady, MSGBOX_NPC
# 140 "data/maps/Route23/scripts.pory"
	end
# 141 "data/maps/Route23/scripts.pory"

# 142 "data/maps/Route23/scripts.pory"
Route23_EventScript_Clerk::
# 143 "data/maps/Route23/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 144 "data/maps/Route23/scripts.pory"
	lock
# 145 "data/maps/Route23/scripts.pory"
	faceplayer
# 146 "data/maps/Route23/scripts.pory"
	message Route23_Text_Clerk
# 147 "data/maps/Route23/scripts.pory"
	waitmessage
# 148 "data/maps/Route23/scripts.pory"
	pokemart Route23_Items
# 149 "data/maps/Route23/scripts.pory"
	msgbox Text_PleaseComeAgain
# 150 "data/maps/Route23/scripts.pory"
	release
# 151 "data/maps/Route23/scripts.pory"
	end
# 152 "data/maps/Route23/scripts.pory"

# 153 "data/maps/Route23/scripts.pory"
	.align 2
# 154 "data/maps/Route23/scripts.pory"
Route23_Items::
# 155 "data/maps/Route23/scripts.pory"
	.2byte ITEM_POKE_BALL
# 156 "data/maps/Route23/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 157 "data/maps/Route23/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 158 "data/maps/Route23/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 159 "data/maps/Route23/scripts.pory"
	.2byte ITEM_MAX_POTION
# 160 "data/maps/Route23/scripts.pory"
	.2byte ITEM_REVIVE
# 161 "data/maps/Route23/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 162 "data/maps/Route23/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 163 "data/maps/Route23/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 164 "data/maps/Route23/scripts.pory"
	.2byte ITEM_NONE
# 165 "data/maps/Route23/scripts.pory"
	release
# 166 "data/maps/Route23/scripts.pory"
	end
# 167 "data/maps/Route23/scripts.pory"

# 168 "data/maps/Route23/scripts.pory"
Route23_EventScript_OrbingCheck::
# 169 "data/maps/Route23/scripts.pory"
	lock
# 170 "data/maps/Route23/scripts.pory"
	faceplayer
# 171 "data/maps/Route23/scripts.pory"
	goto_if_unset FLAG_CAUGHT_GROUDON, Route23_EventScript_NeedOrb
# 172 "data/maps/Route23/scripts.pory"
	goto_if_unset FLAG_CAUGHT_KYOGRE, Route23_EventScript_NeedOrb
# 173 "data/maps/Route23/scripts.pory"
	goto_if_set FLAG_CAUGHT_RAYQUAZA, Route23_EventScript_End
# 174 "data/maps/Route23/scripts.pory"
	goto_if_set FLAG_RAYQUAZA_CHECKED, Route23_EventScript_Orbing
# 175 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_RegiceCheck
# 176 "data/maps/Route23/scripts.pory"
	closemessage
# 177 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8005, 1
# 178 "data/maps/Route23/scripts.pory"
	setvar 0x8004, FAMECHECKER_LANCE
# 179 "data/maps/Route23/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 180 "data/maps/Route23/scripts.pory"
	compare VAR_RESULT, TRUE
# 181 "data/maps/Route23/scripts.pory"
	goto_if_eq Route23_EventScript_Flag
# 182 "data/maps/Route23/scripts.pory"
	release
# 183 "data/maps/Route23/scripts.pory"
	end
# 184 "data/maps/Route23/scripts.pory"

# 185 "data/maps/Route23/scripts.pory"
Route23_EventScript_NeedOrb::
# 186 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_NeedOrb
# 187 "data/maps/Route23/scripts.pory"
	release
# 188 "data/maps/Route23/scripts.pory"
	end
# 189 "data/maps/Route23/scripts.pory"

# 190 "data/maps/Route23/scripts.pory"
Route23_Text_NeedOrb::
# 191 "data/maps/Route23/scripts.pory"
	.string "You need to have caught\n"
# 192 "data/maps/Route23/scripts.pory"
	.string "both GROUDON and KYOGRE\l" 
# 193 "data/maps/Route23/scripts.pory"
	.string "to face RAYQUAZA.$"
# 194 "data/maps/Route23/scripts.pory"

# 195 "data/maps/Route23/scripts.pory"
Route23_EventScript_NoEligiblePkmn::
# 196 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_NoEligiblePkmn
# 197 "data/maps/Route23/scripts.pory"
	release
# 198 "data/maps/Route23/scripts.pory"
	end
# 199 "data/maps/Route23/scripts.pory"

# 200 "data/maps/Route23/scripts.pory"
Route23_EventScript_Flag::
# 201 "data/maps/Route23/scripts.pory"
	setflag FLAG_RAYQUAZA_CHECKED
# 202 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_Orbing
# 203 "data/maps/Route23/scripts.pory"
	end
# 204 "data/maps/Route23/scripts.pory"

# 205 "data/maps/Route23/scripts.pory"
Route23_EventScript_Orbing::
# 206 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_Whitney, MSGBOX_YESNO
# 207 "data/maps/Route23/scripts.pory"
	closemessage
# 208 "data/maps/Route23/scripts.pory"
	delay 40
# 209 "data/maps/Route23/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route23_EventScript_NoWhitney
# 210 "data/maps/Route23/scripts.pory"
	trainerbattle_single TRAINER_AQUA_LEADER, Route23_Text_YesWhitney, Route23_Text_PostWhitney, Route23_EventScript_PostWhitney, NO_MUSIC
# 211 "data/maps/Route23/scripts.pory"
	release
# 212 "data/maps/Route23/scripts.pory"
	end
# 213 "data/maps/Route23/scripts.pory"

# 214 "data/maps/Route23/scripts.pory"
Route23_EventScript_PostWhitney::
# 215 "data/maps/Route23/scripts.pory"
	special HealPlayerParty
# 216 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_WhitneyPostBattle
# 217 "data/maps/Route23/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 218 "data/maps/Route23/scripts.pory"
	special QuestLog_CutRecording
# 219 "data/maps/Route23/scripts.pory"
	lock
# 220 "data/maps/Route23/scripts.pory"
	faceplayer
# 221 "data/maps/Route23/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 70
# 222 "data/maps/Route23/scripts.pory"
	waitse
# 223 "data/maps/Route23/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 224 "data/maps/Route23/scripts.pory"
	waitmessage
# 225 "data/maps/Route23/scripts.pory"
	waitmoncry
# 226 "data/maps/Route23/scripts.pory"
	delay 10
# 227 "data/maps/Route23/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 228 "data/maps/Route23/scripts.pory"
	waitbuttonpress
# 229 "data/maps/Route23/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 230 "data/maps/Route23/scripts.pory"
	special StartLegendaryBattle
# 231 "data/maps/Route23/scripts.pory"
	waitstate
# 232 "data/maps/Route23/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 233 "data/maps/Route23/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 234 "data/maps/Route23/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route23_EventScript_DefeatedCelebi
# 235 "data/maps/Route23/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route23_EventScript_RanFromCelebi
# 236 "data/maps/Route23/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route23_EventScript_RanFromCelebi
# 237 "data/maps/Route23/scripts.pory"
	setflag FLAG_CAUGHT_RAYQUAZA
# 238 "data/maps/Route23/scripts.pory"
	clearflag FLAG_DRAGON_TRAINER
# 239 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_EndWhitney
# 240 "data/maps/Route23/scripts.pory"
	waitmessage
# 241 "data/maps/Route23/scripts.pory"
	fadescreen FADE_TO_BLACK
# 242 "data/maps/Route23/scripts.pory"
	removeobject LOCALID_MIRAGE
# 243 "data/maps/Route23/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 244 "data/maps/Route23/scripts.pory"
	release
# 245 "data/maps/Route23/scripts.pory"
	end
# 246 "data/maps/Route23/scripts.pory"

# 247 "data/maps/Route23/scripts.pory"
Route23_EventScript_DefeatedCelebi::
# 248 "data/maps/Route23/scripts.pory"
	setflag FLAG_CAUGHT_RAYQUAZA
# 249 "data/maps/Route23/scripts.pory"
	clearflag FLAG_DRAGON_TRAINER
# 250 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_EndWhitney
# 251 "data/maps/Route23/scripts.pory"
	waitmessage
# 252 "data/maps/Route23/scripts.pory"
	fadescreen FADE_TO_BLACK
# 253 "data/maps/Route23/scripts.pory"
	removeobject LOCALID_MIRAGE
# 254 "data/maps/Route23/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 255 "data/maps/Route23/scripts.pory"
	goto EventScript_RemoveStaticMon
# 256 "data/maps/Route23/scripts.pory"
	end
# 257 "data/maps/Route23/scripts.pory"

# 258 "data/maps/Route23/scripts.pory"
Route23_EventScript_RanFromCelebi::
# 259 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 260 "data/maps/Route23/scripts.pory"
	clearflag FLAG_DRAGON_TRAINER
# 261 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_EndWhitney
# 262 "data/maps/Route23/scripts.pory"
	waitmessage
# 263 "data/maps/Route23/scripts.pory"
	fadescreen FADE_TO_BLACK
# 264 "data/maps/Route23/scripts.pory"
	removeobject LOCALID_MIRAGE
# 265 "data/maps/Route23/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 266 "data/maps/Route23/scripts.pory"
	goto EventScript_MonFlewAway
# 267 "data/maps/Route23/scripts.pory"
	end
# 268 "data/maps/Route23/scripts.pory"

# 269 "data/maps/Route23/scripts.pory"
Route23_EventScript_NoWhitney::
# 270 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_NoWhitney
# 271 "data/maps/Route23/scripts.pory"
	release
# 272 "data/maps/Route23/scripts.pory"
	end
# 273 "data/maps/Route23/scripts.pory"

# 274 "data/maps/Route23/scripts.pory"
Route23_EventScript_End::
# 275 "data/maps/Route23/scripts.pory"
	clearflag FLAG_DRAGON_TRAINER
# 276 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_EndWhitney
# 277 "data/maps/Route23/scripts.pory"
	waitmessage
# 278 "data/maps/Route23/scripts.pory"
	fadescreen FADE_TO_BLACK
# 279 "data/maps/Route23/scripts.pory"
	removeobject LOCALID_MIRAGE
# 280 "data/maps/Route23/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 281 "data/maps/Route23/scripts.pory"
	release
# 282 "data/maps/Route23/scripts.pory"
	end
# 283 "data/maps/Route23/scripts.pory"

# 284 "data/maps/Route23/scripts.pory"
Route23_Text_NoEligiblePkmn::
# 285 "data/maps/Route23/scripts.pory"
	.string "You have not meet the requirements.\p"
# 286 "data/maps/Route23/scripts.pory"
	.string "Come back when you do.$"
# 287 "data/maps/Route23/scripts.pory"

# 288 "data/maps/Route23/scripts.pory"
Route23_Text_RegiceCheck::
# 289 "data/maps/Route23/scripts.pory"
	.string "Hello there {PLAYER}.\p"
# 290 "data/maps/Route23/scripts.pory"
	.string "I am the Dragon Mirage Trainer.\p"
# 291 "data/maps/Route23/scripts.pory"
	.string "Beat me and you shall face a.\n"
# 292 "data/maps/Route23/scripts.pory"
	.string "special POKEMON.\p"
# 293 "data/maps/Route23/scripts.pory"
	.string "But first, I want to see a\n"
# 294 "data/maps/Route23/scripts.pory"
	.string "BLUE ORB and RED ORB,\l"
# 295 "data/maps/Route23/scripts.pory"
	.string "and knowledge on the Master of Dragons.$"
# 296 "data/maps/Route23/scripts.pory"

# 297 "data/maps/Route23/scripts.pory"
Route23_Text_Whitney::
# 298 "data/maps/Route23/scripts.pory"
	.string "So, you wish to face me?$"
# 299 "data/maps/Route23/scripts.pory"

# 300 "data/maps/Route23/scripts.pory"
Route23_Text_YesWhitney::
# 301 "data/maps/Route23/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 302 "data/maps/Route23/scripts.pory"

# 303 "data/maps/Route23/scripts.pory"
Route23_Text_PostWhitney::
# 304 "data/maps/Route23/scripts.pory"
	.string "So you are worthy...$"
# 305 "data/maps/Route23/scripts.pory"

# 306 "data/maps/Route23/scripts.pory"
Route23_Text_WhitneyPostBattle::
# 307 "data/maps/Route23/scripts.pory"
	.string "Alright, you have bested me.\p"
# 308 "data/maps/Route23/scripts.pory"
	.string "Be prepared to face RAYQUAZA!$"
# 309 "data/maps/Route23/scripts.pory"

# 310 "data/maps/Route23/scripts.pory"
Route23_Text_EndWhitney::
# 311 "data/maps/Route23/scripts.pory"
	.string "Goodbye.$"
# 312 "data/maps/Route23/scripts.pory"

# 313 "data/maps/Route23/scripts.pory"
Route23_Text_NoWhitney::
# 314 "data/maps/Route23/scripts.pory"
	.string "Alright, take your time.$"
