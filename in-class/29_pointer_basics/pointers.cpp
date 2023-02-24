/*************************************************************************
 * In-class activity on Pointer Basics
 */
#include <iostream>

int main() {

  int num = 23;
  std::cout << "Number of bytes: " << sizeof(num) << std::endl;
  std::cout << "Address of num: " << &num << std::endl;

  // TODO See slides for details

  // 1. Define a pointer variable named ptr and set it to nullptr
int* ptr = nullptr;
  // 2. Assign the address of variable num to ptr
ptr = &num;
  // 3. Display the contents of num
std::cout << num << std::endl;
  // 4. Display the contents that the pointer variable ptr, points to
  //    (contents of the "pointee")
std::cout << *ptr << std::endl;
  // 5. Change the value of num
num = 45;
  // 6. Display the contents that the pointer variable ptr, points to
  //    (contents of the "pointee") again
std::cout << *ptr << std::endl;
  return 0;
}
