#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "arrays_access.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test array list capacity")
{
	const auto CAPACITY = 5;
	int list[CAPACITY];
	ArrayList array_list(list, CAPACITY);

	REQUIRE(array_list.Capacity() == 5);
}

TEST_CASE("Test array list size")
{
	const auto CAPACITY = 5;
	int list[CAPACITY];
	ArrayList array_list(list, CAPACITY);

	REQUIRE(array_list.Size() == 0);
}

TEST_CASE("Test array list size, adding values")
{
	const auto CAPACITY = 5;
	int list[CAPACITY];
	ArrayList array_list(list, CAPACITY);

	REQUIRE(array_list.Size() == 0);

	array_list.Add(5);
	REQUIRE(array_list.Size() == 1);

	array_list.Add(8);
	REQUIRE(array_list.Size() == 2);
}

TEST_CASE("Test array list get first index of")
{
	const auto CAPACITY = 5;
	int list[CAPACITY];
	ArrayList array_list(list, CAPACITY);

	array_list.Add(5);
	array_list.Add(8);

	int index = array_list.Get_First_Index_Of(8);

	REQUIRE(index == 1);
}

TEST_CASE("Test array list get value at index")
{
	const auto CAPACITY = 5;
	int list[CAPACITY];
	ArrayList array_list(list, CAPACITY);

	array_list.Add(5);
	array_list.Add(8);

	int value = array_list.Get_value_at_Index(0);

	REQUIRE(value == 5);
}