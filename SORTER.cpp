#include "SORTER.h"
#include <iostream>
#include <cmath>
#include <vector>


void SORTER::insertionSortarr(int arr[], int n)
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

void SORTER::insertionSortvect(std::vector<int> &arr)
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

void SORTER::bucketSortarr(int arr[], int n){
    int max = 0;
    for(int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    const int buckets = 10;

    std::vector<int> b[buckets];

    int devider = ceil((max +1)/buckets);

    for (int i=0; i<n; i++){
        int bi = floor(arr[i] / devider);
        b[bi].push_back(arr[i]);
    }

    //Insertion sort in each bucket
    for (int i =0; i<buckets; i++){
        insertionSortvect(b[i]);
    }

    int index = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < b[i].size(); j++)
            arr[index++] = b[i][j];
}
