#include<stdio.h>
#include<stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 30

int main(void)
{
    FILE *fp, *encrypt_fp;
    int n;
    char m[MAX_NAME_LEN+4], ch;
    printf("Enter name of file to be encrypted: ");
    scanf("%s", m);

    if((fp=fopen(m, "r"))==NULL)
        {
            printf("Could not open %s", m);
            exit(EXIT_FAILURE);
        }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);

    strcat(m, ".enc");

    if((encrypt_fp=fopen(m, "w"))==NULL)
    {
        printf("Could not make %s", m);
        exit(EXIT_FAILURE);
    }

    while((ch=getc(fp))!=EOF)
    {
        if ('A'<=ch&&ch<='Z') fprintf(encrypt_fp, "%c", ((ch-'A')+n)%26+'A');
        else if ('a'<=ch&&ch<='z') fprintf(encrypt_fp, "%c", ((ch-'a')+n)%26+'a');
        else fprintf(encrypt_fp, "%c", ch);
    }


    return 0;
}
