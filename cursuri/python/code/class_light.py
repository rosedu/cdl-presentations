class class_light(object):
    """ Simuleaza un bec """    
    def __init__(self, isOn):
        """ Init. becul cu valoarea primita. """
        self.on = isOn
        
    def switch_off(self):
        " Stinge becu! "
        self.on = False
        
    def switch_on(self):
        """ aprinde-l"""
        self.on = True
