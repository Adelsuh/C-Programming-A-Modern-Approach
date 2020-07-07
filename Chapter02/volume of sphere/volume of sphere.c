#include <stdio.h>
int main(void)
{
    float r;
    printf("The radius of the sphere is:");
    scanf("%f", &r);
    printf("The volume of a sphere with a %.2f meter radius is: %.5f(pie)\n", r, 4.0f/3.0f*r*r*r);
    return 0;
}
