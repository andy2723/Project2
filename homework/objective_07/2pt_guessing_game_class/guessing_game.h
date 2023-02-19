/**
 * Intermediate: Create a program that mimics a guessing game
 */
#pragma once

// TODO Add your code here
#ifndef GUESSING_GAME_H
#define GUESSING_GAME_H

class GuessingGame {
public:
    GuessingGame(int seed);
    int guess(int num);

private:
    int answer;
    int num_guesses;
};

#endif
