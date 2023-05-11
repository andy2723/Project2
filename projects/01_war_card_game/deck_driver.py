import deck

deckdriver = deck.Deck()
assert deckdriver.cards == []
deckdriver.file_reader("deck_test_war.txt")
assert deckdriver.cards == [1,1,3,4,3,4,3,4,5,8]
half1, half2 = deckdriver.distribute_cards()
assert half1 == [1,3,3,3,5]
assert half2 == [1,4,4,4,8]
