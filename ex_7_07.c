#include <stdio.h>
#define base_pay_per_hour 10.00
#define overtime_hours 40
#define overtime_multiplier 1.5
#define income_tax_limit1 300
#define income_tax_limit2 450
#define income_tax_rate1 0.15
#define income_tax_rate2 0.20
#define income_tax_rate3 0.25
#define taxes_300 45
#define taxes_450 30

int main()
{
    int working_hours;
    double gross_pay, taxes, net_pay;

    scanf("%d", &working_hours);

    if (working_hours >= overtime_hours)
    {
        gross_pay = (overtime_hours * base_pay_per_hour) + (working_hours - overtime_hours) * (base_pay_per_hour * overtime_multiplier);
    }
    else
    {
        gross_pay = base_pay_per_hour * working_hours;
    }

    if (gross_pay <= income_tax_limit1)
    {
        taxes = gross_pay * income_tax_rate1;
    }
    else if (gross_pay <= income_tax_limit2)
    {
        taxes = taxes_300 + ((gross_pay - 300) * income_tax_rate2);
    }
    else
    {
        taxes = taxes_300 + taxes_450 + ((gross_pay - 450) * income_tax_rate3);
    }

    net_pay = gross_pay - taxes;

    printf("%.2lf %.2lf %.2lf", gross_pay, taxes, net_pay);

    return 0;

}