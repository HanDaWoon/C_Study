//
// Created by HanDaWoon on 2018-10-20.
// Ohm
//

#include <stdio.h>

int main()
{
    float R1, R2, R3, R4, R5, R23;
    float Ohm;

    scanf("%f %f %f %f %f", &R1, &R2, &R3, &R4, &R5);

    R23 = R2 + R3;

    Ohm = R1 + R5 + ((R23 * R4) / (R23 + R4));

    printf("%.5f", Ohm);

    return 0;
}