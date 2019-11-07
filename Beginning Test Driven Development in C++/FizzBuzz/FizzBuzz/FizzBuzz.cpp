// DONE - Can I call the fizzBuzz function?
// DONE - Get "1" when I pass in 1.
// DONE - Get "2" when I pass in 2.
// DONE - Get "Fizz" when I pass in 3.
// DONE - Get "Buzz" when I pass in 5.
// DONE - Get "Fizz" when I pass in 6 (i.e. a multiple of 3).
// DONE - Get "Buzz" when I pass in 10 (i.e. a multiple of 5). 
// DONE - Get "FizzBuzz" when I pass in 15 (i.e. a multiple of both 3 AND 5).

#include "pch.h"
#include <iostream>
#include <gtest/gtest.h>

std::string fizzBuzz(int value) {
	std::string result;
	if (value % 3 == 0 && value % 5 == 0)
		result = "FizzBuzz";
	else if (value % 3 == 0)
		result = "Fizz";
	else if (value % 5 == 0)
		result = "Buzz";
	else
		result = std::to_string(value);

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

TEST(FizzBuzzTest, returnFizzPassIntMultiple3) {
	std::string result = fizzBuzz(6);
	ASSERT_STREQ("Fizz", result.c_str());
}

TEST(FizzBuzzTest, returnBuzzPassIntMultiple5) {
	std::string result = fizzBuzz(10);
	ASSERT_STREQ("Buzz", result.c_str());
}

TEST(FizzBuzzTest, returnBuzzPassIntMultiple3and5) {
	std::string result = fizzBuzz(15);
	ASSERT_STREQ("FizzBuzz", result.c_str());
}