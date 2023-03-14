/**
 * Function definitions.
 *
 * DO NOT EDIT FILE
 * Changes will not be considered during grading.
 */
/**
 * Use this file to test your function.
 * The code you write in this file will not be graded.
 */
#include "lock_up.h"
#include <vector>

void lock(std::vector<bool> &doors, int door) { doors.at(door) = true; }

void unlock(std::vector<bool> &doors, int door) { doors.at(door) = false; }
