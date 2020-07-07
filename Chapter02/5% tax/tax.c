#include <stdio.h>
int main(void)
{
    float money;
    printf("Please enter an amount in dollars:");
    scanf("%f", &money);
    printf("With 5 percent tax, that is %.2f\n", 105.0f/100.0f*money);
    printf("The amount of tax is: %.2f", money*0.05);
    return 0;
}
