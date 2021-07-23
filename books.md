---
layout: collection-index
id: books
title: Book Notes
feed-name: books
---

{% for book in site.books -%}
  [{{ book.title }}]({{ book.url }}) <span class="text text-gray-500">({{ book.date | date: "%Y-%m-%d" }})</span>

  {{ book.excerpt }}
{% endfor %}
