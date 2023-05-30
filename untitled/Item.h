//
// Created by wjsrh on 2023-04-04.
//

#ifndef UNTITLED_ITEM_H
#define UNTITLED_ITEM_H

#include <string>
using namespace std;

class Item {
public:
    Item(std::string name, int quantity, int price)
    :name(name), quantity(quantity), price(price) {
        static int IdCounter=0;
        id = IdCounter++;
    }

    int getId() const { return id; }
    std::string getName() const { return name; }
    int getQuantity() const { return quantity;}
    int getPrice() const { return price; }

private:
    int id;
    std::string name;
    int quantity;
    int price;
};
#endif //UNTITLED_ITEM_H
