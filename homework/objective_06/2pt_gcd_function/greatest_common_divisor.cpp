/**
 * Intermediate: Write the `greatestCommonDivisor` function definition that
 * returns the greatest common divisor from two given numbers
 */

// TODO Add your code here
#include "greatest_common_divisor.h"

int greatestCommonDivisor(int num1, int num2) {
  if (num2 == 0) {
    return num1;
  }
  return greatestCommonDivisor(num2, num1 % num2);
}
