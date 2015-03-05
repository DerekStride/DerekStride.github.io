void LCD_displayStr(char *str)
{

  int i;

  for (i = 0 ; *(str + i) != '\n' ; i++)
  {
    LCD_display( *(str + i) );
  }

}

int main(void)
{

  char *top_message = "    SYSC2003    ";
  char *bottom_message = "  Hello World!  ";

  LCD_displayStr(top_message);
  delay(10000);
  LCD_displayStr(bottom_message);

  //  Add this to prevent NoICE from hanging.
  asm("swi");
  return 0;

}
