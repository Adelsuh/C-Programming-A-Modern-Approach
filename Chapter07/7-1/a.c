#include<stdio.h>
int main(void)
{
    int n;
    long i;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
        printf("%10ld%10ld\n", i, i*i);
    return 0;
}
//This notebook is a 32-bit machine.
