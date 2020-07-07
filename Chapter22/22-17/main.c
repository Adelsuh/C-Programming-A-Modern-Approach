#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE *source_fp;
    int i=0, j, num, phone_num[10];

    if (argc!=2)
    {
        fprintf(stderr, "usage: main source_file\n");
        exit(EXIT_FAILURE);
    }

    if ((source_fp=fopen(argv[1], "r"))==NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    num=getc(source_fp);
    while (num!=EOF)
    {
        if (isdigit(num)) phone_num[i++]=num;
        if (i==10)
        {
            for(j=0;j<10;j++)
            {
                if(j==0) printf("(");
                if(j==4) printf(") ");
                if(j==7) printf("-");
                printf("%d", phone_num[j]);
            }
        }
        num=getc(source_fp);
    }

    return 0;
}
