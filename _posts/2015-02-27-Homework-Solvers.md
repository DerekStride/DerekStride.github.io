---
title:  Homework Solvers
layout: project
permalink: /projects/homework-solvers
folder: homework-solvers
menu:
- header: Introduction
  url:    introduction
- header: C
  url:    c
- header: Java
  url:    java
- header: Python
  url:    python
---
### Introduction

Here's how to compile and run all the versions of this project. If you can even run them out of the box.

### C

Inside the C folder follow these commands to compile it.

{% highlight bash %}

gcc equilbrium.c -o filename
./filename

{% endhighlight %}

Enter numbers and hit enter to select the options you want. Vector Calculations works but Force Calculations may not work 100%.

### Java

Inside the Java/Vectors folder you can use this to compile all the files but I never coded a main function after so you can't run it with just my code. You'll have to write one. Hopefully my documentation is good enough.

{% highlight bash %}

javac Vector.java Vector2D.java Vector3D.java Coordinate2D.java ProjectileMotion2D.java

{% endhighlight %}

### Python

This should be sufficient to run the python version. There's a gui in this one :D

{% highlight bash %}

python3 vector-gui.py

{% endhighlight %}
