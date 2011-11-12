import gtk

class MainWindow(gtk.Window):
    def __init__(self):
        super(MainWindow, self).__init__()
        self.connect("delete_event", self.onexit)
        self.set_size_request(400, 300)
        self.show()
        self.show_all()

    def onexit(self, widget, data=None):
        gtk.main_quit()

def main():
    w = MainWindow()
    gtk.gdk.threads_init()
    gtk.gdk.threads_enter()
    gtk.main()
    gtk.gdk.threads_leave()

if __name__ == '__main__':
    main()

