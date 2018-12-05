//
// Created by HDW on 2018-11-21.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int biggest(const int *, int);
int main(void)
{
    int n, cnt = 0;
    int arr[100000] = { 0, };

    while (scanf("%d", &n) == 1)
    {
        arr[cnt] = n;
        cnt++;
    }

    printf("%d", biggest(arr, cnt));
}

int biggest(const int *arr, int size)
{
    int bigst = arr[0];

    for (int i = 1; i < size; ++i)
    {
        if (arr[i] > bigst)
            bigst = arr[i];
    }

    return bigst;
}
