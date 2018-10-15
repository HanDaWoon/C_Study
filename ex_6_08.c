#include <stdio.h>

int main()
{
    float a, b;

    while (scanf("%f %f", &a, &b) == 2)
    {
        printf("%.3f", (a-b)/(a*b));
        printf("\n");
    }

    return 0;

}