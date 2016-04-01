#!/usr/bin/env python

"""
Simple module to exemplify very basic Python features and coding style
guidelines. Print "Hello, World!" at standard output.
"""

import sys


def hello():
    """Print hello message to standard output."""
    print "Hello, World!"


def main():
    """Dumb wrapper to print hello message."""
    hello()


if __name__ == "__main__":
    sys.exit(main())
