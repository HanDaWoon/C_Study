//
// Created by HDW on 2018-11-26.
//

#include <stdio.h>

int main()
{
    int N, M, big1 = 0, big2 = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;

    scanf("%d %d", &N, &M);

    int arr[N + 1][M + 1];

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < M; ++j)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int k = 0; k < N; ++k)
    {
        for (int i = 0; i < M; ++i)
        {
            sum1 += arr[k][i];
        }
        if (sum1 > sum2)
        {
            sum2 = sum1;
            big1 = k + 1;
            sum1 = 0;
        }
        else if (sum1 == sum2)
        {
            big1 = k + 1;
            sum1 = 0;
        }
        else
            sum1 = 0;
    }

    for (int l = 0; l < M; ++l)
    {
        for (int i = 0; i < N; ++i)
        {
            sum3 += arr[i][l];
        }
        if (sum3 > sum4)
        {
            sum4 = sum3;
            big2 = l + 1;
            sum3 = 0;
        }
        else if (sum3 == sum4)
        {
            big2 = l + 1;
            sum3 = 0;
        }
        else
            sum3 = 0;
    }

    printf("%d %d\n", big1, sum2);
    printf("%d %d", big2, sum4);

    return 0;
}