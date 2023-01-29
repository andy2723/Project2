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
        std::cout << "Enter the movie title followed by running time in minutes (separated by a space):\n
        ";
    }

    int totalTime = 0;
    for (int i = 0; i < NUM_MOVIES; i++) {
        totalTime += movieTimes[i];
    }

    std::cout << "The total running time of the three movies is: " << totalTime << " minutes." << std::endl;
    return 0;
}
