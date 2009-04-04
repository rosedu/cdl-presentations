#!/bin/sh
mkdir ~/hello
cd ~/hello
wget http://ftp.gnu.org/gnu/hello/hello-2.1.1.tar.gz
cp hello-2.1.1.tar.gz hello_2.1.1.orig.tar.gz
tar -xzvf hello_2.1.1.orig.tar.gz