#include <vector>
#include <iostream>
#include "item.h"
#include "order.h"
using namespace std;


class Store {
private:
    vector<Item> items;

public:

    Store() {
        items.clear();
    }

    void addItems(Item item) {
        items.push_back(item);
    }

    void printItem() {
        for (int i = 0; i < items.size(); i++) {
            cout << items[i].getName() << ' ' << items[i].getID() << ' ' << items[i].getItemCount() << '\n';
        }
    }

    int getItemCount() {
        return items.size();
    }

    void processOrder(const Order& order) {
        vector<Item> itemsOrdered = order -> getItems();

        for (int i = 0; i < 10; i++) {
            for (int y = 0; y < 100; y++) {
                if (this->items[y] == NULL) {
                    continue;
                }

                else if (itemsOrdered.at(i).getName() == this->items[y].getName()) {
                    this->items[y].setItemCount(this->items[y].getItemCount() - itemsOrdered.at(i).getItemCount());
                    break;
                }
            }
        }
    }
};