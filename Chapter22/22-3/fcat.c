#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    int i;

    for(i=1; i<argc; i++)
    {
        if ((fp=fopen(argv[i], "r"))==NULL)
        {
            printf("%s can't be opened.", argv[i]);
            exit(EXI_FAILURE);
        }

        while ((ch = getc(fp)) != EOF) printf("%c", ch);

        fclose(fp);
    }

    return 0;
}
