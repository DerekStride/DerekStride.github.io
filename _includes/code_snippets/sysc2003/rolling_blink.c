/*
 *  n         - number of times to loop
 *  delay_ms  - how long before each step
 */

void rolling_blink(unsigned int n, unsigned int delay_ms)
{

  //  Remember to declare all variables first to comply with C89 standards
  unsigned int i;

  for (i = 0 ; i < n ; i++)
  {

    //  clear all
    PORTK &= 0xF0;

    delay(delay_ms);

    //  This sets PORTK to itself OR 0000 0001,
    //  essentially it makes sure bit 0 (LED1) is set high.
    PORTK |= 0x01;

    delay(delay_ms);

    //  set bit 1 (LED2)
    PORTK |= 0x02;

    delay(delay_ms);

    //  set bit 2 (LED3)
    PORTK |= 0x04;

    delay(delay_ms);

    //  set bit 3 (LED4)
    PORTK |= 0x08;

    delay(delay_ms);

    //  clear bit 3 (LED4)
    PORTK &= 0xF7;

    delay(delay_ms);

    //  clear bit 2 (LED3)
    PORTK &= 0xF3;

    delay(delay_ms);

    //  clear bit 1 (LED2)
    PORTK &= 0x01;

    delay(delay_ms);

  }

  //  clear all LEDs
  PORTK &= 0xF0;

}
