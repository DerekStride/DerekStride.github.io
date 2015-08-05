---
title:    Test Kitchen
menu:
- header: Introduction
  url:    kitchen-yaml
---

# Kitchen YAML

## Configuration

There are 3 kitchen config files with the following priority.

1. `.kitchen.local.yml` - (local)
2. `.kitchen.yml` - (project)
3. `$HOME/.kitchen/config.yml` - (global)

The intended behavior was that:

* Baseline common configuration can go in the global config
* Any colliding values in the project config "win" over the global config
* Any colliding values in the local config "win" over the project config (and consequently also the global config)

## Layout

Below is the layout of a config file for AWS. My global config looks almost
identical, and I just overwrite the `suites` for each individual cookbook.

```YAML
---
driver:
  name: ec2
  aws_ssh_key_id: slam
  security_group_ids: ["sg-xxxxxxxx"]
  shared_credentials_profile: IAM username
  region: us-west-2
  availability_zone: b
  require_chef_omnibus: true
  subnet_id: subnet-55893222
  instance_type: t2.micro
  associate_public_ip: true
  interface: dns

provisioner:
  name: chef_zero
  solo_rb:
    ssl_verify_mode: verify_none
  data_bags_path: <%= ENV['HOME'] %>/chef/data_bags
  environments_path: <%= ENV['HOME'] %>/chef/environments
  roles_path: <%= ENV['HOME'] %>/chef/roles
  environments_path: "test/integration/environments"
  client_rb:
    environment: sample-env-name

transport:
  ssh_key: <%= ENV['HOME'] %>/.ssh/keypair.pem
  connection_timeout: 10
  connection_retries: 5
  username: ubuntu

platforms:
  - name: ubuntu-14.04
    driver:
      image_id: ami-5189a661
      block_device_mappings:
        - ebs_device_name: /dev/sda1
          ebs_volume_type: standard
          ebs_virtual_name: test
          ebs_volume_size: 15
          ebs_delete_on_termination: true

suites:
  - name: default
    run_list:
      - recipe[cookbook::recipe]
    attributes:
  - name: alternative
    run_list:
      - role[role-name]
    attributes:
```
