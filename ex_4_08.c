#include <stdio.h>
#define lt_gal 3.785
#define km_mile 1.609

int main() {
    float mile_dis, gal_used, mile_gal, lt_100km;

    scanf("%f %f", &mile_dis, &gal_used);

    mile_gal = mile_dis / gal_used;
    lt_100km = (float) (100 / mile_gal * lt_gal / km_mile);

    printf("%.1f mpg or %.1f liters / 100Km.", mile_gal, lt_100km);
}