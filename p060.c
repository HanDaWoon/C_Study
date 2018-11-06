//
// Created by HanDaWoon on 2018-11-06.
//

#include <stdio.h>

int main()
{
    char input;
    int rcnt = 0, gcnt = 0, bcnt = 0;

    while ((input = (char) getchar()) && input != '\n')
    {
        switch (input)
        {
            case 'R' :
                rcnt++;
                break;
            case 'G' :
                gcnt++;
                break;
            case 'B' :
                bcnt++;
                break;
            default:break;
        }
    }

    printf("%d %d %d", rcnt, gcnt, bcnt);

    return 0;
}