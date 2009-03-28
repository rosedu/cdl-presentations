#/usr/bin/env python

import sys

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print "Usage: %s nr" % argv[0]
        exit(1)
    else:
        print "dublul lui %d este %d" % (
            int(argv[1]), int(argv[1]) * 2)
