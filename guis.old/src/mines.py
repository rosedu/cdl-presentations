# -*- coding: utf-8 -*-

import gtk

TITLE="Minesweeper"
N=15
M=15

class MainWindow(gtk.Window):
    def __init__(self):
        super(MainWindow, self).__init__()
        self.set_size_request(800, 600)
        self.set_resizable(False)
        self.set_title(TITLE)
        self.connect('delete_event', self.__on_exit)
        self._build_gui()
        self.show()
        self.show_all()

    def _build_gui(self):
        _vbox = gtk.VBox()
        self.add(_vbox)

        _toolbar = self._build_toolbar()
        _vbox.pack_start(_toolbar, False, False, 5)
        self._build_drawing_area(_vbox)

    def _build_drawing_area(self, _vbox):
        _h = gtk.HBox()
        t = gtk.Table(N, M)
        for i in xrange(N):
            for j in xrange(M):
                t.attach(gtk.Button("0"), i, i+1, j, j+1)
        t.set_row_spacings(0)
        t.set_col_spacings(0)
        _h.pack_start(t, True, False, 10)
        _vbox.pack_start(_h, False, False, 5)

    def _build_toolbar(self):
        _toolbar = gtk.Toolbar()
        _toolbar.set_orientation(gtk.ORIENTATION_HORIZONTAL)
        _toolbar.set_style(gtk.TOOLBAR_BOTH)
        _toolbar.set_border_width(5)

        _btnNew = self._build_toolbar_button(gtk.STOCK_NEW, "New",
                "Starts a new simulation", self.__on_new_game)
        _toolbar.insert(_btnNew, -1)
        _btnAbout = self._build_toolbar_button(gtk.STOCK_ABOUT, "About",
                "About this program", self.__on_about)
        _toolbar.insert(_btnAbout, -1)
        _toolbar.insert(gtk.SeparatorToolItem(), -1)
        self._score, ti = self._build_toolbar_label('Score: ', '0')
        _toolbar.insert(ti, -1)
        return _toolbar

    def _build_toolbar_button(self, img_stock, label, tooltip, callback):
        img = gtk.Image()
        img.set_from_stock(img_stock, gtk.ICON_SIZE_LARGE_TOOLBAR)
        btn = gtk.ToolButton(img, label)
        btn.set_tooltip_text(tooltip)
        btn.connect('clicked', callback)
        return btn

    def _build_toolbar_label(self, info, label):
        ti = gtk.ToolItem()
        b = gtk.HBox()
        l = gtk.Label(info)
        b.pack_start(l, False, False, 5)
        lbl = gtk.Label(label)
        b.pack_start(lbl, False, False, 5)
        ti.add(b)
        return (lbl, ti)

    def __on_exit(self, widget, data=None):
        gtk.main_quit()

    def __on_new_game(self, widget, data=None):
        print "Cannot start new game now"

    def __on_about(self, widget, data=None):
        aboutDialog = gtk.AboutDialog()
        aboutDialog.set_name(TITLE)
        aboutDialog.set_authors(["Mihai Maruseac <mihai@rosedu.org>"])
        aboutDialog.set_documenters(
                ["Mihai Maruseac <mihai@rosedu.org>"])
        aboutDialog.set_artists(
                ["Art taken from Public Domain pictures on the web"])
        aboutDialog.set_comments(
            "CDL small project. A classical Minesweeper game."
            )
        aboutDialog.set_copyright(
            "Copyright © 2011 - 2012 Mihai Maruseac <mihai@rosedu.org>")
        aboutDialog.set_logo(self.get_icon())
        aboutDialog.set_icon(self.get_icon())
        aboutDialog.set_version("0.1")
        aboutDialog.run()
        aboutDialog.destroy()

def main():
    """
    Main function. Construct the windows and start all application threads.
    """
    w = MainWindow()
    gtk.gdk.threads_init()
    gtk.gdk.threads_enter()
    gtk.main()
    gtk.gdk.threads_leave()

if __name__ == '__main__':
    main()

