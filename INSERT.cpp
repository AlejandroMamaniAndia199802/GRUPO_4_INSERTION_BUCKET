//
// Created by albin on 29/08/2019.
//

#include "INSERT.h"
#include <iostream>

INSERT::INSERT(int *elements, int size_t)
    {
    this->elements = elements;
    this-> size_t = size_t;

}

void INSERT::sortingArray()
{
    int k =0;
    int j =0;
    for(int i = 1; i<size_t;i++)
    {

        k = *(elements+i);
        j = i-1;
        do{
            *(elements+(i+1))=*(elements+i);
            j--;
        }while(j>=0 && *(elements+i) >k);
    }
    *(elements+(j+1))=k;
}

void INSERT::printArray()
{
    int i;
    for (i = 0; i < size_t; i++)
        std::cout << *(elements+i) << " ";
    std::cout << std::endl;

}
