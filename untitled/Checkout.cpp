
#include "Checkout.h"
using namespace std;
int Checkout::calculateTotalPrice(std::vector<Item>::const_iterator begin, vector<Item>::const_iterator end) const {
    int totalPrice = 0;
    //for (auto it = begin; it != end; ++it) {
    // totalPrice += it->getQuantity() * it->getPrice();
   // }

    switch (discountCode) {
        case DiscountCode(DISCOUNT_20):
            totalPrice *= 0.8;
            break;
        case DiscountCode(DISCOUNT_50):
            totalPrice *= 0.5;
            break;
        default:
            break;
    }

    return totalPrice;
}

void Checkout::setShippingAddress(const std::string &shippingAddress) {
    this->shippingAddress = shippingAddress;
}

void Checkout::setDiscountCode(DiscountCode discountCode) {
    this->discountCode = discountCode;
}
