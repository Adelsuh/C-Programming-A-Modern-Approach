#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include"stackADT.h"

#define STACK_SIZE 100

struct stack_type
{
    int contents[STACK_SIZE];
    int top;
};

void push(Stack s, int i)
{
    if(s->top==STACK_SIZE) {printf("Expression is too complex"); exit(EXIT_SUCCESS);}
     else s->contents[s->top++]=i;
}
int pop(Stack s)
{
    if(s->top==0) {printf("Not enough operands in expression"); exit(EXIT_SUCCESS);}
     else return s->contents[--s->top];
}

Stack create(void)
{
    Stack s = malloc(sizeof(struct stack_type));
    s->top=0;
    return s;
}
