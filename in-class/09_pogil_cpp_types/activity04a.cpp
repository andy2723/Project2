#include <iostream>

int main() {
  int a;
  double b;
  std::cout << "First number: ";
  std::cin >> a;
  std::cout << "Second number: ";
  std::cin >> b;
  std::cout << "Quotient: " << a << "/" << b << " = " << a / b << std::endl;
}

// int main() {
//   int a;
//   int b;
//   std::cout << "How many cookies are there? ";
//   std::cin >> a;
//   std::cout << "How many girls are there? ";
//   std::cin >> b;
//   std::cout << "Each girl can eat " << a/b << " cookies with " << a%b << " left over." << std::endl;
// }
