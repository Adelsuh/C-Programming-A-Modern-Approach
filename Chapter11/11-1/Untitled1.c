#include <stdio.h>
void pay_amount (int dollars, int *twenties, int *tens, int *fives, int *ones);
int main(void)
{
    int dollar, twenty, ten, five, one;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollar);
    pay_amount(dollar, &twenty, &ten, &five, &one);
    printf("20 dollar bills: %d\n", twenty);
    printf("10 dollar bills: %d\n", ten);
    printf("5 dollar bills: %d\n", five);
    printf("1 dollar bills: %d\n", one);
    return 0;
}
void pay_amount (int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    *twenties=dollars/20;
    *tens=(dollars-20**twenties)/10;
    *fives=(dollars-20**twenties-10**tens)/5;
    *ones=dollars-20**twenties-10**tens-5**fives;
}
