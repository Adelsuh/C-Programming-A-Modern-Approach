#include <stdio.h>
int main(void)
{
    int dollar;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollar);
    printf("20 dollar bills: %d\n", dollar/20);
    int twenty=dollar/20;
    printf("10 dollar bills: %d\n", (dollar-20*twenty)/10);
    int ten=(dollar-20*twenty)/10;
    printf("5 dollar bills: %d\n", (dollar-20*twenty-10*ten)/5);
    int five=(dollar-20*twenty-10*ten)/5;
    printf("1 dollar bills: %d\n", dollar-20*twenty-10*ten-5*five);
    return 0;
}
