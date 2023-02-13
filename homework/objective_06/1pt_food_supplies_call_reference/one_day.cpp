/**
 * Beginner: Create a program that converts gallons to liters.
 */
#include "food_supplies.h"

// TODO Add your code here
#include "food_supplies.h"
#include <iostream>

void oneDay(int numAnimals) {
  double hay = 50;
  double grain = 50;
  double water = 50;

  updateFoodSupplies(numAnimals, hay, grain, water);
  printFoodSupplies(hay, grain, water);
}