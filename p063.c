//
// Created by HanDaWoon on 2018-11-12.
//

#include <stdio.h>
#include <ctype.h>

int main()
{
    int upper = 0, lower = 0;
    int input;

    while ((input = getchar()) != EOF)
    {
        if (isupper(input))
            upper++;
        else if (islower(input))
            lower++;
    }

    printf("%d %d", upper, lower);

    return 0;
}