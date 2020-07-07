#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100000

int compare(const void *p, const void *q)
{
    return *(int *)p-*(int *)q;
}

int main(void)
{
    clock_t start, end;
    int i, reverse[N];

    for(i=0;i<N;i++)
        reverse[i]=N-i;

    start=clock();
    qsort(reverse, N, sizeof(reverse[0]), compare);
    end=clock();

    printf("It took %g sec.\n", (end-start)/(double) CLOCKS_PER_SEC);

    return 0;
}
