---
layout: collection-index
id: posts
title: Posts
feed-name: posts
---

{% for post in site.posts -%}
  [{{ post.title }}]({{ post.url }}) <span class="text text-gray-500">({{ post.date | date: "%Y-%m-%d" }})</span>

  {{ post.excerpt }}
{% endfor %}
