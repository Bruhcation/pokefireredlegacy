# 1 "data/maps/SilphCo_9F/scripts.pory"

# 2 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_MapScripts::
# 3 "data/maps/SilphCo_9F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_9F_OnLoad
# 4 "data/maps/SilphCo_9F/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_9F/scripts.pory"

# 6 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_OnLoad::
# 7 "data/maps/SilphCo_9F/scripts.pory"
	call_if_unset FLAG_SILPH_9F_DOOR_1, EventScript_Close9FDoor1
# 8 "data/maps/SilphCo_9F/scripts.pory"
	call_if_unset FLAG_SILPH_9F_DOOR_2, EventScript_Close9FDoor2
# 9 "data/maps/SilphCo_9F/scripts.pory"
	call_if_unset FLAG_SILPH_9F_DOOR_3, EventScript_Close9FDoor3
# 10 "data/maps/SilphCo_9F/scripts.pory"
	call_if_unset FLAG_SILPH_9F_DOOR_4, EventScript_Close9FDoor4
# 11 "data/maps/SilphCo_9F/scripts.pory"
	end
# 12 "data/maps/SilphCo_9F/scripts.pory"

# 13 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_EventScript_HealWoman::
# 14 "data/maps/SilphCo_9F/scripts.pory"
	lock
# 15 "data/maps/SilphCo_9F/scripts.pory"
	faceplayer
# 16 "data/maps/SilphCo_9F/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_SILPH_CO_11F, 1, SilphCo_9F_EventScript_HealWomanRocketsGone
# 17 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_YouShouldTakeQuickNap
# 18 "data/maps/SilphCo_9F/scripts.pory"
	closemessage
# 19 "data/maps/SilphCo_9F/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 20 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_DontGiveUp
# 21 "data/maps/SilphCo_9F/scripts.pory"
	release
# 22 "data/maps/SilphCo_9F/scripts.pory"
	end
# 23 "data/maps/SilphCo_9F/scripts.pory"

# 24 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_EventScript_HealWomanRocketsGone::
# 25 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_ThankYouSoMuch
# 26 "data/maps/SilphCo_9F/scripts.pory"
	closemessage
# 27 "data/maps/SilphCo_9F/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 28 "data/maps/SilphCo_9F/scripts.pory"
	release
# 29 "data/maps/SilphCo_9F/scripts.pory"
	end
# 30 "data/maps/SilphCo_9F/scripts.pory"

# 31 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_EventScript_FloorSign::
# 32 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_FloorSign, MSGBOX_SIGN
# 33 "data/maps/SilphCo_9F/scripts.pory"
	end
# 34 "data/maps/SilphCo_9F/scripts.pory"

# 35 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_EventScript_Ed::
# 36 "data/maps/SilphCo_9F/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_ED, SilphCo_9F_Text_EdIntro, SilphCo_9F_Text_EdDefeat
# 37 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_EdPostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/SilphCo_9F/scripts.pory"
	end
# 39 "data/maps/SilphCo_9F/scripts.pory"

# 40 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_EventScript_Grunt1::
# 41 "data/maps/SilphCo_9F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_37, SilphCo_9F_Text_Grunt1Intro, SilphCo_9F_Text_Grunt1Defeat
# 42 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/SilphCo_9F/scripts.pory"
	end
# 44 "data/maps/SilphCo_9F/scripts.pory"

# 45 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_EventScript_Grunt2::
# 46 "data/maps/SilphCo_9F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_38, SilphCo_9F_Text_Grunt2Intro, SilphCo_9F_Text_Grunt2Defeat
# 47 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/SilphCo_9F/scripts.pory"
	end
# 49 "data/maps/SilphCo_9F/scripts.pory"

# 50 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_EventScript_Woman:: 
# 51 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_Woman, MSGBOX_NPC
# 52 "data/maps/SilphCo_9F/scripts.pory"
	end
# 53 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_Text_Woman:
# 54 "data/maps/SilphCo_9F/scripts.pory"
	.string "Oh, hello.\n"
# 55 "data/maps/SilphCo_9F/scripts.pory"
	.string "Do your parents work here?\p"
# 56 "data/maps/SilphCo_9F/scripts.pory"
	.string "SILPH CO. provides childcare\n"
# 57 "data/maps/SilphCo_9F/scripts.pory"
	.string "for workers who need it.\p"
# 58 "data/maps/SilphCo_9F/scripts.pory"
	.string "Fortunately, we were out on\n"
# 59 "data/maps/SilphCo_9F/scripts.pory"
	.string "a trip when the ROCKETS came.$"
# 60 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_EventScript_GBAKid:: 
# 61 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_GBAKid, MSGBOX_NPC
# 62 "data/maps/SilphCo_9F/scripts.pory"
	end
# 63 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_Text_GBAKid:
# 64 "data/maps/SilphCo_9F/scripts.pory"
	.string "Hey, aren't you the TRAINER\n"
# 65 "data/maps/SilphCo_9F/scripts.pory"
	.string "that stopped TEAM ROCKET?\l"
# 66 "data/maps/SilphCo_9F/scripts.pory"
	.string "What are you doing back here?\p"
# 67 "data/maps/SilphCo_9F/scripts.pory"
	.string "Did you miss some of the stuff\n"
# 68 "data/maps/SilphCo_9F/scripts.pory"
	.string "the ROCKETS dropped?$"
# 69 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_EventScript_LittleGirl:: 
# 70 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_LittleGirl, MSGBOX_NPC
# 71 "data/maps/SilphCo_9F/scripts.pory"
	end
# 72 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_Text_LittleGirl:
# 73 "data/maps/SilphCo_9F/scripts.pory"
	.string "If a mean guy took over this room,\n"
# 74 "data/maps/SilphCo_9F/scripts.pory"
	.string "you know what I'd do?\p"
# 75 "data/maps/SilphCo_9F/scripts.pory"
	.string "I tell him to go home, but I'd\n"
# 76 "data/maps/SilphCo_9F/scripts.pory"
	.string "be really loud!\l"
# 77 "data/maps/SilphCo_9F/scripts.pory"
	.string "He'd have to listen after that!$"
# 78 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_EventScript_LittleBoy:: 
# 79 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_LittleBoy, MSGBOX_NPC
# 80 "data/maps/SilphCo_9F/scripts.pory"
	end
# 81 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_Text_LittleBoy:
# 82 "data/maps/SilphCo_9F/scripts.pory"
	.string "What's your favorite POKéMON?\p"
# 83 "data/maps/SilphCo_9F/scripts.pory"
	.string "I don't have one, but I do have\n"
# 84 "data/maps/SilphCo_9F/scripts.pory"
	.string "a least favorite.\p"
# 85 "data/maps/SilphCo_9F/scripts.pory"
	.string "…\n"
# 86 "data/maps/SilphCo_9F/scripts.pory"
	.string "It's SEEL…$"
# 87 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_EventScript_SeelGirl:: 
# 88 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_SeelGirl, MSGBOX_NPC
# 89 "data/maps/SilphCo_9F/scripts.pory"
	end
# 90 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_Text_SeelGirl:
# 91 "data/maps/SilphCo_9F/scripts.pory"
	.string "My SEEL gets jealous when I spend\n"
# 92 "data/maps/SilphCo_9F/scripts.pory"
	.string "time with other kids.\p"
# 93 "data/maps/SilphCo_9F/scripts.pory"
	.string "My friend gets jealous when I spend\n"
# 94 "data/maps/SilphCo_9F/scripts.pory"
	.string "time with SEEL.\p"
# 95 "data/maps/SilphCo_9F/scripts.pory"
	.string "I just can't win!$"
# 96 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_EventScript_Newbie:: 
# 97 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_Newbie, MSGBOX_NPC
# 98 "data/maps/SilphCo_9F/scripts.pory"
	end
# 99 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_Text_Newbie:
# 100 "data/maps/SilphCo_9F/scripts.pory"
	.string "I'm new a brand new hire.\n"
# 101 "data/maps/SilphCo_9F/scripts.pory"
	.string "It's hard learning my way around.\p"
# 102 "data/maps/SilphCo_9F/scripts.pory"
	.string "And who decided these pads were\n"
# 103 "data/maps/SilphCo_9F/scripts.pory"
	.string "a good idea, anyway?\p"
# 104 "data/maps/SilphCo_9F/scripts.pory"
	.string "I try to go to the water cooler\n"
# 105 "data/maps/SilphCo_9F/scripts.pory"
	.string "and suddenly I'm four floors up\l"
# 106 "data/maps/SilphCo_9F/scripts.pory"
	.string "and totally lost.$"
# 107 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_EventScript_WorkerF:: 
# 108 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_WorkerF
# 109 "data/maps/SilphCo_9F/scripts.pory"
	release
# 110 "data/maps/SilphCo_9F/scripts.pory"
	end
# 111 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_Text_WorkerF:
# 112 "data/maps/SilphCo_9F/scripts.pory"
	.string "I can't believe you fought\n"
# 113 "data/maps/SilphCo_9F/scripts.pory"
	.string "all those ROCKETS.\p"
# 114 "data/maps/SilphCo_9F/scripts.pory"
	.string "You're so brave!$"
# 115 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_EventScript_BragWorkerM:: 
# 116 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_BragWorkerM
# 117 "data/maps/SilphCo_9F/scripts.pory"
	release
# 118 "data/maps/SilphCo_9F/scripts.pory"
	end
# 119 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_Text_BragWorkerM:
# 120 "data/maps/SilphCo_9F/scripts.pory"
	.string "PIDGEY and I took on two\n"
# 121 "data/maps/SilphCo_9F/scripts.pory"
	.string "of those ROCKET GRUNTS solo!\p"
# 122 "data/maps/SilphCo_9F/scripts.pory"
	.string "They had two big RHYDON and four\n"
# 123 "data/maps/SilphCo_9F/scripts.pory"
	.string "humongous GYARADOS between them!\p"
# 124 "data/maps/SilphCo_9F/scripts.pory"
	.string "It was no use, though, PIDGEY\n"
# 125 "data/maps/SilphCo_9F/scripts.pory"
	.string "and I wiped the floor with them.\p"
# 126 "data/maps/SilphCo_9F/scripts.pory"
	.string "I doubt they'll be back any time\n"
# 127 "data/maps/SilphCo_9F/scripts.pory"
	.string "soon after the thrashing they got.$"
# 128 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_EventScript_Scientist:: 
# 129 "data/maps/SilphCo_9F/scripts.pory"
	msgbox SilphCo_9F_Text_Scientist, MSGBOX_NPC
# 130 "data/maps/SilphCo_9F/scripts.pory"
	end
# 131 "data/maps/SilphCo_9F/scripts.pory"
SilphCo_9F_Text_Scientist:
# 132 "data/maps/SilphCo_9F/scripts.pory"
	.string "I remember this story differently.\p"
# 133 "data/maps/SilphCo_9F/scripts.pory"
	.string "It was one ROCKET GRUNT with a\n"
# 134 "data/maps/SilphCo_9F/scripts.pory"
	.string "RATTATA and a ZUBAT.\p"
# 135 "data/maps/SilphCo_9F/scripts.pory"
	.string "PIDGEY lost so badly that the\n"
# 136 "data/maps/SilphCo_9F/scripts.pory"
	.string "GRUNT said it wasn't worth stealing.\p"
# 137 "data/maps/SilphCo_9F/scripts.pory"
	.string "Then he shoved them both\n"
# 138 "data/maps/SilphCo_9F/scripts.pory"
	.string "in a utility closet.$"
