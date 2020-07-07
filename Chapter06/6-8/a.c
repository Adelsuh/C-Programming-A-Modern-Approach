#include<stdio.h>
int main(void)
{
    int i, n, day;
    printf("Enter number of days in month: ");
    scanf("%d", &n);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &day);
    for (i=1; i<day; i++) printf("   ");
    for(i=1;i<=n;++i, ++day){
        printf("%3d", i);
        if (day%7==0) printf("\n");
    }
    return 0;
}
