#include<stdio.h>
#define SIZE 100
char nest[SIZE];
int top=0;

void push(char i);
void pop(char i);
int check_nested(void);

int main(void)
{
    int answer;
    printf("Enter parentheses and/or braces: ");
    answer=check_nested();
    if(answer==1) printf("Parentheses/braces are nested properly");
     else if (answer==0) printf("Parentheses/braces are not nested properly");
      else if (answer==2) printf("Stack overflow");
    return 0;

}

void push(char i)
{
    nest[top++]=i;
}
void pop(char i)
{
    --top;
}
int check_nested(void)
{
    char porb;
    int answer=1;
    for(;porb!='\n';){
        porb=getchar();
        switch(porb)
        {
            case '(': case '{': if (top==SIZE) return 2; push(porb); break;
            case ')': pop(porb); if (nest[top]=='(') break;
                                else answer=0;
            case '}': pop(porb); if (nest[top]=='{') break;
                                else answer=0;
        }
    }
    if (answer==0) return 0;
    if (top!=0) return 0;
     else return 1;
}
