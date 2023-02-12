/**
 * Intermediate: Create a function definition to return a boolean if either the
 * player has enough energy to complete the obstacle
 */
#include "player_has_energy.h"

// TODO Add your code here
#include "player_has_energy.h"

bool playerHasEnergy(int reduceEnergy, int &availableEnergy) {
    if (availableEnergy - reduceEnergy > 0) {
        availableEnergy -= reduceEnergy;
        return true;
    }
    else {
        return false;
    }
}
