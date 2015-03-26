int main(void)
{
	unsigned int initial_count;
	char lcd_clear = 0x01;

	Lcd2PP_Init();

	// Setup port t and port k to be used also set bit 5
	//  on port p high to enable the stepper motor
 	DDRT |= 0x60;
	DDRP |= 0x20;
	PTP	 |=	0x20;

	TIOS |= 0x60;	// Select bit 5 & 6 to allow output compare for stepper
	TSCR2 |= 0x03;	// Set up Counter reset and 8 prescale factor
	TIE |= 0x60;	// Enable Hardware Interrupts
	TFLG1 |= 0x60;  // Clear flags

	TCTL1 |= 0x14;	// Set up Output compares to toggle
	TSCR1 |= 0x80;	// Timer Enable

	initial_count = TCNT;
	TC5 = initial_count + 0x8000;
	TC6 = initial_count + 0xC000;

	asm("swi");
	return 0;

}
