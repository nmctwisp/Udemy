// X Can create an instance of checkout
// X Can add an item price
// X Can add an item
// X Can calculate the current total
// X Can add multiple items and get correct total
// X Can add discount rules
// - Can add discount rules to the total
// - Exception is thrown for item added without price for the item

#include <gtest/gtest.h>
#include "ShoppingCart.h"

class ShoppingCartTest : public ::testing::Test {
public:

protected:
	ShoppingCart user_cart;
};

TEST_F(ShoppingCartTest, CanCalculateTotalWithoutDiscount) {
	
	user_cart.addItemPrice("a", 1);
	user_cart.addItemPrice("b", 2);
	
	user_cart.addItemToCart("a", 2);
	user_cart.addItemToCart("b", 1);

	int total{ user_cart.calculateTotal() };
	
	ASSERT_EQ(total, 4);
}

TEST_F(ShoppingCartTest, CanCalculateTotalWithDiscount) {
	user_cart.addItemPrice("a", 1);
	user_cart.addItemPrice("b", 2);

	user_cart.addItemToCart("a", 4);
	user_cart.addItemToCart("b", 1);

	user_cart.addDiscount("a", 3, 2);

	int total{ user_cart.calculateTotal() };

	ASSERT_EQ(total, 5);
}