/*************************************************************************
 *
 * Demonstration/Exercise: A factorial function
 *
 * File Name: factorialFunction.cpp
 * Course:    CPTR 141
 */

#include "factorial_function.h"
#include <cassert>

long factorial(int n) {
  assert(n > 0);
  long result = 1;
  // this is an error since it includes 0 in the product
  //  while(n--) {
  //    result*=n;
  //  }
  // instead use:
  while (n > 0) {
    result *= n--;
  }
  return result;
}
