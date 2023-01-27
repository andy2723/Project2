#include <iostream>
#include <string>
#include <vector>

int main() {

  std::vector<int> quizScores = {8, 6};
  std::vector<std::string> profNames(4);

  profNames.at(0) = "Carman";
  profNames.at(1) = "Foster";
  profNames.at(2) = "Duncan";

  std::cout << quizScores.size() << std::endl;
  std::cout << profNames.at(1) << std::endl;

  return 0;
}