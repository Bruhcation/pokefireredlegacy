# 1 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 2 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
.equ CHECKED_MUSHROOMS,  FLAG_TEMP_1
# 3 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
.equ HAS_BIG_MUSHROOM,   FLAG_TEMP_2
# 4 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 5 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_MapScripts::
# 6 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FiveIsland_WaterLabyrinth_OnLoad
# 7 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.byte 0
# 8 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 9 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_OnLoad::
# 10 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special CheckBeatJohto
# 11 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_ShowClerk
# 12 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 13 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 14 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ShowClerk::
# 15 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	clearflag FLAG_SHOPJOHTO
# 16 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 17 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 18 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_EggGentleman::
# 19 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 20 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special QuestLog_CutRecording
# 21 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 22 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 23 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set FLAG_GOT_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_PostEggComment
# 24 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set FLAG_NO_ROOM_FOR_TOGEPI_EGG, FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg
# 25 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_LetMeTakeLookAtMons
# 26 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendship
# 27 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, 6, FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship
# 28 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_HmmISeeIsee
# 29 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 30 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 31 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 32 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment::
# 33 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	famechecker FAMECHECKER_DAISY, 2
# 34 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_CuteMonRemindsMeOfDaisy
# 35 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 36 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 37 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 38 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_LeadMonMaxFriendship::
# 39 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TreatMonRightHaveThis
# 40 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
# 41 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 42 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 43 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg::
# 44 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	getpartysize
# 45 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, PARTY_SIZE, FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg
# 46 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_GOT_TOGEPI_EGG
# 47 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	giveegg SPECIES_TOGEPI
# 48 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 49 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 50 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	message FiveIsland_WaterLabyrinth_Text_ReceivedEggFromMan
# 51 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitfanfare
# 52 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitmessage
# 53 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call EventScript_RestorePrevTextColor
# 54 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_PostEggComment
# 55 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 56 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 57 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
@ If the player has a Togepi/Togetic from this game (assumed to be the one the man gave you) then comment on it
# 58 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
@ Otherwise make normal comment
# 59 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostEggComment::
# 60 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOGEPI
# 61 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setvar VAR_0x8004, SPECIES_TOGEPI
# 62 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
# 63 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
# 64 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_TOGETIC
# 65 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setvar VAR_0x8004, SPECIES_TOGETIC
# 66 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	specialvar VAR_RESULT, PlayerPartyContainsSpeciesWithPlayerID
# 67 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_MonDaisyComment
# 68 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_GladIMetSomeoneLikeYou
# 69 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 70 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 71 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 72 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_NoRoomForEgg::
# 73 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_NO_ROOM_FOR_TOGEPI_EGG
# 74 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_DontHaveSpaceInYourParty
# 75 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 76 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 77 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 78 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ReturnForEgg::
# 79 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_TryGiveEgg
# 80 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 81 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 82 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_Falkner::
# 83 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 84 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 85 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set FLAG_FALKNER_DEFEATED, FiveIsland_WaterLabyrinth_EventScript_RematchFalkner
# 86 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_Falkner, MSGBOX_YESNO
# 87 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_WaterLabyrinth_EventScript_NoFalkner
# 88 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	trainerbattle_single TRAINER_FALKNER, FiveIsland_WaterLabyrinth_Text_YesFalkner, FiveIsland_WaterLabyrinth_Text_FalknerDefeat, FiveIsland_WaterLabyrinth_EventScript_PostFalkner, NO_MUSIC
# 89 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 90 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 91 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 92 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostFalkner::
# 93 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_FalknerPostBattle
# 94 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_FALKNER_DEFEATED
# 95 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	cleartrainerflag TRAINER_FALKNER
# 96 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 97 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 98 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 99 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_CantRematchFalkner::
# 100 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_FalknerPostBattle
# 101 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 102 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 103 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 104 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_NoFalkner::
# 105 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_NoFalkner
# 106 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 107 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 108 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 109 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_HeartScale::
# 110 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 111 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 112 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_unset FLAG_SHOPJOHTO, FiveIsland_WaterLabyrinth_EventScript_HeartScale2
# 113 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_Heartscale
# 114 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 115 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 116 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 117 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_HeartScale2::
# 118 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_Heartscale2
# 119 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 120 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 121 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 122 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_Heartscale::
# 123 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "My painter friend is currently\n"
# 124 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "on a mission to learn how to\l"
# 125 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "teach moves that Parents\l"
# 126 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "give to their offspring\l"
# 127 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "in their little egg.\p"
# 128 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "I'm talking about\n"
# 129 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "EGGS MOVES of Course!\p"
# 130 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "You can't learn them\n"
# 131 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "anywhere else!\p"
# 132 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "A CHAMPION like you could have\n"
# 133 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "great potential with them,\l"
# 134 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "when my friend returns here.\p"
# 135 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "You be better off doing\n"
# 136 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "something else...$"
# 137 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 138 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_Heartscale2::
# 139 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "Ahh, my painter friend\n"
# 140 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "is finally here!\p"
# 141 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "She would be glad to teach\n"
# 142 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "you exclusive EGG MOVES\l"
# 143 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "for the price of 1 HEART SCALE.\p"
# 144 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "I think you can find them on\n"
# 145 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "the Islands south of\l"
# 146 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "SEVEN ISLAND.$"
# 147 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 148 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 149 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_RematchFalkner::
# 150 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 151 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 152 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_RematchFalkner, MSGBOX_YESNO
# 153 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_WaterLabyrinth_EventScript_NoFalkner
# 154 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	trainerbattle_single TRAINER_FALKNER, FiveIsland_WaterLabyrinth_Text_YesRematchFalkner, FiveIsland_WaterLabyrinth_Text_RematchFalknerDefeat, FiveIsland_WaterLabyrinth_EventScript_PostRematchFalkner, NO_MUSIC
# 155 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 156 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 157 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 158 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_PostRematchFalkner::
# 159 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_RematchFalknerDefeat
# 160 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	cleartrainerflag TRAINER_FALKNER
# 161 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 162 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 163 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 164 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_MoveManiac::
# 165 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 166 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special QuestLog_CutRecording
# 167 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag FLAG_EGG_MOVES_TUTOR
# 168 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	lock
# 169 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	faceplayer
# 170 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	clearflag HAS_BIG_MUSHROOM
# 171 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set CHECKED_MUSHROOMS, FiveIsland_WaterLabyrinth_EventScript_CheckPlayerHasMushrooms
# 172 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TeachMonMoveForMushroom
# 173 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag CHECKED_MUSHROOMS
# 174 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_CheckPlayerHasMushrooms
# 175 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 176 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 177 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_CheckPlayerHasMushrooms::
# 178 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 179 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_SetHasBigMushroom
# 180 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, FiveIsland_WaterLabyrinth_EventScript_CheckAlsoHasTinyMushrooms
# 181 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_EndTutorMove
# 182 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 183 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 184 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_CheckAlsoHasTinyMushrooms::
# 185 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_AskTutorMon
# 186 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 187 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 188 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_AskTutorMon::
# 189 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_WantMeToTeachMove, MSGBOX_YESNO
# 190 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, NO, FiveIsland_WaterLabyrinth_EventScript_EndTutorMove
# 191 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_ChooseMonToTutor
# 192 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 193 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 194 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ChooseMonToTutor::
# 195 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TutorWhichMon
# 196 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special ChooseMonForMoveRelearner
# 197 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitstate
# 198 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, FiveIsland_WaterLabyrinth_EventScript_EndTutorMove
# 199 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special IsSelectedMonEgg
# 200 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, FiveIsland_WaterLabyrinth_EventScript_CantTutorEgg
# 201 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_0x8005, 0, FiveIsland_WaterLabyrinth_EventScript_NoMoveToTutorMon
# 202 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_ChooseMoveToTeach
# 203 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 204 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 205 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_ChooseMoveToTeach::
# 206 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_TeachWhichMove
# 207 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	special TeachMoveRelearnerMove
# 208 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	waitstate
# 209 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_eq VAR_0x8004, 0, FiveIsland_WaterLabyrinth_EventScript_ChooseMonToTutor
# 210 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto_if_set HAS_BIG_MUSHROOM, FiveIsland_WaterLabyrinth_EventScript_GiveBigMushroom
# 211 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 212 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 213 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_GiveBigMushroom::
# 214 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 215 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 216 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_HandedOverOneBigMushroom
# 217 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call EventScript_RestorePrevTextColor
# 218 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_EndTutorMove
# 219 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 220 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 221 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_GiveTinyMushrooms::
# 222 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	removeitem ITEM_TINY_MUSHROOM, 10
# 223 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 224 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_HandedOverTwoTinyMushrooms
# 225 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	call EventScript_RestorePrevTextColor
# 226 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_EndTutorMove
# 227 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 228 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 229 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_NoMoveToTutorMon::
# 230 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_NoMoveICanTeachThatMon
# 231 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_ChooseMonToTutor
# 232 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 233 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 234 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_CantTutorEgg::
# 235 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_CantTeachAnEgg
# 236 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	goto FiveIsland_WaterLabyrinth_EventScript_ChooseMonToTutor
# 237 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 238 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 239 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_EndTutorMove::
# 240 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	msgbox FiveIsland_WaterLabyrinth_Text_NeedMushroomOrTwoToLearnMove
# 241 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	clearflag FLAG_EGG_MOVES_TUTOR
# 242 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	release
# 243 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	end
# 244 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 245 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_EventScript_SetHasBigMushroom::
# 246 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	setflag HAS_BIG_MUSHROOM
# 247 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	return
# 248 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 249 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_TeachMonMoveForMushroom::
# 250 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "I'm the EGG MOVE ARTIST.\p"
# 251 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "I study moves with an artist's eye,\n"
# 252 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "and sketch them as skilfully\l"
# 253 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "as a SMEARGLE.\p"
# 254 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "I can gift an EGG move\n"
# 255 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "to your POKéMON if you'd like.\p"
# 256 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "I'll craft you a masterpiece\n"
# 257 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "for just one HEART SCALE!$"
# 258 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 259 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_WantMeToTeachMove::
# 260 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "Oh! That's it!\n"
# 261 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "A genuine HEART SCALE!\p"
# 262 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "Shall I sketch a move?$"
# 263 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 264 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_TutorWhichMon::
# 265 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "Which POKéMON needs an EGG move?$"
# 266 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 267 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_TeachWhichMove::
# 268 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Which move should I teach?$"
# 269 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 270 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_NoMoveICanTeachThatMon::
# 271 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "Sorry… I have nothing to sketch\n"
# 272 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "for that POKéMON.$"
# 273 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 274 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_IllNeedMushroomOrTwo::
# 275 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "Then, I'll need a MUSHROOM or ten.\n"
# 276 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "What are you going to give me?$"
# 277 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 278 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_HandedOverTwoTinyMushrooms::
# 279 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "{PLAYER} handed over ten\n"
# 280 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
    .string "TINYMUSHROOMS in exchange.$"
# 281 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 282 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_HandedOverOneBigMushroom::
# 283 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "{PLAYER} handed over one HEART SCALE\n"
# 284 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "in exchange.$"
# 285 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 286 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_NeedMushroomOrTwoToLearnMove::
# 287 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "If your POKéMON need to learn an EGG\n"
# 288 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "move, come back with a HEART SCALE.p"
# 289 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "I heard there's some south of\n"
# 290 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "Seven Island!$"
# 291 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"

# 292 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
FiveIsland_WaterLabyrinth_Text_CantTeachAnEgg::
# 293 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "Hunh? No move in my sketchbook\n"
# 294 "data/maps/FiveIsland_WaterLabyrinth/scripts.pory"
	.string "fits an EGG!$"
