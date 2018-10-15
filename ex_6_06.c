#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; ++i)
    {
        printf("%ld %ld %ld", (long) i, (long) (i * i), (long) (i * i * i));
        printf("\n");
    }
    return 0;
}