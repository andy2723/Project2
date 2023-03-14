/*************************************************************************
 *
 * File Name: presidents.cpp
 * Course:    CPTR 142
 *
 */

#include <algorithm>
#include <iostream> // for std::cin and std::cout
#include <utility>  // for pair
#include <vector>

bool is19thCentury(pair<int, std::string> aPair);

int main() {
  // define a vector of pairs
  std::vector<pair<int, std::string>> pairs;
  pairs.push_back(make_pair(1789, "Washington"));
  pairs.push_back(make_pair(1797, "Adams"));
  pairs.push_back(make_pair(1801, "Jefferson"));
  pairs.push_back(make_pair(1809, "Madison"));

  // TODO: define an iterator to hold a result

  // TODO: find first President in 19th century

  // TODO: get pair from iterator

  // TODO: print name of first President in 19th century

  return 0;
}

bool is19thCentury(pair<int, std::string> aPair) {
  return ((aPair.first >= 1801) && (aPair.first <= 1900));
}
