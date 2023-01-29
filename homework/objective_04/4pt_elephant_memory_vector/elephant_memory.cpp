/*************************************************************************
 *
 * Objective 4: Collect information into two arrays (integer and string).
 *              Print out the total for the integer array and the values in the
 *              string array.
 */

// #include <iostream>
// #include <vector>

// int main() {
//   // define variables

//   // Prompt for and collect input

//   // Print the numbers entered

//   return 0;
// }

#include <iostream>
#include <vector>

int main() {
  std::vector<int> numbers;
  int number;
  do {
    std::cout << "Enter a number: ";
    std::cin >> number;
    if (number >= 0) {
      numbers.push_back(number);
    }
  } while (number >= 0);

  std::cout << "The elephant responses with these numbers:" << std::endl;
  for (int i = 0; i < numbers.size(); ++i) {
    std::cout << numbers[i];
    if (i != numbers.size() - 1) {
      std::cout << ", ";
    }
  }
  std::cout << std::endl;

  return 0;
}
