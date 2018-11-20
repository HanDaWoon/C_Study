//
// Created by HDW on 2018-11-19.
//

#include <stdio.h>
#define plus '+'

void chline(char, int, int);

int main(void)
{
    char ch;
    int i, j;

    scanf("%c %d %d", &ch, &i, &j);

    chline(plus, 1, i - 1);
    chline(ch, i, j);
    chline(plus, 1, i - 1);

    return 0;
}

void chline(char ch, int i, int j)
{
    for (int b = i; b <= j; b++)
            putchar(ch);
}