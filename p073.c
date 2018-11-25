//
// Created by HDW on 2018-11-21.
//

#include <stdio.h>

int biggest(const int * arr, int size);

int main()
{
    int arr[10], size;

    for (int i = 0; i < 10; ++i)
    {
        scanf("%d", &arr[i]);
    }
    size = sizeof(arr) / sizeof(int);
    printf("%d", biggest(arr, size));

    return 0;
}

int biggest(const int * arr, int size)
{
    int bigst = 0;

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > bigst)
            bigst = arr[i];
    }

    return bigst;
}