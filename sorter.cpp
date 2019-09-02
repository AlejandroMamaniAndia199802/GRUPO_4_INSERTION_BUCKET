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
    for (int i = 0; i < buckets; i++)
        for (int j = 0; j < b[i].size(); j++)
            arr[index++] = b[i][j];
}

void sorter::bucketSortVect(std::vector<int> &v)
{
    int k = 0;
    for(auto element : v)
    {
        if (k == 0)
        {
            k = element;
        }
        else
        {
            if (k < element)
            {
                k = element;
            }
        }
    }
    std::vector<int> w(k + 1, 0);
    for (auto i : v)
    {
        w[i]++;
    }
    int index = 0;
    for (unsigned int i = 0; i < w.size(); i++)
    {
        for (int j = 0; j < w[i]; j++)
        {
            v.at(index) = i;
            index++;
        }
    }

}


