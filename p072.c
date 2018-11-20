//
// Created by HDW on 2018-11-21.
//

#include <stdio.h>

unsigned long long f(int);
int main()
{
    int n;

    while (scanf("%d", &n) == 1 && n >= 0)
    {
        printf("#%d: %llu\n", n, f(n));
    }

    return 0;
}

unsigned long long f(int n)
{
    unsigned long long tmp, front = 1, output = 1, cnt = 3;

    if (n == 0)
        return 0;

    else if (n <= 2)
        return 1;

    else
        while (cnt <= n)
        {
            tmp = output;
            output += front;
            front = tmp;
            cnt++;
        }
        return output;
}