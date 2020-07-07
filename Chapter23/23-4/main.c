#include <stdio.h>
#include <string.h>

#define MAX_CHARACTERS 100

int main(void)
{
    char message[MAX_CHARACTERS+1], *p, *q;
    int num_words, i;
    printf("Enter a series of words separated by single spaces.\n"); //lol
    gets(message);
    printf("Message: %s\n", message);
    p=strtok(message, " ");
    q=p;
    p=strtok(NULL, " ");
    for(num_words=1;p!=NULL;num_words++)
    {
        q=p;
        p=strtok(NULL, " ");
    }
    printf("Number of words: %d\n", num_words);
    for(i=0;i<num_words;i++)
    {
        printf("%s ", q--);
        while((*(q-1)!='\0')&&(q!=message)) q--;
    }
    return 0;
}
