#include <stdio.h>
#include <stdlib.h>

void exit_one(void)
{
    printf("That's all,");
}

void exit_two(void)
{
    printf(" folks!\n");
}

int main(void)
{
    atexit(exit_two);
    atexit(exit_one);

    return 0;
}
