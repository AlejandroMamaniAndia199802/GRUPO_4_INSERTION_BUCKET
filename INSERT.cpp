//
// Created by albin on 29/08/2019.
//

#include "INSERT.h"
#include <iostream>

INSERT::INSERT() {}

void INSERT::sortingArray(int *arr, int n)
{
    for(int i = 1; i<n;i++)
    {
        k = *(arr+i);
        j = i-1;
        do{
            *(arr+(i+1))=*(arr+i);
            j--;
        }while(j>=0 && *(arr+i) >k);
    }
    *(arr+(j+1))=k;
}

void INSERT::printArray(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

}
