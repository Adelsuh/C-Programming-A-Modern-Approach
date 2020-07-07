#include<stdio.h>
int main(void)
{
    int num1, denom1, num2, denom2;
    char ch;
    printf("Enter two fractions seperated by +, -, *, or /: ");
    scanf("%d/%d%c%d/%d", &num1, &denom1, &ch, &num2, &denom2);
    switch(ch)
    {
        case '+': printf("The sum is %d/%d", num1*denom2+num2*denom1, denom1*denom2); break;
        case '-': printf("The subtraction is %d/%d", num1*denom2-num2*denom1, denom1*denom2); break;
        case '*': printf("The multiplication is %d/%d", num1*num2, denom1*denom2); break;
        case '/': printf("The division is %d/%d", num1*denom2, num2*denom1); break;
        default: printf("ERROR-Operator Not Valid"); break;
    }
    return 0;
}

