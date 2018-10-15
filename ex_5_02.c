#include <stdio.h>

int main()
{
    long n, m, sum = 0, i;

    scanf("%ld %ld", &n, &m);

    i = n - m;

    while (i <= n + m)
    {
        sum = sum + i;
        i = i + 1;
    }

    printf("%ld", sum);

    return 0;
}