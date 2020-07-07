#include <stdio.h>
#include <stdlib.h>

int mbcheck(const char *s);

int main()
{
    int result;

    result=mbcheck("\x87\x");
    printf("%d\n", result);

    return 0;
}

int mbcheck(const char *s)
{
    int n;
    for (mblen(NULL, 0); ; s+=n)
        if ((n=mblen(s, MB_CUR_MAX))<=0)
            return n;
}
