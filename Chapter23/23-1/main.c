#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, d, x1, x2;
    printf("Enter the value of a: ");
    scanf(" %lf", &a);
    printf("Enter the value of b: ");
    scanf(" %lf", &b);
    printf("Enter the value of c: ");
    scanf(" %lf", &c);

    d=pow(b, 2.0)-4*a*c;
    if (d<0)
    {
        printf("The roots are complex. Sorry!\n");
        return 0;
    }
    x1=(-1*b+sqrt(d))/(2*a);
    x2=(-1*b-sqrt(d))/(2*a);
    if (x1==x2) printf("The equation has a multiple root, the value of which is %lf\n", x1);
    else printf("The equation has two roots, %lf and %lf respectively.\n", x1, x2);
    return 0;
}
