//
// Created by HanDaWoon on 2018-11-06.
//

#include <stdio.h>
#include <math.h>

int main()
{
    long long input, tmp, sum = 0;

    while (scanf("%lld", &input) == 1)
    {
        while (input > 0)
        {
            tmp = input % 10;
            input /= 10;
            sum += pow(tmp, 3);
        }

        printf("%lld\n", sum);
        sum = 0;
    }

    return 0;
}