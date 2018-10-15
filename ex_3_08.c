#include <stdio.h>

int main(void) {
    float cup;

    scanf("%f", &cup);

    float pint = cup/2;
    float ounces = 8 * cup;
    float tablespoons = 2 * ounces;
    float teaspoons = 3 * tablespoons;

    printf("%f cups are equivalent to each of the following:\n", cup);
    printf("%f pints\n", pint);
    printf("%f tablespoons\n", tablespoons);
    printf("%f teaspoons\n", teaspoons);

    return 0;
}