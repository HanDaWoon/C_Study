#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-err34-c"
//
// Created by HanDaWoon on 2018-10-20.
// Ohm
//

#include <stdio.h>

int main()
{
    double R1, R2, R3, R4, R5, R23;
    double Ohm;

    scanf("%lf %lf %lf %lf %lf", &R1, &R2, &R3, &R4, &R5);

    R23 = R2 + R3;

    Ohm = R1 + R5 + ((R23 * R4) / (R23 + R4));

    printf("%.5f", Ohm);

    return 0;
}
#pragma clang diagnostic pop