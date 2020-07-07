#include<stdio.h>
int main(void)
{
    int a, b, c, d, e, f, g, h, i, j, k;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k);
    printf("Check digit: %d", 9-(3*(a+c+e+g+i+k)+b+d+f+h+j-1)%10);
    return 0;
}
