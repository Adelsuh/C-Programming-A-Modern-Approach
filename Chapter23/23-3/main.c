#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch, word_fst=1;

    while((ch=getchar())!=EOF)
    {
        if (isspace(ch))
        {
            putchar(ch);
            word_fst=1;
        }
        else if (word_fst)
        {
            putchar(toupper(ch));
            word_fst=0;
        }
        else putchar(ch);
    }

    return 0;
}
