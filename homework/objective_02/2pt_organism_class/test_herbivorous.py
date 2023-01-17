"""
Medium Problem: Define a 'Test_Herbivorous' class  that inherits `unittest.TestCase`.
    Write a `test_herbivorous` instance method that tests the `Herbivorous` class attributes and methods.

File Name: test_herbivorous.py
Name:      ?
Course:    CPTR 142
"""

# Your code goes here
import unittest
import organism
from herbivorous import Herbivorous

class Test_Herbivorous(unittest.TestCase):

    def test_herbivorous(self):

        herbivorous = Herbivorous("herbivorous")

        self.assertTrue(hasattr(herbivorous, "species"))
        self.assertTrue(hasattr(herbivorous, "multicellular"))
        self.assertTrue(hasattr(herbivorous, "unicellular"))

        self.assertTrue(callable(getattr(herbivorous, "feed", None)))

        self.assertEqual(herbivorous.multicellular, True)
        self.assertEqual(herbivorous.unicellular, False)
        self.assertEqual(herbivorous.species, "species")
        self.assertEqual(herbivorous.feed(), "I am a species species meaning I do not eat meat.")
                
