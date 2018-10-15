#include <stdio.h>

int main()
{
    int n, i = 0;
    long N, sum = 0;

    scanf("%d", &n);

    while (i < n)
    {
        scanf("%ld", &N);
        i += 1;
        sum += N;
    }

    printf("%ld", sum);

    return 0;

}