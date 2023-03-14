/*************************************************************************
 *
 * In-Class Exercise: Classes
 *
 * File Name: point.cpp
 * Name:      ?
 * Course:    CPTR 142
 */

#include <iostream> // std::cin and std::cout

#include <math.h> // pow

class Point {
public:
  void setX(int newX);
  void setY(int newY);
  double distanceFromOrigin();

private:
  int x, y;
};

// main entry point
int main() {
  // use the new class
  Point target;
  int x, y;
  double distance;
  std::cout << "Enter x coordinate: ";
  std::cin >> x;
  std::cout << "Enter y coordinate: ";
  std::cin >> y;

  // TODO: assign values

  // TODO: obtain distance
  distance = 0;

  std::cout << "The target is " << distance << " units from origin."
            << std::endl;

  return 0;
}

//	Class implementation comes later!
void Point::setX(int newX) { x = newX; }

void Point::setY(int newY) { y = newY; }

double Point::distanceFromOrigin() { return sqrt(pow(x, 2) + pow(y, 2)); }
