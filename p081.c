//
// Created by HDW on 2018-12-03.
//

#include <stdio.h>
#include <math.h>

int main()
{
    int N, dis = 0, tmp = 0;

    scanf("%d", &N);

    int X[N], Y[N];

    for (int i = 0; i < N; ++i)
    {
        scanf("%d %d", &X[i], &Y[i]);
    }

    for (int j = 0; j < N; ++j)
    {
        for (int k = 0; k < N; ++k)
        {
            dis = abs(X[j] - X[k]) + abs(Y[j] - Y[k]);
            if (dis > tmp)
                tmp = dis;
        }
    }

    printf("%d", tmp);

    return 0;
}