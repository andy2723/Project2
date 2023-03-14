/*************************************************************************
 *
 * In-Class Demonstration:  Compute the slope between two points.
 *
 * File Name: slope.cpp
 * Course:    CPTR 142
 *
 */

#include <iostream>

int main() {

  // define variables
char garbage;
double x1, y1, x2, y2;
double slope;

  // prompt for input
std::cout << "Enter point one (x, y): ";
std::cin >> garbage >> x1 >> garbage >> y1 >> garbage;

std::cout << "Enter point one (x, y): ";
std::cin >> garbage >> x2 >> garbage >> y2 >> garbage;

  // print out the slope
slope = (y2 - y1) / (x2 - x1);

std::cout << "The slope between these two points is: " << slope << std::endl;
  return 0;
}
