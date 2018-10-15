#include <stdio.h>

int main()
{
    double x, r, y;
    int years = 0;

    scanf("%lf %lf %lf", &x, &r, &y);

    if (x * (r / 100) < y)
    {
        do
        {
            x *= 1 + (r / 100.0);
            x -= y;
            years += 1;
        }while (x > 0);

        printf("%d", years);
    }
    else
    {
        printf("NO");
    }

    return 0;

}