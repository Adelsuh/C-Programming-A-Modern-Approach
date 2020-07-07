#include<stdio.h>
#include<stdlib.h>
#include"stackADT.h"
#define SIZE 100

struct stack_type {
    char nest[SIZE];
    int top;
};

void push(Stack s, char i)
{
    s->nest[s->top++]=i;
}
void pop(Stack s)
{
    --s->top;
}
int check_nested(Stack s)
{
    char porb;
    int answer=1;
    for(;porb!='\n';){
        porb=getchar();
        switch(porb)
        {
            case '(': case '{': if (s->top==SIZE) return 2; push(s, porb); break;
            case ')': pop(s); if (s->nest[s->top]=='(') break;
                                else answer=0;
            case '}': pop(s); if (s->nest[s->top]=='{') break;
                                else answer=0;
        }
    }
    if (answer==0) return 0;
    if (s->top!=0) return 0;
     else return 1;
}

Stack create(void)
{
    Stack s = malloc(sizeof(struct stack_type));
    if (s==NULL) terminate("COULDN'T CREATE");
    s->top=0;
    return s;
}

static void terminate(const char *message)
{
    printf("%s\n", message);
    return;
}
