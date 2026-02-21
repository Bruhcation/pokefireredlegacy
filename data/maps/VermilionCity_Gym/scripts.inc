# 1 "data/maps/VermilionCity_Gym/scripts.pory"

# 2 "data/maps/VermilionCity_Gym/scripts.pory"
.equ FOUND_FIRST_SWITCH, FLAG_TEMP_1
# 3 "data/maps/VermilionCity_Gym/scripts.pory"
.equ SWITCH1_ID,         VAR_0x8004
# 4 "data/maps/VermilionCity_Gym/scripts.pory"
.equ SWITCH2_ID,         VAR_0x8005
# 5 "data/maps/VermilionCity_Gym/scripts.pory"
.equ TRASH_CAN_ID,       VAR_0x8008
# 6 "data/maps/VermilionCity_Gym/scripts.pory"

# 7 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_MapScripts::
# 8 "data/maps/VermilionCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VermilionCity_Gym_OnLoad
# 9 "data/maps/VermilionCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_Gym_OnTransition
# 10 "data/maps/VermilionCity_Gym/scripts.pory"
	.byte 0
# 11 "data/maps/VermilionCity_Gym/scripts.pory"

# 12 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_OnLoad::
# 13 "data/maps/VermilionCity_Gym/scripts.pory"
	call_if_set FOUND_FIRST_SWITCH, VermilionCity_Gym_EventScript_SetOneBeamOff
# 14 "data/maps/VermilionCity_Gym/scripts.pory"
	call_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_SetBeamsOff
# 15 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 16 "data/maps/VermilionCity_Gym/scripts.pory"

# 17 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_SetOneBeamOff::
# 18 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_HalfOn, 1
# 19 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_HalfOn, 1
# 20 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_VermilionGym_Beam_MidTop_HalfOn, 1
# 21 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_HalfOn, 1
# 22 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_HalfOn, 1
# 23 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_HalfOn, 1
# 24 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_HalfOn, 1
# 25 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_VermilionGym_Beam_MidBottom_HalfOn, 1
# 26 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_HalfOn, 1
# 27 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_HalfOn, 1
# 28 "data/maps/VermilionCity_Gym/scripts.pory"
	return
# 29 "data/maps/VermilionCity_Gym/scripts.pory"

# 30 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_SetBeamsOff::
# 31 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Off, 1
# 32 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_Off, 0
# 33 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_VermilionGym_Floor, 0
# 34 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_Off, 0
# 35 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_Off, 1
# 36 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Off, 1
# 37 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_Off, 0
# 38 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_VermilionGym_Floor, 0
# 39 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_Off, 0
# 40 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Off, 1
# 41 "data/maps/VermilionCity_Gym/scripts.pory"
	return
# 42 "data/maps/VermilionCity_Gym/scripts.pory"

# 43 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_OnTransition::
# 44 "data/maps/VermilionCity_Gym/scripts.pory"
	call VermilionCity_Gym_EventScript_InitTrashCans
# 45 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 46 "data/maps/VermilionCity_Gym/scripts.pory"

# 47 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_InitTrashCans::
# 48 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, EventScript_Return
# 49 "data/maps/VermilionCity_Gym/scripts.pory"
	special SetVermilionTrashCans
# 50 "data/maps/VermilionCity_Gym/scripts.pory"
	copyvar VAR_TEMP_0, SWITCH1_ID
# 51 "data/maps/VermilionCity_Gym/scripts.pory"
	copyvar VAR_TEMP_1, SWITCH2_ID
# 52 "data/maps/VermilionCity_Gym/scripts.pory"
	return
# 53 "data/maps/VermilionCity_Gym/scripts.pory"

# 54 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan1::
# 55 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 56 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 1
# 57 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 58 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 59 "data/maps/VermilionCity_Gym/scripts.pory"

# 60 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan2::
# 61 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 62 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 2
# 63 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 64 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 65 "data/maps/VermilionCity_Gym/scripts.pory"

# 66 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan3::
# 67 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 68 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 3
# 69 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 70 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 71 "data/maps/VermilionCity_Gym/scripts.pory"

# 72 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan4::
# 73 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 74 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 4
# 75 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 76 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 77 "data/maps/VermilionCity_Gym/scripts.pory"

# 78 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan5::
# 79 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 80 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 5
# 81 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 82 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 83 "data/maps/VermilionCity_Gym/scripts.pory"

# 84 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan6::
# 85 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 86 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 6
# 87 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 88 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 89 "data/maps/VermilionCity_Gym/scripts.pory"

# 90 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan7::
# 91 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 92 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 7
# 93 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 94 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 95 "data/maps/VermilionCity_Gym/scripts.pory"

# 96 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan8::
# 97 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 98 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 8
# 99 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 100 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 101 "data/maps/VermilionCity_Gym/scripts.pory"

# 102 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan9::
# 103 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 104 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 9
# 105 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 106 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 107 "data/maps/VermilionCity_Gym/scripts.pory"

# 108 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan10::
# 109 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 110 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 10
# 111 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 112 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 113 "data/maps/VermilionCity_Gym/scripts.pory"

# 114 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan11::
# 115 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 116 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 11
# 117 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 118 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 119 "data/maps/VermilionCity_Gym/scripts.pory"

# 120 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan12::
# 121 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 122 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 12
# 123 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 124 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 125 "data/maps/VermilionCity_Gym/scripts.pory"

# 126 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan13::
# 127 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 128 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 13
# 129 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 130 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 131 "data/maps/VermilionCity_Gym/scripts.pory"

# 132 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan14::
# 133 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 134 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 14
# 135 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 136 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 137 "data/maps/VermilionCity_Gym/scripts.pory"

# 138 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan15::
# 139 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 140 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 15
# 141 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 142 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 143 "data/maps/VermilionCity_Gym/scripts.pory"

# 144 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan::
# 145 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 146 "data/maps/VermilionCity_Gym/scripts.pory"
	special QuestLog_CutRecording
# 147 "data/maps/VermilionCity_Gym/scripts.pory"
	copyvar SWITCH1_ID, VAR_TEMP_0
# 148 "data/maps/VermilionCity_Gym/scripts.pory"
	copyvar SWITCH2_ID, VAR_TEMP_1
# 149 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_LocksAlreadyOpen
# 150 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FOUND_FIRST_SWITCH, VermilionCity_Gym_EventScript_TrySwitchTwo
# 151 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq SWITCH1_ID, TRASH_CAN_ID, VermilionCity_Gym_EventScript_FoundSwitchOne
# 152 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
# 153 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
# 154 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 155 "data/maps/VermilionCity_Gym/scripts.pory"

# 156 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_FoundSwitchOne::
# 157 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_SwitchUnderTrashFirstLockOpened
# 158 "data/maps/VermilionCity_Gym/scripts.pory"
	playse SE_PIN
# 159 "data/maps/VermilionCity_Gym/scripts.pory"
	waitse
# 160 "data/maps/VermilionCity_Gym/scripts.pory"
	call VermilionCity_Gym_EventScript_SetOneBeamOff
# 161 "data/maps/VermilionCity_Gym/scripts.pory"
	special DrawWholeMapView
# 162 "data/maps/VermilionCity_Gym/scripts.pory"
	setflag FOUND_FIRST_SWITCH
# 163 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
# 164 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 165 "data/maps/VermilionCity_Gym/scripts.pory"

# 166 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrySwitchTwo::
# 167 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq SWITCH2_ID, TRASH_CAN_ID, VermilionCity_Gym_EventScript_FoundSwitchTwo
# 168 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
# 169 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
# 170 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 171 "data/maps/VermilionCity_Gym/scripts.pory"

# 172 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_FoundSwitchTwo::
# 173 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_SecondLockOpened
# 174 "data/maps/VermilionCity_Gym/scripts.pory"
	closemessage
# 175 "data/maps/VermilionCity_Gym/scripts.pory"
	call VermilionCity_Gym_EventScript_SetBeamsOff
# 176 "data/maps/VermilionCity_Gym/scripts.pory"
	special DrawWholeMapView
# 177 "data/maps/VermilionCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 178 "data/maps/VermilionCity_Gym/scripts.pory"
	waitse
# 179 "data/maps/VermilionCity_Gym/scripts.pory"
	setflag FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES
# 180 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
# 181 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 182 "data/maps/VermilionCity_Gym/scripts.pory"

# 183 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_LocksAlreadyOpen::
# 184 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
# 185 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
# 186 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 187 "data/maps/VermilionCity_Gym/scripts.pory"

# 188 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_SetBeamsOn::
# 189 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 3, 6, METATILE_VermilionGym_Beam_Node_TopLeft_On, 1
# 190 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 4, 6, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_On, 1
# 191 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 5, 6, METATILE_VermilionGym_Beam_MidTop, 1
# 192 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 6, 6, METATILE_VermilionGym_Beam_Node_TopRight_Edge_On, 1
# 193 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 7, 6, METATILE_VermilionGym_Beam_Node_TopRight_On, 1
# 194 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 3, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_On, 1
# 195 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 4, 7, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_On, 1
# 196 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 5, 7, METATILE_VermilionGym_Beam_MidBottom, 1
# 197 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_On, 1
# 198 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_VermilionGym_Beam_Node_BottomRight_On, 1
# 199 "data/maps/VermilionCity_Gym/scripts.pory"
	return
# 200 "data/maps/VermilionCity_Gym/scripts.pory"

# 201 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_LtSurge::
# 202 "data/maps/VermilionCity_Gym/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 203 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_LT_SURGE, VermilionCity_Gym_EventScript_ContinueSurge
# 204 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, VermilionCity_Gym_EventScript_BeatBlaine
# 205 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_ERIKA, VermilionCity_Gym_EventScript_BeatErika
# 206 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_KOGA, VermilionCity_Gym_EventScript_BeatKoga
# 207 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_SABRINA, VermilionCity_Gym_EventScript_BeatSabrina
# 208 "data/maps/VermilionCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_LT_SURGE, VermilionCity_Gym_Text_LtSurgeIntro, VermilionCity_Gym_Text_LtSurgeDefeat, VermilionCity_Gym_EventScript_DefeatedLtSurge, NO_MUSIC
# 209 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_ContinueSurge
# 210 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_BeatErika::
# 211 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_KOGA, VermilionCity_Gym_EventScript_BeatKogaSabrina
# 212 "data/maps/VermilionCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SURGE_2, VermilionCity_Gym_Text_LtSurgeIntro, VermilionCity_Gym_Text_LtSurgeDefeat, VermilionCity_Gym_EventScript_DefeatedLtSurge, NO_MUSIC
# 213 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_ContinueSurge
# 214 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_BeatKoga::
# 215 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_SABRINA, VermilionCity_Gym_EventScript_BeatKogaSabrina
# 216 "data/maps/VermilionCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SCHOOL_KID_M, VermilionCity_Gym_Text_LtSurgeIntro, VermilionCity_Gym_Text_LtSurgeDefeat, VermilionCity_Gym_EventScript_DefeatedLtSurge, NO_MUSIC
# 217 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_ContinueSurge
# 218 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_BeatSabrina::
# 219 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_KOGA, VermilionCity_Gym_EventScript_BeatKogaSabrina
# 220 "data/maps/VermilionCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ELITE_FOUR_PHOEBE, VermilionCity_Gym_Text_LtSurgeIntro, VermilionCity_Gym_Text_LtSurgeDefeat, VermilionCity_Gym_EventScript_DefeatedLtSurge, NO_MUSIC
# 221 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_ContinueSurge
# 222 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_BeatKogaSabrina::
# 223 "data/maps/VermilionCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ELITE_FOUR_PHOEBE, VermilionCity_Gym_Text_LtSurgeIntro, VermilionCity_Gym_Text_LtSurgeDefeat, VermilionCity_Gym_EventScript_DefeatedLtSurge, NO_MUSIC
# 224 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_ContinueSurge
# 225 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_BeatBlaine::
# 226 "data/maps/VermilionCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RS_PSYCHIC_M, VermilionCity_Gym_Text_LtSurgeIntro, VermilionCity_Gym_Text_LtSurgeDefeat, VermilionCity_Gym_EventScript_DefeatedLtSurge, NO_MUSIC
# 227 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_ContinueSurge
# 228 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_ContinueSurge::
# 229 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM34_FROM_SURGE, VermilionCity_Gym_EventScript_GiveTM34
# 230 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, VermilionCity_Gym_EventScript_RematchSurge
# 231 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_LtSurgePostBattle
# 232 "data/maps/VermilionCity_Gym/scripts.pory"
	release
# 233 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 234 "data/maps/VermilionCity_Gym/scripts.pory"

# 235 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_DefeatedLtSurge::
# 236 "data/maps/VermilionCity_Gym/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 1
# 237 "data/maps/VermilionCity_Gym/scripts.pory"
	call_if_unset FLAG_GOT_HM05, VermilionCity_Gym_EventScript_ShowOaksAide
# 238 "data/maps/VermilionCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_LT_SURGE_JOURNAL
# 239 "data/maps/VermilionCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_LT_SURGE
# 240 "data/maps/VermilionCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 241 "data/maps/VermilionCity_Gym/scripts.pory"
	setflag FLAG_GYM3CAP
# 242 "data/maps/VermilionCity_Gym/scripts.pory"
	set_gym_trainers 3
# 243 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_GiveTM34
# 244 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 245 "data/maps/VermilionCity_Gym/scripts.pory"

# 246 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_ShowOaksAide::
# 247 "data/maps/VermilionCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERMILION_CITY_OAKS_AIDE
# 248 "data/maps/VermilionCity_Gym/scripts.pory"
	return
# 249 "data/maps/VermilionCity_Gym/scripts.pory"

# 250 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_GiveTM34::
# 251 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_ExplainThunderBadgeTakeThis
# 252 "data/maps/VermilionCity_Gym/scripts.pory"
	checkitemspace ITEM_TM34
# 253 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, VermilionCity_Gym_EventScript_NoRoomForTM34
# 254 "data/maps/VermilionCity_Gym/scripts.pory"
	giveitem_msg VermilionCity_Gym_Text_ReceivedTM34FromLtSurge, ITEM_TM34
# 255 "data/maps/VermilionCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM34_FROM_SURGE
# 256 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_ExplainTM34
# 257 "data/maps/VermilionCity_Gym/scripts.pory"
	release
# 258 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 259 "data/maps/VermilionCity_Gym/scripts.pory"

# 260 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_NoRoomForTM34::
# 261 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_MakeRoomInYourBag
# 262 "data/maps/VermilionCity_Gym/scripts.pory"
	release
# 263 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 264 "data/maps/VermilionCity_Gym/scripts.pory"

# 265 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_RematchSurge::
# 266 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar VAR_0x8004, FAMECHECKER_LTSURGE
# 267 "data/maps/VermilionCity_Gym/scripts.pory"
	callnative CheckFilledFameCheckerFor0x8004
# 268 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, VermilionCity_Gym_EventScript_RematchSurge2
# 269 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_SurgeNoNoRematchBattle
# 270 "data/maps/VermilionCity_Gym/scripts.pory"
	release
# 271 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 272 "data/maps/VermilionCity_Gym/scripts.pory"

# 273 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_Text_SurgeNoNoRematchBattle::
# 274 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "Hey Kid, I heard the news!\n"
# 275 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "Guess that surge in your heart\l"
# 276 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "made all the difference!\p"
# 277 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "I want to have a electric rematch,\n"
# 278 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "but I'm not ready yet.\p"
# 279 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "In the meantime, shock the\n"
# 280 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "FAMECHECKER all my info!$"
# 281 "data/maps/VermilionCity_Gym/scripts.pory"

# 282 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_RematchSurge2::
# 283 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_RematchSurge, MSGBOX_YESNO
# 284 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, VermilionCity_Gym_EventScript_NoRematchSurge
# 285 "data/maps/VermilionCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SURGE2, VermilionCity_Gym_Text_RematchYesSurge, VermilionCity_Gym_Text_RematchSurgeDefeat, VermilionCity_Gym_EventScript_PostRematchSurge, NO_MUSIC
# 286 "data/maps/VermilionCity_Gym/scripts.pory"
	release
# 287 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 288 "data/maps/VermilionCity_Gym/scripts.pory"

# 289 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_PostRematchSurge::
# 290 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_SurgePostRematchBattle
# 291 "data/maps/VermilionCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_SURGE2
# 292 "data/maps/VermilionCity_Gym/scripts.pory"
	release
# 293 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 294 "data/maps/VermilionCity_Gym/scripts.pory"

# 295 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_NoRematchSurge::
# 296 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_SurgeNoRematchBattle
# 297 "data/maps/VermilionCity_Gym/scripts.pory"
	release
# 298 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 299 "data/maps/VermilionCity_Gym/scripts.pory"

# 300 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_Dwayne::
# 301 "data/maps/VermilionCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_DWAYNE, VermilionCity_Gym_Text_DwayneIntro, VermilionCity_Gym_Text_DwayneDefeat
# 302 "data/maps/VermilionCity_Gym/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 4
# 303 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
# 304 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 305 "data/maps/VermilionCity_Gym/scripts.pory"

# 306 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_Baily::
# 307 "data/maps/VermilionCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ENGINEER_BAILY, VermilionCity_Gym_Text_BailyIntro, VermilionCity_Gym_Text_BailyDefeat
# 308 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_BailyPostBattle, MSGBOX_AUTOCLOSE
# 309 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 310 "data/maps/VermilionCity_Gym/scripts.pory"

# 311 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_Tucker::
# 312 "data/maps/VermilionCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GENTLEMAN_TUCKER, VermilionCity_Gym_Text_TuckerIntro, VermilionCity_Gym_Text_TuckerDefeat, VermilionCity_Gym_EventScript_DefeatedTucker
# 313 "data/maps/VermilionCity_Gym/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 3
# 314 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_TuckerPostBattle, MSGBOX_AUTOCLOSE
# 315 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 316 "data/maps/VermilionCity_Gym/scripts.pory"

# 317 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_DefeatedTucker::
# 318 "data/maps/VermilionCity_Gym/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 2
# 319 "data/maps/VermilionCity_Gym/scripts.pory"
	release
# 320 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 321 "data/maps/VermilionCity_Gym/scripts.pory"

# 322 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_GymGuy::
# 323 "data/maps/VermilionCity_Gym/scripts.pory"
	lock
# 324 "data/maps/VermilionCity_Gym/scripts.pory"
	faceplayer
# 325 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_LT_SURGE, VermilionCity_Gym_EventScript_GymGuyPostVictory
# 326 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymGuyAdvice
# 327 "data/maps/VermilionCity_Gym/scripts.pory"
	release
# 328 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 329 "data/maps/VermilionCity_Gym/scripts.pory"

# 330 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_GymGuyPostVictory::
# 331 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymGuyPostVictory
# 332 "data/maps/VermilionCity_Gym/scripts.pory"
	release
# 333 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 334 "data/maps/VermilionCity_Gym/scripts.pory"

# 335 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_GymStatue::
# 336 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 337 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, VermilionCity_Gym_EventScript_GymStatuePostVictory
# 338 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymStatue
# 339 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
# 340 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 341 "data/maps/VermilionCity_Gym/scripts.pory"

# 342 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_GymStatuePostVictory::
# 343 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymStatuePlayerWon
# 344 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
# 345 "data/maps/VermilionCity_Gym/scripts.pory"
	end
