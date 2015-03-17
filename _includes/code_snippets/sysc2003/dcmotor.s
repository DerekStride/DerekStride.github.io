.include "DP256Reg.s"

_motor_setup::
	bset	PWMPOL,		#$80
	bset	PWMCLK,		#$7F	;
	bset	PWMPRCLK,	#$70	; Prescale ClockB by ECLOCK / 128


	bclr	PWMCAE,		#$80	; Left align
	bclr	PWMCTL,		#$0C	; PWM in Wait & Freeze

	movb	#79,		PWMPER7 ; Set Period for PWM7
	movb	#0,			PWMDTY7

	bset	PWME,		#$80	;Enable PWM Channel 7

	RTS
