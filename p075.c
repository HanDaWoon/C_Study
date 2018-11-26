//
// Created by HDW on 2018-11-25.
//

#include <stdio.h>

int main()
{
    unsigned long long N, K;

    scanf("%lld %lld", &N, &K);

    unsigned long long arr[N+1][N+1];

    for (int i = 0; i < N + 1; ++i)
    {
        arr[i][0] = 1;
        arr[i][i] = 1;
    }

    for (int j = 2; j < N + 1; ++j)
    {
        for (int k = 1; k < j; ++k)
        {
            arr[j][k] = arr[j - 1][k - 1] + arr[j - 1][k];
        }
    }

    printf("%lld", arr[N - 1][K - 1]);

    return 0;
}