class MainWindow(gtk.Window):
    def __init__(self):
        super(MainWindow, self).__init__()
        self.set_size_request(800, 600)
        self.show()
        self.show_all()
