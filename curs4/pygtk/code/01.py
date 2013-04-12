#!/usr/bin/env python

import pygtk
pygtk.require('2.0')
import gtk

class Hello:
    def __init__(self):
        self.w = gtk.Window(gtk.WINDOW_TOPLEVEL)
	self.w.show()

hello = Hello()
