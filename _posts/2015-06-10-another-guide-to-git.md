---
title:      A Guide To Git
layout :    default
menu:
- header: Introduction
  url:    introduction
- header: The Flow of Git
  url:    the-flow-of-git
- header: Branches
  url:    branches
- header: Aliases
  url:    aliases
---

# Git outta here!

## Introduction

The first thing you should know is that git is a version control system for text files. It allows you to track changes to your code and roll back to working versions if you encounter an unexpected bug. Git has a lot of powerful features but can be easy to break (It never happens to me though).

One thing to note is that because git tracks changes in lines of code, it doesn't work well with binary files (including: pdf, docx, jar, etc) because small changes in them can lead to many file differences.

For the rest of the document we'll assume we're working on a project called: **quacker**

## Terminology (Refer back to here)

 Term          | Description
:-------------:|:----------------------------------------
Repo           | The folder containing the git project
Commit         | Saves staged changes to the git project
Staged Change  | A change flagged to be included in the next commit
HEAD           | The latest commit

## The Flow of Git

Lets suppose you want to start **quacker**, you should initialize a git repo using the command:

{% highlight bash %}
git init quacker
{% endhighlight %}

Along each step I recommend using the command `git status` to see what git tells you.

It should create a directory called **quacker**. It's a good idea to make your first commit right away. First you'll need to add some files, create a `README.md` and a `.gitignore` file. Most git hosting sites recognize the `README.md` markdown file as your projects description and will automatically render the markdown in this file. Git itself uses the `.gitignore` file to exclude certain files from being tracked. Generally you'll put binary file extensions in there, for example in a java project you might have lines which include `*.class` and `*.jar`. These files change a lot and as long as you have the source code tracked you can always rebuild those files.

To add these files to staging and then commit them use the following.

{% highlight bash %}
git add README.md .gitignore
git commit
{% endhighlight %}

You should see a text editor pop up and ask you to type in a commit message. Type in "Initial Commit" and save. Alternatively use `git commit -m "Initial Commit"`

The first commit should always be something small like this because it's the first one and there is no backup before this.

So, what just happened? Well when you used `git add` you told git to stage the changes in the specified files for saving via `git commit`. another way to stage changes is `git rm`, if you want to remove a file. To remove files from *staging* use `git reset`.

The reason it's important to have a staging step is to break up long multi file changes. Lets say you change 5 files and 3 were for a particular reason and the other 2 were for other reasons. Then you can stage 3 of them and commit them then stage and commit the others separately that way if you have to roll back the changes of the first 3 files you won't modify the other 2.

## Branches

If you type `git branch` it will show you that you're on branch *master*. Git has the idea of different branches for developing new features. Lets say you have a currently stable version of your app **quacker** live in the master branch and you want to tweak it as well as start developing a new 'beak' feature. What you should do is create a new branch from master by typing

{% highlight bash %}
git branch beak
{% endhighlight %}

In that branch develop your beak feature from the current working version of **quacker**. You can switch to that branch by using

{% highlight bash %}
git checkout beak
{% endhighlight %}

Meanwhile, in the master branch you can freely tweak the app and know the changes there won't affect the development in the beak branch.

### Bring it in

You're done tweaking master and it's stable and you're done developing beak? You can merge it into master now.

{% highlight bash %}
git merge beak
{% endhighlight %}

If everything is conflict free you're done. If not git will tell you both branches made changes to the same places in the code somewhere and tell you to manually fix then manually commit the changes.

## Monitoring

{% highlight bash %}
git diff
git log
{% endhighlight %}

I recommend finding a personal way to read the data these show you. The first shows you the changes made at a specified commit (defaults to HEAD). The second shows you a log of the most recent commits. My personal favorite way to use `git log` is the set an alias to

{% highlight bash %}
git log --graph --pretty=format:'%Cred%h%Creset %an: %s - %Creset %C(yellow)%d%Creset %Cgreen(%cr)%Creset' --abbrev-commit --date=relative
{% endhighlight %}

You'll see all my aliases in the section below.


## Aliases

Here's a gist with my aliases for my shell including some great git aliases.

{% gist e026476293978ea735bc %}
