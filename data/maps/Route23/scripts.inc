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
.set LOCALID_RAYQUAZA, 11
# 11 "data/maps/Route23/scripts.pory"

# 12 "data/maps/Route23/scripts.pory"
Route23_MapScripts::
# 13 "data/maps/Route23/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route23_OnTransition
# 14 "data/maps/Route23/scripts.pory"
	.byte 0
# 15 "data/maps/Route23/scripts.pory"

# 16 "data/maps/Route23/scripts.pory"
Route23_OnTransition::
# 17 "data/maps/Route23/scripts.pory"
	end
# 18 "data/maps/Route23/scripts.pory"

# 19 "data/maps/Route23/scripts.pory"
Route23_EventScript_CascadeBadgeGuard::
# 20 "data/maps/Route23/scripts.pory"
	lock
# 21 "data/maps/Route23/scripts.pory"
	faceplayer
# 22 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 2
# 23 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_CASCADE_BADGE
# 24 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 25 "data/maps/Route23/scripts.pory"
	end
# 26 "data/maps/Route23/scripts.pory"

# 27 "data/maps/Route23/scripts.pory"
Route23_EventScript_ThunderBadgeGuard::
# 28 "data/maps/Route23/scripts.pory"
	lock
# 29 "data/maps/Route23/scripts.pory"
	faceplayer
# 30 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 3
# 31 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_THUNDER_BADGE
# 32 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 33 "data/maps/Route23/scripts.pory"
	end
# 34 "data/maps/Route23/scripts.pory"

# 35 "data/maps/Route23/scripts.pory"
Route23_EventScript_RainbowBadgeGuard::
# 36 "data/maps/Route23/scripts.pory"
	lock
# 37 "data/maps/Route23/scripts.pory"
	faceplayer
# 38 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 4
# 39 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_RAINBOW_BADGE
# 40 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 41 "data/maps/Route23/scripts.pory"
	end
# 42 "data/maps/Route23/scripts.pory"

# 43 "data/maps/Route23/scripts.pory"
Route23_EventScript_SoulBadgeGuard::
# 44 "data/maps/Route23/scripts.pory"
	lock
# 45 "data/maps/Route23/scripts.pory"
	faceplayer
# 46 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 5
# 47 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SOUL_BADGE
# 48 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 49 "data/maps/Route23/scripts.pory"
	end
# 50 "data/maps/Route23/scripts.pory"

# 51 "data/maps/Route23/scripts.pory"
Route23_EventScript_MarshBadgeGuard::
# 52 "data/maps/Route23/scripts.pory"
	lock
# 53 "data/maps/Route23/scripts.pory"
	faceplayer
# 54 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 6
# 55 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MARSH_BADGE
# 56 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 57 "data/maps/Route23/scripts.pory"
	end
# 58 "data/maps/Route23/scripts.pory"

# 59 "data/maps/Route23/scripts.pory"
Route23_EventScript_VolcanoBadgeGuard::
# 60 "data/maps/Route23/scripts.pory"
	lock
# 61 "data/maps/Route23/scripts.pory"
	faceplayer
# 62 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 7
# 63 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_VOLCANO_BADGE
# 64 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 65 "data/maps/Route23/scripts.pory"
	end
# 66 "data/maps/Route23/scripts.pory"

# 67 "data/maps/Route23/scripts.pory"
Route23_EventScript_EarthBadgeGuard::
# 68 "data/maps/Route23/scripts.pory"
	lock
# 69 "data/maps/Route23/scripts.pory"
	faceplayer
# 70 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 8
# 71 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_EARTH_BADGE
# 72 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 73 "data/maps/Route23/scripts.pory"
	end
# 74 "data/maps/Route23/scripts.pory"

# 75 "data/maps/Route23/scripts.pory"
Route23_EventScript_CascadeBadgeGuardTrigger::
# 76 "data/maps/Route23/scripts.pory"
	lockall
# 77 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 2
# 78 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_CASCADE_BADGE_GUARD
# 79 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_CASCADE_BADGE
# 80 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 81 "data/maps/Route23/scripts.pory"
	end
# 82 "data/maps/Route23/scripts.pory"

# 83 "data/maps/Route23/scripts.pory"
Route23_EventScript_ThunderBadgeGuardTrigger::
# 84 "data/maps/Route23/scripts.pory"
	lockall
# 85 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 3
# 86 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_THUNDER_BADGE_GUARD
# 87 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_THUNDER_BADGE
# 88 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 89 "data/maps/Route23/scripts.pory"
	end
# 90 "data/maps/Route23/scripts.pory"

# 91 "data/maps/Route23/scripts.pory"
Route23_EventScript_RainbowBadgeGuardTrigger::
# 92 "data/maps/Route23/scripts.pory"
	lockall
# 93 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 4
# 94 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_RAINBOW_BADGE_GUARD
# 95 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_RAINBOW_BADGE
# 96 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 97 "data/maps/Route23/scripts.pory"
	end
# 98 "data/maps/Route23/scripts.pory"

# 99 "data/maps/Route23/scripts.pory"
Route23_EventScript_SoulBadgeGuardTrigger::
# 100 "data/maps/Route23/scripts.pory"
	lockall
# 101 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 5
# 102 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_SOUL_BADGE_GUARD
# 103 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SOUL_BADGE
# 104 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 105 "data/maps/Route23/scripts.pory"
	end
# 106 "data/maps/Route23/scripts.pory"

# 107 "data/maps/Route23/scripts.pory"
Route23_EventScript_MarshBadgeGuardTrigger::
# 108 "data/maps/Route23/scripts.pory"
	lockall
# 109 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 6
# 110 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_MARSH_BADGE_GUARD
# 111 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MARSH_BADGE
# 112 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 113 "data/maps/Route23/scripts.pory"
	end
# 114 "data/maps/Route23/scripts.pory"

# 115 "data/maps/Route23/scripts.pory"
Route23_EventScript_VolcanoBadgeGuardTrigger::
# 116 "data/maps/Route23/scripts.pory"
	lockall
# 117 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 7
# 118 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_VOLCANO_BADGE_GUARD
# 119 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_VOLCANO_BADGE
# 120 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 121 "data/maps/Route23/scripts.pory"
	end
# 122 "data/maps/Route23/scripts.pory"

# 123 "data/maps/Route23/scripts.pory"
Route23_EventScript_EarthBadgeGuardTrigger::
# 124 "data/maps/Route23/scripts.pory"
	lockall
# 125 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 8
# 126 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_EARTH_BADGE_GUARD
# 127 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_EARTH_BADGE
# 128 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 129 "data/maps/Route23/scripts.pory"
	end
# 130 "data/maps/Route23/scripts.pory"

# 131 "data/maps/Route23/scripts.pory"
Route23_EventScript_VictoryRoadGateSign::
# 132 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_VictoryRoadGateSign, MSGBOX_SIGN
# 133 "data/maps/Route23/scripts.pory"
	end
# 134 "data/maps/Route23/scripts.pory"

# 135 "data/maps/Route23/scripts.pory"
Route23_EventScript_RestSign::
# 136 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_RestHouse, MSGBOX_SIGN
# 137 "data/maps/Route23/scripts.pory"
	end
# 138 "data/maps/Route23/scripts.pory"

# 139 "data/maps/Route23/scripts.pory"
Route23_EventScript_NotReady::
# 140 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_NotReady, MSGBOX_NPC
# 141 "data/maps/Route23/scripts.pory"
	end
# 142 "data/maps/Route23/scripts.pory"

# 143 "data/maps/Route23/scripts.pory"
Route23_EventScript_Clerk::
# 144 "data/maps/Route23/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 145 "data/maps/Route23/scripts.pory"
	lock
# 146 "data/maps/Route23/scripts.pory"
	faceplayer
# 147 "data/maps/Route23/scripts.pory"
	message Route23_Text_Clerk
# 148 "data/maps/Route23/scripts.pory"
	waitmessage
# 149 "data/maps/Route23/scripts.pory"
	pokemart Route23_Items
# 150 "data/maps/Route23/scripts.pory"
	msgbox Text_PleaseComeAgain
# 151 "data/maps/Route23/scripts.pory"
	release
# 152 "data/maps/Route23/scripts.pory"
	end
# 153 "data/maps/Route23/scripts.pory"

# 154 "data/maps/Route23/scripts.pory"
	.align 2
# 155 "data/maps/Route23/scripts.pory"
Route23_Items::
# 156 "data/maps/Route23/scripts.pory"
	.2byte ITEM_POKE_BALL
# 157 "data/maps/Route23/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 158 "data/maps/Route23/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 159 "data/maps/Route23/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 160 "data/maps/Route23/scripts.pory"
	.2byte ITEM_MAX_POTION
# 161 "data/maps/Route23/scripts.pory"
	.2byte ITEM_REVIVE
# 162 "data/maps/Route23/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 163 "data/maps/Route23/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 164 "data/maps/Route23/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 165 "data/maps/Route23/scripts.pory"
	.2byte ITEM_NONE
# 166 "data/maps/Route23/scripts.pory"
	release
# 167 "data/maps/Route23/scripts.pory"
	end
# 168 "data/maps/Route23/scripts.pory"

# 169 "data/maps/Route23/scripts.pory"
Route23_EventScript_OrbingCheck::
# 170 "data/maps/Route23/scripts.pory"
	lock
# 171 "data/maps/Route23/scripts.pory"
	faceplayer
# 172 "data/maps/Route23/scripts.pory"
	goto_if_unset FLAG_CAUGHT_GROUDON, Route23_EventScript_NeedOrb
# 173 "data/maps/Route23/scripts.pory"
	goto_if_unset FLAG_CAUGHT_KYOGRE, Route23_EventScript_NeedOrb
# 174 "data/maps/Route23/scripts.pory"
	goto_if_set FLAG_CAUGHT_RAYQUAZA, Route23_EventScript_End
# 175 "data/maps/Route23/scripts.pory"
	goto_if_set FLAG_RAYQUAZA_CHECKED, Route23_EventScript_Orbing
# 176 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_RegiceCheck
# 177 "data/maps/Route23/scripts.pory"
	closemessage
# 178 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8005, 1
# 179 "data/maps/Route23/scripts.pory"
	setvar 0x8004, FAMECHECKER_LANCE
# 180 "data/maps/Route23/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 181 "data/maps/Route23/scripts.pory"
	compare VAR_RESULT, TRUE
# 182 "data/maps/Route23/scripts.pory"
	goto_if_eq Route23_EventScript_Flag
# 183 "data/maps/Route23/scripts.pory"
	release
# 184 "data/maps/Route23/scripts.pory"
	end
# 185 "data/maps/Route23/scripts.pory"

# 186 "data/maps/Route23/scripts.pory"
Route23_EventScript_NeedOrb::
# 187 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_NeedOrb
# 188 "data/maps/Route23/scripts.pory"
	release
# 189 "data/maps/Route23/scripts.pory"
	end
# 190 "data/maps/Route23/scripts.pory"

# 191 "data/maps/Route23/scripts.pory"
Route23_Text_NeedOrb::
# 192 "data/maps/Route23/scripts.pory"
	.string "You need to have caught\n"
# 193 "data/maps/Route23/scripts.pory"
	.string "both GROUDON and KYOGRE\l" 
# 194 "data/maps/Route23/scripts.pory"
	.string "to face RAYQUAZA.$"
# 195 "data/maps/Route23/scripts.pory"

# 196 "data/maps/Route23/scripts.pory"
Route23_EventScript_NoEligiblePkmn::
# 197 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_NoEligiblePkmn
# 198 "data/maps/Route23/scripts.pory"
	release
# 199 "data/maps/Route23/scripts.pory"
	end
# 200 "data/maps/Route23/scripts.pory"

# 201 "data/maps/Route23/scripts.pory"
Route23_EventScript_Flag::
# 202 "data/maps/Route23/scripts.pory"
	setflag FLAG_RAYQUAZA_CHECKED
# 203 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_Orbing
# 204 "data/maps/Route23/scripts.pory"
	end
# 205 "data/maps/Route23/scripts.pory"

# 206 "data/maps/Route23/scripts.pory"
Route23_EventScript_Orbing::
# 207 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_Dragon, MSGBOX_YESNO
# 208 "data/maps/Route23/scripts.pory"
	closemessage
# 209 "data/maps/Route23/scripts.pory"
	delay 40
# 210 "data/maps/Route23/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Route23_EventScript_NoDragon
# 211 "data/maps/Route23/scripts.pory"
	trainerbattle_single TRAINER_RAYDON, Route23_Text_YesDragon, Route23_Text_PostDragon, Route23_EventScript_PostDragon, NO_MUSIC
# 212 "data/maps/Route23/scripts.pory"
	release
# 213 "data/maps/Route23/scripts.pory"
	end
# 214 "data/maps/Route23/scripts.pory"

# 215 "data/maps/Route23/scripts.pory"
Route23_EventScript_PostDragon::
# 216 "data/maps/Route23/scripts.pory"
	special HealPlayerParty
# 217 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_DragonPostBattle
# 218 "data/maps/Route23/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 219 "data/maps/Route23/scripts.pory"
	special QuestLog_CutRecording
# 220 "data/maps/Route23/scripts.pory"
	lock
# 221 "data/maps/Route23/scripts.pory"
	faceplayer
# 222 "data/maps/Route23/scripts.pory"
	setwildbattle SPECIES_RAYQUAZA, 70
# 223 "data/maps/Route23/scripts.pory"
	waitse
# 224 "data/maps/Route23/scripts.pory"
	playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
# 225 "data/maps/Route23/scripts.pory"
	waitmessage
# 226 "data/maps/Route23/scripts.pory"
	waitmoncry
# 227 "data/maps/Route23/scripts.pory"
	delay 10
# 228 "data/maps/Route23/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 229 "data/maps/Route23/scripts.pory"
	waitbuttonpress
# 230 "data/maps/Route23/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 231 "data/maps/Route23/scripts.pory"
	special StartLegendaryBattle
# 232 "data/maps/Route23/scripts.pory"
	waitstate
# 233 "data/maps/Route23/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 234 "data/maps/Route23/scripts.pory"
	removeobject LOCALID_RAYQUAZA
# 235 "data/maps/Route23/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 236 "data/maps/Route23/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, Route23_EventScript_DefeatedCelebi
# 237 "data/maps/Route23/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, Route23_EventScript_RanFromCelebi
# 238 "data/maps/Route23/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, Route23_EventScript_RanFromCelebi
# 239 "data/maps/Route23/scripts.pory"
	setflag FLAG_CAUGHT_RAYQUAZA
# 240 "data/maps/Route23/scripts.pory"
	clearflag FLAG_DRAGON_TRAINER
# 241 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_EndDragon
# 242 "data/maps/Route23/scripts.pory"
	waitmessage
# 243 "data/maps/Route23/scripts.pory"
	fadescreen FADE_TO_BLACK
# 244 "data/maps/Route23/scripts.pory"
	removeobject LOCALID_MIRAGE
# 245 "data/maps/Route23/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 246 "data/maps/Route23/scripts.pory"
	release
# 247 "data/maps/Route23/scripts.pory"
	end
# 248 "data/maps/Route23/scripts.pory"

# 249 "data/maps/Route23/scripts.pory"
Route23_EventScript_DefeatedCelebi::
# 250 "data/maps/Route23/scripts.pory"
	setflag FLAG_CAUGHT_RAYQUAZA
# 251 "data/maps/Route23/scripts.pory"
	clearflag FLAG_DRAGON_TRAINER
# 252 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_EndDragon
# 253 "data/maps/Route23/scripts.pory"
	waitmessage
# 254 "data/maps/Route23/scripts.pory"
	fadescreen FADE_TO_BLACK
# 255 "data/maps/Route23/scripts.pory"
	removeobject LOCALID_MIRAGE
# 256 "data/maps/Route23/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 257 "data/maps/Route23/scripts.pory"
	goto EventScript_RemoveStaticMon
# 258 "data/maps/Route23/scripts.pory"
	end
# 259 "data/maps/Route23/scripts.pory"

# 260 "data/maps/Route23/scripts.pory"
Route23_EventScript_RanFromCelebi::
# 261 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8004, SPECIES_RAYQUAZA
# 262 "data/maps/Route23/scripts.pory"
	clearflag FLAG_DRAGON_TRAINER
# 263 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_EndDragon
# 264 "data/maps/Route23/scripts.pory"
	waitmessage
# 265 "data/maps/Route23/scripts.pory"
	fadescreen FADE_TO_BLACK
# 266 "data/maps/Route23/scripts.pory"
	removeobject LOCALID_MIRAGE
# 267 "data/maps/Route23/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 268 "data/maps/Route23/scripts.pory"
	goto EventScript_MonFlewAway
# 269 "data/maps/Route23/scripts.pory"
	end
# 270 "data/maps/Route23/scripts.pory"

# 271 "data/maps/Route23/scripts.pory"
Route23_EventScript_NoDragon::
# 272 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_NoDragon
# 273 "data/maps/Route23/scripts.pory"
	release
# 274 "data/maps/Route23/scripts.pory"
	end
# 275 "data/maps/Route23/scripts.pory"

# 276 "data/maps/Route23/scripts.pory"
Route23_EventScript_End::
# 277 "data/maps/Route23/scripts.pory"
	clearflag FLAG_DRAGON_TRAINER
# 278 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_EndDragon
# 279 "data/maps/Route23/scripts.pory"
	waitmessage
# 280 "data/maps/Route23/scripts.pory"
	fadescreen FADE_TO_BLACK
# 281 "data/maps/Route23/scripts.pory"
	removeobject LOCALID_MIRAGE
# 282 "data/maps/Route23/scripts.pory"
	fadescreen FADE_FROM_BLACK	
# 283 "data/maps/Route23/scripts.pory"
	release
# 284 "data/maps/Route23/scripts.pory"
	end
# 285 "data/maps/Route23/scripts.pory"

# 286 "data/maps/Route23/scripts.pory"
Route23_EventScript_Rayquaza::
# 287 "data/maps/Route23/scripts.pory"
	lock
# 288 "data/maps/Route23/scripts.pory"
	faceplayer
# 289 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_Rayquaza, MSGBOX_NPC
# 290 "data/maps/Route23/scripts.pory"
	release
# 291 "data/maps/Route23/scripts.pory"
	end
# 292 "data/maps/Route23/scripts.pory"

# 293 "data/maps/Route23/scripts.pory"
Route23_Text_Rayquaza::
# 294 "data/maps/Route23/scripts.pory"
	.string "RAY!!!$"
# 295 "data/maps/Route23/scripts.pory"

# 296 "data/maps/Route23/scripts.pory"
Route23_Text_NoEligiblePkmn::
# 297 "data/maps/Route23/scripts.pory"
	.string "You have not meet the requirements.\p"
# 298 "data/maps/Route23/scripts.pory"
	.string "Come back when you do.$"
# 299 "data/maps/Route23/scripts.pory"

# 300 "data/maps/Route23/scripts.pory"
Route23_Text_RegiceCheck::
# 301 "data/maps/Route23/scripts.pory"
	.string "Hello there {PLAYER}.\p"
# 302 "data/maps/Route23/scripts.pory"
	.string "I am the Dragon Mirage Trainer.\p"
# 303 "data/maps/Route23/scripts.pory"
	.string "Beat me and you shall face a.\n"
# 304 "data/maps/Route23/scripts.pory"
	.string "special POKEMON.\p"
# 305 "data/maps/Route23/scripts.pory"
	.string "But first, I want to see a\n"
# 306 "data/maps/Route23/scripts.pory"
	.string "BLUE ORB and RED ORB,\l"
# 307 "data/maps/Route23/scripts.pory"
	.string "and knowledge on the Master of Dragons.$"
# 308 "data/maps/Route23/scripts.pory"

# 309 "data/maps/Route23/scripts.pory"
Route23_Text_Dragon::
# 310 "data/maps/Route23/scripts.pory"
	.string "So, you wish to face me?$"
# 311 "data/maps/Route23/scripts.pory"

# 312 "data/maps/Route23/scripts.pory"
Route23_Text_YesDragon::
# 313 "data/maps/Route23/scripts.pory"
	.string "Very well! Prepare yourself!$"
# 314 "data/maps/Route23/scripts.pory"

# 315 "data/maps/Route23/scripts.pory"
Route23_Text_PostDragon::
# 316 "data/maps/Route23/scripts.pory"
	.string "So you are worthy...$"
# 317 "data/maps/Route23/scripts.pory"

# 318 "data/maps/Route23/scripts.pory"
Route23_Text_DragonPostBattle::
# 319 "data/maps/Route23/scripts.pory"
	.string "Alright, you have bested me.\p"
# 320 "data/maps/Route23/scripts.pory"
	.string "Be prepared to face RAYQUAZA!$"
# 321 "data/maps/Route23/scripts.pory"

# 322 "data/maps/Route23/scripts.pory"
Route23_Text_EndDragon::
# 323 "data/maps/Route23/scripts.pory"
	.string "Goodbye.$"
# 324 "data/maps/Route23/scripts.pory"

# 325 "data/maps/Route23/scripts.pory"
Route23_Text_NoDragon::
# 326 "data/maps/Route23/scripts.pory"
	.string "Alright, take your time.$"
