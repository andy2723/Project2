/**
 * Beginner: Print the list in order.
 */
#include "animal_list.h"
#include <iostream>
#include <string>

// Your code goes here
#include "animal_list.h"
#include <iostream>

void printAnimals(std::string animals[], int size) {
  if (size == 0) {
    return;
  } else if (size == 1) {
    std::cout << animals[0] << std::endl;
  } else {
    printAnimals(animals + 1, size - 1);
    std::cout << animals[0] << std::endl;
  }
}
