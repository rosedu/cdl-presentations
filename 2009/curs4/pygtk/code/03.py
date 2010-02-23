#!/usr/bin/env python
import pygtk
pygtk.require('2.0')
import gtk
class Hello:
    def del_event_f(self, widget, event, data = None):
	return False
    def destroy_sgn_f(self, widget, data = None):
	gtk.main_quit()
    def __init__(self):
        self.w = gtk.Window(gtk.WINDOW_TOPLEVEL)
	self.w.show()
	self.w.connect("delete_event", self.del_event_f)
	self.w.connect("destroy", self.destroy_sgn_f)
    def main(self):
	gtk.main()
hello = Hello()
hello.main()
