/**
 * Beginner: Arthmetic calculation using recursion.
 */
#include "light_show.h"

// Your code goes here

int getLightCount(int n) {
  if (n <= 0) {
    return 1;
  } else {
    return n * getLightCount(n - 5);
  }
}
