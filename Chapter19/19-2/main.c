#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include"stackADT.h"

int main(void)
{
    Stack cal=create();
    char op, space;
    int c1, c2;
    for(;;){
        printf("Enter an RPN expression: ");
        for(;;){
            op=getchar();
            space=getchar();
            switch(op){
                case '0': push(cal, 0); break;
                case '1': push(cal, 1); break;
                case '2': push(cal, 2); break;
                case '3': push(cal, 3); break;
                case '4': push(cal, 4); break;
                case '5': push(cal, 5); break;
                case '6': push(cal, 6); break;
                case '7': push(cal, 7); break;
                case '8': push(cal, 8); break;
                case '9': push(cal, 9); break;
                case '+': c1=pop(cal); c2=pop(cal); push(cal, c2+c1); break;
                case '-': c1=pop(cal); c2=pop(cal); push(cal, c2-c1); break;
                case '*': c1=pop(cal); c2=pop(cal); push(cal, c2*c1); break;
                case '/': c1=pop(cal); c2=pop(cal); push(cal, c2/c1); break;
                case '=': printf("Value of Expression: %d\n", pop(cal)); goto again;
                default: exit(EXIT_SUCCESS);
            }
        }
        again: ;
    }
}
