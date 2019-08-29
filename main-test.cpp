

#include <iostream>
#include "BUCKET.h"
#include "BUCKET.cpp"
#include "INSERT.h"
#include "INSERT.cpp"
#include "catch.hpp"

SCENARIO("Testing a Insert and Bucket sorting methods" )
{
    GIVEN("A sequence of numbers")
    {
        int A[] = {55, 64, 43, 21,6, 124, 54,14123,243};
        WHEN("A BUCKET SORT WORKS")
        {
            BUCKET bucket;
            bucket.sort();
            THEN("A program charge")
            {

                REQUIRE(bucket.verify()==1)
            }
        }
        WHEN("A INSERT SORT WORKS")
        {
            INSERT insert;
            insert.sort();
            THEN("A program charge")
            {

                REQUIRE(insert.verify()==1)
            }
        }
    }
}



