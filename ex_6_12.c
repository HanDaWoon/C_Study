#include <stdio.h>

int main()
{
    int n;
    float a = 0, b = 0, minus = 1;

    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
    {
        a += 1.0 / i;
        b += (1.0 / i) * minus;
        minus = -minus;
    }

    printf("%.5f %.5f", a, b);

    return 0;
}