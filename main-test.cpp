

#include <iostream>
#include "BUCKET.h"
#include "BUCKET.cpp"
#include "INSERT.h"
#include "INSERT.cpp"
#include "catch.hpp"
TEST_CASE("sort a vector")
{
    std::vector<int> v{4, 8, 15, 16, 23, 42};
    REQUIRE(v.size() == 6);

    SECTION("sort descending order") {
        std::sort(v.begin(), v.end(), std::greater<int>());

        CHECK(v.front() == 42);
        CHECK(v.back() == 4);
    }

    SECTION("sort ascending order") {
        std::sort(v.begin(), v.end(), std::less<int>());

        CHECK(v.front() == 4);
        CHECK(v.back() == 42);
    }
}