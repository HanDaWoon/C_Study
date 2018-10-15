#include <stdio.h>

int main()
{
    long n, i = 1, sum = 0;

    scanf("%ld", &n);

    while (i <= n)
    {
        sum = sum + (i * 1000);
        i = i + 1;
    }

    printf("%ld", sum);

    return 0;
}