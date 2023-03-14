/*************************************************************************
 *
 * Objective 4: Create a double constant, collect double input and print
 *              out the sale price.
 *
 * File Name: sale.cpp
 * Name:      ?
 * Course:    CPTR 141
 * Due Date:
 *
 */

#include <iostream>
using namespace std;

int main() {
  // define your variables below
  const double SALE_DISCOUNT = 0.15;
  double item_price;
  // gather user input using std::cin << variableName
  cout << "Enter a item price: $";
  cin >> item_price;
  // print out the text
  double sale_price = item_price - (item_price * SALE_DISCOUNT);
  cout << "The sale price is $" << sale_price << "." << endl;

  return 0;
}
