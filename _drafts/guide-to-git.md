---
title:      A Guide To Git
layout :    default
permalink:  active
menu:
- header: Introduction
  url:    introduction
---

# Git outta here!

## Introduction

The first thing you should know is that git is a version control system for text files. It allows you to track changes to your code and roll back to working versions if you encounter an unexpected bug. Git has a lot of powerful features but can be easy to break (It never happens to me though).

One thing to note is that because git tracks changes in lines of code, it doesn't work well with binary files (including: pdf, docx, jar, etc) because small changes in them can lead to many file differences.

For the rest of the document we'll assume we're working on a project called: **quacker**

## Terminology (Refer back to here)

 Term        | Description
:-----------:|:----------------------------------------
Repo         | The folder containing the git project

## The Flow of Git

Lets suppose you want to start **quacker**, you should initialize a git repo using the command:

{% highlight bash linenos=table %}
git init quacker
git push origin master
{% endhighlight %}
