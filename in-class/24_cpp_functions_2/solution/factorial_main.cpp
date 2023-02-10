/*************************************************************************
 *
 * Demonstration/Exercise: A factorial function
 *
 * File Name: factorialMain.cpp
 * Course:    CPTR 141
 */

#include "factorial_function.h"
#include <cmath>
#include <iostream>

int main() {
  int n = 0;
  std::cin >> n;

  long val = factorial(n);
  std::cout << val;

  return 0;
}
