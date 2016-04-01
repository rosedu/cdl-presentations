#!/usr/bin/env python

"""
Count words in a text file.
"""

import sys
import logging


logger = logging.getLogger(__name__)
logger.setLevel(logging.INFO)
formatter = logging.Formatter('%(asctime)s:%(module)s:[%(funcName)s:'
                              '%(lineno)d]:%(levelname)s:%(message)s')
ch = logging.StreamHandler()
ch.setFormatter(formatter)
fh = logging.FileHandler('count.log')
fh.setFormatter(formatter)
logger.addHandler(ch)
logger.addHandler(fh)


def get_words_in_file(filename):
    """Get list of words in text file."""
    words = []
    f = open(filename, "rt")
    for line in f:
        words.append(line.split())
    return words


def usage():
    """Show program usage message."""
    print >>sys.stderr, "Usage: %s <filename>" % (sys.argv[0])
    print >>sys.stderr, "  <filename> must be a text file"


def main():
    """Get filename from command line argument."""
    if len(sys.argv) != 2:
        usage()
        sys.exit(1)
    filename = sys.argv[1]
    logger.info("Using file %s", (filename))

    words = get_words_in_file(filename)
    print "%s: %u words" % (filename, len(words))


if __name__ == "__main__":
    sys.exit(main())
