#include <stdio.h>
#include <math.h>

int main(void)
{
    double orig_amount, int_rate, result;
    int num_years;

    printf("Enter original amount deposited: ");
    scanf("%lf", &orig_amount);
    printf("Enter interest rate: ");
    scanf("%lf", &int_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    result=orig_amount*exp(int_rate*num_years);
    printf("The resulting account balance is: %lf", result);

    return 0;
}
