#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int i;
    for(i=0;i<1000;i++)
        printf("%d ", rand()&1);

    return  0;
}

//To increase randomness in a small range, rand()/(RAND_MAX/N+1) works better than rand()%N.
