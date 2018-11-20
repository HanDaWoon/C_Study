//
// Created by HDW on 2018-11-20.
//

#include <stdio.h>

void to_base_n(long long, int);
int main()
{
    long long n;
    int b;

    scanf("%lld %d", &n, &b);
    to_base_n(n, b);

    return 0;
}

void to_base_n(long long n, int b)
{
    if (n == 0)
        return;

    to_base_n(n / b, b);

    printf("%lld", n % b);
}