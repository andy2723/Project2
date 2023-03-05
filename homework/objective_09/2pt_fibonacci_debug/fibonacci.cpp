/**
 * Intermediate: Arthmetic calculation using recursion.
 */
#include "fibonacci.h"
#include <string>
#include <iostream>

int fibonacci(int n, std::string indent) {
  std::cout << indent << n << std::endl;
  
  if (n <= 1) {
    return n;
  }
  
  return fibonacci(n - 1, indent + "  ") + fibonacci(n - 2, indent + "  ");
}
