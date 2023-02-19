/**
 * Intermediate: Create a program that mimics a guessing game
 */
#include "guessing_game.h"

// TODO Add your code here
#include "guessing_game.h"
#include <cstdlib>

GuessingGame::GuessingGame(int seed) {
  srand(seed);
  answer = rand() % 100 + 1; // generate random number between 1 and 100
  num_guesses = 0;
}

int GuessingGame::guess(int num) {
  num_guesses++;
  if (num == answer) {
    return 0; // correct guess
  } else if (num > answer) {
    return 1; // guess too high
  } else {
    return -1; // guess too low
  }
}
