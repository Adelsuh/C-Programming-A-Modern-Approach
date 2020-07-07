#include<stdio.h>
double pn_cal(double x);
int main(void)
{
    double n;
    printf("Enter value x: ");
    scanf("%lf", &n);
    printf("The value of the polynomial '3x^5+2x^4-5x^3-x^2+7x-6' is: %lf", pn_cal(n));
    return 0;
}
double pn_cal(double x)
{
    return 3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
}
