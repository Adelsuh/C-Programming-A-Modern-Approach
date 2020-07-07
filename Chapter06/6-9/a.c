#include <stdio.h>
int main(void)
{
    float loan, Interest, monthlyPayment;
    int payn, i;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &Interest);
    float monthlyInterest=Interest/12;
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);
    printf("Enter number of payments: ");
    scanf("%d", &payn);
    printf("Balance remaining after each payment: \n");
    for(i=1; i<=payn; ++i){printf("$%.2f\n", loan*(100+monthlyInterest)/100-monthlyPayment);
    loan=loan*(100+monthlyInterest)/100-monthlyPayment;}
    return 0;
}
