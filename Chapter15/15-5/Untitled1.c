#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

int main(void)
{
    char op, space;
    int c1, c2;
    for(;;){
        printf("Enter an RPN expression: ");
        for(;;){
            op=getchar();
            space=getchar();
            switch(op){
                case '0': push(0); break;
                case '1': push(1); break;
                case '2': push(2); break;
                case '3': push(3); break;
                case '4': push(4); break;
                case '5': push(5); break;
                case '6': push(6); break;
                case '7': push(7); break;
                case '8': push(8); break;
                case '9': push(9); break;
                case '+': c1=pop(); c2=pop(); push(c2+c1); break;
                case '-': c1=pop(); c2=pop(); push(c2-c1); break;
                case '*': c1=pop(); c2=pop(); push(c2*c1); break;
                case '/': c1=pop(); c2=pop(); push(c2/c1); break;
                case '=': printf("Value of Expression: %d\n", result()); goto again;
                default: exit(EXIT_SUCCESS);
            }
        }
        again: ;
    }
}
