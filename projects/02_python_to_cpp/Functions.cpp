#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

//Function is checking whether user input is a valid integer.
bool isValidInt(string str) {
    if (str[0] == '-') {
        for (int i = 1; i < str.length(); i++) {
            if (!isdigit(str[i])) {
                return false;
            }
        }
    } else {
        for (int i = 0; i < str.length(); i++) {
            if (!isdigit(str[i])) {
                return false;
            }
        }
    }
    return true;
}
//This function is prompting the user for input.
int getNumber(string prompt) {
    while (true) {
        string strNumber;
        cout << prompt;
        cin >> strNumber;
        if (isValidInt(strNumber)) {
            return stoi(strNumber);
        }
        cout << "Input is not a valid integer" << endl;
    }
}
//This function takes the two numbers and performs the calculations. 
int multiply_and_explain(int numberA, int numberB) {
    int product = 0;
    vector <int> list1;
    vector <int> list2;
    product = 0;
    list1.clear();
    list2.clear();

    if (numberA < 0 && numberB < 0) {
        numberA = abs(numberA);
        numberB = abs(numberB);
    }

    if (numberA >= 0) {
        while (numberA > 0) {
            if (numberA % 2 != 0) {
                product = product + numberB;
            }
            numberA = numberA / 2;
            list2.push_back(numberA);
            numberB = numberB * 2;
            list1.push_back(numberB);
        }
    } else if (numberA < 0) {
        while (numberB > 0) {
            if (numberB % 2 != 0) {
                product = product + numberA;
            }
            numberB = numberB / 2;
            list2.push_back(numberB);
            numberA = numberA * 2;
            list1.push_back(numberA); 
        }
    }
    for (int i = 0; i < list1.size(); i++) {
        cout << "Since " << list2[i];
        if (list2[i] % 2 != 0) {
            cout << " is odd, we will add " << list1[i] << " to the product." << endl;
        } else if (list2[i] % 2 == 0) {
            cout << " is even, we will ignore " << list1[i] << endl;
        }
    }
    return product;
}
