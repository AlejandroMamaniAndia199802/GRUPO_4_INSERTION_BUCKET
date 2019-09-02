#ifndef SORTER_H
#define SORTER_H

#include <vector>

class sorter
{
	public:
		static void insertionSortarr(int arr[], int n);
		static void insertionSortVect(std::vector<int> &arr);
		static void bucketSortarr(int arr[], int n);
		static void bucketSortVect(std::vector<int> &arr);
};

#endif
