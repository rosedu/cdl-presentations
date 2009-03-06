#!/bin/bash

# Created by Vlad Dogaru, 01.03.2009
# Installs necessary software for usage of LaTeX Beamer and highlight
# Ubuntu repos have an old version of highlight, so manual builiding is necessary

if test "x$USER" != xroot; then
	echo "Must be root to run this. Do a 'sudo su -', please"
	exit 1
fi

apt-get install -y latex-beamer build-essential fakeroot debhelper
mkdir highlight_work
cd highlight_work
wget http://www.andre-simon.de/zip/highlight_2.7.orig.tar.gz
wget http://www.andre-simon.de/zip/highlight_2.7-1.diff.gz
wget http://www.andre-simon.de/zip/highlight_2.7-1.dsc
dpkg-source -x highlight_2.7-1.dsc 
cd highlight-2.7
dpkg-buildpackage -rfakeroot -b
dpkg -i ../highlight_2.7-1_i386.deb 

echo -e "\n\n\nAll should be fine now. Get the template,"
echo "test things out, and write to Vlad or the list if you still have problems"
