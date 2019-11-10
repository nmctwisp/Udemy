#pragma once
#include <string>
#include <map>

class Checkout
{
public:
	Checkout();
	virtual ~Checkout();

	void addItemPrice(std::string item, int price);
	void addItem(std::string item);
	void addDiscount(std::string item, int numItems, int discountPrice);
	int calculateTotal();

protected:
	struct Discount {
		int numItems;
		int discountPrice;
	};

	std::map<std::string, int> prices;
	std::map<std::string, Discount> discounts;
	std::map<std::string, int> items;
	int total;
};

