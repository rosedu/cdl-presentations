#!/bin/sh
# trebuie să aveți o cheie gpg cu această adresă și acest nume
export DEBEMAIL="lucian.grijincu@rosedu.org"
export DEBFULLNAME="Lucian Adrian Grijincu"
mkdir ~/hello
cd ~/hello
wget http://ftp.gnu.org/gnu/hello/hello-2.1.1.tar.gz
cp hello-2.1.1.tar.gz hello_2.1.1.orig.tar.gz
tar -xzvf hello_2.1.1.orig.tar.gz
cd hello-2.1.1
dh_make -e lucian.grijincu@rosedu.org