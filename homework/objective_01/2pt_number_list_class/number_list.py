"""
Intermediate Problem:  Define a class named 'Number_List', create a constructor
    that takes one argument and initializes one data attribute.
    Then create two instance methods that take no arguments one named 'get_even()' and the other
    'get_odd'. Return a list of numbers that corresponds the the naming convention of the instance method.

File Name: number_list.py
Name:      ?
Course:    CPTR 142
"""


# your code goes here
class NumberList:
    def __init__(self, numbers):
        self.numbers = numbers

    def get_even(self):
        return [x for x in self.numbers if x % 2 == 0]

    def get_odd(self):
        return [x for x in self.numbers if x % 2 == 1]
