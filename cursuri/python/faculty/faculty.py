#!/usr/bin/env python
# -*- coding: utf-8 -*-

"""
Manage faculty courses and planning.
"""

import sys
import logging


logger = logging.getLogger(__name__)
logger.setLevel(logging.INFO)
formatter = logging.Formatter('%(asctime)s:%(module)s:[%(funcName)s:'
                              '%(lineno)d]:%(levelname)s:%(message)s')
ch = logging.StreamHandler()
ch.setFormatter(formatter)
fh = logging.FileHandler('faculty.log')
fh.setFormatter(formatter)
logger.addHandler(ch)
logger.addHandler(fh)


class Course(object):
    """Use this class to manage a course in the faculty."""

    def __init__(self, name, acronym, description, credit_points):
        """Initialize class fields."""
        self.name = name
        self.acronym = acronym
        self.description = description
        self.points = credit_points
        self.prerequisites = []
        self.bibliography = []

    def add_prerequisite(self, prereq):
        """Add prerequisite to list of prerequisites."""
        self.prerequisites.append(prereq)

    def add_bibliography(self, bib):
        """Add bibliography item to bibliography list."""
        self.bibliography.append(bib)

    def __str__(self):
        """toString() like method useful for printing."""
        return "{} ({})".format(self.name, self.acronym)


def main():
    """Fill data from courses."""
    c_uso = Course(name="Utilizarea sistemelor de operare",
                   acronym="USO",
                   description="curs introductiv în sisteme de operare",
                   credit_points=4)
    c_prog = Course(name="Programarea calculatoarelor",
                    acronym="PC",
                    description="curs de bază în programare",
                    credit_points=5)
    c_sd = Course(name="Structuri de date",
                  acronym="SD",
                  description="structuri de date: liste, cozi, grafuri, arbori",
                  credit_points=5)

    courses = [c_uso, c_prog, c_sd]
    for c in courses:
        print c


if __name__ == "__main__":
    sys.exit(main())
