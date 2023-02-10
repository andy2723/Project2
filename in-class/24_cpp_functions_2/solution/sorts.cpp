#include <iostream>
#include <string>

// sort functions
void sortThree(int &x, int &y, int &z);
void sortThree(double &x, double &y, double &z);
void sortThree(std::string &x, std::string &y, std::string &z);

// supporting swap functions
void swap(int &x, int &y);
void swap(double &x, double &y);
void swap(std::string &x, std::string &y);

// the main program
int main() {

  int a1 = 3, b1 = 1, c1 = 2;
  sortThree(a1, b1, c1);
  std::cout << "Sorted: " << a1 << ", " << b1 << ", " << c1 << std::endl;

  double a2 = 7.2, b2 = 9.6, c2 = 3.5;
  sortThree(a2, b2, c2);
  std::cout << "Sorted: " << a2 << ", " << b2 << ", " << c2 << std::endl;

  std::string a3 = "Laura", b3 = "William", c3 = "Jon";
  sortThree(a3, b3, c3);
  std::cout << "Sorted: " << a3 << ", " << b3 << ", " << c3 << std::endl;
}

// function definitions
void sortThree(int &x, int &y, int &z) {
  if (x > y) {
    swap(x, y);
  }
  if (y > z) {
    swap(y, z);
  }
  if (x > y) {
    swap(x, y);
  }
}

void sortThree(double &x, double &y, double &z) {
  if (x > y) {
    swap(x, y);
  }
  if (y > z) {
    swap(y, z);
  }
  if (x > y) {
    swap(x, y);
  }
}

void sortThree(std::string &x, std::string &y, std::string &z) {
  if (x > y) {
    swap(x, y);
  }
  if (y > z) {
    swap(y, z);
  }
  if (x > y) {
    swap(x, y);
  }
}

// supporting swap functions
void swap(int &x, int &y) {
  int temp = x;
  x = y;
  y = temp;
}

void swap(double &x, double &y) {
  double temp = x;
  x = y;
  y = temp;
}

void swap(std::string &x, std::string &y) {
  std::string temp = x;
  x = y;
  y = temp;
}
