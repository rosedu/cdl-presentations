This is a simple implementation of a faculty management application.

The `faculty.py` file implements the `Course` class storing information about
courses. In its current form, it creates and lists three courses.

For this to make more sense, do the tasks below:

1. Read data from the `courses.csv` file, the bibliography for courses from
   the `*.biblio` files and the prerequisites from `*.prereq` files.  There is
   only one prerequisites file `SD.prereq`. Use the [Python CSV
   module](https://docs.python.org/2/library/csv.html) to load CSV data.

2. Create a `Planning` class that store information about bachelor studies for
   a given faculty (in this case named "ACS"). The planning stores information
   regarding the number of years of study, slots per year (e.g. semesters) and
   the classes in each semester. For starters load the information in the
   `Planning` class by hand.

3. Create a `planning.csv` file where you would store the planning information
   and then load it in the class.

4. Export the planning information as a JSON file. Use the [Python JSON
   module](https://docs.python.org/2/library/json.html) to dump data in JSON
   format.
