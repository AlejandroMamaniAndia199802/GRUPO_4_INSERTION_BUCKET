

#include <iostream>
#include "SORTER.h"
#include "catch.hpp"
using namespace std;
TEST_CASE("sort a vector")
{
    SORTER insert1;
    std::vector<int> v{4, 15, 5, 6, 42, 23};
        insert1.insertionSort(v);
        CHECK(v.front() == 4);
        CHECK(v.back() == 42);
}