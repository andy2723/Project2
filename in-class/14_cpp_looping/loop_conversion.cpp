/*************************************************************************
 *
 * In-Class Exercises:  Conversion between types of loops
 *
 * File Name: loop_conversion.cpp
 * Course:    CPTR 142
 */

#include <iostream> // for std::cout and std::cin streams

int main() {

  // Convert the following for loop to a while loop
  int count = 0, product = 1;
  for (int i = 1; i <= 4; i++) {
    product *= i;
    count++;
  }
  std::cout << "product: " << product << ", count: " << count << std::endl;

  // Convert the following while loop to a do-while loop
  int a = 0, sum = 0;
  while (a != -1000) {
    sum += a;
    a--;
  }
  std::cout << "a: " << a << ", sum: " << sum << std::endl;

  // Convert the following while loop to a for loop
  int x = 100, total = 0;
  while (x >= 75) {
    total += x;
    x--;
  }
  std::cout << "x: " << x << ", total: " << total << std::endl << std::endl;

  return 0;
}