#!/usr/bin/env python3

import unittest
from trivia import Game

class TestGame(unittest.TestCase):
    def test_game_can_be_created(self):
        game = Game()
        self.assertEqual(1, 2)

if __name__ == "__main__":
    unittest.main()
