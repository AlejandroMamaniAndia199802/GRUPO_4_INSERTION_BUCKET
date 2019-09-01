#include "SORTER.h"
#include <iostream>




void SORTER::insertionSort(int arr[], int n)
{
	int j;
	int temp;
	for (int i = 0;i < n;i++)
	{
		j = i;
		while (j>0 &&(arr[j]<arr[j-1]))
		{
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
				j--;
		}

	}

}
void SORTER::insertionSort(std::vector<int> &arr)
{
	int size = arr.size();
	int j,temp = 0;
	for (int i = 0;i < size;i++)
	{
		j = i;
		while (j > 0 && arr[j] < arr[j - 1])
		{
			temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
			j--;
		}
	}
}
