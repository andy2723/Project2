import Player

name = " "
deck = [1,2,3,4]
player1 = Player.Player(name, deck)
assert player1.name == " "
assert player1.hand == [1,2,3,4]

assert player1.play_card() == 1
assert player1.hand == [2,3,4]

assert player1.remove_war_cards() == [2,3,4]
assert player1.hand == []

assert player1.still_has_cards() == False
