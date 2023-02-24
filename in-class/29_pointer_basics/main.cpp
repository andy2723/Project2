/**
 * In-class Activity: Pointers and Objects
 */
#include "bank_account.h"
#include <iostream> // for cin and cout
using namespace std;

/**====================================================================
 * Main program
 *
 * g++ main.cpp bank_account.cpp && ./a.out
 *
 */
int main() {
  // 1. Define a variable to hold a BankAccount object
BankAccount MyAccount;
  // 2. Define a variable to hold a pointer to a BankAccount object (properly
  //    initialized)
BankAccount *ptr = nullptr;
  // 3. Assign the address of the first variable to the second
ptr = & MyAccount;
  // 4. Call displayAccountSummary() using the dot operator
MyAccount.displayAccountSummary();
  // 5. Call updateInterest() using the dereference operator
(*ptr).updateInterest();
  // 6. Call displayAccountSummary() using the arrow operator
ptr->displayAccountSummary();
  return 0;
}
