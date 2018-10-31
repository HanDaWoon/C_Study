#include <stdio.h>

int Temperatures(double f)
{
    double c, k;

    c = (5.0 / 9.0) * (f - 32.0);
    k = c + 273.16;

    printf("Fahrenheit: %.2f = Celsius: %.2f = Kelvin: %.2f", f, c, k);
}

int main()
{
    double f;

    scanf("%lf", &f);

    Temperatures(f);

    return 0;
}
