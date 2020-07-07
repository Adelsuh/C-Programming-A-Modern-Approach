#include <stdio.h>
int main(void)
{

    int digit, i, j;
    long n=1;
    for(;;){
    int digit_seen[10]={0}; i=0; j=0;
    printf("Enter a number(Enter 0 to terminate): ");
    scanf("%ld", &n);
    if (n==0) break;
    while (n>0){
       digit=n%10;
       if (digit_seen[digit]==1)
            {i++; digit_seen[digit]=2;}
    if (digit_seen[digit]==0) digit_seen[digit]=1;
    n/=10;
    }
    if (i>0)
        {printf("Repeated digit(s): ");
        while (j<10){if (digit_seen[j]==2) printf("%d ", j); j++;}
        printf("\n");}
    else
        printf("No repeated digit\n");}
    return 0;
}
