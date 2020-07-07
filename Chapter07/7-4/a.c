#include<stdio.h>
int main(void)
{
    char c;
    printf("Enter phone number: ");
    for(;;) {c=getchar();
    switch(c){
        case 65: case 66: case 67:
        printf("2"); break;
        case 68: case 69: case 70:
        printf("3"); break;
        case 71: case 72: case 73:
        printf("4"); break;
        case 74: case 75: case 76:
        printf("5"); break;
        case 77: case 78: case 79:
        printf("6"); break;
        case 80: case 82: case 83:
        printf("7"); break;
        case 84: case 85: case 86:
        printf("8"); break;
        case 87: case 88: case 89:
        printf("9"); break;
        default: putchar(c); break;}

    }
}
