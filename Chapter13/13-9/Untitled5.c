#include<stdio.h>
#include<ctype.h>
int compute_vowel_count(const char *sentence);
int main(void)
{
    int n=0, i=0;
    char ch[100];
    printf("Enter a sentence: ");
    gets(ch);
    while ((ch[i])!='\0')
    {
        switch (toupper(ch[i]))
        {
            case 'A': case 'E': case 'I': case 'O': case 'U':
            ++n; break;
            default: break;
        }
        i++;
    }
    printf("Your sentence contains %d vowels.", n);
    return 0;
}
