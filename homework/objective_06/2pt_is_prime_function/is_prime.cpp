/**
 * Intermediate: Create a function that returns if a given number is prime.
 */
#include "is_prime.h"

// TODO Add your code here
#include "is_prime.h"
#include <math.h>

bool isPrime(int num) {
  if (num <= 1) {
    return false;
  }

  int root = sqrt(num);
  for (int i = 2; i <= root; i++) {
    if (num % i == 0) {
      return false;
    }
  }

  return true;
}
