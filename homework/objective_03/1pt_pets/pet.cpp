/*************************************************************************
 *
 * Objective 4: Collect string variables and print them.
 *
 * File Name: pet.cpp
 * Name:      ?
 * Course:    CPTR 141
 * Due Date:  @@date@@
 *
 */

#include <iostream>

int main() {
  // define your variables below
  std::string dog_name;
  std::string dog_type;
  // gather user input using std::cin << variableName
  std::cout << "Enter your pet's name: ";
  std::cin >> dog_name;
  std::cout << "Enter type of animal: ";
  std::cin >> dog_type;
  // print out the text
  std::cout << "Your pet's name is " << dog_name << " and is a " << dog_type
            << "." << std::endl;
  return 0;
}
