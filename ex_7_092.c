#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int main()
{

    int* iptr;
    int sum = 0, N;

    scanf("%d", &N);

    iptr = (int*)calloc((size_t) N, sizeof(int));

    for (int i = 2; i < N; i++)
    {
        if (iptr[i] == 1)
            continue;

        int j = i;

        while ((j += i) <= N)
        {
            iptr[j] = 1;
        }
    }

    for (int i = 2; i <= N; i++)
    {
        if (iptr[i] == 0)
            sum++;
    }

    printf("%d",sum);

    return 0;
}