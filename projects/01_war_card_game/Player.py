# class Player:
#     def __init__(self, name, hand):
#         self.name = name
#         self.hand = hand

#     def play_card(self): # Takes card out of deck and returns it
#         drawn_card = self.hand.pop(0)
#         print("{} has placed : {}".format(self.name, drawn_card))
#         print("\n")
#         return drawn_card

#     def remove_war_cards(self): #Remove 4 cards or as many are left 
#         war_cards = []
#         for x in range(4):
#             if len(self.hand) == 0:
#                 return war_cards
#             war_cards.append(self.hand.pop(0))
#         return war_cards

#     def still_has_cards(self):
#         """
#         Return true if player has cards left
#         """
#         return len(self.hand) != 0

class Player:
    def __init__(self, name, hand):
        self.name = name
        self.hand = hand

    def play_card(self): # Takes card out of deck and returns it
        drawn_card = self.hand.pop(0)
        print("{} has placed : {}".format(self.name, drawn_card))
        print("\n")
        return drawn_card

    def remove_war_cards(self): #Remove 4 cards or as many are left 
        war_cards = []
        for _ in range(4):
            if len(self.hand) == 0:
                return war_cards
            war_cards.append(self.hand.pop(0))
        return war_cards

    def still_has_cards(self):
        """
        Return true if player has cards left
        """
        return len(self.hand) != 0
