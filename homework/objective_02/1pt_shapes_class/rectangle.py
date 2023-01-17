"""
Beginner Problem: Define a class name 'Rectangle' that inheritance "Shapes".
    Then create a special method named '__str__' that prints out the
    following format as seen in the README.md. Keep in mind in order
    to access the color of the shape you will need
    to make a base call to "Shapes"

File Name: rectangle.py
Name:      ?
Course:    CPTR 142
"""

# Your code goes here
from shapes import Shapes

class Rectangle(Shapes):
    def __init__(self, color):
        super().__init__(color)

    def __str__(self):
        return f"The rectangle is {self.color}."