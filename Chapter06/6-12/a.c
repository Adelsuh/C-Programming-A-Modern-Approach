#include<stdio.h>
int main(void)
{
    int i, j;
    float e=1, fraction, E;
    printf("Enter a number to limit added terms: ");
    scanf("%f", &E);
    for(i=1;;++i){
        for(fraction=1, j=1;j<=i;++j) fraction/=j;
        if (fraction<E) break;
        e+=fraction;
    }
    printf("The approximation to e is: %f", e);
    return 0;
}

