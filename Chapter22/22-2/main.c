#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;

    if((fp=fopen(argv[1], "r"))==NULL)
    {
        printf("%s can't be opened.\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp)) != EOF)
        putchar(toupper(ch));

    fclose(fp);

    return 0;
}
