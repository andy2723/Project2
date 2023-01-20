/*************************************************************************
 *
 * Objective 4: Collect character input and alter the printed value.
 *
 * File Name: lowercase.cpp
 * Name:      ?
 * Course:    CPTR 141
 * Due Date:
 *
 */

#include <iomanip>
#include <iostream>

int main() {
  // define your variables below
char Upper_case;
  // gather user input using std::cin << variableName
std::cout << "Enter a capital letter: ";
std::cin >> Upper_case;
  // print out the lowercase letter
std::cout << "The lower case letter is " << (char)tolower(Upper_case) << std::endl;

  return 0;
}
