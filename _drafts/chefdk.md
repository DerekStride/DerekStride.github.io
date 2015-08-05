---
title:    Chef Development Kit
menu:
- header: Introduction
  url:    chefdk
---
# ChefDK

The ChefDK includes 4 components to help you test your cookbook development.

1. _Berkshelf_ the dependency manager for your cookbooks.
2. _Foodcritic_ a cookbook linting tool.
3. _ChefSpec_ a RSpec plugin for cookbook unit testing
4. _Test Kitchen_ a continuous integration tool for testing your cookbooks.

## Berkshelf

Berkshelf helps manage your cookbook dependencies. It can pull in specific versions from the supermarket or git repositories for testing with your code.

## Foodcritic

Foodcritic helps lint your cookbook for things that don't swim well with the best practices of the community.

## RSpec

RSpec is the framework that _ChefSpec_ and _ServerSpec_ are built upon and you can use it anywhere you use either of the other plugins.

##### ChefSpec

ChefSpec lets you run RSpec styled unit tests on your cookbooks before they're actually converged to give you an idea of if they will work.

##### ServerSpec

ServerSpec can be run after a converge to verify your node is in a desired state.

## Test Kitchen

Test Kitchen wraps all these tools and allows you to easily integrate with your choice of many cloud services such as AWS, or OpenNebula, it also lets you locally test with tools such as Docker, or Vagrant.
