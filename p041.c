#include <stdio.h>
#include <math.h>

void printDivisors(long n)
{
    long cnt = 0;

    for (int i=1; i <= sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
            {
                cnt += 1;
            }
            else
            {
                cnt += 2;
            }

        }
    }

    printf("%ld", cnt - 2);
}

int main()
{
    long N;
    scanf("%ld", &N);
    printDivisors(N);
    return 0;
} 