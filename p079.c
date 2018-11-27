//
// Created by HanDaWoon on 2018-11-27.
//

#include <stdio.h>
#include <stdlib.h>

int compare(const void *, const void *);
int main()
{
    int N, tmp = 0, cnt = 0, num;

    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &arr[i]);
    }

    qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), compare);

    for (int  j = 0;  j < N; ++ j)
    {
        if (arr[j] == tmp)
        {
            cnt++;
            num = arr[j];
        }
        else
        {
            tmp = arr[j];
            cnt = 1;
        }
    }

    printf("%d %d", num, cnt);

    return 0;
}

int compare(const void * a, const void * b)
{
    if (*(int *)a > *(int *)b)
        return 1;
    else if (*(int *)a > *(int *)b)
        return 0;
    else
        return -1;
}