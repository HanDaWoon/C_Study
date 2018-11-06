//
// Created by HanDaWoon on 2018-11-06.
//

#include <stdio.h>
#include <string.h>

int pr_m(int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("-");
    }
    return 0;
}

int main()
{
    char input[30];
    int len;

    scanf("%s", input);

    len = (int) strlen(input);

    for (int i = 0; i < len; ++i)
    {
        pr_m(i);

        for (int j = 0; j <= len -1; ++j)
        {
            printf("%c", input[j]);
        }
        printf("\n");

    }
}