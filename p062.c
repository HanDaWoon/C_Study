//
// Created by HanDaWoon on 2018-11-12.
//

#include <stdio.h>

int main()
{
    int space = 0, newline = 0, other = 0;
    int input;

    while ((input = getchar()) != EOF)
    {
        if (input == ' ')
            space++;
        else if (input == '\n')
            newline++;
        else
            other++;
    }

    printf("%d %d %d", space, newline, other);

    return 0;
}