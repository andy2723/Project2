/*************************************************************************
 *
 * In-Class Exercise: Split program into multiple files
 *
 * File Name: main.cpp
 * Username:  ?
 * Username:  ?
 * Course:    CPTR 142
 *
 */

#include <iostream>

// https://en.wikipedia.org/wiki/List_of_counties_in_Washington
enum CountyFIPS { FIPS_ADAMS = 1, FIPS_KING = 33, FIPS_WALLA_WALLA = 71 };

class BoatRegistration {
public:
  void setYear(int newYear);
  void setCounty(CountyFIPS newCounty);
  void setCode(int newCode);
  void printLicenseNum();

private:
  int year;
  CountyFIPS county;
  int code;
};

void BoatRegistration::setYear(int newYear) { year = newYear; }

void BoatRegistration::setCounty(CountyFIPS newCounty) { county = newCounty; }

void BoatRegistration::setCode(int newCode) { code = newCode; }

// printLicenseNum() with format <county>-<year>-<code>

int main() {
  BoatRegistration boat;

  boat.setYear(2021);
  boat.setCounty(FIPS_WALLA_WALLA);
  boat.setCode(42);
  boat.printLicenseNum(); // prints "71-2021-42\n"

  return 0;
}
