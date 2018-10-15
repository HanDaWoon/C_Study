#include <stdio.h>
#define ft 0.03281
#define in 0.3937

int main()
{
    float cm;

    printf("센티미터 단위로 키를 입력하시오: ");
    scanf("%f", &cm);

    while (cm > 0)
    {
        printf("%.1f센티미터는 %.f피트, %.1f인치입니다.\n", cm, ft * cm, in * cm);
        printf("센티미터 단위로 키를 입력하시오(끝내려면 <= 0): ");
        scanf("%f", &cm);
    }

    printf("안녕!");

    return 0;
}