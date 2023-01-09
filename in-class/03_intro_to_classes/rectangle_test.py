"""
In-Class Exercise:  Test the Rectangle class

File Name: rectangle_test.py
Course:    CPTR 142
"""
import rectangle

user_input1 = input("What is the width of the rectangle? ")
user_input2 = input("What is the length of the rectangle? ")

my_rectangle = rectangle.Rectangle()
print("Rectangle width = ", my_rectangle.width)
print("Rectangle length = ", my_rectangle.length)

my_rectangle.width = user_input1
my_rectangle.length = user_input2
print("Rectangle width = ", my_rectangle.width)
print("Rectangle length = ", my_rectangle.length)

other_rectangle = rectangle.Rectangle()
