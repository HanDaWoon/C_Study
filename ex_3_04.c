#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float x;
    if (scanf("%f", &x) == 1){
        printf("Fixed-point notation: %f\n", x);
        printf("Exponential notation: %e\n", x);
        printf("p notation: %a\n", x);
    }
    else
        exit(1);

    return 0;
}
