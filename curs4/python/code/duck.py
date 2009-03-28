#!/usr/bin/env python
class A(object):
    def __init__(self):
        pass
    def do_it(self, param):
        return param+1
    def method_only_in_A(self):
        pass

class B(object):
    def __init__(self):
        pass
    def do_it(self, param):
        return param*2
    def method_only_in_B(self):
        pass

def do_them(list):
    for e in list:
        print e.do_it(4)
if __name__ == "__main__":
    do_them([A(), B()])
