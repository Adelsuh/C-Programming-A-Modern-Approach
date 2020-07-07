#include<stdio.h>
#include<string.h>
#include<ctype.h>
int compute_scrabble_value(char *word);
int main(void)
{
    char str[20];
    printf("Enter a word: ");
    scanf("%s", str);
    printf("Scrabble value: %d", compute_scrabble_value(str));
    return 0;
}
int compute_scrabble_value(char *word)
{
    int sum;
    char *p=word;
    for(sum=0;*p!='\0';p++) {
        switch(toupper(*p)){
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
    return sum;
}
