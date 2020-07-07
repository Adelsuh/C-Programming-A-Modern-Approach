#include<stdio.h>
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);
int main(void)
{
    int n, d, sn, sd;
    printf("Enter a fraction: ");
    scanf("%d/%d", &n, &d);
    reduce(n, d, &sn, &sd);
    if (sd==1) printf("In lowest terms: %d", sn);
        else printf("In lowest terms: %d/%d", sn, sd);
    return 0;
}
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
    int u=numerator, l=denominator;
    int remainder;
    for(;;){
        if (numerator==0) break;
        remainder=denominator%numerator;
        denominator=numerator;
        numerator=remainder;
    }
    *reduced_numerator=u/denominator;
    *reduced_denominator=l/denominator;
}
