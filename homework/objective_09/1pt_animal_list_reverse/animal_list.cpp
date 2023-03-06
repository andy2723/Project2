/**
 * Beginner: Print the list in order.
 */
#include "animal_list.h"
#include <iostream>
#include <string>

// Your code goes here
void printAnimals(std::string animals[], int size) {
  if (size > 0) {
    std::cout << animals[size - 1] << std::endl;
    printAnimals(animals, size - 1);
  }
}
