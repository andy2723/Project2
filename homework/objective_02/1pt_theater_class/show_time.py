"""
Beginner Problem: Define a 'Show_Time' class that inherits both "Movie" & "Theater" class.
    Create a constructor to provide the appropriate attribute to each inherited class.

File Name: show_time.py
Name:      ?
Course:    CPTR 142
"""


# Your code goes here
from movie import Movie
from theater import Theater

class Show_Time(Movie, Theater):
    def __init__(self, building_name, movie_name, rating):
        Theater.__init__(self, building_name)
        Movie.__init__(self, movie_name, rating)