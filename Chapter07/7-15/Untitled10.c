#include<stdio.h>
int main(void)
{
    int x, c;
    int factorial=1;//change into different types to test, was the challenge
    printf("Enter a positive integer: ");
    scanf("%d", &x);
    for(c=1;c<=x;++c){
        factorial*=c;
    }
    printf("Factorial of %d: %d", x, factorial);
    return 0;
}
