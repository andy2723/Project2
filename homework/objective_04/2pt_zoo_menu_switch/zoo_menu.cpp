/*************************************************************************
 *
 * Objective 4: Collect information into two arrays (integer and string).
 *              Print out the total for the integer array and the values in the
 *              string array.
 */

// #include <iostream>

// int main() {
//   // define variables

//   // Prompt for and collect input

//   // Print the cost of the tickets

//   return 0;
// }

#include <iomanip>
#include <iostream>

int main() {
  char ticket_type;
  int ticket_count;
  double ticket_price;
  double total_cost;

  std::cout << "What type of zoo ticket:\n";
  std::cout << " c - Child  $10\n";
  std::cout << " a - Adult  $15\n";
  std::cout << " s - Senior $12\n";
  std::cin >> ticket_type;

  switch (ticket_type) {
  case 's':
    ticket_price = 12.00;
    break;
  case 'a':
    ticket_price = 15.00;
    break;
  case 'c':
    ticket_price = 10.00;
    break;
  default:
    std::cout << "How many tickets? \n";
    std::cout << "Invalid ticket selection" << std::endl;
    return 0;
  }

  std::cout << "How many tickets? \n";
  std::cin >> ticket_count;

  total_cost = ticket_price * ticket_count;

  std::cout << "The cost will be $" << std::fixed << std::setprecision(0)
            << total_cost << std::endl;

  return 0;
}
