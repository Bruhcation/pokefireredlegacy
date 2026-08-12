VictoryRoad_2F_EventScript_DoubleEdgeTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_DOUBLE_EDGE, EventScript_DoubleEdgeReteach
	msgbox Text_DoubleEdgeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_DoubleEdgeDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_DoubleEdgeDeclined
	msgbox Text_DoubleEdgeWhichMon
	setvar VAR_0x8005, MOVETUTOR_DOUBLE_EDGE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_DoubleEdgeDeclined
	setflag FLAG_TUTOR_DOUBLE_EDGE
	goto EventScript_DoubleEdgeTaught
	end

EventScript_DoubleEdgeDeclined::
	msgbox Text_DoubleEdgeDeclined
	release
	end

EventScript_DoubleEdgeTaught::
	msgbox Text_DoubleEdgeTaught
	release
	end

EventScript_DoubleEdgeReteach::
	lock
	faceplayer
	msgbox Text_DoubleEdgeReteach
	showmoneybox 0, 0
	msgbox Text_DoubleEdgeReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_DoubleEdgeDeclined2
	checkmoney 10000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_DoubleEdgeNotEnoughMoney
	msgbox Text_DoubleEdgeWhichMon
	setvar VAR_0x8005, MOVETUTOR_DOUBLE_EDGE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_DoubleEdgeDeclined
	showmoneybox 0, 0
	removemoney 10000
	updatemoneybox
	msgbox Text_DoubleEdgeTaught
	hidemoneybox
	release
	end

EventScript_DoubleEdgeNotEnoughMoney::
	msgbox Text_DoubleEdgeNotEnoughMoney
	hidemoneybox
	release
	end

EventScript_DoubleEdgeDeclined2::
	msgbox Text_DoubleEdgeDeclined
	hidemoneybox
	release
	end

EventScript_ThunderWaveTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_THUNDER_WAVE, EventScript_ThunderWaveReteach
	msgbox Text_ThunderWaveTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ThunderWaveDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_ThunderWaveDeclined
	msgbox Text_ThunderWaveWhichMon
	setvar VAR_0x8005, MOVETUTOR_THUNDER_WAVE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_ThunderWaveDeclined
	setflag FLAG_TUTOR_THUNDER_WAVE
	goto EventScript_ThunderWaveTaught
	end

EventScript_ThunderWaveDeclined::
	msgbox Text_ThunderWaveDeclined
	release
	end

EventScript_ThunderWaveTaught::
	msgbox Text_ThunderWaveTaught
	release
	end

EventScript_ThunderWaveReteach::
	lock
	faceplayer
	msgbox Text_ThunderWaveReteach
	showmoneybox 0, 0
	msgbox Text_ThunderWaveReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ThunderWaveDeclined2
	checkmoney 15000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_ThunderWaveNotEnoughMoney
	msgbox Text_ThunderWaveWhichMon
	setvar VAR_0x8005, MOVETUTOR_THUNDER_WAVE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_ThunderWaveDeclined
	showmoneybox 0, 0
	removemoney 15000
	updatemoneybox
	msgbox Text_ThunderWaveTaught
	hidemoneybox
	release
	end

EventScript_ThunderWaveNotEnoughMoney::
	msgbox Text_ThunderWaveNotEnoughMoney
	hidemoneybox
	release
	end

EventScript_ThunderWaveDeclined2::
	msgbox Text_ThunderWaveDeclined
	hidemoneybox
	release
	end

RockTunnel_B1F_EventScript_RockSlideTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_ROCK_SLIDE, EventScript_RockSlideReteach
	msgbox Text_RockSlideTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_RockSlideDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_RockSlideDeclined
	msgbox Text_RockSlideWhichMon
	setvar VAR_0x8005, MOVETUTOR_ROCK_SLIDE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_RockSlideDeclined
	setflag FLAG_TUTOR_ROCK_SLIDE
	goto EventScript_RockSlideTaught
	end

EventScript_RockSlideDeclined::
	msgbox Text_RockSlideDeclined
	release
	end

EventScript_RockSlideTaught::
	msgbox Text_RockSlideTaught
	release
	end

EventScript_RockSlideReteach::
	lock
	faceplayer
	msgbox Text_RockSlideReteach
	showmoneybox 0, 0
	msgbox Text_RockSlideReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_RockSlideDeclined2
	checkmoney 50000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_RockSlideNotEnoughMoney
	msgbox Text_RockSlideWhichMon
	setvar VAR_0x8005, MOVETUTOR_ROCK_SLIDE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_RockSlideDeclined
	showmoneybox 0, 0
	removemoney 50000
	updatemoneybox
	msgbox Text_RockSlideTaught
	hidemoneybox
	release
	end

EventScript_RockSlideNotEnoughMoney::
	msgbox Text_RockSlideNotEnoughMoney
	hidemoneybox
	release
	end

EventScript_RockSlideDeclined2::
	msgbox Text_RockSlideDeclined
	hidemoneybox
	release
	end

MtEmber_Exterior_EventScript_ExplosionTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_EXPLOSION, EventScript_ExplosionReteach
	msgbox Text_ExplosionTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ExplosionDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_ExplosionDeclined
	msgbox Text_ExplosionWhichMon
	setvar VAR_0x8005, MOVETUTOR_EXPLOSION
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_ExplosionDeclined
	setflag FLAG_TUTOR_EXPLOSION
	goto EventScript_ExplosionTaught
	end

EventScript_ExplosionDeclined::
	msgbox Text_ExplosionDeclined
	release
	end

EventScript_ExplosionTaught::
	msgbox Text_ExplosionTaught
	release
	end

EventScript_ExplosionReteach::
	lock
	faceplayer
	msgbox Text_ExplosionReteach
	showmoneybox 0, 0
	msgbox Text_ExplosionReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ExplosionDeclined2
	checkmoney 20000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_ExplosionNotEnoughMoney
	msgbox Text_ExplosionWhichMon
	setvar VAR_0x8005, MOVETUTOR_EXPLOSION
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_ExplosionDeclined
	showmoneybox 0, 0
	removemoney 20000
	updatemoneybox
	msgbox Text_ExplosionTaught
	hidemoneybox
	release
	end

EventScript_ExplosionDeclined2::
	msgbox Text_ExplosionDeclined
	hidemoneybox
	release
	end

EventScript_ExplosionNotEnoughMoney::
	msgbox Text_ExplosionNotEnoughMoney
	hidemoneybox
	release
	end

Route4_EventScript_MegaPunchTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_MEGA_PUNCH, EventScript_MegaPunchReteach
	msgbox Text_MegaPunchTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_MegaPunchDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_MegaPunchDeclined
	msgbox Text_MegaPunchWhichMon
	setvar VAR_0x8005, MOVETUTOR_MEGA_PUNCH
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_MegaPunchDeclined
	setflag FLAG_TUTOR_MEGA_PUNCH
	goto EventScript_MegaPunchTaught
	end

EventScript_MegaPunchDeclined::
	msgbox Text_MegaPunchDeclined
	release
	end

EventScript_MegaPunchTaught::
	msgbox Text_MegaPunchTaught
	release
	end

EventScript_MegaPunchReteach::
	lock
	faceplayer
	msgbox Text_MegaPunchReteach
	showmoneybox 0, 0
	msgbox Text_MegaPunchReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_MegaPunchDeclined2
	checkmoney 10000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_MegaPunchNotEnoughMoney
	msgbox Text_MegaPunchWhichMon
	setvar VAR_0x8005, MOVETUTOR_MEGA_PUNCH
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_MegaPunchDeclined
	showmoneybox 0, 0
	removemoney 10000
	updatemoneybox
	msgbox Text_MegaPunchTaught
	hidemoneybox
	release
	end

EventScript_MegaPunchDeclined2::
	msgbox Text_MegaPunchDeclined
	hidemoneybox
	release
	end

EventScript_MegaPunchNotEnoughMoney::
	msgbox Text_MegaPunchNotEnoughMoney
	hidemoneybox
	release
	end

Route4_EventScript_MegaKickTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_MEGA_KICK, EventScript_MegaKickReteach
	msgbox Text_MegaKickTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_MegaKickDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_MegaKickDeclined
	msgbox Text_MegaKickWhichMon
	setvar VAR_0x8005, MOVETUTOR_MEGA_KICK
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_MegaKickDeclined
	setflag FLAG_TUTOR_MEGA_KICK
	goto EventScript_MegaKickTaught
	end

EventScript_MegaKickDeclined::
	msgbox Text_MegaKickDeclined
	release
	end

EventScript_MegaKickTaught::
	msgbox Text_MegaKickTaught
	release
	end

EventScript_MegaKickReteach::
	lock
	faceplayer
	msgbox Text_MegaKickReteach
	showmoneybox 0, 0
	msgbox Text_MegaKickReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_MegaKickDeclined2
	checkmoney 20000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_MegaKickNotEnoughMoney
	msgbox Text_MegaKickWhichMon
	setvar VAR_0x8005, MOVETUTOR_MEGA_KICK
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_MegaKickDeclined
	showmoneybox 0, 0
	removemoney 20000
	updatemoneybox
	msgbox Text_MegaKickTaught
	hidemoneybox
	release
	end

EventScript_MegaKickDeclined2::
	msgbox Text_MegaKickDeclined
	hidemoneybox
	release
	end

EventScript_MegaKickNotEnoughMoney::
	msgbox Text_MegaKickNotEnoughMoney
	hidemoneybox
	release
	end

EventScript_DreamEaterTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_DREAM_EATER, EventScript_DreamEaterReteach
	msgbox Text_DreamEaterTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_DreamEaterDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_DreamEaterDeclined
	msgbox Text_DreamEaterWhichMon
	setvar VAR_0x8005, MOVETUTOR_DREAM_EATER
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_DreamEaterDeclined
	setflag FLAG_TUTOR_DREAM_EATER
	goto EventScript_DreamEaterTaught
	end

EventScript_DreamEaterDeclined::
	msgbox Text_DreamEaterDeclined
	release
	end

EventScript_DreamEaterTaught::
	msgbox Text_DreamEaterTaught
	release
	end

EventScript_DreamEaterReteach::
	lock
	faceplayer
	msgbox Text_DreamEaterReteach
	showmoneybox 0, 0
	msgbox Text_DreamEaterReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_DreamEaterDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_DreamEaterNotEnoughMoney
	msgbox Text_DreamEaterWhichMon
	setvar VAR_0x8005, MOVETUTOR_DREAM_EATER
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_DreamEaterDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox Text_DreamEaterTaught
	hidemoneybox
	release
	end

EventScript_DreamEaterDeclined2::
	msgbox Text_DreamEaterDeclined
	hidemoneybox
	release
	end

EventScript_DreamEaterNotEnoughMoney::
	msgbox Text_DreamEaterNotEnoughMoney
	hidemoneybox
	release
	end

EventScript_SoftboiledTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_SOFT_BOILED, EventScript_SoftboiledReteach
	msgbox Text_SoftboiledTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SoftboiledDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_SoftboiledDeclined
	msgbox Text_SoftboiledWhichMon
	setvar VAR_0x8005, MOVETUTOR_SOFT_BOILED
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_SoftboiledDeclined
	setflag FLAG_TUTOR_SOFT_BOILED
	goto EventScript_SoftboiledTaught
	end

EventScript_SoftboiledDeclined::
	msgbox Text_SoftboiledDeclined
	release
	end

EventScript_SoftboiledTaught::
	msgbox Text_SoftboiledTaught
	release
	end

EventScript_SoftboiledReteach::
	lock
	faceplayer
	msgbox Text_SoftboiledReteach
	showmoneybox 0, 0
	msgbox Text_SoftboiledReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SoftboiledDeclined2
	checkmoney 25000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_SoftboiledNotEnoughMoney
	msgbox Text_SoftboiledWhichMon
	setvar VAR_0x8005, MOVETUTOR_SOFT_BOILED
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_SoftboiledDeclined
	showmoneybox 0, 0
	removemoney 25000
	updatemoneybox
	msgbox Text_SoftboiledTaught
	hidemoneybox
	release
	end

EventScript_SoftboiledDeclined2::
	msgbox Text_SoftboiledDeclined
	hidemoneybox
	release
	end

EventScript_SoftboiledNotEnoughMoney::
	msgbox Text_SoftboiledNotEnoughMoney
	hidemoneybox
	release
	end

FuchsiaCity_EventScript_SubstituteTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_SUBSTITUTE, EventScript_SubstituteReteach
	msgbox Text_SubstituteTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SubstituteDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_SubstituteDeclined
	msgbox Text_SubstituteWhichMon
	setvar VAR_0x8005, MOVETUTOR_SUBSTITUTE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_SubstituteDeclined
	setflag FLAG_TUTOR_SUBSTITUTE
	goto EventScript_SubstituteTaught
	end

EventScript_SubstituteDeclined::
	msgbox Text_SubstituteDeclined
	release
	end

EventScript_SubstituteTaught::
	msgbox Text_SubstituteTaught
	release
	end

EventScript_SubstituteReteach::
	lock
	faceplayer
	msgbox Text_SubstituteReteach
	showmoneybox 0, 0
	msgbox Text_SubstituteReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SubstituteDeclined2
	checkmoney 15000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_SubstituteNotEnoughMoney
	msgbox Text_SubstituteWhichMon
	setvar VAR_0x8005, MOVETUTOR_SUBSTITUTE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_SubstituteDeclined
	showmoneybox 0, 0
	removemoney 15000
	updatemoneybox
	msgbox Text_SubstituteTaught
	hidemoneybox
	release
	end

EventScript_SubstituteDeclined2::
	msgbox Text_SubstituteDeclined
	hidemoneybox
	release
	end

EventScript_SubstituteNotEnoughMoney::
	msgbox Text_SubstituteNotEnoughMoney
	hidemoneybox
	release
	end

SevenIsland_EventScript_SwordsDanceTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_SWORDS_DANCE, EventScript_SwordsDanceReteach
	msgbox Text_SwordsDanceTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SwordsDanceDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_SwordsDanceDeclined
	msgbox Text_SwordsDanceWhichMon
	setvar VAR_0x8005, MOVETUTOR_SWORDS_DANCE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_SwordsDanceDeclined
	setflag FLAG_TUTOR_SWORDS_DANCE
	goto EventScript_SwordsDanceTaught
	end

EventScript_SwordsDanceDeclined::
	msgbox Text_SwordsDanceDeclined
	release
	end

EventScript_SwordsDanceTaught::
	msgbox Text_SwordsDanceTaught
	release
	end

EventScript_SwordsDanceReteach::
	lock
	faceplayer
	msgbox Text_SwordsDanceReteach
	showmoneybox 0, 0
	msgbox Text_SwordsDanceReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SwordsDanceDeclined2
	checkmoney 75000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_SwordsDanceNotEnoughMoney
	msgbox Text_SwordsDanceWhichMon
	setvar VAR_0x8005, MOVETUTOR_SWORDS_DANCE
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_SwordsDanceDeclined
	showmoneybox 0, 0
	removemoney 75000
	updatemoneybox
	msgbox Text_SwordsDanceTaught
	hidemoneybox
	release
	end

EventScript_SwordsDanceDeclined2::
	msgbox Text_SwordsDanceDeclined
	hidemoneybox
	release
	end

EventScript_SwordsDanceNotEnoughMoney::
	msgbox Text_SwordsDanceNotEnoughMoney
	hidemoneybox
	release
	end

PewterCity_Museum_1F_EventScript_SeismicTossTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_SEISMIC_TOSS, EventScript_SeismicTossReteach
	msgbox Text_SeismicTossTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SeismicTossDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_SeismicTossDeclined
	msgbox Text_SeismicTossWhichMon
	setvar VAR_0x8005, MOVETUTOR_SEISMIC_TOSS
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_SeismicTossDeclined
	setflag FLAG_TUTOR_SEISMIC_TOSS
	goto EventScript_SeismicTossTaught
	end

EventScript_SeismicTossDeclined::
	msgbox Text_SeismicTossDeclined
	release
	end

EventScript_SeismicTossTaught::
	msgbox Text_SeismicTossTaught
	release
	end

EventScript_SeismicTossReteach::
	lock
	faceplayer
	msgbox Text_SeismicTossReteach
	showmoneybox 0, 0
	msgbox Text_SeismicTossReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_SeismicTossDeclined2
	checkmoney 10000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_SeismicTossNotEnoughMoney
	msgbox Text_SeismicTossWhichMon
	setvar VAR_0x8005, MOVETUTOR_SEISMIC_TOSS
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_SeismicTossDeclined
	showmoneybox 0, 0
	removemoney 10000
	updatemoneybox
	msgbox Text_SeismicTossTaught
	hidemoneybox
	release
	end

EventScript_SeismicTossDeclined2::
	msgbox Text_SeismicTossDeclined
	hidemoneybox
	release
	end

EventScript_SeismicTossNotEnoughMoney::
	msgbox Text_SeismicTossNotEnoughMoney
	hidemoneybox
	release
	end

EventScript_CounterTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_COUNTER, EventScript_CounterReteach
	msgbox Text_CounterTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CounterDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_CounterDeclined
	msgbox Text_CounterWhichMon
	setvar VAR_0x8005, MOVETUTOR_COUNTER
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_CounterDeclined
	setflag FLAG_TUTOR_COUNTER
	goto EventScript_CounterTaught
	end

EventScript_CounterDeclined::
	msgbox Text_CounterDeclined
	release
	end

EventScript_CounterTaught::
	msgbox Text_CounterTaught
	release
	end

EventScript_CounterReteach::
	lock
	faceplayer
	msgbox Text_CounterReteach
	showmoneybox 0, 0
	msgbox Text_CounterReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_CounterDeclined2
	checkmoney 10000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_CounterNotEnoughMoney
	msgbox Text_CounterWhichMon
	setvar VAR_0x8005, MOVETUTOR_COUNTER
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_CounterDeclined
	showmoneybox 0, 0
	removemoney 10000
	updatemoneybox
	msgbox Text_CounterTaught
	hidemoneybox
	release
	end

EventScript_CounterDeclined2::
	msgbox Text_CounterDeclined
	hidemoneybox
	release
	end

EventScript_CounterNotEnoughMoney::
	msgbox Text_CounterNotEnoughMoney
	hidemoneybox
	release
	end

EventScript_MetronomeTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_METRONOME, EventScript_MetronomeReteach
	msgbox Text_MetronomeTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_MetronomeDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_MetronomeDeclined
	msgbox Text_MetronomeWhichMon
	setvar VAR_0x8005, MOVETUTOR_METRONOME
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_MetronomeDeclined
	setflag FLAG_TUTOR_METRONOME
	goto EventScript_MetronomeTaught
	end

EventScript_MetronomeDeclined::
	msgbox Text_MetronomeDeclined
	release
	end

EventScript_MetronomeTaught::
	msgbox Text_MetronomeTaught
	release
	end

EventScript_MetronomeReteach::
	lock
	faceplayer
	msgbox Text_MetronomeReteach
	showmoneybox 0, 0
	msgbox Text_MetronomeReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_MetronomeDeclined2
	checkmoney 1000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_MetronomeNotEnoughMoney
	msgbox Text_MetronomeWhichMon
	setvar VAR_0x8005, MOVETUTOR_METRONOME
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_MetronomeDeclined
	showmoneybox 0, 0
	removemoney 1000
	updatemoneybox
	msgbox Text_MetronomeTaught
	hidemoneybox
	release
	end

EventScript_MetronomeDeclined2::
	msgbox Text_MetronomeDeclined
	hidemoneybox
	release
	end

EventScript_MetronomeNotEnoughMoney::
	msgbox Text_MetronomeNotEnoughMoney
	hidemoneybox
	release
	end

EventScript_MimicTutor::
	goto_if_set FLAG_TUTOR_MIMIC, EventScript_MimicReteach
	msgbox Text_MimicTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_MimicDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_MimicDeclined
	msgbox Text_MimicWhichMon
	setvar VAR_0x8005, MOVETUTOR_MIMIC
	call EventScript_ChooseMoveTutorMon
	lock
	faceplayer
	goto_if_eq VAR_RESULT, 0, EventScript_MimicDeclined
	removeitem ITEM_POKE_DOLL, 1
	setflag FLAG_TUTOR_MIMIC
	goto EventScript_MimicTaught
	end

EventScript_MimicDeclined::
	msgbox Text_MimicDeclined
	release
	end

EventScript_MimicTaught::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, EventScript_MimicTaughtMale
	call_if_eq VAR_RESULT, FEMALE, EventScript_MimicTaughtFemale
	release
	end

EventScript_MimicTaughtMale::
	msgbox Text_MimicTaughtMale
	return

EventScript_MimicTaughtFemale::
	msgbox Text_MimicTaughtFemale
	return

EventScript_MimicReteach::
	lock
	faceplayer
	msgbox Text_MimicReteach
	showmoneybox 0, 0
	msgbox Text_MimicReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_MimicDeclined2
	checkmoney 1000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_MimicNotEnoughMoney
	msgbox Text_MimicWhichMon
	setvar VAR_0x8005, MOVETUTOR_MIMIC
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_MimicDeclined
	showmoneybox 0, 0
	removemoney 1000
	updatemoneybox
	goto EventScript_MimicTaught2
	end

EventScript_MimicDeclined2::
	msgbox Text_MimicDeclined
	hidemoneybox
	release
	end

EventScript_MimicNotEnoughMoney::
	msgbox Text_MimicNotEnoughMoney
	hidemoneybox
	release
	end

EventScript_MimicTaught2::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, EventScript_MimicTaughtMale2
	call_if_eq VAR_RESULT, FEMALE, EventScript_MimicTaughtFemale2
	hidemoneybox
	release
	end

EventScript_MimicTaughtMale2::
	msgbox Text_MimicTaughtMale2
	return

EventScript_MimicTaughtFemale2::
	msgbox Text_MimicTaughtFemale2
	return

FourIsland_House1_EventScript_BodySlamTutor::
	lock
	faceplayer
	goto_if_set FLAG_TUTOR_BODY_SLAM, EventScript_BodySlamReteach
	msgbox Text_BodySlamTeach, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_BodySlamDeclined
	call EventScript_CanOnlyBeLearnedOnce
	goto_if_eq VAR_RESULT, NO, EventScript_BodySlamDeclined
	msgbox Text_BodySlamWhichMon
	setvar VAR_0x8005, MOVETUTOR_BODY_SLAM
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_BodySlamDeclined
	setflag FLAG_TUTOR_BODY_SLAM
	goto EventScript_BodySlamTaught
	end

EventScript_BodySlamDeclined::
	msgbox Text_BodySlamDeclined
	release
	end

EventScript_BodySlamTaught::
	msgbox Text_BodySlamTaught
	release
	end

EventScript_BodySlamReteach::
	lock
	faceplayer
	msgbox Text_BodySlamReteach
	showmoneybox 0, 0
	msgbox Text_BodySlamReteach2, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_BodySlamDeclined2
	checkmoney 5000, 0
	goto_if_eq VAR_RESULT, FALSE, EventScript_BodySlamNotEnoughMoney
	msgbox Text_BodySlamWhichMon
	setvar VAR_0x8005, MOVETUTOR_BODY_SLAM
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, EventScript_BodySlamDeclined
	showmoneybox 0, 0
	removemoney 5000
	updatemoneybox
	msgbox Text_BodySlamTaught
	hidemoneybox
	release
	end

EventScript_BodySlamDeclined2::
	msgbox Text_BodySlamDeclined
	hidemoneybox
	release
	end

EventScript_BodySlamNotEnoughMoney::
	msgbox Text_BodySlamNotEnoughMoney
	hidemoneybox
	release
	end
	
.set LOCALID_CAPE_BRINK_TUTOR, 1

TwoIsland_CapeBrink_House_EventScript_StarterTutor::
	goto_if_questlog EventScript_ReleaseEnd
	special QuestLog_CutRecording
	lock
	faceplayer
	goto_if_set FLAG_LEARNED_ALL_MOVES_AT_CAPE_BRINK, CapeBrinkTutor_EventScript_TaughtAllMoves
	goto_if_set FLAG_TEMP_2, CapeBrinkTutor_EventScript_MoveJustTaught
	bufferleadmonspeciesname STR_VAR_1
	msgbox Text_UltimateMoveThatMon
	specialvar VAR_RESULT, CapeBrinkGetMoveToTeachLeadPokemon
	goto_if_eq VAR_RESULT, FALSE, CapeBrinkTutor_EventScript_NoLeadStarter
	copyvar VAR_0x8009, VAR_0x8005
	call_if_eq VAR_FACING, DIR_NORTH, CapeBrinkTutor_EventScript_JumpInPlaceDown
	call_if_eq VAR_FACING, DIR_SOUTH, CapeBrinkTutor_EventScript_JumpInPlaceUp
	call_if_eq VAR_FACING, DIR_EAST, CapeBrinkTutor_EventScript_JumpInPlaceLeft
	call_if_eq VAR_FACING, DIR_WEST, CapeBrinkTutor_EventScript_JumpInPlaceRight
	msgbox Text_AllowMeToTeachMonUltimateMove, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CapeBrinkTutor_EventScript_DeclineMove
	msgbox Text_LetMeConferUltimateMove
	closemessage
	fadescreen FADE_TO_BLACK
	goto CapeBrinkTutor_EventScript_ChooseMon

@ Unused
CapeBrinkTutor_EventScript_FadeTaughtMove::
	fadescreen FADE_FROM_BLACK
	goto CapeBrinkTutor_EventScript_TaughtMove
	end

CapeBrinkTutor_EventScript_MoveJustTaught::
	msgbox Text_MakeBestUseOfMove
	release
	end

CapeBrinkTutor_EventScript_TaughtAllMoves::
	msgbox Text_FeelRejuvenated
	bufferleadmonspeciesname 0
	specialvar VAR_RESULT, CapeBrinkGetMoveToTeachLeadPokemon
	goto_if_eq VAR_RESULT, FALSE, CapeBrinkTutor_EventScript_NoLeadStarter2
	copyvar VAR_0x8009, VAR_0x8005
	call_if_eq VAR_FACING, DIR_NORTH, CapeBrinkTutor_EventScript_JumpInPlaceDown
	call_if_eq VAR_FACING, DIR_SOUTH, CapeBrinkTutor_EventScript_JumpInPlaceUp
	call_if_eq VAR_FACING, DIR_EAST, CapeBrinkTutor_EventScript_JumpInPlaceLeft
	call_if_eq VAR_FACING, DIR_WEST, CapeBrinkTutor_EventScript_JumpInPlaceRight
	msgbox Text_RightPokemon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, CapeBrinkTutor_EventScript_DeclineMove
	msgbox Text_LetMeConferUltimateMove
	closemessage
	fadescreen FADE_TO_BLACK
	goto CapeBrinkTutor_EventScript_ChooseMon
	release
	end

CapeBrinkTutor_EventScript_NoLeadStarter2::
	msgbox Text_NotTheRightPokemon
	release
	end

CapeBrinkTutor_EventScript_TaughtMove::
	copyvar VAR_0x8005, VAR_0x8009
	specialvar VAR_RESULT, HasLearnedAllMovesFromCapeBrinkTutor
	goto_if_eq VAR_RESULT, TRUE, CapeBrinkTutor_EventScript_LearnedAllMoves
	msgbox Text_TaughtMove
	setflag FLAG_TEMP_2
	release
	end

CapeBrinkTutor_EventScript_LearnedAllMoves::
	msgbox Text_PassedOnEverythingIKnow
	setflag FLAG_LEARNED_ALL_MOVES_AT_CAPE_BRINK
	release
	end

CapeBrinkTutor_EventScript_ChooseMon::
	call EventScript_ChooseMoveTutorMon
	goto_if_eq VAR_RESULT, FALSE, CapeBrinkTutor_EventScript_DeclineMove
	goto CapeBrinkTutor_EventScript_TaughtMove
	end

CapeBrinkTutor_EventScript_JumpInPlaceDown::
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceDown
	waitmovement 0
	return

CapeBrinkTutor_EventScript_JumpInPlaceUp::
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceUp
	waitmovement 0
	return

CapeBrinkTutor_EventScript_JumpInPlaceLeft::
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceLeft
	waitmovement 0
	return

CapeBrinkTutor_EventScript_JumpInPlaceRight::
	applymovement LOCALID_CAPE_BRINK_TUTOR, Movement_JumpInPlaceRight
	waitmovement 0
	return

CapeBrinkTutor_EventScript_DeclineMove::
	msgbox Text_YouRejectIt
	release
	end

CapeBrinkTutor_EventScript_NoLeadStarter::
	msgbox Text_JustMistaken
	release
	end

EventScript_ChooseMoveTutorMon::
	special ChooseMonForMoveTutor
	waitstate
	lock
	faceplayer
	return

EventScript_CanOnlyBeLearnedOnce::
	textcolor NPC_TEXT_COLOR_NEUTRAL
	special DisableMsgBoxWalkaway
	signmsg
	msgbox Text_MoveCanOnlyBeLearnedOnce, MSGBOX_YESNO
	normalmsg
	call EventScript_RestorePrevTextColor
	return

Movement_JumpInPlaceDown:
	jump_in_place_down
	step_end

Movement_JumpInPlaceUp:
	jump_in_place_up
	step_end

Movement_JumpInPlaceLeft:
	jump_in_place_left
	step_end

Movement_JumpInPlaceRight:
	jump_in_place_right
	step_end


LavanderTown_EventScript_SharpenTutor:: @ 82C7FE6
	lock
	faceplayer
	goto_if_set FLAG_MOVE_TUTOR_TAUGHT_SHARPEN, EventScript_SharpenReteach
	msgbox MoveTutor_Text_SharpenTeach, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq MoveTutor_EventScript_SharpenDeclined
	call EventScript_CanOnlyBeLearnedOnce
	compare VAR_RESULT, NO
	goto_if_eq MoveTutor_EventScript_SharpenDeclined
	msgbox MoveTutor_Text_SharpenWhichMon, MSGBOX_DEFAULT
	setvar VAR_0x8005, MOVETUTOR_SHARPEN
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor_EventScript_SharpenDeclined
	setflag FLAG_MOVE_TUTOR_TAUGHT_SHARPEN
	goto MoveTutor_EventScript_SharpenTaught
	end

MoveTutor_EventScript_SharpenDeclined:: @ 82C803A
	msgbox MoveTutor_Text_SharpenDeclined, MSGBOX_DEFAULT
	release
	end

MoveTutor_EventScript_SharpenTaught:: @ 82C8044
	msgbox MoveTutor_Text_SharpenTaught, MSGBOX_DEFAULT
	release
	end

EventScript_SharpenReteach::
	lock
	faceplayer
	msgbox Text_SharpenReteach
	showmoneybox 0, 0, 0
	msgbox Text_SharpenReteach2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_SharpenDeclined2
	checkmoney 5000, 0
	compare VAR_RESULT, FALSE
	goto_if_eq EventScript_SharpenNotEnoughMoney
	msgbox MoveTutor_Text_SharpenWhichMon
	setvar VAR_0x8005, MOVETUTOR_SHARPEN
	call EventScript_ChooseMoveTutorMon
	compare VAR_RESULT, FALSE
	goto_if_eq MoveTutor_EventScript_SharpenDeclined
	showmoneybox 0, 0
	removemoney 5000, 0
	updatemoneybox
	msgbox MoveTutor_Text_SharpenTaught
	hidemoneybox
	release
	end

EventScript_SharpenNotEnoughMoney::
	msgbox Text_SharpenNotEnoughMoney
	hidemoneybox
	release
	end

EventScript_SharpenDeclined2:: @ 81C48D2
	msgbox MoveTutor_Text_SharpenDeclined
	hidemoneybox
	release
	end

MoveTutor_Text_SharpenTeach: @ 82C7174
	.string "Ever wanted to SHARPEN your\n"
	.string "claws or what not?\p"
	.string "SHARPEN is the move for you!\n"
	.string "Want me to teach it to a POKéMON?$"

MoveTutor_Text_SharpenDeclined: @ 82C7221
	.string "Guess you don't like Sharp Things.$"

MoveTutor_Text_SharpenWhichMon: @ 82C7243
	.string "Yay!\n"
	.string "Show me the POKéMON I should teach.$"

MoveTutor_Text_SharpenTaught: @ 82C726E
	.string "It's nice to SHARPEN things up\n"
	.string "once in a while!$"

Text_SharpenReteach::
	.string "Ever wanted to SHARPEN your\n"
	.string "claws or what not again?\p"
	.string "I can teach you SHARPEN\n"
	.string "again if you give me ¥5000.$"

Text_SharpenReteach2::
    .string "Want me to teach SHARPEN\n"
    .string "to a POKéMON?$"

Text_SharpenNotEnoughMoney::
	.string "I need ¥5000 to SHARPEN\n"
	.string "your POKéMON again!$"

