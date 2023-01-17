"""
Medium Problem: Define a 'Player' class that inherits 'Health' and 'Team' classes.
    The constructor accepts three arguments "team_name", "health_value", and "player_name".
    Ensure the '__str__' special instance is used from 'Health' base class.
    Define a 'details' instance method that returns a string defined in the README.

File Name: player.py
Name:      ?
Course:    CPTR 142
"""

# Your code goes here
from health import Health
from team import Team

class Player(Health, Team):
    def __init__(self, team_name, health_value, player_name):
        Health.__init__(self, health_value)
        Team.__init__(self, team_name)
        self.player_name = player_name

    def details(self):
        return f"{self.player_name} is on {self.team_name} and has {self.health_value} health."

    def __str__(self):
        return Health.__str__(self) + f'\n{self.details()}'