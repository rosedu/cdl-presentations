GUI - Gtk (Qt, wxWidgets)
#########################

Mihai Maruseac (<mihai@rosedu.org>)

De ce GUI?
----------

* CLI e antic
* O aplicație respectabilă are GUI
* Eventual look & feel nativ
* GUI toolkits:

  * Java Swing, Java AWT
  * C# (WinForms)
  * Tcl/Tk
  * Gtk
  * Qt
  * wxWidgets

GTK
---

* GIMP Toolkit
* GTK+
* GNOME 3 --> GTK3
* cross-platform
* interfață grafică populară din X Window System (+ Qt)
* C, bindings:

  * C++
  * Perl
  * Ruby
  * C\#
  * Haskell
  * Python

Main Loop
---------

.. code-block:: python

	def main():
	    w = MainWindow()
	    gtk.gdk.threads_init()
	    gtk.gdk.threads_enter()
	    gtk.main()
	    gtk.gdk.threads_leave()

	if __name__ == '__main__':
	    main()

Main Window
-----------

.. code-block:: python

	class MainWindow(gtk.Window):
	    def __init__(self):
		super(MainWindow, self).__init__()
		self.set_size_request(800, 600)
		self.show()
		self.show_all()

Test it

Closing the window
------------------

* Signals
* Callbacks

.. code-block:: python

    def __init__(self):
        # ...
        self.connect('delete_event', self.__on_exit)

    def __on_exit(self, widget, data=None):
        gtk.main_quit()

Widgets
-------

* Windows

  * GtkWindow
  * GtkDialog
  * GtkAboutDialog

* Display elements

  * GtkLabel - static text
  * GtkImage
  * GtkButton
  * GtkEntry - editable text

Layout
------

* Always use `pack` layout
* Containers

  * GtkHBox
  * GtkVBox
  * GtkTable
  * GtkGrid
  * GtkFixed
  * GtkAspectFrame

Misc
----

* Stock Items

  * GTK_STOCK_CANCEL
  * GTK_STOCK_NEW

* Sharring settings

  * GtkSettings

Drawing and custom texts
------------------------

* Use Cairo
* Use Pango

  * HTML text
  * Custom layout
  * i18n text

Demo
----

Joc de X & 0

Links
-----

* http://www.gtk.org/
* http://developer.gnome.org/gtk-tutorial/2.90/
* http://zetcode.com/tutorials/gtktutorial/
* http://www.pygtk.org/pygtk2tutorial/
* http://developer.gnome.org/gtk3/stable/
* http://developer.gnome.org/gdk3/stable/
* http://developer.gnome.org/Gnome3PortingGuide/

