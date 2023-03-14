# class Deck:
#     def __init__(self):
#         self.cards = []

#     def distribute_cards(self): # Distributes cards
#         player1_hand = []
#         player2_hand = []
#         for x in range(len(self.cards)//2):
#             player1_hand.append(self.cards.pop(0))
#             player2_hand.append(self.cards.pop(0))

#         return player1_hand, player2_hand

#     def file_reader(self, file_name): # Reads card numbers from given file
#         with open(file_name, "r") as file:
#             for line in file:
#                 self.cards.append(int(line))
#         return self.cards

class Deck:
    def __init__(self):
        self.cards = []

    def distribute_cards(self): # Distributes cards
        player1_hand = []
        player2_hand = []
        for _ in range(len(self.cards)//2):
            player1_hand.append(self.cards.pop(0))
            player2_hand.append(self.cards.pop(0))

        return player1_hand, player2_hand

    def file_reader(self, file_name): # Reads card numbers from given file
        with open(file_name, "r") as file:
            for line in file:
                self.cards.append(int(line))
        # No need to return anything
