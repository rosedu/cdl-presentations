import unittest
import random
from gcd import Gcd

class Pozitiv(unittest.TestCase):
	def testPozitiv(self):
		"""gcd este mereu pozitiv"""
		a = random.randint(-10, 10)
		b = random.randint(-10, 10)
		result = Gcd(a, b)
		self.assertEqual(result > 0, True)

class Samearg(unittest.TestCase):
	def testSamearg(self):
		"""gcd(a, a) = a"""
		a = random.randint(-10, 10)
		result = Gcd(a, a)
		self.assertEqual(result == a, True)

class Multiplu(unittest.TestCase):
	def testMultiplu(self):
		"""gcd(a, nb) = gcd(a, b)"""
		a = random.randint(-10, 10)
		b = random.randint(-10, 10)
		n = random.randint(1, 5)
		result = Gcd(a, n*b)
		result1 = Gcd(a, b)
		self.assertEqual(result == result1, True)

if __name__ == "__main__":
    unittest.main()
