/**
 * Beginner: Delete a pointer
 */
#include "reset_pointer.h"

// Your code goes here
void resetPointer(int *&ptr) {
  delete ptr;
  ptr = nullptr;
}
