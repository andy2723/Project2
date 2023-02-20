/**
 * Beginner: Create a class with prototype.
 */
#include "identification_card.h"

int IdentificationCard::getIdNumber() const { return idNumber; }

void IdentificationCard::setIdNumber(int newIdNumber) {
  idNumber = newIdNumber;
}
