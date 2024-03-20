#include "BagOfHolding.h"
#include <vector>
using namespace std;

void BagOfHolding::addItem(string item) {
    items.push_back(item);
}

void BagOfHolding::removeItem(string item) {
    for (int i = 0; i < (int)items.size(); i++) {
        if (item == items[i]) {
            items.erase (items.begin() + i - 1);
        }
    }
}