#include <stdio.h>
int main(void)
{
    int digit_seen[10]={0};
    int digit, i=0, j=0;
    long n;
    printf("Enter a number: ");
    scanf("%ld", &n);
    while (n>0){
       digit=n%10;
       if (digit_seen[digit]==1)
            {i++; digit_seen[digit]=2;}
    if (digit_seen[digit]==0) digit_seen[digit]=1;
    n/=10;
    }
    if (i>0)
        {printf("Repeated digit(s): \n");
        while (j<10){if (digit_seen[j]==2) printf("%d", j); j++;}}
    else
        printf("No repeated digit\n");
    return 0;
}
