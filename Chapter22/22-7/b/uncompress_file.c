#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILENAME_LENGTH 100

int main(int argc, char *argv[])
{
    FILE *compress_fp, *uncompress_fp;
    unsigned char num, byte;
    char uncomp_name[MAX_FILENAME_LENGTH];
    int len, i;

    if (argc!=2)
    {
        fprintf(stderr, "Usage: compress_file filename\n");
        exit(EXIT_FAILURE);
    }

    strcpy(uncomp_name, argv[1]);
    len=strlen(argv[1]);

    if((uncomp_name[len-3]=='r')||(uncomp_name[len-2]=='l')||(uncomp_name[len-1]=='e'))
    {
        fprintf(stderr, "Incorrect File\n");
        exit(EXIT_FAILURE);
    }

    if((compress_fp=fopen(argv[1], "rb"))==NULL)
    {
        fprintf(stderr, "Cannot open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    uncomp_name[strlen(uncomp_name)-3]='\0';

    if((uncompress_fp=fopen(uncomp_name, "rw"))==NULL)
    {
        fprintf(stderr, "Cannot make %s\n", uncomp_name);
        exit(EXIT_FAILURE);
    }

    for(;;)
    {
        if((num=getc(compress_fp))==EOF) break;
        if((byte=getc(compress_fp))==EOF) break;
        for(i=0;i<num;i++)
        {
            fprintf(uncompress_fp, "%.2X", byte);
        }
    }

    fclose(compress_fp);
    fclose(uncompress_fp);

    return 0;
}
