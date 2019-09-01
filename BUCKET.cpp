#include "BUCKET.h"
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

BUCKET::BUCKET() {}

void BUCKET::sortingArray(int *arr, int n){
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

void BUCKET::printArray(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

}
