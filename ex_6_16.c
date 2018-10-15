#include <stdio.h>

int main()
{
    double money, interest;
    int years;

    scanf("%lf %lf %d", &money, &interest, &years);

    for (int i = 0; i < years; ++i)
    {
        money *= 1 + interest;
    }

    printf("%.5f", money);

    return 0;
}