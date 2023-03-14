/*************************************************************************
 *
 * In-Class Exercise: Using Vectors to Book Page Counts and More
 *
 * File Name: books.cpp
 * Course:    CPTR 142
 */

#include <iostream> // for std::cin and std::cout
#include <string>
#include <vector> // for vectors

/*====================================================================
 * Main program
 */

int main() {

  // define the number of books to initially collect
  //   const int NUM = 5;
  int numBooks;
  std::vector<std::string> titles;
  std::string tmpBook;
  std::string junk;
  int peopleChoice;
  // get # of books
  std::cout << "How many books do you wish to record? ";
  std::cin >> numBooks;

  getline(std::cin, junk);
  // loop to collect book and page information
  for (int i = 0; i < numBooks; i++) {
    std::cout << "Title" << (i + 1) << ":";
    getline(std::cin, tmpBook);
    titles.push_back(tmpBook);
  }
  // print the book list
  std::cout << "Your books are:" << std::endl;
  for (int i = 0; i < numBooks; i++) {
    std::cout << " " << (i + 1) << ". " << titles.at(i) << std::endl;
  }
  do {
    std::cout << "Action (1 = Add, 2 = delete): ";
    std::cin >> peopleChoice;
    if (peopleChoice == 1) {
      std::cout << "Title " << titles.size() + 1 << ": ";
      std::cin >> tmpBook;
      titles.push_back(tmpBook);
      std::cout << "Your books are: " << std::endl;
      for (int i = 0; i < numBooks; i++) {
      std::cout << " " << (i + 1) << ". " << titles.at(i) << std::endl;
    }while (peopleChoice == 1 || peopleChoice == 2);

            }
    // Pair Exercise: Let's Be Flexible
    //   Modify the program so that it does at allows the user to do at
    //   least one of the following:
    //     * add a new book/page to the vector
    //     * delete the book/page at a given index
    //     * change the page count for a given book by entering its index
    //   These should be in a loop that displays the longest book and
    //   the number of pages after each action and then prompts for
    //   a new action.

    return 0;
  }