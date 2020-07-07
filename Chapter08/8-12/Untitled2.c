#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char c;
    int v[26]={1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int sum;
    printf("Enter a word: ");
    for(sum=0;;) {
        c=getchar();
        if (c=='\n') break;
        c=toupper(c);
        sum+=v[c-'A'];
    }
    printf("Scrabble value: %d", sum);
    return 0;
}

