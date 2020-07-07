#include <stdio.h>
#include <stddef.h>

int main(void)
{
    struct s
    {
        char a;
        int b[2];
        float c;
    } s1;

    printf("Size of member a: %d\n", sizeof(s1.a));
    printf("Size of member b: %d\n", sizeof(s1.b));
    printf("Size of member c: %d\n\n", sizeof(s1.c));

    printf("Offset of member a: %d\n", offsetof(struct s, a));
    printf("Offset of member b: %d\n", offsetof(struct s, b));
    printf("Offset of member c: %d\n\n", offsetof(struct s, c));

    printf("Size of structure s: %d\n", sizeof(s1));

    return 0;

    /*Size of member a: 1
    Size of member b: 8
    Size of member c: 4

    Offset of member a: 0
    Offset of member b: 4
    Offset of member c: 12

    Size of structure s: 16

    So, the structure has one hole of 3 bits after a and behind b.
    */
}
