---
title:      SYSC 2003 Axiom Board Features
permalink:  /SYSC2003/axiom-board
layout:     wrapper
heading:    
folder:     sysc2003
codeswap:
- header: LEDs
  url:    leds
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

<div id="leds" style="display:none">

{% highlight c %}

{% include code_snippets/{{ page.folder }}/imports.c %}
{% include code_snippets/{{ page.folder }}/delay.c %}
{% include code_snippets/{{ page.folder }}/rolling_blink.c %}
{% include code_snippets/{{ page.folder }}/flash.c %}
{% include code_snippets/{{ page.folder }}/leds.c %}

{% endhighlight %}

</div>
