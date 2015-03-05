/*
 *  This moves the stepper motor clockwise if the value is
 *  positive and counter-clockwise if the value is 0 or negative.
 */

void step(int direction)
{
  PTT &= 0x9F;

  if (direction > 0)
  {
    PTT ^= 0x40;  delay(30000);
    PTT ^= 0x20;  delay(30000);
    PTT ^= 0x40;  delay(30000);
  }
  else
  {
    PTT ^= 0x20;  delay(30000);
    PTT ^= 0x40;  delay(30000);
    PTT ^= 0x20;  delay(30000);
  }

}

int main(void)
{

  int i;

  DDRT |= 0x60;
  DDRP |= 0x40;
  PTP  |= 0x40;

  for (i = -9 ; i < 10 ; i++)
  {
    step(i);
  }

  //  Add this to prevent NoICE from hanging.
  asm("swi");
  return 0;

}
