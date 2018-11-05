//
// Created by HanDaWoon on 2018-11-05.
//

#include <stdio.h>

int main()
{
    int second, minute, hour, day, input, time;

    while (scanf("%d", &input) == 1 && input > 0)
    {
        time = input;

        second = time % 60;
        time = time / 60;
        minute = time % 60;
        time = time / 60;
        hour = time % 24;
        day = time / 24;

        printf("%d second(s) = %d day(s) %d hour(s) %d minute(s) and %d second(s)\n", input, day, hour, minute, second);
    }

    return  0;

}