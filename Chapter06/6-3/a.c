#include<stdio.h>
int main(void)
{
    int n, m, remainder, u, l;
    printf("Enter a fraction: ");
    scanf("%d/%d", &n, &m);
    u=n;
    l=m;
    for(;;){
        if (n==0) break;
        remainder=m%n;
        m=n;
        n=remainder;
    }
    printf("In lowest terms: %d/%d", u/m, l/m);
    return 0;
}

