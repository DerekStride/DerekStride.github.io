---
layout: talk
title: ruby-tree-sitter
---

In this talk I introduce Tree-sitter, give an overview of different parsing techniques and how they compare to the
decisions made by Tree-sitter. Finally, I introduce the Ruby Tree-sitter gem, and show how to use it to load & interact
with Tree-sitter parsers.

See the up-to-date slides on [Google Drive](https://docs.google.com/presentation/d/1HP6quWsxTa3uW07umcq6_ncpd041lAjqmBGKp_h8pjA/edit?usp=sharing).

{%- assign pdfs = site.static_files | where: "pdf", true -%}
{% for static_file in pdfs -%}
  {%- if static_file.basename == "ruby-tree-sitter" -%}
    {%- assign talk = static_file -%}
  {%- endif -%}
{% endfor %}

<object data="{{ talk.path }}" width="1000" height="1000" type='application/pdf'></object>
