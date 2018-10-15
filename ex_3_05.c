#include <stdio.h>
#define years_second 3.156*10e7

int main() {
    int age;
    float seconds;

    scanf("%d", &age);

    seconds = (float) (age * years_second);

    printf("%d years is %.2f seconds", age, seconds);

    return 0;
}