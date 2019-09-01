#include "catch.hpp"

#include <iostream>

#include "sorter.h"

TEST_CASE("sort a vector")
{
	sorter sortingTester;
	std::vector<int> v{4, 15, 5, 6, 42, 23};

	sortingTester.insertionSortVect(v);
	CHECK(v.front() == 4);
	CHECK(v.back() == 42);
}
