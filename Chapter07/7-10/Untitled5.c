#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char ch;
    int n=0;
    printf("Enter a sentence: ");
    while ((ch=getchar())!='\n')
    {
        ch=toupper(ch);
        switch (ch)
        {
            case 'A': case 'E': case 'I': case 'O': case 'U':
            ++n; break;
            default: break;
        }
    }
    printf("Your sentence contains %d vowels.", n);
    return 0;
}
