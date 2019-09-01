#include <iostream>
#include <cmath>
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
	
	for(int i=0; i<n; i++)
		if(max < arr[i])
			max = arr[i];

	const int buckets = 10;
	std::vector<int> b[buckets];
	int devider = ceil((max +1)/buckets);

	for (int i=0; i<n; i++)
	{
		int bi = floor(arr[i] / devider);
		b[bi].push_back(arr[i]);
	}
	int index = 0;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < b[i].size(); j++)
			arr[index++] = b[i][j];
}

void sorter::bucketSortVect(std::vector<int> &v)
{
    int largest = 0;
    for (int &i: v)
    {
        if (i > largest)
        {
            largest = i;
        }
    }
    vector<vector<int>> bucket(10+1);
    for (int &i: v) {
        int n = i*10/largest;
        if (bucket[n].size() == 0)
        {
            bucket[n].push_back(i);
        }
        else
            {
            vector<int>::iterator  itr = bucket[n].begin();
            while(itr != bucket[n].end())
            {
                if (i < *itr)
                {
                    bucket[n].insert(itr, i);
                    break;
                } else
                    {
                    itr++;
                }
            }
            if (itr == bucket[n].end())
            {
                bucket[n].push_back(i);
            }
        }
    }

    int i = 0;
    for (int n=0; n<bucket.size(); n++)
    {
        for (auto itr=bucket[n].begin(); itr != bucket[n].end(); itr++)
        {
            v[i++] = *itr;
        }
    }
}


