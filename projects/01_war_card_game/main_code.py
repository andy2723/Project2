import Player



def play_card():
    if player_one.deck[0] > player_two.deck[0]:
        player_one.deck.append(player_two.deck[0])
        player_two.deck.pop(0)
        player_one.deck.append(player_one.deck[0])
        player_one.deck.pop(0)
    else:
       player_two.deck.append(player_two.deck[0])
       player_two.deck.pop(0)
       player_two.deck.append(player_one.deck[0])
       player_one.deck.pop(0)




#Asks for player name
name_one = input("Enter player one name: ")
name_two = input("Enter player two name: ")

#Reads the deck
deck = open("deck_test_play.txt", "r")
which_deck = False
player_one_deck = []
player_two_deck = []
for card in deck:
    if which_deck == False:
        player_one_deck.append(card.split("\n")[0])
    else:
        player_two_deck.append(card.split("\n")[0])
    which_deck =  not which_deck

#creates instances for the two players
player_one = Player.Player(name_one, player_one_deck)
player_two = Player.Player(name_one, player_two_deck)

turns = 0
while (len(player_one.deck) > 0) and (len(player_two.deck) > 0):
    play_card()
    turns += 1

print(player_one.deck)
print()
print(player_two.deck)
print(turns)

