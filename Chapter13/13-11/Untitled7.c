#include<stdio.h>
double compute_average_word_length(const char *sentence);
int main(void)
{
    double average;
    char message[100];
    printf("Enter a sentence: ");
    gets(message);
    average=compute_average_word_length(message);
    printf("Average word length: %.1f", average);
    return 0;
}
double compute_average_word_length(const char *sentence)
{
    int l=0, ll, w, i=0;
    for(w=0;*(sentence+i)!='\0';++w)
    {
        while (*(sentence+i)==' ') i++;
        for(ll=0;;++ll, i++) if (*(sentence+i)==' '||*(sentence+i)=='\0') break;
        l+=ll;
    }
    return ((double) l)/w;
}
