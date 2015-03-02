---
title: My Past, Present, and Future Projects
heading: Projects
layout: wrapper
menu:
- header: Projects
  url:    introduction
---

{% for project in site.data.portfolio.projects %}

- [{{ project.title }}]({{ project.url }})
{{ project.excerpt }}

{% endfor %}
