#include "Item.h"
#include "Checkout.h"
#include "Cart.h"
#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
using namespace std;

void Cart::Cart::addItem(const Item& item) {
    items.push_back(item);
}

void Cart::deleteItem(int id){
    auto itemToDelete = std::find_if(items.begin(), items.end(), [id](const Item& item){
        return item.getId() == id;
    });
    if (itemToDelete != items.end()) {
        items.erase(itemToDelete);
    }
}

int Cart::checkout() {
    int totalPrice = checkout_->calculateTotalPrice(items.cbegin(), items.cend());
    return totalPrice;
}

void Cart::viewItemDetails(int id, std::ostream& out) const {
    auto item = std::find_if(items.begin(), items.end(), [id](const Item& item){
        return item.getId() == id;
    });
    if (item != items.end()) {
        cout << "Name: " << item->Item::getName() << std::endl;
        cout << "Quantity: " << item->Item::getQuantity() << std::endl;
        cout << "Price: " << item->Item::getPrice() << endl;
    } else {
        cout << "Item not found" << endl;
    }
}

const_iterator Cart::cbegin() const {
    return items.cbegin();
}
