//
// Created by HDW on 2018-11-20.
//

#include <stdio.h>
#include <math.h>

long long f(long long);

int main()
{
    long long n, tmp;

    scanf("%lld", &n);

    while (1)
    {
        tmp = f(n);
        n = tmp;
        if (n == 1)
        {
            printf("HAPPY\n");
            break;
        }
        else if (n == 4)
        {
            printf("UNHAPPY\n");
            break;
        }
    }

    return 0;
}

long long f(long long n)
{
    long long tmp, sum = 0;

    while (n > 0)
    {
        tmp = n % 10;
        n /= 10;
        sum += pow(tmp, 2);
    }

    return sum;
}