//(a)
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int num=0;

    if((fp=fopen(argv[1], "r"))==NULL)
    {
        printf("%s can't be opened.\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while(getc(fp)!=EOF) num++;

    printf("Number of characters in file %s: %d", argv[1], num);
    fclose(fp);

    return 0;
}
*/

//(b)
/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int num=0, was_space=1;
    char ch;

    if((fp=fopen(argv[1], "r"))==NULL)
    {
        printf("%s can't be opened.\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while((ch=getc(fp))!=EOF)
    {
        if (isspace(ch)) was_space=1;
            else if(was_space) {num++; was_space=0;}
    }

    printf("Number of words in file %s: %d", argv[1], num);
    fclose(fp);

    return 0;
}
*/

//(c)

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    int num=1;
    char ch;

    if((fp=fopen(argv[1], "r"))==NULL)
    {
        printf("%s can't be opened.\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while((ch=getc(fp))!=EOF) if(ch=='\n') num++;

    printf("Number of lines in file %s: %d", argv[1], num);
    fclose(fp);

    return 0;
}
