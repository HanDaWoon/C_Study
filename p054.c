//
// Created by HanDaWoon on 2018-11-05.
//

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, check = false;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int j = n-1; j >= 0; j--)
    {
        if (array[j] % 3 == 0)
        {
            printf("%d ", array[j]);
            check = true;
        }

    }
    if (check != true)
        printf("NO");

    return 0;
}