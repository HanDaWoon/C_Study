#include <stdio.h>
#define one_week 7;

int main()
{
    int input_days, weeks, days;

    scanf("%d", &input_days);

    while (input_days > 0)
    {
        weeks = input_days / one_week;
        days = input_days % one_week;

        printf("%d일은 %d주, %d일입니다.\n",input_days, weeks, days);

        scanf("%d", &input_days);
    }

    return 0;
}