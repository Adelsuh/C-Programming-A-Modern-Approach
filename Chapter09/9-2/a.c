#include<stdio.h>
float tax_cal(float income);
int main(void)
{
    float income, tax;
    printf("Enter taxable income: $");
    scanf("%f", &income);
    tax=tax_cal(income);
    printf("You have $%.2f of tax due.", tax);
    return 0;
}
float tax_cal(float income)
{
    float tax;
    if (income<750)
        tax=income*0.01;
    else if (income<2250)
        tax=7.50+(income-750)*0.02;
    else if (income<3750)
        tax=37.5+(income-2250)*0.03;
    else if (income<5250)
        tax=82.5+(income-3750)*0.04;
    else if (income<7000)
        tax=142.5+(income-5250)*0.05;
    else tax=230.00+(income-7000)*0.06;
    return tax;
}
