import random
import Player

class WarGame:
    def __init__(self, player1, player2):
        self.players = [player1, player2]
        self.turns = 0

    def play(self):
        while any(len(player.deck) > 0 for player in self.players):
            player = self.players[0]
            if len(player.deck) > 0:
                card = player.draw_card()
                self.turns += 1
                print(f"{player.name} draws card {card}")
                self.compare_card(card, player)
                print("\n")
        if self.players[0].get_wins() > self.players[1].get_wins():
            print("Player 1 wins with %d wins in %d turns!" % (self.players[0].get_wins(), self.turns))
        else:
            print("Player 2 wins with %d wins in %d turns!" % (self.players[1].get_wins(), self.turns))

    def compare_card(self, card, player):
        if len(self.players[0].deck) == 0 or len(self.players[1].deck) == 0:
            return
        current_card = self.players[1].draw_card()
        print(f"{self.players[1].name} draws card {current_card}")
        if card > current_card:
            self.players[0].win_card()
            self.players[0].deck.append(card)
            self.players[0].deck.append(current_card)
            print(f"{self.players[0].name} wins this round and adds the card to the bottom of his deck")
        else:
            self.players[1].win_card()
            self.players[1].deck.append(card)
            self.players[1].deck.append(current_card)
            print(f"{self.players[1].name} wins this round and adds the card to the bottom of his deck")


if __name__ == '__main__':
    with open("deck_test_play.txt", "r") as deck_file:
        deck = [int(card) for card in deck_file.readlines()]
        player1_deck = deck[0::2]
        player2_deck = deck[1::2]
        player1 = Player.Player("Player 1", player1_deck)
        player2 = Player.Player("Player 2", player2_deck)
        game = WarGame(player1, player2)
        game.play()

