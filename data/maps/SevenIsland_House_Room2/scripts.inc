# 1 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 2 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_MapScripts::
# 3 "data/maps/SevenIsland_House_Room2/scripts.pory"
	.byte 0
# 4 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 5 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Evvi::
# 6 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 7 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Evvi, MSGBOX_DEFAULT
# 8 "data/maps/SevenIsland_House_Room2/scripts.pory"
	trainerbattle_no_intro TRAINER_SPATK, SevenIsland_House_Room2_Text_EvviPostBattle
# 9 "data/maps/SevenIsland_House_Room2/scripts.pory"
	cleartrainerflag TRAINER_SPATK
# 10 "data/maps/SevenIsland_House_Room2/scripts.pory"
	special HealPlayerParty
# 11 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 12 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 13 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Eva::
# 14 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 15 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Eva, MSGBOX_DEFAULT
# 16 "data/maps/SevenIsland_House_Room2/scripts.pory"
	trainerbattle_no_intro TRAINER_HP, SevenIsland_House_Room2_Text_EvaPostBattle
# 17 "data/maps/SevenIsland_House_Room2/scripts.pory"
	cleartrainerflag TRAINER_HP
# 18 "data/maps/SevenIsland_House_Room2/scripts.pory"
	special HealPlayerParty
# 19 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 20 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 21 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Eve::
# 22 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 23 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Eve, MSGBOX_DEFAULT
# 24 "data/maps/SevenIsland_House_Room2/scripts.pory"
	trainerbattle_no_intro TRAINER_DEFENSE, SevenIsland_House_Room2_Text_EvePostBattle
# 25 "data/maps/SevenIsland_House_Room2/scripts.pory"
	cleartrainerflag TRAINER_DEFENSE
# 26 "data/maps/SevenIsland_House_Room2/scripts.pory"
	special HealPlayerParty
# 27 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 28 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 29 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Evern::
# 30 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 31 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Evern, MSGBOX_DEFAULT
# 32 "data/maps/SevenIsland_House_Room2/scripts.pory"
	trainerbattle_no_intro TRAINER_SPDEF, SevenIsland_House_Room2_Text_EvernPostBattle
# 33 "data/maps/SevenIsland_House_Room2/scripts.pory"
	cleartrainerflag TRAINER_SPDEF
# 34 "data/maps/SevenIsland_House_Room2/scripts.pory"
	special HealPlayerParty
# 35 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 36 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 37 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Evin::
# 38 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 39 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Evin, MSGBOX_DEFAULT
# 40 "data/maps/SevenIsland_House_Room2/scripts.pory"
	trainerbattle_no_intro TRAINER_ATTACK, SevenIsland_House_Room2_Text_EvinPostBattle
# 41 "data/maps/SevenIsland_House_Room2/scripts.pory"
	cleartrainerflag TRAINER_ATTACK
# 42 "data/maps/SevenIsland_House_Room2/scripts.pory"
	special HealPlayerParty
# 43 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 44 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 45 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Evangelos::
# 46 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 47 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Evangelos, MSGBOX_DEFAULT
# 48 "data/maps/SevenIsland_House_Room2/scripts.pory"
	trainerbattle_no_intro TRAINER_SPEED, SevenIsland_House_Room2_Text_EvangelosPostBattle
# 49 "data/maps/SevenIsland_House_Room2/scripts.pory"
	cleartrainerflag TRAINER_SPEED
# 50 "data/maps/SevenIsland_House_Room2/scripts.pory"
	special HealPlayerParty
# 51 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 52 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 53 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_EventScript_IVCheck::
# 54 "data/maps/SevenIsland_House_Room2/scripts.pory"
	lock
# 55 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 56 "data/maps/SevenIsland_House_Room2/scripts.pory"
	call EventScript_IVChecker
# 57 "data/maps/SevenIsland_House_Room2/scripts.pory"
	release
# 58 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 59 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 60 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_EventScript_EVCheck::
# 61 "data/maps/SevenIsland_House_Room2/scripts.pory"
	lock
# 62 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 63 "data/maps/SevenIsland_House_Room2/scripts.pory"
	call EventScript_EVChecker
# 64 "data/maps/SevenIsland_House_Room2/scripts.pory"
	release
# 65 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 66 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 67 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_EventScript_BaldMan::
# 68 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_BaldMan, MSGBOX_NPC
# 69 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 70 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 71 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_EventScript_Eevee::
# 72 "data/maps/SevenIsland_House_Room2/scripts.pory"
	lock
# 73 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 74 "data/maps/SevenIsland_House_Room2/scripts.pory"
	waitse
# 75 "data/maps/SevenIsland_House_Room2/scripts.pory"
	playmoncry SPECIES_EEVEE, CRY_MODE_NORMAL
# 76 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Eevee, MSGBOX_NPC
# 77 "data/maps/SevenIsland_House_Room2/scripts.pory"
	waitmoncry
# 78 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 79 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 80 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_EventScript_Jolteon::
# 81 "data/maps/SevenIsland_House_Room2/scripts.pory"
	lock
# 82 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 83 "data/maps/SevenIsland_House_Room2/scripts.pory"
	waitse
# 84 "data/maps/SevenIsland_House_Room2/scripts.pory"
	playmoncry SPECIES_JOLTEON, CRY_MODE_NORMAL
# 85 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Jolteon, MSGBOX_NPC
# 86 "data/maps/SevenIsland_House_Room2/scripts.pory"
	waitmoncry
# 87 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 88 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 89 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_EventScript_Vaporeon::
# 90 "data/maps/SevenIsland_House_Room2/scripts.pory"
	lock
# 91 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 92 "data/maps/SevenIsland_House_Room2/scripts.pory"
	waitse
# 93 "data/maps/SevenIsland_House_Room2/scripts.pory"
	playmoncry SPECIES_VAPOREON, CRY_MODE_NORMAL
# 94 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Vaporeon, MSGBOX_NPC
# 95 "data/maps/SevenIsland_House_Room2/scripts.pory"
	waitmoncry
# 96 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 97 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 98 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_EventScript_Flareon::
# 99 "data/maps/SevenIsland_House_Room2/scripts.pory"
	lock
# 100 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 101 "data/maps/SevenIsland_House_Room2/scripts.pory"
	waitse
# 102 "data/maps/SevenIsland_House_Room2/scripts.pory"
	playmoncry SPECIES_FLAREON, CRY_MODE_NORMAL
# 103 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Flareon, MSGBOX_NPC
# 104 "data/maps/SevenIsland_House_Room2/scripts.pory"
	waitmoncry
# 105 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 106 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 107 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_EventScript_Espeon::
# 108 "data/maps/SevenIsland_House_Room2/scripts.pory"
	lock
# 109 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 110 "data/maps/SevenIsland_House_Room2/scripts.pory"
	waitse
# 111 "data/maps/SevenIsland_House_Room2/scripts.pory"
	playmoncry SPECIES_ESPEON, CRY_MODE_NORMAL
# 112 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Espeon, MSGBOX_NPC
# 113 "data/maps/SevenIsland_House_Room2/scripts.pory"
	waitmoncry
# 114 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 115 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 116 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_EventScript_Umbreon::
# 117 "data/maps/SevenIsland_House_Room2/scripts.pory"
	lock
# 118 "data/maps/SevenIsland_House_Room2/scripts.pory"
	faceplayer
# 119 "data/maps/SevenIsland_House_Room2/scripts.pory"
	waitse
# 120 "data/maps/SevenIsland_House_Room2/scripts.pory"
	playmoncry SPECIES_UMBREON, CRY_MODE_NORMAL
# 121 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Umbreon, MSGBOX_NPC
# 122 "data/maps/SevenIsland_House_Room2/scripts.pory"
	waitmoncry
# 123 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 124 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 125 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Text_Jolteon:
# 126 "data/maps/SevenIsland_House_Room2/scripts.pory"
	.string "JOLTEON!$"
# 127 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 128 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Text_Vaporeon:
# 129 "data/maps/SevenIsland_House_Room2/scripts.pory"
	.string "VAPOREON!$"
# 130 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 131 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Text_Flareon:
# 132 "data/maps/SevenIsland_House_Room2/scripts.pory"
	.string "FLAREON!$"
# 133 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 134 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Text_Espeon:
# 135 "data/maps/SevenIsland_House_Room2/scripts.pory"
	.string "ESPEON!$"
# 136 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 137 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Text_Umbreon:
# 138 "data/maps/SevenIsland_House_Room2/scripts.pory"
	.string "UMBREON!$"
# 139 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 140 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Text_Eevee:
# 141 "data/maps/SevenIsland_House_Room2/scripts.pory"
	.string "EEVEE!$"
