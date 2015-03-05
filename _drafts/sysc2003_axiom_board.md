---
title:      SYSC 2003 Axiom Board Features
permalink:  /SYSC2003/axiom-board
layout: default
folder:     sysc2003
codeswap:
- header: LEDs
  url:    leds
- header: LCD
  url:    lcds
- header: Stepper Motor
  url:    stepper
---

<nav>

  {% for item in page.codeswap %}

    <a href="javascript:code_swap('{{ item.url }}', 'axiom-board-code');">
      <div style="display:inline-block; text-align:center; line-height:40px; background:#333; width:24%; height:40px; margin-bottom:3px;">
          <strong>{{ item.header }}</strong>
      </div>
    </a>
  {% endfor %}

</nav>

<div id="axiom-board-code">

{% highlight c %}

{% include code_snippets/{{ page.folder }}/imports.c %}
{% include code_snippets/{{ page.folder }}/delay.c %}
{% include code_snippets/{{ page.folder }}/rolling_blink.c %}
{% include code_snippets/{{ page.folder }}/flash.c %}
{% include code_snippets/{{ page.folder }}/leds.c %}

{% endhighlight %}

</div>

<div id="stepper" style="display:none">

{% highlight c %}

{% include code_snippets/{{ page.folder }}/imports.c %}
{% include code_snippets/{{ page.folder }}/stepper_motor.c %}

{% endhighlight %}

</div>


<div id="leds" style="display:none">

{% highlight c %}

{% include code_snippets/{{ page.folder }}/imports.c %}
{% include code_snippets/{{ page.folder }}/delay.c %}
{% include code_snippets/{{ page.folder }}/rolling_blink.c %}
{% include code_snippets/{{ page.folder }}/flash.c %}
{% include code_snippets/{{ page.folder }}/leds.c %}

{% endhighlight %}

</div>

<div id="lcds" style="display:none">

{% highlight c %}

{% include code_snippets/{{ page.folder }}/imports.c %}
{% include code_snippets/{{ page.folder }}/LCD.c %}

{% endhighlight %}

</div>
