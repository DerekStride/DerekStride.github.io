---
layout: home
id: home
---

{%- assign entry_limit = 7 -%}

# Hi, I'm Derek.

I'm a software developer based in Ottawa, ON, working on storefront performance at [Shopify](https://www.shopify.ca/).

## Blog posts

{% for post in site.posts limit: entry_limit -%}
  [{{ post.title }}]({{ post.url }}) <span class="text text-gray-400">({{ post.date | date: "%Y-%m-%d" }})</span>

  {{ post.excerpt }}
{% endfor %}

[Check out my blog for all my posts](/blog).

This blog is also available as an [RSS](/rss.xml) feed.

## Bookshelf

{% for book in site.books limit: entry_limit -%}
  [{{ book.title }}]({{ book.url }}) <span class="text text-gray-400">({{ book.date | date: "%Y-%m-%d" }})</span>

  {{ book.excerpt }}
{% endfor %}

