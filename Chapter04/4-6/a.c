#include<stdio.h>
int main(void)
{
    int a, b, c, d, e, f, g, h, i, j, k, l;
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);
    printf("Check digit: %d", 9-(a+c+e+g+i+k+3*(b+d+f+h+j+l)-1)%10);
    return 0;
}
