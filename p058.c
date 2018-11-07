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

        for (int j = i; j < len -1; ++j)
        {
            printf("%c", input[j]);
        }
        for (int k = len - 1; k >= i; --k)
        {
            printf("%c", input[k]);
        }

        pr_m(i);

        printf("\n");
    }

    return 0;
}