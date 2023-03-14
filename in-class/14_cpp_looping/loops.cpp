/*************************************************************************
 *
 * In-Class Exercise:  Use a while loop to count and accumulate.
 *
 * File Name: loops.cpp
 * Course:    CPTR 142
 */

#include <iostream> // for std::cout and std::cin streams

int main() {

  // define needed variables
  int counter = 0;
  int sum = 0;
  int limit;

  // prompt the user for the maximum
  std::cout << "How far should I count? ";
  std::cin >> limit;

  // use the while loop to count
// while (counter < limit) {
//         counter++;
//         sum += counter;
// }
  /* YOUR CODE GOES HERE */
// for (int counter = 0; counter < limit; counter++) {
//         sum += counter;
// }
do {
    counter ++;
    sum += counter;
}  while (counter <limit);
  // print out the final sum
  std::cout << std::endl
            << std::endl
            << "The sum of 1-" << limit << " is " << sum << "." << std::endl;

  // finished!
  return 0;
}
