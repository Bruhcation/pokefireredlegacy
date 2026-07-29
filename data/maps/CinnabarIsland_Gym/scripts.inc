# 1 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 2 "data/maps/CinnabarIsland_Gym/scripts.pory"
.set LOCALID_QUINN, 1
# 3 "data/maps/CinnabarIsland_Gym/scripts.pory"
.set LOCALID_AVERY, 3
# 4 "data/maps/CinnabarIsland_Gym/scripts.pory"
.set LOCALID_RAMON, 4
# 5 "data/maps/CinnabarIsland_Gym/scripts.pory"
.set LOCALID_DEREK, 5
# 6 "data/maps/CinnabarIsland_Gym/scripts.pory"
.set LOCALID_DUSTY, 6
# 7 "data/maps/CinnabarIsland_Gym/scripts.pory"
.set LOCALID_ZAC,   7
# 8 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 9 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_MapScripts::
# 10 "data/maps/CinnabarIsland_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CinnabarIsland_Gym_OnLoad
# 11 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.byte 0
# 12 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 13 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoad::
# 14 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_OnLoadOpenAllDoors
# 15 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_OnLoadOpenDoor1
# 16 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_OnLoadOpenDoor2
# 17 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_OnLoadOpenDoor3
# 18 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_OnLoadOpenDoor4
# 19 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_OnLoadOpenDoor5
# 20 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_OnLoadOpenDoor6
# 21 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 22 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 23 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenAllDoors::
# 24 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 25 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 26 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 27 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 28 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 29 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 30 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 31 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 32 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor1::
# 33 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 34 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 35 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 36 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor2::
# 37 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 38 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 39 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 40 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor3::
# 41 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 42 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 43 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 44 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor4::
# 45 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 46 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 47 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 48 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor5::
# 49 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 50 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 51 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 52 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor6::
# 53 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 54 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 55 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 56 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Blaine::
# 57 "data/maps/CinnabarIsland_Gym/scripts.pory"
	famechecker FAMECHECKER_BLAINE, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 58 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BLAINE, CinnabarIsland_Gym_Text_BlaineIntro, CinnabarIsland_Gym_Text_BlaineDefeat, CinnabarIsland_Gym_EventScript_DefeatedBlaine, NO_MUSIC
# 59 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM38_FROM_BLAINE, CinnabarIsland_Gym_EventScript_GiveTM38
# 60 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, CinnabarIsland_Gym_EventScript_RematchBlaine
# 61 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_BlainePostBattle
# 62 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 63 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 64 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 65 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedBlaine::
# 66 "data/maps/CinnabarIsland_Gym/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 1
# 67 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_DEFEATED_BLAINE
# 68 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 69 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setrespawn SPAWN_CINNABAR_ISLAND
# 70 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 1
# 71 "data/maps/CinnabarIsland_Gym/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_BILL
# 72 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_GYM3CAP
# 73 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_GYM4CAP
# 74 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_GYM5CAP
# 75 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_GYM6CAP
# 76 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_GYM7CAP
# 77 "data/maps/CinnabarIsland_Gym/scripts.pory"
	set_gym_trainers 7
# 78 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_GiveTM38
# 79 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 80 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 81 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GiveTM38::
# 82 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ExplainVolcanoBadge
# 83 "data/maps/CinnabarIsland_Gym/scripts.pory"
	checkitemspace ITEM_TM38
# 84 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CinnabarIsland_Gym_EventScript_NoRoomForTM38
# 85 "data/maps/CinnabarIsland_Gym/scripts.pory"
	giveitem_msg CinnabarIsland_Gym_Text_ReceivedTM38FromBlaine, ITEM_TM38
# 86 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_GOT_TM38_FROM_BLAINE
# 87 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_FireBlastIsUltimateFireMove
# 88 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 89 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 90 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 91 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_NoRoomForTM38::
# 92 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_MakeSpaceForThis
# 93 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 94 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 95 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 96 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_RematchBlaine::
# 97 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_0x8004, FAMECHECKER_BLAINE
# 98 "data/maps/CinnabarIsland_Gym/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 99 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CinnabarIsland_Gym_EventScript_RematchBlaine2
# 100 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_BlaineNoNoRematchBattle
# 101 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 102 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 103 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 104 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Text_BlaineNoNoRematchBattle::
# 105 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "Ah! The CHAMP!\p"
# 106 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "I've stoked my flames hotter\n"
# 107 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "than ever before!\p"
# 108 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "However my Inferno hasn't\n"
# 109 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "been set let, so give me some time.\p"
# 110 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "In the mean time fill in my entry\p"
# 111 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "in the FAMECHECKER to know\p"
# 112 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "more trivia about my Inferno!$"
# 113 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 114 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_RematchBlaine2::
# 115 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RematchBlaine, MSGBOX_YESNO
# 116 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_NoRematchBlaine
# 117 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BLAINE2, CinnabarIsland_Gym_Text_RematchYesBlaine, CinnabarIsland_Gym_Text_RematchBlaineDefeat, CinnabarIsland_Gym_EventScript_PostRematchBlaine, NO_MUSIC
# 118 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 119 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 120 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 121 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_PostRematchBlaine::
# 122 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_BlainePostRematchBattle
# 123 "data/maps/CinnabarIsland_Gym/scripts.pory"
	cleartrainerflag TRAINER_LEADER_BLAINE2
# 124 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 125 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 126 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 127 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_NoRematchBlaine::
# 128 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_BlaineNoRematchBattle
# 129 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 130 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 131 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 132 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 133 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Erik::
# 134 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ERIK, CinnabarIsland_Gym_Text_ErikIntro, CinnabarIsland_Gym_Text_ErikDefeat
# 135 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ErikPostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 137 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 138 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Avery::
# 139 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryIntro, CinnabarIsland_Gym_Text_AveryDefeat, CinnabarIsland_Gym_EventScript_DefeatedAvery
# 140 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryPostBattle, MSGBOX_AUTOCLOSE
# 141 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 142 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 143 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedAvery::
# 144 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_Quiz2CompleteTrainer
# 145 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 146 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 147 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 148 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2CompleteTrainer::
# 149 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 150 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 151 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 152 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Derek::
# 153 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekIntro, CinnabarIsland_Gym_Text_DerekDefeat, CinnabarIsland_Gym_EventScript_DefeatedDerek
# 154 "data/maps/CinnabarIsland_Gym/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 2
# 155 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 156 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 157 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 158 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedDerek::
# 159 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_Quiz4CompleteTrainer
# 160 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 161 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 162 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 163 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4CompleteTrainer::
# 164 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 165 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 166 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 167 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Zac::
# 168 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacIntro, CinnabarIsland_Gym_Text_ZacDefeat, CinnabarIsland_Gym_EventScript_DefeatedZac
# 169 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacPostBattle, MSGBOX_AUTOCLOSE
# 170 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 171 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 172 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedZac::
# 173 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_Quiz6CompleteTrainer
# 174 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 175 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 176 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 177 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6CompleteTrainer::
# 178 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 179 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 180 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 181 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quinn::
# 182 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnIntro, CinnabarIsland_Gym_Text_QuinnDefeat, CinnabarIsland_Gym_EventScript_DefeatedQuinn
# 183 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnPostBattle, MSGBOX_AUTOCLOSE
# 184 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 185 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 186 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedQuinn::
# 187 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_Quiz1CompleteTrainer
# 188 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 189 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 190 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 191 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1CompleteTrainer::
# 192 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 193 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 194 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 195 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Ramon::
# 196 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonIntro, CinnabarIsland_Gym_Text_RamonDefeat, CinnabarIsland_Gym_EventScript_DefeatedRamon
# 197 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonPostBattle, MSGBOX_AUTOCLOSE
# 198 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 199 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 200 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedRamon::
# 201 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_Quiz3CompleteTrainer
# 202 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 203 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 204 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 205 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3CompleteTrainer::
# 206 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 207 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 208 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 209 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Dusty::
# 210 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyIntro, CinnabarIsland_Gym_Text_DustyDefeat, CinnabarIsland_Gym_EventScript_DefeatedDusty
# 211 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyPostBattle, MSGBOX_AUTOCLOSE
# 212 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 213 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 214 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedDusty::
# 215 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_Quiz5CompleteTrainer
# 216 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 217 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 218 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 219 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5CompleteTrainer::
# 220 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 221 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 222 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 223 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymGuy::
# 224 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lock
# 225 "data/maps/CinnabarIsland_Gym/scripts.pory"
	faceplayer
# 226 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_EventScript_GymGuyPostVictory
# 227 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyAdvice
# 228 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 229 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 230 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 231 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymGuyPostVictory::
# 232 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyPostVictory
# 233 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 234 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 235 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 236 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymStatue::
# 237 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 238 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, CinnabarIsland_Gym_EventScript_GymStatuePostVictory
# 239 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatue
# 240 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 241 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 242 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 243 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymStatuePostVictory::
# 244 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatuePlayerWon
# 245 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 246 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 247 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 248 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quz1Left::
# 249 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 250 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 251 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
# 252 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 253 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 254 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quz1Right::
# 255 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 256 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 257 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
# 258 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 259 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 260 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1::
# 261 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 262 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion1, MSGBOX_YESNO
# 263 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz1Correct
# 264 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz1Incorrect
# 265 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 266 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 267 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_CorrectAnswer::
# 268 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 269 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitfanfare
# 270 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_CorrectGoOnThrough
# 271 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 272 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 273 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_IncorrectAnswer::
# 274 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 275 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_BOO
# 276 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 277 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_SorryBadCall
# 278 "data/maps/CinnabarIsland_Gym/scripts.pory"
	closemessage
# 279 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 280 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 281 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Correct::
# 282 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 283 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 284 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 285 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 286 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 287 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 288 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Complete::
# 289 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 290 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 291 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 292 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 293 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_1
# 294 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 295 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 296 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DoorAlreadyOpen::
# 297 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 298 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 299 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 300 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Incorrect::
# 301 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 302 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_EventScript_BattleQuinn
# 303 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 304 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 305 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 306 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleQuinn::
# 307 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_QuinnApproachLeft
# 308 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_QuinnApproachRight
# 309 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 310 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnIntro
# 311 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnDefeat
# 312 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 313 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 314 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 315 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 316 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 317 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_QuinnApproachLeft::
# 318 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 319 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Movement_QuinnApproachLeft
# 320 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 321 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 322 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 323 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_QuinnApproachRight::
# 324 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 325 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Movement_QuinnApproachRight
# 326 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 327 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 328 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 329 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_QuinnApproachLeft::
# 330 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 331 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 332 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 333 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 334 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_QuinnApproachRight::
# 335 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 336 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 337 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 338 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Left::
# 339 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 340 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 341 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
# 342 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 343 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 344 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Right::
# 345 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 346 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 347 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
# 348 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 349 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 350 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2::
# 351 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 352 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion2, MSGBOX_YESNO
# 353 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz2Incorrect
# 354 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz2Correct
# 355 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 356 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 357 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Correct::
# 358 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 359 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 360 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 361 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 362 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 363 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 364 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Complete::
# 365 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 366 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 367 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 368 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 369 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_2
# 370 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 371 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 372 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Incorrect::
# 373 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 374 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_EventScript_BattleAvery
# 375 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 376 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 377 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 378 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleAvery::
# 379 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_AveryApproachLeft
# 380 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_AveryApproachRight
# 381 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 382 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryIntro
# 383 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryDefeat
# 384 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 385 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 386 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 387 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 388 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 389 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_AveryApproachLeft::
# 390 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Gym_Movement_PlayerFaceAvery
# 391 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Movement_AveryApproachLeft
# 392 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 393 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 394 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 395 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_AveryApproachRight::
# 396 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Gym_Movement_PlayerFaceAvery
# 397 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Movement_AveryApproachRight
# 398 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 399 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 400 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 401 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_AveryApproachLeft::
# 402 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 403 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 404 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 405 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 406 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 407 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_AveryApproachRight::
# 408 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 409 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 410 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_in_place_faster_left
# 411 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 412 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 413 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_PlayerFaceAvery::
# 414 "data/maps/CinnabarIsland_Gym/scripts.pory"
	delay_16
# 415 "data/maps/CinnabarIsland_Gym/scripts.pory"
	delay_16
# 416 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_in_place_faster_right
# 417 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 418 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 419 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Left::
# 420 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 421 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 422 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
# 423 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 424 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 425 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Right::
# 426 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 427 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 428 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
# 429 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 430 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 431 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3::
# 432 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 433 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion3, MSGBOX_YESNO
# 434 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz3Incorrect
# 435 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz3Correct
# 436 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 437 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 438 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Correct::
# 439 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 440 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 441 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 442 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 443 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 444 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 445 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Complete::
# 446 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 447 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 448 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 449 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 450 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_3
# 451 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 452 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 453 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Incorrect::
# 454 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 455 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_EventScript_BattleRamon
# 456 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 457 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 458 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 459 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleRamon::
# 460 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_RamonApproachLeft
# 461 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_RamonApproachRight
# 462 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 463 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonIntro
# 464 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonDefeat
# 465 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 466 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 467 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 468 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 469 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 470 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_RamonApproachLeft::
# 471 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 472 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Movement_RamonApproachLeft
# 473 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 474 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 475 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 476 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_RamonApproachRight::
# 477 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 478 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Movement_RamonApproachRight
# 479 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 480 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 481 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 482 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_RamonApproachLeft::
# 483 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 484 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 485 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 486 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 487 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_RamonApproachRight::
# 488 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 489 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 490 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 491 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Left::
# 492 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 493 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 494 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
# 495 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 496 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 497 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Right::
# 498 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 499 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 500 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
# 501 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 502 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 503 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4::
# 504 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 505 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion4, MSGBOX_YESNO
# 506 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz4Incorrect
# 507 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz4Correct
# 508 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 509 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 510 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Correct::
# 511 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 512 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 513 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 514 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 515 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 516 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 517 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Complete::
# 518 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 519 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 520 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 521 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 522 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_4
# 523 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 524 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 525 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Incorrect::
# 526 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 527 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_EventScript_BattleDerek
# 528 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 529 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 530 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 531 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDerek::
# 532 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_DerekApproachLeft
# 533 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_DerekApproachRight
# 534 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 535 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekIntro
# 536 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekDefeat
# 537 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 538 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 539 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 540 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 541 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 542 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DerekApproachLeft::
# 543 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 544 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Movement_DerekApproachLeft
# 545 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 546 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 547 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 548 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DerekApproachRight::
# 549 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 550 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Movement_DerekApproachRight
# 551 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 552 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 553 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 554 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DerekApproachLeft::
# 555 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 556 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 557 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 558 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 559 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DerekApproachRight::
# 560 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 561 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 562 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 563 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Left::
# 564 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 565 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 566 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
# 567 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 568 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 569 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Right::
# 570 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 571 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 572 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
# 573 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 574 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 575 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5::
# 576 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 577 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion5, MSGBOX_YESNO
# 578 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz5Correct
# 579 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz5Incorrect
# 580 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 581 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 582 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Correct::
# 583 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 584 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 585 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 586 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 587 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 588 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 589 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Complete::
# 590 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 591 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 592 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 593 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 594 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_5
# 595 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 596 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 597 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Incorrect::
# 598 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 599 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_EventScript_BattleDusty
# 600 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 601 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 602 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 603 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDusty::
# 604 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_DustyApproachLeft
# 605 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_DustyApproachRight
# 606 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 607 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyIntro
# 608 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyDefeat
# 609 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 610 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 611 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 612 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 613 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 614 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DustyApproachLeft::
# 615 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 616 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Movement_DustyApproachLeft
# 617 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 618 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 619 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 620 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DustyApproachRight::
# 621 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 622 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Movement_DustyApproachRight
# 623 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 624 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 625 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 626 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DustyApproachLeft::
# 627 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 628 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 629 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 630 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 631 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DustyApproachRight::
# 632 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 633 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 634 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 635 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Left::
# 636 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 637 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 638 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
# 639 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 640 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 641 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Right::
# 642 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 643 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 644 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
# 645 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 646 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 647 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6::
# 648 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 649 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion6, MSGBOX_YESNO
# 650 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz6Incorrect
# 651 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz6Correct
# 652 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 653 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 654 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Correct::
# 655 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 656 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 657 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 658 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 659 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 660 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 661 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Complete::
# 662 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 663 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 664 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 665 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 666 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_6
# 667 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 668 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 669 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Incorrect::
# 670 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 671 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_EventScript_BattleZac
# 672 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 673 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 674 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 675 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleZac::
# 676 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_ZacApproachLeft
# 677 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_ZacApproachRight
# 678 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 679 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacIntro
# 680 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacDefeat
# 681 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 682 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 683 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 684 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 685 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 686 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_ZacApproachLeft::
# 687 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 688 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Movement_ZacApproachLeft
# 689 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 690 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 691 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 692 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_ZacApproachRight::
# 693 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 694 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Movement_ZacApproachRight
# 695 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 696 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 697 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 698 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_ZacApproachLeft::
# 699 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 700 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 701 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 702 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 703 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_ZacApproachRight::
# 704 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 705 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 706 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 707 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor1::
# 708 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 709 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 710 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 711 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 712 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 713 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27, 10, METATILE_CinnabarGym_Floor, 0
# 714 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 28, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 715 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 716 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 717 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor2::
# 718 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 719 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 720 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 721 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 722 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 723 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 10, METATILE_CinnabarGym_Floor, 0
# 724 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 19, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 725 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 726 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 727 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor3::
# 728 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 729 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 15, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 730 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 16, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 731 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 16, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 732 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 17, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 733 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 17, METATILE_CinnabarGym_Floor, 0
# 734 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 19, 17, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 735 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 736 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 737 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor4::
# 738 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 21, METATILE_CinnabarGym_Wall_RetractedBarrier, 1
# 739 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 22, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 740 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 23, METATILE_CinnabarGym_Floor, 0
# 741 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 742 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 743 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor5::
# 744 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 16, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 745 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 16, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 746 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 17, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 747 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 17, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 748 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 18, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 749 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 18, METATILE_CinnabarGym_Floor, 0
# 750 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  7, 18, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 751 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 752 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 753 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor6::
# 754 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 755 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 756 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 757 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 758 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 759 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 10, METATILE_CinnabarGym_Floor, 0
# 760 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  7, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 761 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
