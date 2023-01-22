/*************************************************************************
 *
 * Objective 4: Determining an employee's retroactive pay.
 *
 * File Name: back_pay.cpp
 * Name:      ?
 * Course:    CPTR 142
 * Date:
 *
 */

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  // Define your variables
  double annual_salary, retro_pay, new_annual_salary, new_monthly_salary;
  int months_of_retro;
  const double PAY_INCREASE = 0.076;

  // Collect user input
  cout << "Enter current annual salary: ";
  cin >> annual_salary;
  cout << "Enter the number of months for back pay: ";
  cin >> months_of_retro;
  // Perform calculations
  retro_pay = (annual_salary / 12) * months_of_retro * PAY_INCREASE;
  new_annual_salary = annual_salary + (annual_salary * PAY_INCREASE);
  new_monthly_salary = new_annual_salary / 12;
  // Print out the results
  cout << fixed << setprecision(2);
  cout << "\n";
  cout << "I'll return new annual salary, monthly salary, and retroactive pay." << endl;
  cout << "New annual salary: $" << new_annual_salary << endl;
  cout << "New monthly salary: $" << new_monthly_salary << endl;
  cout << "Retroactive salary due: $" << retro_pay << endl;

  return 0;
}
