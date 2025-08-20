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
	msgbox CinnabarIsland_Gym_Text_RematchBlaine, MSGBOX_YESNO
# 98 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_NoRematchBlaine
# 99 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BLAINE2, CinnabarIsland_Gym_Text_RematchYesBlaine, CinnabarIsland_Gym_Text_RematchBlaineDefeat, CinnabarIsland_Gym_EventScript_PostRematchBlaine, NO_MUSIC
# 100 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 101 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 102 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 103 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_PostRematchBlaine::
# 104 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_BlainePostRematchBattle
# 105 "data/maps/CinnabarIsland_Gym/scripts.pory"
	cleartrainerflag TRAINER_LEADER_BLAINE2
# 106 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 107 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 108 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 109 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_NoRematchBlaine::
# 110 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_BlaineNoRematchBattle
# 111 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 112 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 113 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 114 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 115 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Erik::
# 116 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ERIK, CinnabarIsland_Gym_Text_ErikIntro, CinnabarIsland_Gym_Text_ErikDefeat
# 117 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ErikPostBattle, MSGBOX_AUTOCLOSE
# 118 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 119 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 120 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Avery::
# 121 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryIntro, CinnabarIsland_Gym_Text_AveryDefeat, CinnabarIsland_Gym_EventScript_DefeatedAvery
# 122 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryPostBattle, MSGBOX_AUTOCLOSE
# 123 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 124 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 125 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedAvery::
# 126 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_Quiz2CompleteTrainer
# 127 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 128 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 129 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 130 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2CompleteTrainer::
# 131 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 132 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 133 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 134 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Derek::
# 135 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekIntro, CinnabarIsland_Gym_Text_DerekDefeat, CinnabarIsland_Gym_EventScript_DefeatedDerek
# 136 "data/maps/CinnabarIsland_Gym/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 2
# 137 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 138 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 139 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 140 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedDerek::
# 141 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_Quiz4CompleteTrainer
# 142 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 143 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 144 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 145 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4CompleteTrainer::
# 146 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 147 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 148 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 149 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Zac::
# 150 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacIntro, CinnabarIsland_Gym_Text_ZacDefeat, CinnabarIsland_Gym_EventScript_DefeatedZac
# 151 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacPostBattle, MSGBOX_AUTOCLOSE
# 152 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 153 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 154 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedZac::
# 155 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_Quiz6CompleteTrainer
# 156 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 157 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 158 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 159 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6CompleteTrainer::
# 160 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 161 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 162 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 163 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quinn::
# 164 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnIntro, CinnabarIsland_Gym_Text_QuinnDefeat, CinnabarIsland_Gym_EventScript_DefeatedQuinn
# 165 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnPostBattle, MSGBOX_AUTOCLOSE
# 166 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 167 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 168 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedQuinn::
# 169 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_Quiz1CompleteTrainer
# 170 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 171 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 172 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 173 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1CompleteTrainer::
# 174 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 175 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 176 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 177 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Ramon::
# 178 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonIntro, CinnabarIsland_Gym_Text_RamonDefeat, CinnabarIsland_Gym_EventScript_DefeatedRamon
# 179 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonPostBattle, MSGBOX_AUTOCLOSE
# 180 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 181 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 182 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedRamon::
# 183 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_Quiz3CompleteTrainer
# 184 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 185 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 186 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 187 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3CompleteTrainer::
# 188 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 189 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 190 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 191 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Dusty::
# 192 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyIntro, CinnabarIsland_Gym_Text_DustyDefeat, CinnabarIsland_Gym_EventScript_DefeatedDusty
# 193 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyPostBattle, MSGBOX_AUTOCLOSE
# 194 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 195 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 196 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedDusty::
# 197 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_Quiz5CompleteTrainer
# 198 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 199 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 200 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 201 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5CompleteTrainer::
# 202 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 203 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 204 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 205 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymGuy::
# 206 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lock
# 207 "data/maps/CinnabarIsland_Gym/scripts.pory"
	faceplayer
# 208 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_EventScript_GymGuyPostVictory
# 209 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyAdvice
# 210 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 211 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 212 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 213 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymGuyPostVictory::
# 214 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyPostVictory
# 215 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 216 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 217 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 218 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymStatue::
# 219 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 220 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, CinnabarIsland_Gym_EventScript_GymStatuePostVictory
# 221 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatue
# 222 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 223 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 224 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 225 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymStatuePostVictory::
# 226 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatuePlayerWon
# 227 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 228 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 229 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 230 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quz1Left::
# 231 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 232 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 233 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
# 234 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 235 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 236 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quz1Right::
# 237 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 238 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 239 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
# 240 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 241 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 242 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1::
# 243 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 244 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion1, MSGBOX_YESNO
# 245 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz1Correct
# 246 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz1Incorrect
# 247 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 248 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 249 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_CorrectAnswer::
# 250 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 251 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitfanfare
# 252 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_CorrectGoOnThrough
# 253 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 254 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 255 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_IncorrectAnswer::
# 256 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 257 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_BOO
# 258 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 259 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_SorryBadCall
# 260 "data/maps/CinnabarIsland_Gym/scripts.pory"
	closemessage
# 261 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 262 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 263 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Correct::
# 264 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 265 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 266 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 267 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 268 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 269 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 270 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Complete::
# 271 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 272 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 273 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 274 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 275 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_1
# 276 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 277 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 278 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DoorAlreadyOpen::
# 279 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 280 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 281 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 282 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Incorrect::
# 283 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 284 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_EventScript_BattleQuinn
# 285 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 286 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 287 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 288 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleQuinn::
# 289 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_QuinnApproachLeft
# 290 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_QuinnApproachRight
# 291 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 292 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnIntro
# 293 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnDefeat
# 294 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 295 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 296 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 297 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 298 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 299 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_QuinnApproachLeft::
# 300 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 301 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Movement_QuinnApproachLeft
# 302 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 303 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 304 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 305 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_QuinnApproachRight::
# 306 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 307 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Movement_QuinnApproachRight
# 308 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 309 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 310 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 311 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_QuinnApproachLeft::
# 312 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 313 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 314 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 315 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 316 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_QuinnApproachRight::
# 317 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 318 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 319 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 320 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Left::
# 321 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 322 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 323 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
# 324 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 325 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 326 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Right::
# 327 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 328 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 329 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
# 330 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 331 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 332 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2::
# 333 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 334 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion2, MSGBOX_YESNO
# 335 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz2Incorrect
# 336 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz2Correct
# 337 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 338 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 339 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Correct::
# 340 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 341 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 342 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 343 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 344 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 345 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 346 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Complete::
# 347 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 348 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 349 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 350 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 351 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_2
# 352 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 353 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 354 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Incorrect::
# 355 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 356 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_EventScript_BattleAvery
# 357 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 358 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 359 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 360 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleAvery::
# 361 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_AveryApproachLeft
# 362 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_AveryApproachRight
# 363 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 364 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryIntro
# 365 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryDefeat
# 366 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 367 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 368 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 369 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 370 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 371 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_AveryApproachLeft::
# 372 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Gym_Movement_PlayerFaceAvery
# 373 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Movement_AveryApproachLeft
# 374 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 375 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 376 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 377 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_AveryApproachRight::
# 378 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, CinnabarIsland_Gym_Movement_PlayerFaceAvery
# 379 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Movement_AveryApproachRight
# 380 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 381 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 382 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 383 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_AveryApproachLeft::
# 384 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 385 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 386 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 387 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 388 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 389 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_AveryApproachRight::
# 390 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 391 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 392 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_in_place_faster_left
# 393 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 394 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 395 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_PlayerFaceAvery::
# 396 "data/maps/CinnabarIsland_Gym/scripts.pory"
	delay_16
# 397 "data/maps/CinnabarIsland_Gym/scripts.pory"
	delay_16
# 398 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_in_place_faster_right
# 399 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 400 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 401 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Left::
# 402 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 403 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 404 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
# 405 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 406 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 407 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Right::
# 408 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 409 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 410 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
# 411 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 412 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 413 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3::
# 414 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 415 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion3, MSGBOX_YESNO
# 416 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz3Incorrect
# 417 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz3Correct
# 418 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 419 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 420 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Correct::
# 421 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 422 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 423 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 424 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 425 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 426 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 427 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Complete::
# 428 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 429 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 430 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 431 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 432 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_3
# 433 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 434 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 435 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Incorrect::
# 436 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 437 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_EventScript_BattleRamon
# 438 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 439 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 440 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 441 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleRamon::
# 442 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_RamonApproachLeft
# 443 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_RamonApproachRight
# 444 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 445 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonIntro
# 446 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonDefeat
# 447 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 448 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 449 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 450 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 451 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 452 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_RamonApproachLeft::
# 453 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 454 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Movement_RamonApproachLeft
# 455 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 456 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 457 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 458 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_RamonApproachRight::
# 459 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 460 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Movement_RamonApproachRight
# 461 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 462 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 463 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 464 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_RamonApproachLeft::
# 465 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 466 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 467 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 468 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 469 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_RamonApproachRight::
# 470 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 471 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 472 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 473 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Left::
# 474 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 475 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 476 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
# 477 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 478 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 479 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Right::
# 480 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 481 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 482 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
# 483 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 484 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 485 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4::
# 486 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 487 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion4, MSGBOX_YESNO
# 488 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz4Incorrect
# 489 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz4Correct
# 490 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 491 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 492 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Correct::
# 493 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 494 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 495 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 496 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 497 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 498 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 499 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Complete::
# 500 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 501 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 502 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 503 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 504 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_4
# 505 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 506 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 507 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Incorrect::
# 508 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 509 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_EventScript_BattleDerek
# 510 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 511 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 512 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 513 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDerek::
# 514 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_DerekApproachLeft
# 515 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_DerekApproachRight
# 516 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 517 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekIntro
# 518 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekDefeat
# 519 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 520 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 521 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 522 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 523 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 524 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DerekApproachLeft::
# 525 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 526 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Movement_DerekApproachLeft
# 527 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 528 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 529 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 530 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DerekApproachRight::
# 531 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 532 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Movement_DerekApproachRight
# 533 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 534 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 535 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 536 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DerekApproachLeft::
# 537 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 538 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 539 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 540 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 541 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DerekApproachRight::
# 542 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 543 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 544 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 545 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Left::
# 546 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 547 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 548 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
# 549 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 550 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 551 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Right::
# 552 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 553 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 554 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
# 555 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 556 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 557 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5::
# 558 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 559 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion5, MSGBOX_YESNO
# 560 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz5Correct
# 561 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz5Incorrect
# 562 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 563 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 564 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Correct::
# 565 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 566 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 567 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 568 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 569 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 570 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 571 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Complete::
# 572 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 573 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 574 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 575 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 576 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_5
# 577 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 578 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 579 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Incorrect::
# 580 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 581 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_EventScript_BattleDusty
# 582 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 583 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 584 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 585 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDusty::
# 586 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_DustyApproachLeft
# 587 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_DustyApproachRight
# 588 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 589 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyIntro
# 590 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyDefeat
# 591 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 592 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 593 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 594 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 595 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 596 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DustyApproachLeft::
# 597 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 598 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Movement_DustyApproachLeft
# 599 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 600 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 601 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 602 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DustyApproachRight::
# 603 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 604 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Movement_DustyApproachRight
# 605 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 606 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 607 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 608 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DustyApproachLeft::
# 609 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 610 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 611 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 612 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 613 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DustyApproachRight::
# 614 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 615 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 616 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 617 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Left::
# 618 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 619 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 620 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
# 621 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 622 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 623 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Right::
# 624 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 625 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 626 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
# 627 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 628 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 629 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6::
# 630 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 631 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion6, MSGBOX_YESNO
# 632 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz6Incorrect
# 633 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz6Correct
# 634 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 635 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 636 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Correct::
# 637 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 638 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 639 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 640 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 641 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 642 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 643 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Complete::
# 644 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 645 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 646 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 647 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 648 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_6
# 649 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 650 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 651 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Incorrect::
# 652 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 653 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_EventScript_BattleZac
# 654 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 655 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 656 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 657 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleZac::
# 658 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_ZacApproachLeft
# 659 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_ZacApproachRight
# 660 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 661 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacIntro
# 662 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacDefeat
# 663 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 664 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 665 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 666 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 667 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 668 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_ZacApproachLeft::
# 669 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 670 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Movement_ZacApproachLeft
# 671 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 672 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 673 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 674 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_ZacApproachRight::
# 675 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 676 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Movement_ZacApproachRight
# 677 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 678 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 679 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 680 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_ZacApproachLeft::
# 681 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 682 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 683 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 684 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 685 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_ZacApproachRight::
# 686 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 687 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 688 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 689 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor1::
# 690 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 691 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 692 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 693 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 694 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 695 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27, 10, METATILE_CinnabarGym_Floor, 0
# 696 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 28, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 697 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 698 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 699 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor2::
# 700 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 701 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 702 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 703 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 704 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 705 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 10, METATILE_CinnabarGym_Floor, 0
# 706 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 19, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 707 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 708 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 709 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor3::
# 710 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 711 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 15, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 712 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 16, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 713 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 16, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 714 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 17, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 715 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 17, METATILE_CinnabarGym_Floor, 0
# 716 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 19, 17, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 717 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 718 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 719 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor4::
# 720 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 21, METATILE_CinnabarGym_Wall_RetractedBarrier, 1
# 721 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 22, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 722 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 23, METATILE_CinnabarGym_Floor, 0
# 723 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 724 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 725 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor5::
# 726 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 16, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 727 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 16, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 728 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 17, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 729 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 17, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 730 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 18, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 731 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 18, METATILE_CinnabarGym_Floor, 0
# 732 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  7, 18, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 733 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 734 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 735 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor6::
# 736 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 737 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 738 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 739 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 740 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 741 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 10, METATILE_CinnabarGym_Floor, 0
# 742 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  7, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 743 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
