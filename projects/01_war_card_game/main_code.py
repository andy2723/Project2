import Player
import deck


# Welcomes Players to the game with a smile !
print("Welcome to War, Let's run into our game...\N{grinning face}")
print("---------------------------------------------")

deck = deck.Deck()
deck.file_reader("deck_b.txt")
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
