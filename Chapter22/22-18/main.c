#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_INT_NUM 10000

int compare_num(const void *p, const void *q);

int main(int argc, char *argv[])
{
    FILE *text_fp;
    int num, i, numbers[MAX_INT_NUM+1];

    if (argc!=2)
    {
        fprintf(stderr, "Usage: main text_file\n");
        exit(EXIT_FAILURE);
    }

    if((text_fp=fopen(argv[1], "r"))==NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    i=0;
    while((num=getc(text_fp))!=EOF)
    {
        if(isdigit(num)) numbers[i++]=num;
    }

    qsort(numbers, i, sizeof(numbers[0]), compare_num);

    printf("Largest Number: %d\n", numbers[i]);
    printf("Smallest Number: %d\n", numbers[0]);
    if (i%2==0)
        printf("Median Number: %d\n", (numbers[i/2]+numbers[1+i/2])/2);
    else printf("Median Number: %d\n", numbers[i/2]);

    return 0;
}

int compare_num(const void *p, const void *q)
{
    return *(int *)p - *(int *)q;
}
