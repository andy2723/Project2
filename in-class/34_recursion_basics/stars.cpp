/**
 * Exercise: Stars through Recursion
 */
#include <iostream>

// function prototypes
void starsDown(int count);
void starsUp(int count);
void printStars(int count);

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
void starsDown(int count) {
    if (count == 1){
        printStars(1);
        return;
    }
    else{
        std::cout << "*" << std::endl;
        printStars(count - 1);
    }
}

// print count stars on one line, then one more on the next line
void starsUp(int count) {}


void printStars(int count) {
    for (int i = 0; i < count; i++){
        std::cout << "*";
    }
    std::cout << std::endl;
}