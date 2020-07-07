#include<stdio.h>
#include<math.h>
int main(void)
{
    double x, y=1, t;
    printf("Enter a positive number: ");
    scanf("%lf", &x);
    for(;;){
        t=(y+x/y)/2;
        if (fabs(y-t)<.00001*t) break;
        y=t;
    }
    printf("Square root: %lf", t);
    return 0;
}
