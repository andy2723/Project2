/*************************************************************************
 *
 * Objective 4: Collect double input and format the printed value.
 *
 * File Name: print_dollars.cpp
 * Name:      ?
 * Course:    CPTR 141
 * Due Date:
 *
 */

#include <iomanip>
#include <iostream>

int main() {
  // define your variables below
  double money_amount;
  // gather user input using std::cin << variableName
  std::cout << "Enter a dollar amount: $";
  std::cin >> money_amount;
  // print out the text
  std::cout << std::fixed;
  std::cout << std::setprecision(2);
  std::cout << "You entered $" << money_amount << std::endl;
  return 0;
}
