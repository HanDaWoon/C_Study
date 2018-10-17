#include <stdio.h>
#include <math.h>

int check_prime(int n) {
    int i, sqr;
    sqr = (int)sqrt(n);
    for (i = 2; i <= sqr; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int N, cnt = 0;

    scanf("%d", &N);

    for (int i = 2; i < N; ++i)
    {
        if (check_prime(i))
            cnt++;
    }

    printf("%d", cnt);

    return 0;
}