#include <stdio.h>
#include <string.h>

int main() {

    char str[20];
    int i=0;

    scanf("%s",str);

    while (i < strlen(str))
    {
        i++;
        printf("*%-*.*s*\n", (int) strlen(str), i, str);
    }

    return 0;

}