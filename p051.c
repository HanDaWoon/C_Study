//
// Created by HanDaWoon on 2018-10-20.
//


#include <stdio.h>
#define artichokes 2.05
#define beets 1.15
#define carrots 1.09
#define under5p_delivery_fee 6.50
#define under20p_delivery_fee 14.0
#define over20p_basic 14.0
#define over20p_rate 0.50

int main()
{
    int n, pnd = 0, pnd_sum = 0, i = 0;
    char obj;
    double money = 0;

    scanf("%d", &n);

    while(i < n)
    {
        scanf("%c %d", &obj, &pnd);
        switch (obj)
        {
            case 'a' :
                money += (artichokes * pnd);
                pnd_sum += pnd;
                i++;
                break;

            case 'b' :
                money += (beets * pnd);
                pnd_sum += pnd;
                i++;
                break;

            case 'c' :
                money += (carrots * pnd);
                pnd_sum += pnd;
                i++;
                break;

            default:break;
        }
    }
    if (money >= 100)
        money -= (money * 0.05);

    if (pnd_sum < 5)
        money += under5p_delivery_fee;
    else if (pnd_sum <= 20)
        money += under20p_delivery_fee;
    else
        money += over20p_basic + ((pnd_sum - 20) * over20p_rate) + 10;

    printf("%.2f", money);

    return 0;
}