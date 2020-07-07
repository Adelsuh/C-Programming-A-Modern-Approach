#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char c;
    int sum;
    printf("Enter a word: ");
    for(sum=0;;) {
        c=getchar();
        if (c=='\n') break;
        c=toupper(c);
        switch(c){
        case 'D': case 'G':
            sum+=2;
            break;
        case 'B': case 'C': case 'M': case 'P':
            sum+=3;
            break;
        case 'F': case 'H': case 'V': case 'W': case 'Y':
            sum+=4;
            break;
        case 'K':
            sum+=5;
            break;
        case 'J': case 'X':
            sum+=8;
            break;
        case 'Q': case 'Z':
            sum+=10;
            break;
        default: sum+=1; break;}
    }
    printf("Scrabble value: %d", sum);
    return 0;
}
