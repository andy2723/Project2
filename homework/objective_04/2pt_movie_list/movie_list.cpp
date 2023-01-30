/*************************************************************************
 *
 * Objective 4: Collect information into two arrays (integer and string).
 *              Print out the total for the integer array and the values in the
 * string array.
 *
 * File Name: movie_list.cpp
 * UserID:    ?
 * Course:    CPTR 142
 *
 */

// #include <iostream>

// int main() {
//   // define variables

//   // Prompt for and collect input

//   // report total time

//   return 0;
// }
#include <iostream>
#include <string>

int main() {
    const int NUM_MOVIES = 3;
    std::string movieTitles[NUM_MOVIES];
    int movieTimes[NUM_MOVIES];

    for (int i = 0; i < NUM_MOVIES; i++) {
        std::cout << "Enter the followed by running time in minutes (separated by a space):\n";
    }

    int totalTime = 0;
    for (int i = 0; i < NUM_MOVIES; i++) {
        totalTime += movieTimes[i];
    }

    int hours = totalTime / 60;
    int minutes = totalTime % 60;

    std::cout << "The total running time for " << movieTitles[0];
    for (int i = 1; i < NUM_MOVIES; i++) {
        std::cout << ", " << movieTitles[i];
    }
    std::cout << " is " << totalTime << " minutes." << std::endl;
    std::cout << "That is " << hours << " hours and " << minutes << " minutes." << std::endl;

    return 0;
}
