/*************************************************************************
 *
 * Demonstration/Exercise: A factorial function
 *
 * File Name: factorial.cpp
 * Course:    CPTR 141
 */

#include <cmath>
#include <iostream>

// Precondition: n is an integer greater than or equal to one
// Postcondition: returns the value of n! ( n x (n-1) x (n-2) x ... x 1 )
long factorial(int n);

int main() {
  int n = 0;
  std::cin >> n;

  long val = factorial(n);
  std::cout << val;

  return 0;
}

long factorial(int n) {
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
