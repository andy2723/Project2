/**
 * Exercise: Stars through Recursion
 */
#include <iostream>

// function prototypes
void starsDown(int count);
void starsUp(int count);

int main() {
  // test recursive function
  starsUp(3);
  starsDown(3);
  std::cout << std::endl;
  starsUp(7);
  starsDown(7);

  return 0;
}

// print count stars on one line, then one less on the next line
void starsDown(int count) {}

// print count stars on one line, then one more on the next line
void starsUp(int count) {}
