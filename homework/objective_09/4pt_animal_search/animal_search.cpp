/**
 * Expert: Vector search using recursion.
 */
#include "animal_search.h"
#include <string>
#include <vector>

// Your code goes here

void searchHelper(const std::vector<std::string> &animals,
                  const std::string &target, bool &found, uint64_t &index,
                  uint64_t currentIndex) {
  // Base case: we've searched the entire list and haven't found the target
  if (currentIndex == animals.size()) {
    found = false;
    return;
  }

  // Recursive case: check the current index for the target
  if (animals[currentIndex] == target) {
    found = true;
    index = currentIndex;
    return;
  }

  // Recursive case: move on to the next index
  searchHelper(animals, target, found, index, currentIndex + 1);
}

void animalSearch(const std::vector<std::string> &animals,
                  const std::string &target, bool &found, uint64_t &index) {
  searchHelper(animals, target, found, index, 0);
}
