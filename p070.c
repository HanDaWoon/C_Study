//
// Created by HDW on 2018-11-20.
//

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int check_letter(char);
int main()
{
    char input;

    while ((input = (char) getchar()) != EOF)
    {
        if (check_letter(input) == true)
            printf("%c is not a letter.\n", input);
        else if (check_letter(input) != false)
            printf("%c is a letter #%d.\n", input, check_letter(input));
    }
    return 0;
}

int check_letter(char input)
{
    if (isalpha(input))
        return (tolower(input) - 'a' + 1);
//        return isupper(input) ? (input - 'A' + 1) : (input - 'a' + 1);
    else if (isspace(input))
        return false;
    else if (iscntrl(input))
        return false;
    else
        return true;
}