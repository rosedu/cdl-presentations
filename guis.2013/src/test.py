import gtk

class MainWindow(gtk.Window):
    def __init__(self):
        super(MainWindow, self).__init__()
        self.set_size_request(800, 600)
        self.set_resizable(False)
        self.connect('delete_event', self.__on_exit)
        self._build_gui()
        self.show()
        self.show_all()

    def _build_gui(self):
        vbox = gtk.VBox()
        self.add(vbox)
        tb = gtk.Toolbar()
        tb.set_orientation(gtk.ORIENTATION_HORIZONTAL)
        tb.set_style(gtk.TOOLBAR_BOTH)
        tb.set_border_width(5)
        vbox.pack_start(tb, False, False, 5)

        # adaug buton de new
        img = gtk.Image()
        img.set_from_stock(gtk.STOCK_NEW, gtk.ICON_SIZE_LARGE_TOOLBAR)
        btnNew = gtk.ToolButton(img, "New")
        tb.insert(btnNew, -1)

        # adaug buton de about
        img1 = gtk.Image()
        img1.set_from_stock(gtk.STOCK_ABOUT, gtk.ICON_SIZE_LARGE_TOOLBAR)
        btnAbout = gtk.ToolButton(img1, "About")
        btnAbout.connect('clicked', self.aboutClick)
        tb.insert(btnAbout, -1)

        # adaug un separator
        tb.insert(gtk.SeparatorToolItem(), -1)

        # adaug un label
        ti = gtk.ToolItem()
        ti.add(gtk.Label("Score: "))
        tb.insert(ti, -1)

        # partea de jos
        _h = gtk.HBox()
        t = gtk.Table(10, 10)
        for i in xrange(10):
            for j in xrange(10):
                t.attach(gtk.Button("0"), i, i+1, j, j+1)
        t.set_row_spacings(0)
        t.set_col_spacings(0)
        _h.pack_start(t, True, True, 10)
        vbox.pack_start(_h, True, True, 5)

    def aboutClick(self, widget, data=None):
        aboutDialog = gtk.AboutDialog()
        aboutDialog.set_name("About")
        aboutDialog.set_authors(["Mihai Maruseac <mihai@rosedu.org>"])
        aboutDialog.set_documenters(
                ["Mihai Maruseac <mihai@rosedu.org>"])
        aboutDialog.set_artists(
                ["Art taken from Public Domain pictures on the web"])
        aboutDialog.set_comments(
            "CDL small project. A classical Minesweeper game."
            )
        aboutDialog.run()
        aboutDialog.destroy()

    def __on_exit(self, widget, data=None):
        gtk.main_quit()

def main():
    w = MainWindow()
    gtk.gdk.threads_init()
    gtk.gdk.threads_enter()
    gtk.main()
    gtk.gdk.threads_leave()

if __name__ == '__main__':
    main()

