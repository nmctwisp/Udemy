#pragma once
#include <string>
#include <map>

using std::map;
using std::string;

class ShoppingCart {
private:
	int total;


public:

	ShoppingCart();
	virtual ~ShoppingCart();

	struct Discount {
		int quantity;
		int price;
	};

	map<string, int> prices;
	map<string, int> checkout_items;
	map<string, Discount> discounts;

	void addItemPrice(string item, int price);
	void addItemToCart(string item, int quantity=1);
	void addDiscount(string item, int price, int quantity);
	int calculateTotal();
};