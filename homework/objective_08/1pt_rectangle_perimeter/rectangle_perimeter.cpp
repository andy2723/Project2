/**
 * Beginner: Calculate the perimeter of a rectanble.
 */
#include "rectangle_perimeter.h"

// Your code goes here
int rectanglePerimeter(int *widthPtr, int *heightPtr) {
  int width = *widthPtr;
  int height = *heightPtr;
  return 2 * (width + height);
}
