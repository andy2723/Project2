/**
 * Beginner: Create a class with an accessor and mutator methods for a private
 * member variable
 */
#pragma once

// TODO Add your code here
#ifndef IDENTIFICATION_CARD_H
#define IDENTIFICATION_CARD_H

class IdentificationCard {
public:
  int getIdNumber();
  void setIdNumber(int idNumber);

private:
  int idNumber;
};

#endif
