"""
Beginner Problem: Define a 'Dog' class that inherits "Pet".
    Extend the `__str__` special method append the extra string shown in the README.

File Name: dog.py
Name:      ?
Course:    CPTR 142
"""

# Your code goes here
from pet import Pet

class Dog(Pet):
    def __init__(self, name):
        super().__init__(name)

    def __str__(self):
        return super().__str__() + " and its a dog"