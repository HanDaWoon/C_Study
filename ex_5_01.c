#include <stdio.h>
#define one_minute 60;
//const int one_minute = 60;

int main()
{
    int input_minutes, minutes, seconds;

    scanf("%d", &input_minutes);

    while (input_minutes > 0)
    {
        minutes = input_minutes / one_minute;
        seconds = input_minutes % one_minute;

        printf("Time in minute(s): %d = %d hour(s) and %d minute(s)\n",input_minutes, minutes, seconds);

        scanf("%d", &input_minutes);
    }

    return 0;
}