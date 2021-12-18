#include "item.h"
#include <vector>

using namespace std;

class Order {
private:
    vector<Item> items;
    int totalPrice;

public:

    vector<Item> getItems() { return items; }

    void addItems(Item item) {
        items.push_back(item);
        totalPrice += item.getPrice();
    }

    int getItemCount() {
        return items.size();
    }

    int getTotalPrice() {
        return totalPrice;
    }
};