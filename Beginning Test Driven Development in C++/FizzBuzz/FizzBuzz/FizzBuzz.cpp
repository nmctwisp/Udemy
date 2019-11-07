// DONE - Can I call the fizzBuzz function?
// DONE - Get "1" when I pass in 1.
// DONE - Get "2" when I pass in 2.
// DONE - Get "Fizz" when I pass in 3.
// Get "Buzz" when I pass in 5.
// Get "Fizz" when I pass in 6 (i.e. a multiple of 3).
// Get "Buzz" when I pass in 10 (i.e. a multiple of 5). 
// Get "FizzBuzz" when I pass in 15 (i.e. a multiple of both 3 AND 5).

#include "pch.h"
#include <iostream>
#include <gtest/gtest.h>

std::string fizzBuzz(int value) {
	std::string result;
	if (value == 1)
		result = "1";
	else if (value == 2)
		result = "2";
	else
		result = "Fizz";
	
	return result;
}
	
TEST(FizzBuzzTest, canCallFizzBuzz) {
	std::string result = fizzBuzz(1);
}

TEST(FizzBuzzTest, returnStr1PassInt1) {
	std::string result = fizzBuzz(1);
	ASSERT_STREQ("1", result.c_str());
}

TEST(FizzBuzzTest, returnStr2PassInt2) {
	std::string result = fizzBuzz(2);
	ASSERT_STREQ("2", result.c_str());
}

TEST(FizzBuzzTest, returnFizzPassInt3) {
	std::string result = fizzBuzz(3);
	ASSERT_STREQ("Fizz", result.c_str());
}

TEST(FizzBuzzTest, returnBuzzPassInt5) {
	std::string result = fizzBuzz(5);
	ASSERT_STREQ("Buzz", result.c_str());
}