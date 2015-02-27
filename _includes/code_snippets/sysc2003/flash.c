/*
 *  n         - number of times to loop
 *  delay_ms  - how long before each step
 */

void flash(unsigned int n, unsigned int delay_ms)
{

  //  Remember to declare all variables first to comply with C89 standards
  unsigned int i;

  for (i = 0 ; i < n ; i++)
  {

    //  clear all
    PORTK = 0x00;

    delay(delay_ms);

    //  set bits 0 - 3 (LED1 - LED4)
    PORTK = 0x0F;

    delay(delay_ms);

  }

  //  clear all
  PORTK = 0x00;

}
