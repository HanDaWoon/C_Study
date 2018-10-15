#include <stdio.h>

int main()
{
    int n, k;
    char alpha[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            k = n - j - 1;
            printf("%c", alpha[k]);
        }
        printf("\n");
    }
    return 0;

}