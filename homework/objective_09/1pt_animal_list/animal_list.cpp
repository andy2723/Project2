/**
 * Beginner: Print the list in order.
 */
#include "animal_list.h"
#include <iostream>
#include <string>

// Your code goes here
using namespace std;

void printAnimals(string arr[], int size) {
  if (size == 0) {
    // cout << "The list is empty" << endl;
    return;
  } else if (size == 1) {
    cout << arr[0] << endl;
    return;
  } else {
    printAnimals(arr, size - 1);
    cout << arr[size - 1] << endl;
  }
}
