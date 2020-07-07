#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch;
    int num_sent=0;

    ch=getchar();
    while(ch!=EOF)
    {
        if (ch=='.' || ch=='?' || ch=='!')
        {
            ch=getchar();
            if (isspace(ch)) num_sent++;
        }
        else ch=getchar();
    }

    printf("Number of sentences: %d\n", num_sent);

    return 0;
}
