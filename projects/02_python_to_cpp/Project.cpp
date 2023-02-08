#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include "Functions2.h"
using namespace std;



int main() {
    string response = "Y";
    while (response == "Y") {
        int numberA = getNumber("Enter your first number: ");
        int numberB = getNumber("Enter your second number: ");

        int product = multiply_and_explain(numberA, numberB);


        cout << product << endl;

        cout << "Would you like to multiply again? (Y or N): ";
        cin >> response;
    if (response == "N") {
      std::cout << "Have a nice day :)" << std::endl;
    }
  }

  return 0;
}
