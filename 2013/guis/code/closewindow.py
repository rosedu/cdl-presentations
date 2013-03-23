def __init__(self):
    # ...
    self.connect('delete_event', self.__on_exit)

def __on_exit(self, widget, data=None):
    gtk.main_quit()
