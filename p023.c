#include <stdio.h>

int main()
{
    int H, W, N, R_num;

    scanf("%d %d %d", &H, &W, &N);

    if (N%H == 0)
    {
        R_num = H * 100 + (N / H);
    }
    else
    {
        R_num = (N % H) *100 + (N / H) + 1;
    }

    printf("%d", R_num);
    return 0;
}