#include <stdio.h>
#include <time.h>

#define MAX_CHAR 100

int main(void)
{
    char t[MAX_CHAR+1];
    time_t current=time(NULL);

    strftime(t, sizeof(t), "%A, %B %d, %Y %I:%M%p\n", localtime(&current));

    //strftime(t, sizeof(t), "%a, %d %b %y %H:%M\n", localtime(&current));

    //strftime(t, sizeof(t), "%x %X %p\n", localtime(&current));

    puts(t);

    return 0;
}
