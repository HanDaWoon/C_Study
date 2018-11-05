//
// Created by HanDaWoon on 2018-11-05.
//
// NoI = Number of Items, AoI = Amount of Items

#include <stdio.h>
#define a 3500
#define b 1250
#define c 1150
#define d 2700
#define e 990
#define shipping_fee_under600 3000
#define shipping_fee_under2000_per_100g 550
#define shipping_fee_over2000_per_100g 500
#define sale_all_2m_3m 0.05
#define sale_all_over_3m 0.1

int main()
{
    char name;
    int NoI, AoI, sum_amount = 0, all_money, i = 0;
    int money = 0, shipping_fee, sale, billing;

    scanf("%d", &NoI);

    while (i < NoI)
    {
        scanf("%c %d", &name, &AoI);

        switch (name)
        {
            case 'a' :
                    money += (a * AoI);
                    sum_amount += AoI;
                    i++;
                    break;
            case 'b' :
                    money += (b * AoI);
                    sum_amount += AoI;
                    i++;
                    break;
            case 'c' :
                    money += (c * AoI);
                    sum_amount += AoI;
                    i++;
                    break;
            case 'd' :
                    money += (d * AoI);
                    sum_amount += AoI;
                    i++;
                    break;
            case 'e' :
                    money += (e * AoI);
                    sum_amount += AoI;
                    i++;
                    break;
            default:break;
        }
    }

    all_money = money;

    if (sum_amount < 6)
        shipping_fee = shipping_fee_under600;
    else if (sum_amount >= 6 && sum_amount < 20)
        shipping_fee = shipping_fee_under2000_per_100g * sum_amount;
    else
        shipping_fee = shipping_fee_over2000_per_100g * sum_amount;

    all_money += shipping_fee;

    if (all_money > 30000)
        sale = (int) (all_money * sale_all_over_3m);
    else if (all_money >= 20000 && all_money < 30000)
        sale = (int) (all_money * sale_all_2m_3m);
    else
        sale = 0;


    billing = all_money - sale;

    printf("%d %d %d %d", money, shipping_fee, sale, billing);

    return 0;
}