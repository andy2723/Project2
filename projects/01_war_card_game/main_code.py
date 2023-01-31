import Player



# def play_card():
#     if player_one.deck[0] > player_two.deck[0]:
#         player_one.deck.append(player_two.deck[0])
#         player_two.deck.pop(0)
#         player_one.deck.append(player_one.deck[0])
#         player_one.deck.pop(0)
#     else:
#        player_two.deck.append(player_two.deck[0])
#        player_two.deck.pop(0)
#        player_two.deck.append(player_one.deck[0])
#        player_one.deck.pop(0)




# #Asks for player name
# name_one = input("Enter player one name: ")
# name_two = input("Enter player two name: ")

# #Reads the deck
# deck = open("deck_test_play.txt", "r")
# which_deck = False
# player_one_deck = []
# player_two_deck = []
# for card in deck:
#     if which_deck == False:
#         player_one_deck.append(card.split("\n")[0])
#     else:
#         player_two_deck.append(card.split("\n")[0])
#     which_deck =  not which_deck

# #creates instances for the two players
# player_one = Player.Player(name_one, player_one_deck)
# player_two = Player.Player(name_one, player_two_deck)

# turns = 0
# while (len(player_one.deck) > 0) and (len(player_two.deck) > 0):
#     play_card()
#     turns += 1

# print(player_one.deck)
# print()
# print(player_two.deck)
# print(turns)

import random


class Deck:
    def __init__(self):
        print("Creating Deck!!")
        self.cards = []
        with open("deck_b.txt") as f:
            for line in f:
                self.cards.append((line.strip(), line.strip()))

    def shuffle(self):
        print("Shuffling Deck")
        random.shuffle(self.cards)

    def deck_split(self):
        return (self.cards[:26], self.cards[26:])


class Hand:
    def __init__(self, cards_count):
        self.cards_count = cards_count

    def str(self):
        return "Contains {} cards".format(len(self.cards_count))

    def add(self, added_cards):
        self.cards_count.extend(added_cards)

    def remove(self):
        return self.cards_count.pop()


class Player:
    def __init__(self, name, hand):
        self.name = name
        self.hand = hand

    def play_card(self):
        card_drawn = self.hand.remove()
        print("{} has placed : {}".format(self.name, card_drawn))
        print("\n")
        return card_drawn
    def getting_rid_of_war_cards(self):
        war_cards = []
        if len(self.hand.cards_count) < 3:
            return self.hand.cards_count
        else:
            for x in range(3):
                war_cards.append(self.hand.cards_count.pop())
            return war_cards

    def has_cards(self):
        """
        Return true if player has cards left
        """
        return len(self.hand.cards_count) != 0


print("This is war... Lets play!")
# spliting it in half
d = Deck()
d.shuffle()
half1, half2 = d.deck_split()

# Creating both players !
player1 = Player("Player 1", Hand(half1))
player2 = Player("Player 2", Hand(half2))

total_rounds = 0
war_count = 0

while player1.has_cards() and player2.has_cards() and total_rounds < 1000:
    total_rounds += 1
    print("New round")
    print("The current standings are:")
    print(player1.name + " has the count: " + str(len(player1.hand.cards_count)))
    print(player2.name + " has the count: " + str(len(player2.hand.cards_count)))
    print("Play a card!")
    print("\n")

    table_cards = []

    card1 = player1.play_card()
    card2 = player2.play_card()
    table_cards.append(card1)
    table_cards.append(card2)

    if card1[1] == card2[1]:
        war_count += 1
        print("War!")
        table_cards.extend(player1.getting_rid_of_war_cards())
        table_cards.extend(player2.getting_rid_of_war_cards())

        if int(card1[1]) < int(card2[1]):
            player2.hand.add(table_cards)
        else:
            player1.hand.add(table_cards)
    else:
        if int(card1[1]) < int(card2[1]):
            player2.hand.add(table_cards)
        else:
            player1.hand.add(table_cards)
print("Game ends, number of rounds: " + str(total_rounds))
print("A war happened " + str(war_count) + " times")
print("Does Player 1 win?\t:", str(player1.has_cards()))
print("Does Player 2 win?\t:", str(player2.has_cards()))