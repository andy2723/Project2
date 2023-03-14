/*************************************************************************
 *
 * Exercise: Exceptions
 *
 */

#include <fstream>
#include <iostream> // for std::cin and std::cout
#include <stdexcept>

// function prototypes
// count the number of lines in main.cpp
//    returns a success flag
//    if successful, then lineCount has a number of lines
//    if unsuccessful, then exception has an explanation
bool linesInMain(int &lineCount, std::string &exception);

int main() {
  int lines = 0;
  std::string message;
  bool successFlag = linesInMain(lines, message);
  if (successFlag) {
    std::cout << "main.cpp has " << lines << " lines." << std::endl;
  } else {
    std::cerr << message << std::endl;
  }
}

bool linesInMain(int &lineCount, std::string &exception) {
  ifstream inFS; // Input file stream
  lineCount = 0;

  inFS.open("main.cpp");
  if (!inFS.is_open()) {
    exception = "Unable to open main.cpp!";
    return false;
  }
  while (!inFS.eof()) {
    std::string line;
    getline(inFS, line);
    if (!inFS.fail()) {
      ++lineCount;
    }
  }
  inFS.close();
  return true;
}
