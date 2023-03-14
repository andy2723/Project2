#include "animal_instance.h"
#include "animal.h"
#include <string>

Animal getAnimal(std::string species, int age) {
  // TODO Add your code here
  return Animal(species, age);
}