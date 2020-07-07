#include<stdio.h>
void create_magic_square(int n, char magic_square[99][99]);
void print_magic_square(int n, char magic_square[99][99]);
int main(void)
{
    int n;
    printf("This program creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.");
    printf("\nEnter size of magic square: ");
    scanf("%d", &n);
    int ms[99][99];
    create_magic_square(n, ms);
    print_magic_square(n, ms);
    return 0;
}
void create_magic_square(int n, char magic_square[99][99])
{
    int i, j, insert=1;
    for(i=0, j=(n-1)/2;insert<=n*n;insert++, i=(i-1+n)%n, j=(j+1)%n)
        {if (magic_square[i][j]!=0) {i=(i+2)%n; j=(j-1+n)%n;} magic_square[i][j]=insert;}
    return;
}
void print_magic_square(int n, char magic_square[99][99])
{
    int i, j;
    for(i=0;i<n;i++){for(j=0;j<n;j++) printf("%3d", magic_square[i][j]); printf("\n");}
    return;
}
