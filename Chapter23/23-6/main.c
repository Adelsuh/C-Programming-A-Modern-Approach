#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    while((ch=getchar())!=EOF)
    {
        if (iscntrl(ch) && ch!='\n') printf("?");
        else printf("%c", ch);
    }
    return 0;
}
