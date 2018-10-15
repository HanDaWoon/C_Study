#include <stdio.h>

int main() {
    float spd, fs, dl;

    scanf("%f %f", &spd, &fs);

    spd = (spd / 8);
    dl = (fs / spd);

    printf("%.2fsec", dl);

    return 0;
}