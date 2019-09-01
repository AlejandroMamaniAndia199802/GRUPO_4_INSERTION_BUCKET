#include "SORTER.h"
#include <iostream>
#include <cmath>
#include <vector>


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

void SORTER::bucketSort(int *arr, int n){
    int max = 0;
    for(int i=0; i<n; i++){
        k = *(arr+1);
        if(max < k){
            max = k;
        }
    }

    const int buckets = 10;

    vector<float> b[buckets];

    int devider = ceil((max +1)/buckets);

    for (int i=0; i<n; i++)
    {
        k = *(arr+1);
        int bi = floor(k / devider);
        b[bi].push_back(k);
    }

    //Insertion sort in each bucket
    for (int i =0; i<buckets; i++){
        sort(b[i].begin(), b[i].end());
    }

    int index = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < b[i].size(); j++)
            arr[index++] = b[i][j];
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
