---
folder: sysc2003
layout: wrapper
---

<div id="lcds" style="display:none">

All LCDs have a similar mode of operation, they generally have a way to send **instructions** and a way to send **data**. If you send an instruction it tells the LCD to do something (e.g. clear screen, move cursor). If you send data, it's telling the LCD to display the corresponding ASCII character at the current cursor location. Using the LCD on the Axiom Board can be done using this code.

{% highlight c %}

{% include code_snippets/{{ page.folder }}/imports.c %}
{% include code_snippets/{{ page.folder }}/LCD.c %}

{% endhighlight %}

</div>
