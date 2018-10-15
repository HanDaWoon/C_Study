#include <stdio.h>

int main()
{
    float f, c, K;

    scanf("%f", &f);

    c = (float) (5.0 / 9.0 * (f - 32.0));
    K = (float) (c + 273.16);

    printf("Fahrenheit: %.2f = Celsius: %.2f = Kelvin: %.2f", f, c, K);

    return 0;
}