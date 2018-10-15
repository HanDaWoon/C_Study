#include <stdio.h>

int main(void) {
    float x;

    scanf("%f", &x);

    printf("%e", x * 950 / 3.0e-23);

    return 0;
}