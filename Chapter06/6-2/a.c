#include<stdio.h>
int main(void)
{
    int n, m, remainder;
    printf("Enter two integers: ");
    scanf("%d %d", &n, &m);
    for(;;){
        if (n==0) break;
        remainder=m%n;
        m=n;
        n=remainder;
    }
    printf("Greatest common divisor: %d", m);
    return 0;
}

