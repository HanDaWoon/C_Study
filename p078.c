//
// Created by HDW on 2018-11-26.
//

#include <stdio.h>
#include <stdlib.h>

int compare(const void *, const void *);

int main()
{
    int N, tmp;

    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &arr[i]);
    }

    qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), compare);
//    for (int j = N - 1; j > 0; --j)
//    {
//        for (int k = 0; k < j; ++k)
//        {
//            if (arr[k] > arr[k + 1])
//            {
//                tmp = arr[k];
//                arr[k]=arr[k + 1];
//                arr[k + 1] = tmp;
//            }
//        }
//    }

    tmp = N / 2;

    if (N % 2 == 0)
        printf("%.1f", (float) (arr[tmp] + arr[tmp - 1]) / 2);
    else
        printf("%d", arr[tmp]);

    return 0;
}

int compare(const void *a, const void *b)
{
    if (*(int *)a > *(int *)b)
        return 1;
    else if (*(int *)a < *(int *)b)
        return -1;
    else
        return 0;
}
