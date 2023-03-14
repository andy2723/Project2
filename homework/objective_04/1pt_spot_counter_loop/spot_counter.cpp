/**
 * Beginner: Find all the spots (o's) in the string
 */
// #include <iostream>
// #include <string>

// int main() {
//   // Define variables
//   std::string animal_coat;
//   char search = 'o';

//   // Collect user input
//   std::cout << "Enter the animal coat: ";
//   std::cin >> animal_coat;

//   // Search for spots

//   // YOUR CODE GOES HERE
// int counter = 0;
//     for (char c : search) {
//         if (std::tolower(c) == search) {
//             counter++;
//         }
//   // Print results
//   std::cout << "The animal has " << counter << " spots." << std::endl;

//   return 0;
// }

#include <cctype>
#include <iostream>
#include <string>

int main() {
  char searchChar = 'O';
  std::string searchArea;

  std::cout << "Enter the animal coat: ";
  std::getline(std::cin, searchArea);

  searchChar = std::tolower(searchChar);
  int spotsCounter = 0;
  for (char c : searchArea) {
    if (std::tolower(c) == searchChar) {
      spotsCounter++;
    }
  }

  std::cout << "The animal has " << spotsCounter << " spots." << std::endl;
  return 0;
}
