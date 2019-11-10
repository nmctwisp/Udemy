// X - Can create an instance of checkout
// X - Can add an item price
// X - Can add an item
// X - Can calculate the current total
// X - Can add multiple items and get correct total
// X - Can add discount rules
// X - Can add discount rules to the total
// Exception is thrown for item added without price for the item

#include "Checkout.h"
#include <gtest/gtest.h>

class CheckoutTests : public ::testing::Test {
public:

protected:
	Checkout checkOut;

};

TEST_F(CheckoutTests, CanCalculateTotalSingleItem) {
	checkOut.addItemPrice("a", 1);
	checkOut.addItem("a");
	
	int total = checkOut.calculateTotal();

	ASSERT_EQ(1, total);
}

TEST_F(CheckoutTests, CanCalculateTotalMulitpleItems) {
	checkOut.addItemPrice("a", 1);
	checkOut.addItemPrice("b", 1);
	checkOut.addItem("a");
	checkOut.addItem("b");
	int total = checkOut.calculateTotal();
	ASSERT_EQ(total, 2);
}

TEST_F(CheckoutTests, CanAddDiscount) {
	checkOut.addDiscount("a", 3, 2);
}

TEST_F(CheckoutTests, CanApplyDiscountToTotal) {
	checkOut.addItemPrice("a", 1);
	checkOut.addDiscount("a", 3, 2);
	checkOut.addItem("a");
	checkOut.addItem("a");
	checkOut.addItem("a");
	int total{ checkOut.calculateTotal() };
	ASSERT_EQ(total, 2);
}

TEST_F(CheckoutTests, CanThrowExceptionForItemWithNoPrice) {
	ASSERT_THROW(checkOut.addItem("a"), std::invalid_argument);
}


