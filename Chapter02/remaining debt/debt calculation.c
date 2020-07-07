#include <stdio.h>
int main(void)
{
    float loan, Interest, monthlyPayment;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &Interest);
    float monthlyInterest=Interest/12;
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);
    printf("Balance remaining after first payment: %.2f\n", loan*(100+monthlyInterest)/100-monthlyPayment);
    float Fstpay=loan*(100+monthlyInterest)/100-monthlyPayment;
    printf("Balance remaining after second payment: %.2f\n", Fstpay*(100+monthlyInterest)/100-monthlyPayment);
    float Scdpay=Fstpay*(100+monthlyInterest)/100-monthlyPayment;
    printf("Balance remaining after third payment: %.2f\n", Scdpay*(100+monthlyInterest)/100-monthlyPayment);
    return 0;
}
