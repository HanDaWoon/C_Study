//
// Created by HDW on 2018-12-06.
//

#include <stdio.h>

int main()
{
    long long N, diagonal1 = 1, diagonal2 = 1;

    scanf("%lld", &N);

    long long arr[N][N];

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            scanf("%lld", &arr[i][j]);
        }
    }

    for (int k = 0; k < N; ++k)
    {
        diagonal1 *= arr[k][k];
    }
    for (int l = 0; l < N; ++l)
    {
        diagonal2 *= arr[l][N - 1 - l];
    }

    printf("%lld", diagonal1 - diagonal2);

    return 0;
}
