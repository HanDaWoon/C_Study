#include <stdio.h>
#include <string.h>

int main() {
    char namef[30], nameb[30];
    int f, b;

    scanf("%s %s", namef, nameb);

    f = (int) strlen(namef);
    b = (int) strlen(nameb);

    printf("%s %s\n", namef, nameb);
    printf("%*lu %*lu\n", f, strlen(namef), b, strlen(nameb));
    printf("%s %s\n", namef, nameb);
    printf("%-*lu %-*lu", f, strlen(namef), b, strlen(nameb));
}