#include<stdio.h>
#include"stackADT.h"

int main(void)
{
    Stack n=create();
    int answer;
    printf("Enter parentheses and/or braces: ");
    answer=check_nested(n);
    if(answer==1) printf("Parentheses/braces are nested properly");
     else if (answer==0) printf("Parentheses/braces are not nested properly");
      else if (answer==2) printf("Stack overflow");
    return 0;

}
