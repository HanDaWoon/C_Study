#include <stdio.h>

int main()
{
    long a, b;

    scanf("%ld %ld",&a,&b);

    a = ( a > 0) ? a : -a;
    b = ( b > 0) ? b : -b;

    while (a != b)
    {
        if(a > b)
            a -= b;
        else
            b -= a;
    }

    printf("%ld", a);

    return 0;
}