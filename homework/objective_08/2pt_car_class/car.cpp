/**
 * Intermediate: Add the car method definitions for fillTank, drive and getGas.
 */
#include "car.h"
#include <cmath>

void Car::fillTank(double newGas) { *gas += newGas; }

void Car::drive(double miles) {
  double gallonsUsed = miles / 20.0;
  *gas -= gallonsUsed;
}

double Car::getGas() { return *gas; }
