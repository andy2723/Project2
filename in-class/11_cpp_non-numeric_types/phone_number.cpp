/*************************************************************************
 *
 * In-Class Exercise: Write a phone number parser that accepts a 10-digit
 *                    number of the form DDDDDDDDDD, and prints out:
 *                       a. number of digits
 *                       b. formatted (DDD) DDD-DDDD version
 *                       c. area code only
 *                       e. local number only
 *
 * File Name: phoneNumber.cpp
 * Course:    CPTR 142
 *
 */

#include <iostream>
#include <string>

int main() {

  // We use a single string variable in this exercise
  std::string phone;

  // Prompt the user for input
  std::cout << "Enter a phone number: ";
  std::cin >> phone;

  // Display information
std::cout << "You entered " << phone.length() << " digits, the first was \"" << phone.at(0)<< "\"." << std::endl;
  // Format the phone number
std::cout << "Formatted: (" << phone.substr(0,3) << ") " << phone.substr(3,3) << "-" << phone.substr(6,4) << std::endl;
  // Display the various parts
std::cout << "Area Code: " << phone.substr(0,3) << std::endl;
std::cout << "Local Form: " << phone.substr(3,3) << "-" << phone.substr(6,4) << std::endl;
  return 0;
}
