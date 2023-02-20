/**
 * Beginner: Override the equal comparison for a class.
 */
// #pragma once

// TODO Add your code here
#include <string>

class Animal {
public:
  Animal(std::string name, int age) : name_(name), age_(age) {}

  bool operator==(const Animal &other) const {
    return name_ == other.name_ && age_ == other.age_;
  }

private:
  std::string name_;
  int age_;
};
