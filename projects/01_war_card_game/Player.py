class Player:
    def __init__(self, name, deck):
        self.name = name
        self.deck = deck
        self.wins = 0

    def draw_card(self):
        return self.deck.pop(0)

    def win_card(self):
        self.wins += 1

    def get_name(self):
        return self.name

    def get_wins(self):
        return self.wins
