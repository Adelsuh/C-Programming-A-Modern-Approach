#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *source_fp, *dest_fp;
    char ch, car_ret='\x0d', eof='\x1a', line_feed='\x0a';

    if (argc!=3)
    {
        fprintf(stderr, "Usage: main source dest\n");
        exit(EXIT_FAILURE);
    }

    if((source_fp=fopen(argv[1], "rb"))==NULL)
    {
        fprintf(stderr, "Can't open %s", argv[1]);
        exit(EXIT_FAILURE);
    }

    if((dest_fp=fopen(argv[2], "wb"))==NULL)
    {
        fprintf(stderr, "Can't open %s", argv[2]);
        exit(EXIT_FAILURE);
    }

    /*while((ch=getc(source_fp))!=EOF)
    {
        if ((ch==car_ret) || (ch==eof)) ; //do nothing
        else putc(ch, dest_fp);
    }*/ //Windows to UNIX

    while((ch=getc(source_fp))!=EOF)
    {
        if (ch==line_feed) putc(car_ret, dest_fp);
        putc(ch, dest_fp);
    } //UNIX to Windows

    return 0;
}
