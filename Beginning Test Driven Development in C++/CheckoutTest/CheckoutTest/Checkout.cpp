#include "Checkout.h"

Checkout::Checkout() {
	//Initializes total to 0 upon construction
}


Checkout::~Checkout() {
}

void Checkout::addItemPrice(std::string item, int price) {
	prices[item] = price;
	
}

void Checkout::addItem(std::string item) {
	std::map<std::string, int>::iterator priceIter{ prices.find(item) };
	if (priceIter == prices.end()) {
		throw std::invalid_argument("Invalid item. no price available");
	}
	else {
		items[item]++;
	}
}

void Checkout::addDiscount(std::string item, int numItems, int discountPrice) {
	Discount discount{numItems, discountPrice};
	discounts[item] = discount;
}

int Checkout::calculateTotal() {
	total = 0;
	
	for (std::map<std::string, int>::iterator itemIter = items.begin(); itemIter != items.end(); itemIter++) {

		std::string item = itemIter->first;
		int itemCnt = itemIter->second;
		
		std::map<std::string, Discount>::iterator discountIter;
		discountIter = discounts.find(item);
		if (discountIter != discounts.end()) {
			Discount discount = discountIter->second;
			
			if (itemCnt >= discount.numItems) {
				int numDiscounts = itemCnt / discount.numItems;
				total += numDiscounts * discount.discountPrice;
				
				int remainingItems = itemCnt % discount.numItems;
				total += remainingItems * prices[item];

			}
			else {
				total += itemCnt * prices[item];
			}
		}
		else {
			total += itemCnt * prices[item];
		}
	}
	return total;
}