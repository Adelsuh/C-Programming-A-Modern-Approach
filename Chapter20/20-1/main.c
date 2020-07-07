#include <ctype.h>
#include <stdio.h>

int main(void)
{
    union
    {
        float f;
        struct
        {
            unsigned int fraction: 23;
            unsigned int exponent: 8;
            unsigned int sign: 1;
        } file_value;
    } float_value;

    float_value.file_value.sign=1;
    float_value.file_value.exponent=128;
    float_value.file_value.fraction=0;

    printf("Float value: %f", float_value.f);

    return 0;
}
