//(a)
#include<stdio.h>
#define L 100
int main(void)
{
    char message[L]={' '};
    char *p;
    printf("Enter a message: ");
    for(p=&message[0];(p<&message[L])&&(*(p-1)!='\n');p++) *p=getchar();
    printf("Reversal is: ");
    p--;
    for(--p;p>=&message[0];p--) printf("%c", *p);
    printf("\n");
    return 0;
}
