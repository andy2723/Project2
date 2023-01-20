import unittest
from Player import Player

class TestPlayer(unittest.TestCase):
    def setUp(self):
        self.player = Player("Player1", [1, 2, 3, 4, 5])

    def test_draw_card(self):
        self.assertEqual(self.player.draw_card(), 1)
        self.assertEqual(self.player.draw_card(), 2)

    def test_win_card(self):
        self.player.win_card()
        self.assertEqual(self.player.get_wins(), 1)

    def test_get_name(self):
        self.assertEqual(self.player.get_name(), "Player1")

if __name__ == '__main__':
    unittest.main()
