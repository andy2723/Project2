/**
 * Beginner: Create a program that converts gallons to liters.
 */
#include "food_supplies.h"

// TODO Add your code here
#include <iostream>

void updateFoodSupplies(int &hay, int &grain, int &water, int numAnimals) {
    hay -= numAnimals * 2;
    grain -= numAnimals * 3;
    water -= numAnimals * 5;
}

void printFoodSupplies(int hay, int grain, int water) {
    std::cout << "Hay: " << hay << std::endl;
    std::cout << "Grain: " << grain << std::endl;
    std::cout << "Water: " << water << std::endl;
}

void oneDay(int numAnimals) {
    int hay = 50;
    int grain = 50;
    int water = 50;


    updateFoodSupplies(hay, grain, water, numAnimals);
    printFoodSupplies(hay, grain, water);
}
