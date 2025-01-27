---
layout: collection-index
id: talks
title: Talks
feed-name: talks
---

{% for talk in site.talks -%}
  [{{ talk.title }}]({{ talk.url }}) <span class="text text-gray-500">({{ talk.date | date: "%Y-%m-%d" }})</span>

  {{ talk.excerpt }}
{% endfor %}

