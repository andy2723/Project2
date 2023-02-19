/**
 * Expert: Implement a menu that utilizes the method functions in ShoppingList
 * class.
 */
#include "menu.h"
#include "shopping_list.h"
#include <iostream>

// TODO Add your code here
#include <iostream>
#include "menu.h"

void menu() {
  int choice;

  do {
    std::cout << "========== MENU ==========" << std::endl;
    std::cout << "1) View All Items" << std::endl;
    std::cout << "2) Add An Item" << std::endl;
    std::cout << "3) Remove An Item" << std::endl;

    std::cout << "Option: Enter the name of the item: ";
    std::cin >> choice;

    switch (choice) {
      case 1:
        std::cout << "Viewing all items..." << std::endl;
        // TODO: Implement code to view all items
        break;

      case 2:
        std::cout << "Adding an item..." << std::endl;
        // TODO: Implement code to add an item
        break;

      case 3:
        std::cout << "Removing an item..." << std::endl;
        // TODO: Implement code to remove an item
        break;

      default:
        std::cout << "Invalid choice. Please enter a number between 1 and 3." << std::endl;
        break;
    }

  } while (choice != 0);
}
