#include <stdio.h>

#define end '#'

int main(void)
{
    char input;
    int count = 0, check = 0;

    while ((input = (char) getchar()) != end)
    {
        if (input == 'e')
        {
            check = 1;
        }
        else if (input == 'i')
        {
            if (check == 1)
                count++;
            check = 0;
        }
        else
        {
            check = 0;
        }
    }

    printf("%d", count);

    return 0;
}