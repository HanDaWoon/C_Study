//
// Created by HanDaWoon on 2018-11-05.
//

#include <stdio.h>

long long int fac(int n)
{
    long long sum = 1;
    for (int i = n; i > 0; i--)
    {
        sum *= i;
    }
    return  sum;
}

int main()
{
    long long n, k;
    long long answer;

    scanf("%lld %lld", &n, &k);

    answer = fac(n) / (fac(k) * fac(n-k));

    printf("%lld", answer);

    return 0;
}