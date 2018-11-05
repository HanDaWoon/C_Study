//
// Created by HanDaWoon on 2018-11-05.
//

#include <stdio.h>

int main()
{
    char input;
    int check1 = 0, check2 = 0, cnt = 0;

    while ((input = (char) getchar()) != '#')
    {
        if (input == 'e')
            check1 = 1;
        else if (input == 'a' && check1 == 1)
            check1 = 2;
        else if (input == 'r' && check1 == 2)
        {
            cnt++;
            check1 = 0;
        }
        else
            check1 = 0;

        if (input == 'o')
            check2 = 1;

        else if (input == 'v' && check2 == 1)
        {
            cnt++;
            check2 = 0;
        }
        else
            check2 = 0;
    }

    printf("%d", cnt);

    return 0;
}
