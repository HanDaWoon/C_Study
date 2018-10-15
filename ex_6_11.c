#include <stdio.h>

int N;

int main()
{
    int i = 0;

    scanf("%d", &N);

    int array[N];

    while (i < N)
    {
        scanf("%d", &array[i]);
        i += 1;
    }

    for (i--; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }

    return 0;
}