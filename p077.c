//
// Created by HDW on 2018-11-26.
//

#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, check, srt;

    while (scanf("%lf %lf %lf", &a, &b, &c) == 3)
    {
        check = b * b - 4.0 * a * c;
        srt = sqrt(check);

        if (check > 0)
            printf("%.3lf %.3lf\n", (-b + srt) / (2.0*a), (-b - srt) / (2.0*a));
        else if (check == 0)
            printf("%.3lf\n", -b / (2.0 * a));
        else
            printf("Imaginary root\n");
    }

    return 0;
}