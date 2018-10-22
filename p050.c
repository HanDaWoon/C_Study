//
// Created by HanDaWoon on 2018-10-20.
//


#include <stdio.h>
#define rate 0.15
#define over_rate 0.28
#define single 17850
#define household 23900
#define married_sum 29750
#define married_seperately 14875

int main()
{
    int division;
    float money;
    double tax;

    scanf("%d %f", &division, &money);

    switch (division)
    {
        case 1 :
            if (money > single)
            {
                tax = (single * rate) + over_rate * (money - single);
            } else
                tax = money * rate;
            break;

        case 2 :
            if (money > household)
            {
                tax = (household * rate) + over_rate * (money - household);
            } else
                tax = money * rate;
            break;

        case 3 :
            if (money > married_sum)
            {
                tax = (married_sum * rate) + over_rate * (money - married_sum);
            } else
                tax = money * rate;
            break;

        case 4 :
            if (money > married_seperately)
            {
                tax = (married_seperately * rate) + over_rate * (money - married_seperately);
            } else
                tax = money * rate;
            break;

        default:break;
    }

    printf("%.2f", tax);
    return 0;
}