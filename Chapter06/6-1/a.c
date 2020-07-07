#include<stdio.h>
int main(void)
{
    float max=0, num;
    for(;;){
        printf("Enter a number: ");
        scanf("%f", &num);
        if (num>max) max=num;
        if (num==0) break;
    }
    printf("\nThe largest number entered was %.4f", max);
    return 0;
}

