int main(void)
{

  /*
   *  The lower 4 bits in PORTK are used for the LED1 - LED4
   *  We want to set the Data Direction Register for port k (DDRK)
   *  to DDRK | 0x0F -> xxxx 1111 so it knows that the lower 4
   *  bits are going to be written to for output.
   *  We also want to set PORTK to PORTK &= 0xF0 -> xxxx 0000 to
   *  make sure everything is off to start with.
   */
  DDRK = 0x0F;
  PORTK &= 0xF0;

  rolling_blink(10, 5000);
  flash(10, 50000);

  //  Add this to prevent NoICE from hanging.
  asm("swi");
  return 0;

}
