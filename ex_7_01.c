#include <stdio.h>
#define end '#'

int main(void)
{
    char input;
    unsigned int space = 0, newline = 0, namuji = 0;

    while((input = getchar()) != end)
    {
        if (input == ' ')
            space++;
        else if (input == '\n')
            newline++;
        else
            namuji++;
    }
    printf("%d %d %d\n", space, newline, namuji);


    return 0;
}