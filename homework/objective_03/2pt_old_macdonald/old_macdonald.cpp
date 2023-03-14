/*************************************************************************
 *
 * hw01: A mad-libs like Old MacDonald Game
 *
 * File Name: macdonald.cpp
 * Name:      ?
 * Course:    CPTR 141
 * Due Date:  @@date@@
 *
 */

#include <iostream>
using namespace std;

int main() {
  // define your variables below
  string adjective;
  string noun;
  string animal;
  string sound;
  // gather user input using std::cin << variableName
  cout << "Enter an adjective: ";
  cin >> adjective;
  cout << "Enter a noun: ";
  cin >> noun;
  cout << "Enter an animal: ";
  cin >> animal;
  cout << "Enter a sound: ";
  cin >> sound;
  // print out the "song"
  cout << "\n";
  cout << adjective << " Macdonald had a " << noun << ", E-I-E-I-O" << endl;
  cout << "and on that " << noun << " he had a " << animal << ", E-I-E-I-O"
       << endl;
  cout << "with a " << sound << " " << sound << " here" << endl;
  cout << "and a " << sound << " " << sound << " there," << endl;
  cout << "here a " << sound << ", there a " << sound << endl;
  cout << "everywhere a " << sound << " " << sound << "," << endl;
  cout << adjective << " Macdonald had a " << noun << ", E-I-E-I-O." << endl;
  return 0;
}
