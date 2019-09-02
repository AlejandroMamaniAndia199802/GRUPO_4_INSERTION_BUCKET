#include "catch.hpp"
#include <chrono>
#include <iostream>

#include "sorter.h"

TEST_CASE("SORT A SET OF NUMBERS BY INSERTION USING VECTOR")
{


	std::vector<int> X{4, 15, 5, 6, 42, 23};
	std::vector<int> sortedX{4, 5, 6, 15, 23, 42};
    auto start = std::chrono::steady_clock::now();
    sorter sortingTester;
	sortingTester.insertionSortVect(X);
    auto finish = std::chrono::steady_clock::now();

    std::cout << "Time interval Insertion (Vector): " << std::chrono::duration_cast<std::chrono::milliseconds>(finish - start).count()<< " s" << std::endl;
    for (int i = 0; i < X.size(); ++i)
    {
        REQUIRE(sortedX[i] == X[i]);
    }
}
TEST_CASE("SORT A SET OF NUMBERS BY INSERTION USING ARRAY")
{

    int N = 6;
    int arr[]={4, 15, 5, 6, 42, 23};
    int sortedarr[]={4, 5, 6, 15, 23, 42};
    auto start = std::chrono::high_resolution_clock::now();
    sorter sortingTester_1;
    sortingTester_1.insertionSortarr(arr, N);
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Time interval Insertion (Array): " << elapsed.count() << " ms" << std::endl;
    for (int i = 0; i < N; ++i)
    {
        REQUIRE(sortedarr[i] == arr[i]);
    }
}
TEST_CASE("SORT A SET OF NUMBERS BY BUCKET USING VECTOR")
{

    std::vector<int> Y{4, 15, 5, 6, 42, 23};
    std::vector<int> sortedY{4, 5, 6, 15, 23, 42};
    auto start = std::chrono::high_resolution_clock::now();
    sorter sortingTester_2;
    sortingTester_2.bucketSortVect(Y);
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Time interval Bucket (Vector): " << elapsed.count() << " s" << std::endl;
    for (int i = 0; i < Y.size(); ++i)
    {
        REQUIRE(sortedY[i] == Y[i]);
    }
}
TEST_CASE("SORT A SET OF NUMBERS BY BUCKET USING ARRAY")
{

    int N = 6;
    int arrZ[]={4, 15, 6, 5, 42, 23};
    int sortedarrZ[]={4, 5, 6, 15, 23, 42};
    auto start = std::chrono::high_resolution_clock::now();
    sorter sortingTester_3;
    sortingTester_3.bucketSortarr(arrZ, N);
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Time interval Bucket (Array): " << elapsed.count() << " s" << std::endl;
    for (int i = 0; i < N; ++i)
    {
        REQUIRE(sortedarrZ[i] == arrZ[i]);
    }
}

