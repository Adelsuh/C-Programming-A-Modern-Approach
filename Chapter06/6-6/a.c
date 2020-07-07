#include<stdio.h>
int main(void)
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1;4*i*i<=n;++i) printf("%d\n", 4*i*i);
    return 0;
}
