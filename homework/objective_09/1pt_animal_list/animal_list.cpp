/**
 * Beginner: Print the list in order.
 */
#include "animal_list.h"
#include <iostream>
#include <string>

// Your code goes here
using namespace std;

void printAnimals(string arr[], int size) {
    // Base case
    if (size == 0) {
        return;
    }
    // Recursive case
    else {
        printAnimals(arr, size-1);
        cout << arr[size-1] << endl;
    }
}
