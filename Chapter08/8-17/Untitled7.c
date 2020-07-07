#include<stdio.h>
int main(void)
{
    int n, i, j, insert=1;
    printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.");
    printf("\nEnter size of magic square: ");
    scanf("%d", &n);
    int ms[99][99];
    for(i=0, j=(n-1)/2;insert<=n*n;insert++, i=(i-1+n)%n, j=(j+1)%n) {if (ms[i][j]!=0) {i=(i+2)%n; j=(j-1+n)%n;} ms[i][j]=insert;}
    for(i=0;i<n;i++){for(j=0;j<n;j++) printf("%3d", ms[i][j]); printf("\n");}
    return 0;
}
