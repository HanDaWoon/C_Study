#include <stdio.h>
#define inch_cm 2.54

int main() {
    float height, cm_inch;

    scanf("%f", &height);

    cm_inch = (float) (height / inch_cm);

    printf("%.1f cm is %f inch", height, cm_inch);

    return 0;
}