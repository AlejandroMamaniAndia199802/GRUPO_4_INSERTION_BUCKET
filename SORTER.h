#ifndef SORTER_H
#define SORTER_H
#include <vector>
class SORTER{
public:
	static void insertionSortarr(int arr[], int n);
	static void insertionSortvect(std::vector<int> &arr);
	static void bucketSortarr(int arr[], int n);
};

#endif
