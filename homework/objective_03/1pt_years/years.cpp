/*************************************************************************
 *
 * Objective 4: Collect integer input and split the number into years and days.
 *
 * File Name: years.cpp
 * Name:      ?
 * Course:    CPTR 141
 * Due Date:
 *
 */

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  // define your variables below
  int days, years, remaining_days;
  // gather user input using std::cin << variableName
  cout << "Enter the number of days: ";
  cin >> days;
  // print out the text
  years = days / 365;
  remaining_days = days % 365;
  cout << days << " days is " << years << " year(s) followed by " << remaining_days
       << " days." << endl;
  return 0;
}
