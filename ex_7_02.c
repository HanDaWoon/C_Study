#include <stdio.h>
#define end 0

int main()
{
    long input;
    long jjacksu = 0, holsu = 0, jjacksu_sum = 0, holsu_sum = 0;
    double jjacksu_avg, holsu_avg;

    while (scanf("%ld", &input) == 1 && input != end)
    {
        if (input % 2 == 0)
        {
            jjacksu++;
            jjacksu_sum += input;
        }
        else
        {
            holsu++;
            holsu_sum += input;
        }
    }

    jjacksu_avg = jjacksu_sum / (float) jjacksu;
    holsu_avg = holsu_sum / (float) holsu;

    if (jjacksu == 0)
    {
        jjacksu_avg = 0;
    }
    if (holsu == 0)
    {
        holsu_avg = 0;
    }

    printf("%ld %.2f %ld %.2f", jjacksu, jjacksu_avg + 0.001, holsu,holsu_avg);

    return 0;
}