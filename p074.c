//
// Created by HDW on 2018-11-21.
//

#include <stdio.h>
#include <limits.h>

int main()
{
    int N, input, s1 = INT_MAX, s2 = INT_MAX;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i)
    {
        scanf("%d", &input);

        if (input < s1)
            s1 = input;
        else if (input >= s1 && input < s2)
            s2 = input;
    }
    printf("%d", s2);

    return 0;
}