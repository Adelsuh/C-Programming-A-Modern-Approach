#include<stdio.h>
#define L 100
void reverse(char *message);
int main(void)
{
    char tell[L]={' '};
    printf("Enter a message: ");
    gets(tell);
    printf("Reversal is: ");
    reverse(tell);
    return 0;
}
void reverse(char *message)
{
    char *p=message;
    while (*p) p++;
    for(--p;p>=message;p--) printf("%c", *p);
    printf("\n");
}
