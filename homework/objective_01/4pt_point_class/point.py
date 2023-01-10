"""
Intermediate Problem: Define a 'Point' with two attributes, x and y.
    - Create a constructor that accepts two optional parameters 'x' and 'y'. Each defaults to 0.
    - Create a special instance method to return a formatted string "(x,y)"
    - Create a 'get_distance_to' instance method that returns the distance between itself
      and the single Point class parameter.

File Name: point.py
Name:      ?
Course:    CPTR 142
"""

# Your code goes here
class Point:
    def __init__(self, x = 0, y = 0):
        self.x = x
        self.y = y

    def get_distance_to(self, other_point):
        distance = (((self.x - other_point.x) **2 + (self.y - other_point.y) **2) **.5)
        return distance
    
    def __str__(self):
        return "({},{})" .format(self.x,self.y)