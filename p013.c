#include <stdio.h>

int main(void) {
    int a, b, c, d;

    scanf("%d %d %d %d", &a, &b, &c, &d);
    float sum = a + b + c + d;
    printf("%.2f%%", (d/sum)*100);

    return 0;
}