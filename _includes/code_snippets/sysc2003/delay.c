/*
 *  Just a little function to for a couple milliseconds.
 *  Not sure how long it actually delays with respect to n
 *  but it'll do the job if you want to inspect changes.
 */

void delay(unsigned int n)
{
  unsigned int i;

  for (i = 0 ; i < 2 * n ; i)
  {

    asm("pshx");
    asm("pulx");

  }
}
