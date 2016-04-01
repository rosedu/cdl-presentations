#!/usr/bin/env python

"""
Simple module to exemplify very basic Python features and coding style
guidelines. Print "Hello, World!" at standard output.
"""

import sys
import logging


logger = logging.getLogger(__name__)
logger.setLevel(logging.INFO)
formatter = logging.Formatter('%(asctime)s:%(module)s:[%(funcName)s:'
                              '%(lineno)d]:%(levelname)s:%(message)s')
ch = logging.StreamHandler()
ch.setFormatter(formatter)
fh = logging.FileHandler('hello.log')
fh.setFormatter(formatter)
logger.addHandler(ch)
logger.addHandler(fh)


def hello():
    """Print hello message to standard output."""
    logger.info("Going through hello")
    print "Hello, World!"


def main():
    """Dumb wrapper to print hello message."""
    logger.info("Going through main")
    hello()


if __name__ == "__main__":
    sys.exit(main())
