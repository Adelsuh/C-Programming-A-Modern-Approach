#include<stdio.h>
int main(void)
{
    int a, b, c, d, min, max, second, third;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a>=b)
        {max=a; min=b;}
    else
        {max=b; min=a;}
    if (c>=d)
        {second=c; third=d;}
    else
        {second=d; third=c;}
    if (max>=second)
        printf("Largest: %d\n", max);
    else
        printf("Largest: %d\n", second);
    if (third>=min)
        printf("Smallest: %d\n", min);
    else
        printf("Smallest: %d\n", third);
    return 0;
}
