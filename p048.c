#include <stdio.h>

int main()
{
    char in[50];
    int tmp = 0, i = 0;

    scanf("%s", in);

    while (in[i] != '\0')
    {
        if (in[i] == '(')
            tmp++;
        else if (in[i] == ')')
        {
            tmp--;
            if (tmp < 0)
                break;
        }

        i++;
    }

    if (tmp == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}