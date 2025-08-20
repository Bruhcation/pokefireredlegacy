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
	msgbox SevenIsland_House_Room2_Text_Eevee, MSGBOX_NPC
# 73 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 74 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 75 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_EventScript_Jolteon::
# 76 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Jolteon, MSGBOX_NPC
# 77 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 78 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 79 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_EventScript_Vaporeon::
# 80 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Vaporeon, MSGBOX_NPC
# 81 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 82 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 83 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_EventScript_Flareon::
# 84 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Flareon, MSGBOX_NPC
# 85 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 86 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 87 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_EventScript_Espeon::
# 88 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Espeon, MSGBOX_NPC
# 89 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 90 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 91 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_EventScript_Umbreon::
# 92 "data/maps/SevenIsland_House_Room2/scripts.pory"
	msgbox SevenIsland_House_Room2_Text_Umbreon, MSGBOX_NPC
# 93 "data/maps/SevenIsland_House_Room2/scripts.pory"
	end
# 94 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 95 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Text_Jolteon:
# 96 "data/maps/SevenIsland_House_Room2/scripts.pory"
	.string "JOLTEON!$"
# 97 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 98 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Text_Vaporeon:
# 99 "data/maps/SevenIsland_House_Room2/scripts.pory"
	.string "VAPOREON!$"
# 100 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 101 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Text_Flareon:
# 102 "data/maps/SevenIsland_House_Room2/scripts.pory"
	.string "FLAREON!$"
# 103 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 104 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Text_Espeon:
# 105 "data/maps/SevenIsland_House_Room2/scripts.pory"
	.string "ESPEON!$"
# 106 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 107 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Text_Umbreon:
# 108 "data/maps/SevenIsland_House_Room2/scripts.pory"
	.string "UMBREON!$"
# 109 "data/maps/SevenIsland_House_Room2/scripts.pory"

# 110 "data/maps/SevenIsland_House_Room2/scripts.pory"
SevenIsland_House_Room2_Text_Eevee:
# 111 "data/maps/SevenIsland_House_Room2/scripts.pory"
	.string "EEVEE!$"
