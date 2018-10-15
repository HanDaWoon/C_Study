#include <stdio.h>

void print_minus(int n);

int main()
{
    char input_char;
    char lup_1, lup_2;

    scanf("%c", &input_char);

    for (lup_1 = 'A'; lup_1 <= input_char; lup_1++)
    {
        print_minus((int) (input_char - lup_1));

        for (lup_2 = 'A'; lup_2 < lup_1; lup_2++)
        {
            printf("%c", lup_2);
        }

        for (; 'A' <= lup_2; lup_2--)
        {
            printf("%c", lup_2);
        }
        printf("\n");
    }

    return 0;
}

void print_minus(int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("-");
    }
}