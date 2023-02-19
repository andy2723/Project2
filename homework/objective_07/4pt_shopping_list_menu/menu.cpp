/**
 * Expert: Implement a menu that utilizes the method functions in ShoppingList
 * class.
 */
#include <iostream>
#include <string>
#include "menu.h"

void menu() {
  // Initialize items array
  std::string items[3] = {"Item 1", "Item 2", "Item 3"};
  int num_items = 3;

  int choice;

  do {
    std::cout << "========== MENU ==========" << std::endl;
    std::cout << "1) View All Items" << std::endl;
    std::cout << "2) Add An Item" << std::endl;
    std::cout << "3) Remove An Item" << std::endl;

    std::cout << "Enter your choice (1-3): ";
    std::cin >> choice;

    switch (choice) {
      case 1:
        std::cout << "Viewing all items..." << std::endl;
        // Loop over all items and print them to the console
        for (int i = 0; i < num_items; i++) {
          std::cout << items[i] << std::endl;
        }
        break;

      case 2:
        std::cout << "Adding an item..." << std::endl;
        // Read in a new item from the user
        std::string new_item;
        std::cout << "Enter the name of the new item: ";
        std::cin >> new_item;

        // Add the new item to the end of the items array
        items[num_items] = new_item;
        num_items++;

        std::cout << "Item added successfully." << std::endl;
        break;

      case 3:
        std::cout << "Removing an item..." << std::endl;
        // Read in the index of the item to remove
        int index;
        std::cout << "Enter the index of the item to remove: ";
        std::cin >> index;

        // Check if the index is valid
        if (index < 0 || index >= num_items) {
          std::cout << "Invalid index. Please enter a number between 0 and " << num_items - 1 << "." << std::endl;
          break;
        }

        // Shift all items after the removed item down by one index
        for (int i = index; i < num_items - 1; i++) {
          items[i] = items[i + 1];
        }

        // Decrement num_items to reflect the removed item
        num_items--;

        std::cout << "Item removed successfully." << std::endl;
        break;

      default:
        std::cout << "Invalid choice. Please enter a number between 1 and 3." << std::endl;
        break;
    }

  } while (choice != 0);
}
