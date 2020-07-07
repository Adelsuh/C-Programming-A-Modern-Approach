#include <stdio.h>
int main(void)
{
    float x;
    printf("The value of x is:");
    scanf("%f", &x);
    printf("%f", ((((3*x+2)*x-5)*x-1)*x+7)*x-6);
    return 0;
}
