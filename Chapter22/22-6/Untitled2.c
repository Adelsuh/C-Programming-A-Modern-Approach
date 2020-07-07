#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE* fp;
    int i, j, offset;
    unsigned char ch[10];

    if(argc!=2)
    {
        fprintf(stderr, "USAGE ERROR\n");
        exit(EXIT_FAILURE);
    }

    if((fp=fopen(argv[1], "rb"))==NULL)
    {
        fprintf(stderr, "Cannot open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    printf("Offset              Bytes              Characters\n");
    printf("______  _____________________________  __________\n");

    for(offset=0; ;offset+=10)
    {
        printf("%6d  ", offset);

        for(i=0;i<10;i++)
        {
            if((ch[i]=getc(fp))==EOF) break;
            printf("%.2X ", ch[i]);
        }
        if(i<10) for(;i<10;i++) printf("   ");
        printf(" ");

        for(j=0;j<i;j++)
        {
            if (!isprint(ch[i])) ch[j]='.';
            printf("%c", ch[j]);
        }
        printf("\n");
        if(i<10) break;
    }

    return 0;
}
