// DONE - Can I call the fizzBuzz function?
// Get "1" when I pass in 1.
// Get "2" when I pass in 2.
// Get "Fizz" when I pass in 3.
// Get "Buzz" when I pass in 5.
// Get "Fizz" when I pass in 6 (i.e. a multiple of 3).
// Get "Buzz" when I pass in 10 (i.e. a multiple of 5). 
// Get "FizzBuzz" when I pass in 15 (i.e. a multiple of both 3 AND 5).

#include "pch.h"
#include <iostream>
#include <gtest/gtest.h>

std::string fizzBuzz(int value) {
	return "";
}

TEST(FizzBuzzTest, canCallFizzBuzz) {
	std::string result = fizzBuzz(1);
}

TEST(FizzBuzzTest, returnStr1PassInt1) {
	std::string result = fizzBuzz(1);
	ASSERT_STREQ("1", result.c_str());
}