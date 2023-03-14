<<<<<<< HEAD
# import Player
# import deck
# import random
=======
import Player
>>>>>>> 9ea37c385246bc56fab9614c359d35f5dd987dd8


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

<<<<<<< HEAD
=======
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
>>>>>>> 9ea37c385246bc56fab9614c359d35f5dd987dd8



# #Asks for player name
# name_one = input("Enter player one name: ")
# name_two = input("Enter player two name: ")

<<<<<<< HEAD
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

#Code Reviewer: Adam Taylor 01/24/2023
import Player
import deck


# Welcomes Players to the game with a smile !
print("Welcome to War, Let's run into our game...\N{grinning face}")
print("---------------------------------------------")

deck = deck.Deck()
deck.file_reader("deck_a.txt")
half1, half2 = deck.distribute_cards()

# Create both players !
name = input("Enter your name: ")
print("-------------------------")
player1 = Player.Player(name, half1)
name = input("Enter your name: ")
print("-------------------------")
player2 = Player.Player(name, half2)

total_rounds = 0
war_count = 0


while player2.still_has_cards() and player1.still_has_cards(): 
    total_rounds += 1
    print("Time for a new round") # Prints new round
    print("Here are the current standings") # Prints current standings
    print(player2.name + " has the count:"+str(len(player2.hand))) # Both show player counts
    print(player1.name + " has the count:"+str(len(player1.hand)))
    print("Play a card!")
    print(player1.hand)
    print(player2.hand)
    print("\n")

    table_cards1 = []
    table_cards2 = []

    c_card = player1.play_card()
    p_card = player2.play_card()
    table_cards1.append(c_card)
    table_cards2.append(p_card)

    if c_card == p_card:
        war_count += 1
        print("War!!\N{angry face}") # Prints out war!!
        while True: #Causes repeated war if final cards are the same
        
            table_cards2.extend(player2.remove_war_cards())
            table_cards1.extend(player1.remove_war_cards())
            
            
            if table_cards2[-1] > table_cards1[-1]: #Checks Last card
                player2.hand.extend(table_cards1)
                player2.hand.extend(table_cards2)
                break
            elif table_cards2[-1] < table_cards1[-1]:
                player1.hand.extend(table_cards1)
                player1.hand.extend(table_cards2)
                break
    else:
        if table_cards2[-1] > table_cards1[-1]:
            player2.hand.extend(table_cards1)
            player2.hand.extend(table_cards2)
        else:
            player1.hand.extend(table_cards1)
            player1.hand.extend(table_cards2)
print("Game over,number of rounds:"+str(total_rounds)) # Prints out game over and number of rounds
print("A war happened " + str(war_count) + " times") # Prints out that war occurred
print("Does player 1 still have cards?\t:", str(player1.still_has_cards())) # Prints out if player 1 still has cards
print("Does player 2 player still have cards?\t:", str(player2.still_has_cards())) # Prints out if player 2 still has cards
=======
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
>>>>>>> 9ea37c385246bc56fab9614c359d35f5dd987dd8
