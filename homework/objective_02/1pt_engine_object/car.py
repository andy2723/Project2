"""
Beginner Problem: Create a class name "Car" that "has-a" relation with "Engine".
    Create a constructor has an engine attribute.

File Name: car.py
Name:      ?
Course:    CPTR 142
"""

# Your code goes here
import engine

class Car:
    def __init__(self, Engine):
        self.engine = Engine

    def __str__(self):
        return f"The car has a {self.engine.cylinders} cylinder {self.engine.gas_type} engine under the hood!"

