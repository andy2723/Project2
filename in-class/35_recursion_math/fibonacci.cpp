/**
 * Exercise: Fibonacci
 */

#include <iomanip>
#include <iostream> // for std::cin and std::cout
#include <vector>

// function prototypes
int fibonacciByIteration(int num);
int fibonacciByRecursion(int num);

int main() {
  for (int i = 0; i <= 16; ++i) {
    std::cout << std::setw(2) << i << " -> " << std::setw(3) << fibonacciByIteration(i)
              << " or " << std::setw(3) << fibonacciByRecursion(i) << std::endl;
  }
  return 0;
}

int fibonacciByIteration(int num) {
  // base cases for 0 and 1
  std::vector<int> sequence = {0, 1};
  for (int i = 2; i <= num; ++i) {
    // each subsequent value is the sum of the two previous values
    sequence.push_back(sequence.at(i - 1) + sequence.at(i - 2));
  }
  return sequence.at(num);
}

// TODO: rewrite function to use recursion
int fibonacciByRecursion(int num) { return 42; }
