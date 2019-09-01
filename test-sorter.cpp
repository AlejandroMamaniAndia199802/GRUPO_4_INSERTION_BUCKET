#include "catch.hpp"

#include <iostream>

#include "sorter.h"

TEST_CASE("SORT A SET OF NUMBERS BY INSERTION USING VECTOR")
{

	sorter sortingTester;
	std::vector<int> X{4, 15, 5, 6, 42, 23};
	std::vector<int> sortedX{4, 5, 6, 15, 23, 42};
	sortingTester.insertionSortVect(X);
    for (int i = 0; i < X.size(); ++i)
    {
        REQUIRE(sortedX[i] == X[i]);
    }
}
TEST_CASE("SORT A SET OF NUMBERS BY INSERTION USING ARRAY")
{
    sorter sortingTester_1;
    int N = 6;
    int arr[]={4, 15, 5, 6, 42, 23};
    int sortedarr[]={4, 5, 6, 15, 23, 42};
    sortingTester_1.insertionSortarr(arr, N);
    for (int i = 0; i < N; ++i)
    {
        REQUIRE(sortedarr[i] == arr[i]);
    }
}
