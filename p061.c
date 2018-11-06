//
// Created by HanDaWoon on 2018-11-06.
//

#include <stdio.h>
#include <math.h>

int main()
{
    int n, minus = 1;
    double x, sum = 0;

    scanf("%lf %d", &x, &n);

    for (int i = 1; i <= n; ++i)
    {
        sum += (pow(x, i) / i) * minus;
        minus *= -1;
    }

    printf("%.5lf", sum);

    return 0;
}