/**
 * Beginner: Calculate the area of a trapezoid.
 */
#include "trapezoid_area.h"

// Your code goes here
double *trapezoidArea(double a, double b, double h) {
  double *result = new double;
  *result = ((a + b) / 2.0) * h;
  return result;
}
