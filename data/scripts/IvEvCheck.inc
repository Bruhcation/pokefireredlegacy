EventScript_IVChecker::
	lock
	faceplayer
	bufferpartymonnick 0, 0
	msgbox Text_IVChecker_1, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetHpIV
	buffernumberstring 0, VAR_RESULT
	specialvar VAR_RESULT, GetAtkIV
	buffernumberstring 1, VAR_RESULT
	specialvar VAR_RESULT, GetDefIV
	buffernumberstring 2, VAR_RESULT
	msgbox Text_IVChecker_2, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetSpAtkIV
	buffernumberstring 0, VAR_RESULT
	specialvar VAR_RESULT, GetSpDefIV
	buffernumberstring 1, VAR_RESULT
	specialvar VAR_RESULT, GetSpeedIV
	buffernumberstring 2, VAR_RESULT
	msgbox Text_IVChecker_3, MSGBOX_DEFAULT
	release
	end

Text_IVChecker_1:
	.string "I can check your pokemon's\n"
	.string "hidden potential!\p"
	.string "Also Known as IVs!\p"
	.string "So, your {STR_VAR_1}…$"

Text_IVChecker_2:
	.string "Its HP IV is {STR_VAR_1}.\p"
	.string "Its Attack IV is {STR_VAR_2}.\p"
	.string "Its Defense IV is {STR_VAR_3}.$"

Text_IVChecker_3:
	.string "Its Special Attack IV is {STR_VAR_1}.\p"
	.string "Its Special Defense IV is {STR_VAR_2}.\p"
	.string "Its Speed IV is {STR_VAR_3}.\n"
	.string "You're welcome!$"

EventScript_EVChecker::
	lock
	faceplayer
	bufferpartymonnick 0, 0
	msgbox Text_EVChecker_1, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetHpEV
	buffernumberstring 0, VAR_RESULT
	specialvar VAR_RESULT, GetAtkEV
	buffernumberstring 1, VAR_RESULT
	specialvar VAR_RESULT, GetDefEV
	buffernumberstring 2, VAR_RESULT
	msgbox Text_EVChecker_2, MSGBOX_DEFAULT
	specialvar VAR_RESULT, GetSpAtkEV
	buffernumberstring 0, VAR_RESULT
	specialvar VAR_RESULT, GetSpDefEV
	buffernumberstring 1, VAR_RESULT
	specialvar VAR_RESULT, GetSpeedEV
	buffernumberstring 2, VAR_RESULT
	msgbox Text_EVChecker_3, MSGBOX_DEFAULT
	release
	end

Text_EVChecker_1:
	.string "I can check your pokemon's\n"
	.string "gained effort potential!\p"
	.string "Also Known as EVs!\p"
	.string "So, your {STR_VAR_1}…$"

Text_EVChecker_2:
	.string "Its HP EV is {STR_VAR_1}.\p"
	.string "Its Attack EV is {STR_VAR_2}.\p"
	.string "Its Defense EV is {STR_VAR_3}.$"

Text_EVChecker_3:
	.string "Its Special Attack EV is {STR_VAR_1}.\p"
	.string "Its Special Defense EV is {STR_VAR_2}.\p"
	.string "Its Speed EV is {STR_VAR_3}.\n"
	.string "You're welcome!$"
