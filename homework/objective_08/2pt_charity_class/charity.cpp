/**
 * Intermediate: Create variables in the heap and clean them up with a
 * destructor
 */
#include "charity.h"
#include <iostream>
#include <vector>

// Your code goes here
void Charity::addDonation(double donation) {
  double *newDonation = new double(donation);
  donations.push_back(newDonation);
}
Charity::~Charity() {
  std::cout << "Destructor called." << std::endl;
  for (auto eachEle : donations) {
    delete eachEle;
    eachEle = nullptr;
  }
}
