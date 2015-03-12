void LCD_displayStr(char *str)
{

  char i;

  for (i = 0 ; *(str + i) != '\0' ; i++)
  {
    LCD_display( *(str + i) );
  }

}

/*  Supports only 2 digit numbers
 *  This updates a number on the LCD (assuming the cursor is directly
 *  after where you plan to update). I used it in multiple places and
 *  it's generally a nice thing to have.
 */
void LCD_updateNumber(char number)
{

  char shift_left = 0x10; // This code shifts the cursor left.
  char first_num;
  char second_num = number;

  LCD_instruction(shift_left);
  LCD_instruction(shift_left);

  if (number >= 10)
  {
    first_num = number / 10;
    second_num = number % 10;
    LCD_display(first_number + 0x30);
  }
  else
  {
    //  this algorithm always shifts the cursor left by 2, to
    //  counteract that pad with a space if it's a single digit
    LCD_display(' ');
  }
  LCD_display(second_number + 0x30);
}

int main(void)
{
  char clear = 0x01;      // clears the screen
  char next_line = 0xC0;  // moves cursor to next line
  char *top_message = "    SYSC2003    ";
  char *bottom_message = "  Hello World!  ";

  LCD_instruction(clear);
  delay(500);   // clearing takes a while, wait a bit and let it finish
  LCD_displayStr(top_message);
  LCD_instruction(next_line);
  LCD_displayStr(bottom_message);

  //  Add this to prevent NoICE from hanging.
  asm("swi");
  return 0;

}
