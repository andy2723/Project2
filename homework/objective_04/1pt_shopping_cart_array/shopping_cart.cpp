/**
 * Beginner: Create a double array and collect three prices, then print out the total.
 */

#include <iostream>

// int main() {
//   // define your variables below

//   // gather user input using std::cin << variableName

//   // print out the text

//   return 0;
// }
#include <iostream>
#include <iomanip>

int main() {
const int NUM_ITEMS = 3;
double itemPrices[NUM_ITEMS];
double total = 0;
for (int i = 0; i < NUM_ITEMS; i++) {
    std::cout << "Enter the "<< i + 1 << " price of the item" ": $";
    std::cin >> itemPrices[i];
    total += itemPrices[i];
}

std::cout << "The total is $" << std::fixed << std::setprecision(2) << total << "." << std::endl;

return 0;
}