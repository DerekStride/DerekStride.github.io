---
title:      SYSC 2003 Axiom Board Features
folder:     sysc2003
---

#### Stepper Motor

The stepper motor works using a bottom and left electromagnet. Essentially you turn these one and off to turn the the motor. I won't show how to derive these values, you'll have to do that yourself if you want to know how it works. However, I've provided the tables you should get.


**CW - Clockwise**

 PT6 | PT5
:---:|:---:
  0  |  0  
  1  |  0  
  1  |  1  
  0  |  1  


**CCW - Counter Clockwise**

 PT6 | PT5
:---:|:---:
  0  |  0  
  0  |  1  
  1  |  1  
  1  |  0  

To setup the stepper motor you have to set bits 5 & 6 high in DDRT so we can change change bits 5 & 6 in PTT which controls the bottom and left magnets in the stepper motor. We also need to set bit 6 hight in DDRP & PTP respectively to enable the stepper motor (stepper enable pin is bit 6 in PTP, DDRP lets us set it). In the following code you'll see this done in the main function and you'll see the tables implemented in the step function.
