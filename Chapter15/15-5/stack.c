#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

#define STACK_SIZE 100

int cal[STACK_SIZE]={0};
int top=0;

void push(int i)
{
    if(top==STACK_SIZE) {printf("Expression is too complex"); exit(EXIT_SUCCESS);}
     else cal[top++]=i;
}
int pop(void)
{
    if(top==0) {printf("Not enough operands in expression"); exit(EXIT_SUCCESS);}
     else return cal[--top];
}
int result(void)
{
    return cal[--top];
}
