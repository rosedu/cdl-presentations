#!/usr/bin/env python

"""
Simple module to exemplify very basic Python features and coding style
guidelines. Print "Hello, World!" at standard output.
"""

import sys
import logging


logging.basicConfig(format='%(module)s:[%(funcName)s:%(lineno)d]:'
                           '%(levelname)s:%(message)s',
                    level=logging.DEBUG)


def hello():
    """Print hello message to standard output."""
    print "Hello, World!"


def main():
    """Dumb wrapper to print hello message."""
    logging.info("Going through main")
    hello()


if __name__ == "__main__":
    sys.exit(main())
