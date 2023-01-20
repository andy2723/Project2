/*************************************************************************
 *
 * In-Class Exercise:  Compute the volume of a right circular cylinder
 *                     of a given radius and height
 *
 * File Name: volume.cpp
 * Course:    CPTR 142
 *
 */

#include <cmath>
#include <iostream>

int main() {

  // define constant
const double Pi = 3.14159;
  // define variables
double radius;
double height;
double volume;
std::cout << "Enter radius: ";
std::cin >> radius;
std::cout << "Enter height: ";
std::cin >> height;
std::cout << "The volume is: " << (Pi * pow(radius,2) * height) << std::endl;
  // prompt for input

  // print out the volume (use the pow function)

  return 0;
}
