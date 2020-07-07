#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "readline.h"

#define MAX_WORD_LEN 20
#define MAX_WORD 50

int compare_words (const void *p, const void *q);
struct word
    {
        char msg[MAX_WORD_LEN];
    };

int main(void)
{
    struct word *words[MAX_WORD];

    int i, j, len;
    char temp[MAX_WORD_LEN];

    for(i=0;i<MAX_WORD;i++)
    {
        printf("Enter word: ");
        len=read_line(temp, MAX_WORD_LEN);
        if (len == 0) break;
        words[i]=malloc(len);
        strcpy(words[i]->msg, temp);
    }

    qsort(words, i, sizeof(struct word), compare_words);
    //qsort not working, don't know why

    printf("In sorted order: ");

    for(j=0;j<i;j++)
    {
        printf("%s ", words[j]->msg);
    }

    return 0;
}

int compare_words (const void *p, const void *q)
{
    return strcmp(((struct word *) p)->msg, ((struct word *) q)->msg);
}

