/**
 * Beginner: Override the equal comparison for a class.
 */
// #pragma once

// TODO Add your code here
#include "animal.h"

bool operator==(const Animal& lhs, const Animal& rhs) {
  return (lhs.getAge() == rhs.getAge() && lhs.getSpecies() == rhs.getSpecies());
}
