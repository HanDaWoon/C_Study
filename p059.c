//
// Created by HanDaWoon on 2018-11-06.
//

#include <stdio.h>

int main()
{
    double c, f, k;

    scanf("%lf", &k);

    c = k - 273.16;

    f = (c / (5.0 / 9.0)) + 32.0;

    printf("%.2lf %.2lf", f, c);

    return 0;
}