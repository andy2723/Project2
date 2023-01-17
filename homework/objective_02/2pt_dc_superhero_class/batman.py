"""
Medium Problem: Define a 'Batman' class that inherits `DC_Superheros`.
    Create a constructor that accepts four arguments, "hero_name", "parents", "real_name", and
    "symbol", with matching attributes.
    Then create a 'reveal_identity' instance method that takes no arguments and returns the format found
    in the README.md.

File Name: batman.py
Name:      ?
Course:    CPTR 142
"""


# Your code goes here
from dc_superheros import DC_Superheros

class Batman(DC_Superheros):
    def __init__(self, hero_name, parents, real_name, symbol):
        super().__init__(hero_name, parents)
        self.real_name = real_name
        self.symbol = symbol
    def reveal_identity(self):
        return f"{self.hero_name}'s symbol is a {self.symbol} and their real name is {self.real_name}."