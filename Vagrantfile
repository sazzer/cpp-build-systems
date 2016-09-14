# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure(2) do |config|
  config.vm.box = "ubuntu/xenial64"
   config.vm.provision "shell", inline: <<-SHELL
     sudo echo "nameserver 10.0.2.3" >> /etc/resolv.conf
     sudo apt-get update
     sudo apt-get install -y build-essential llvm clang \
        libboost-all-dev \
        libgmp-dev \
        libgtest-dev \
        cmake
     sudo update-alternatives --set c++ /usr/bin/clang++

     cd /usr/src/gtest
     sudo cmake CMakeLists.txt
     sudo make
     sudo cp *.a /usr/lib
   SHELL
end
