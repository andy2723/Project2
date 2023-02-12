#include "enclosure_transfer.h"

void transferAnimals(std::vector<int> &enclosure1, std::vector<int> &enclosure2) {
    int size = enclosure1.size();
    for (int i = 0; i < size; i++) {
        enclosure2.push_back(enclosure1[i]);
    }
    enclosure1.clear();
}
