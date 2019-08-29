

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
        int *A = nullptr;
        int N = 10;
        WHEN("A BUCKET SORT WORKS")
        {
            BUCKET bucket;
            bucket.sortingArray();
            THEN("A program charge")
            {

                REQUIRE(bucket.verify()==1)
            }
        }
        WHEN("A INSERT SORT WORKS")
        {
            INSERT insert;
            insert.sortingArray(A, N);
            THEN("A program charge")
            {
                insert.printArray(A,N);
                REQUIRE(insert.verify()==1)
            }
        }
    }
}



