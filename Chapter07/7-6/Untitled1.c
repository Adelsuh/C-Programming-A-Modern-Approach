#include<stdio.h>
int main(void)
{
    printf("Size of int: %lu\n", (long unsigned) sizeof(int));
    printf("Size of short: %lu\n", (long unsigned) sizeof(short));
    printf("Size of long: %lu\n", (long unsigned) sizeof(long));
    printf("Size of float: %lu\n", (long unsigned) sizeof(float));
    printf("Size of double: %lu\n", (long unsigned) sizeof(double));
    printf("Size of long double: %lu\n", (long unsigned) sizeof(long double));
    return 0;
}
