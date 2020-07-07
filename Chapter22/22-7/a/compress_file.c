#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILENAME_LENGTH 100

int main(int argc, char *argv[])
{
    FILE *original_fp, *compress_fp;
    unsigned char cur, next;
    char comp_name[MAX_FILENAME_LENGTH+4];
    int num;

    if (argc!=2)
    {
        fprintf(stderr, "Usage: compress_file filename\n");
        exit(EXIT_FAILURE);
    }

    if((original_fp=fopen(argv[1], "rb"))==NULL)
    {
        fprintf(stderr, "Cannot open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    strcpy(comp_name, argv[1]);
    strcat(comp_name, ".rle");

    if((compress_fp=fopen(comp_name, "wb"))==NULL)
    {
        fprintf(stderr, "Cannot make %s.rle\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    cur=getc(original_fp);

    for(num=1;;)
    {
        next=getc(original_fp);
        if(next==EOF) break;
        if(next==cur) num++;
            else {fprintf(compress_fp, "%d%.2X", num, cur); num=1;}
        cur=next;
    }

    fclose(original_fp);
    fclose(compress_fp);

    return 0;
}
