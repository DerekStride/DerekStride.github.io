---
layout: home
id: home
---

# Hi, I'm Derek

I'm a software developer based in Ottawa, ON, working on storefront performance at [Shopify](https://www.shopify.ca/).

## Blog posts

{% assign post_limit = 7 -%}
{%- for post in site.posts limit: post_limit -%}
  [{{ post.title }}]({{ post.url }}) <span class="faded">({{ post.date | date: "%Y-%m-%d" }})</span>

  {{ post.excerpt }}
{% endfor %}

[Check out my blog for all my posts](/blog).

This blog is also available as an [RSS](/rss.xml) feed.

