#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "sorter.h"
#include <cmath>
using namespace std;
void sorter::insertionSortarr(int arr[], int n)
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

void sorter::insertionSortVect(std::vector<int> &arr)
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

void sorter::bucketSortarr(int arr[], int n)
{
    int max = 0;
    int k = 0;
    for(int i=0; i<n; i++){
        k = *(arr+i);
        if(max < k){
            max = k;
        }
    }

    const int buckets = 10;

    vector<int> b[buckets];

    int devider = ceil((max+1)/buckets);

    for (int i=0; i<n; i++)
    {
        k = *(arr+i);
        int bi = floor(k / devider);
        b[bi-1].push_back(k);
    }

    //Insertion sort in each bucket
    for (int i =0; i<buckets; i++){
        insertionSortVect(b[i]);
    }

    int index = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < b[i].size(); j++)
            arr[index++] = b[i][j];
}

void sorter::bucketSortVect(std::vector<int> &data)
{
    int count =data.size();
    int minValue = data[0];
    int maxValue = data[0];

    for (int i = 1; i < count; i++)
    {
        if (data[i] > maxValue)
            maxValue = data[i];
        if (data[i] < minValue)
            minValue = data[i];
    }

    int bucketLength = maxValue - minValue + 1;
    vector<vector<int>> bucket(bucketLength);
    for (int i = 0; i < bucketLength; i++)
    {
        bucket[i] = vector<int>();
    }

    for (int i = 0; i < count; i++)
    {
        bucket[data[i] - minValue].push_back(data[i]);
    }

    int k = 0;
    for (int i = 0; i < bucketLength; i++)
    {
        int bucketSize = bucket[i].size();

        if (bucketSize > 0)
        {
            for (int j = 0; j < bucketSize; j++)
            {
                data[k] = bucket[i][j];
                k++;
            }
        }
    }
}


