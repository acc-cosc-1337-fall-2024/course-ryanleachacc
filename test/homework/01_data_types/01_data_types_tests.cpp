#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "data_types.h"

int numbers(int num1) {
	
    int num2 = 5;

    int result = num1 * num2;

    return result;
}

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum_numbers function") 
{
	REQUIRE(add_numbers(5, 5) == 10);
	REQUIRE(add_numbers(10, 10) == 20);
}

