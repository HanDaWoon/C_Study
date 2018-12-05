//
// Created by HDW on 2018-11-28.
//

#include <stdio.h>
#include <stdlib.h>

int compare(const void *, const void *);
int main()
{
    int N, K;
    float sum1 = 0, sum2 = 0;

    scanf("%d %d", &N, &K);

    int arr[N];

    for (int i = 0; i < N; ++i)
        scanf("%d", &arr[i]);

    qsort(arr, sizeof(arr) / sizeof(int), sizeof(int), compare);

    for (int j = K; j < N - K; ++j)
        sum1 += arr[j];

    for (int k = 0; k < K; ++k)
        arr[k] = arr[K + 1];

    for (int l = N - 1; l >= N - K; --l)
        arr[l] = arr[N - K - 1];

    for (int m = 0; m < N; ++m)
        sum2 += arr[m];

    printf("%.1f %.1f", sum1 / (N - (K * 2)), sum2 / N);

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