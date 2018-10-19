//
// Created by HanDaWoon on 2018-10-20.
// BAC(Blood Alcohol Content)
//

#include <stdio.h>
#define MR 0.73
#define WR 0.6

int main()
{
    int R, A, W, H;
    double BAC = 0;

    scanf("%d %d %d %d",&R, &A, &W, &H);

    if (R == 0)
    {
        BAC = (float) ((A * 5.14) / (MR * W) - (0.015 * H));
    }
    else
    {
        BAC = (float) ((A * 5.14) / (WR * W) - (0.015 * H));
    }

    if (BAC < 0)
        BAC = 0;

    printf("%.5f", BAC);

    return 0;
}