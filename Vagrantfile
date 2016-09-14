# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure(2) do |config|
  config.vm.box = "ubuntu/wily64"
   config.vm.provision "shell", inline: <<-SHELL
     sudo apt-get update
     sudo apt-get install -y build-essential llvm clang libboost-all-dev
     sudo update-alternatives --set c++ /usr/bin/clang++
   SHELL
end
