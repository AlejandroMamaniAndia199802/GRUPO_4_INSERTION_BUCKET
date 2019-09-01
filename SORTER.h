#ifndef SORTER_H
#define SORTER_H
#include <vector>
class SORTER
{
public:
	static void insertionSort(int arr[], int n);
	static void insertionSort(std::vector<int> &arr);
	static void bucketSort(int *arr, int n);
};

#endif
