#include <stdio.h>

int main(void) {
    char namef[10], nameb[10];
    int a, b, c;
    float sum, average;

    scanf("%s %s", namef, nameb);
    scanf("%d %d %d", &a, &b, &c);

    sum = a+b+c;
    average = sum/3;

    printf("\"%-23s %s\" %8.1f", namef, nameb, average);

    return 0;
}