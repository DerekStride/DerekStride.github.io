---
folder: sysc2003
layout: wrapper
---

<div id="dc-motor" style="display:none">

### DC Motor / PWM

The DC motor on the Axiom Board is connected to the PWM (Pulse Width Modulation) pin 7.

####The usual set up (using pin 7 as an example) is:

{% highlight c %}

PWMPOL |= 0x80;   //  sets the Polarity for PWM pin 7 to high.
PWMCAE |= 0x80;   //  sets the alignment to left aligned

PWMPER7 = 100;    //  period set to 100 ticks
PWMDTY7 = 20;     //  duty set to 20%

PWME |= 0x80;     //  enable pin 7

{% endhighlight %}



{% highlight c %}

{% include code_snippets/{{ page.folder }}/imports.c %}
{% include code_snippets/{{ page.folder }}/LCD.c %}

{% endhighlight %}

</div>
