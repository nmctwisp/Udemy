#include "ShoppingCart.h"

ShoppingCart::ShoppingCart() 
	: total{0} {
}

ShoppingCart::~ShoppingCart() {
}

void ShoppingCart::addItemPrice(std::string item, int price) {
	prices[item] = price;
}

void ShoppingCart::addItemToCart(std::string item, int quantity) {
	checkout_items[item] += quantity;
}

void ShoppingCart::addDiscount(string item, int quantity, int price) {
	Discount discount{ quantity, price };
	discounts[item] = discount;
}

int ShoppingCart::calculateTotal() {
	total = 0;

	for (map<string, int>::iterator iterCheckoutItems = checkout_items.begin(); iterCheckoutItems != checkout_items.end(); iterCheckoutItems++) {
		string item = iterCheckoutItems->first;
		int checkout_qty = iterCheckoutItems->second;
		int checkout_price = prices[item];
		
		map<string, Discount>::iterator discountIter{ discounts.find("a") };
		
		if (discountIter != discounts.end()) {
			Discount discount{ discountIter->second };

			if (checkout_qty >= discount.quantity) {
				int numDiscounts = checkout_qty / discount.quantity;
				total += numDiscounts * discount.price;

				int numNoDiscounts = checkout_qty % discount.quantity;
				total += numNoDiscounts * checkout_price;
			}
			else {
				total += checkout_price * checkout_qty;
			}
		}
		else {
			total += checkout_price * checkout_qty;
		}
	}

	return total;
}

