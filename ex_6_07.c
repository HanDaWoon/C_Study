#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];

    scanf("%s", input);

    for (int i = (int) (strlen(input) - 1); i >= 0; i--)
    {
        printf("%c", input[i]);
    }

    printf("\n");

    return 0;
}