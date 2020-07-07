#include<stdio.h>
int main(void)
{
    int h, t, o;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &h, &t, &o);
    printf("The reversal is: %d%d%d", o, t, h);
    return 0;
}
