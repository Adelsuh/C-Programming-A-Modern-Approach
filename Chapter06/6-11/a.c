#include<stdio.h>
int main(void)
{
    int n, i, j;
    float e=1, fraction;
    printf("Enter a number to approximate e: ");
    scanf("%d", &n);
    for(i=1; i<=n; ++i){
        for(fraction=1, j=1;j<=i;++j) fraction/=j;
        e+=fraction;
    }
    printf("The approximation to e is: %f", e);
    return 0;
}
