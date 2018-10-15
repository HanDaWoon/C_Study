#include <stdio.h>


int main()
{
    char sibgan[15] = "01234567890";
    char sibizi[15] = "ABCDEFGHIJKL";
    int n;

    scanf("%d",&n);

    n += 56;
    printf("%d\n", n);

    n %= 60;
    printf("%d\n", n);

    printf("%d, %d\n", n%12, n%10);

    printf("%c%c\n", sibizi[n%12], sibgan[n%10]);
    printf("%f %f", (double) (20 % 12), (double) (20 / 12));
    return 0;
}