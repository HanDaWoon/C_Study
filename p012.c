#include <stdio.h>
#include <strings.h>

int main(void) {
    char namef[31];
    char nameb[31];
    int age;

    scanf("%s %s", namef, nameb);
    scanf("%d", &age);

    int len = strlen(namef) + strlen(nameb);
    printf("%d %d", len, age);

    return 0;
}