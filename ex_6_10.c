#include <stdio.h>

int sum_squares(int lower, int upper);

int main(void)
{
    int a, b, s;

    while(s = scanf("%d%d", &a, &b), s == 2 && a < b)
    {
        printf("%d\n", sum_squares(a, b));
    }
    return 0;
}

int sum_squares(int a, int b)
{
    int sum = 0;

    for (int i = a; i <= b; i++)
    {
        sum += i * i;
    }

    return sum;
}