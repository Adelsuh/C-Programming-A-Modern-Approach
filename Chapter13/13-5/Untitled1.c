#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int i, sum;
    for(sum=0, i=1;i<argc;i++)sum+=atoi(argv[i]);
    printf("Total: %d", sum);
    return 0;
}
