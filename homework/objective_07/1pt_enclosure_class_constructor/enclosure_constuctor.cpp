/**
 * Beginner: Create a class constructor.
 */
#include "enclosure.h"
#include <iostream>
#include <string>
// TODO Add your code here

Enclosure::Enclosure(std::string type, int size) : type(type), size(size)
{    
}

void Enclosure::printDetails() {
  std::cout << "The " << type << " enclosure is " << size << " square feet."
            << std::endl;
}
