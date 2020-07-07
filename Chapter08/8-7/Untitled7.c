#include<stdio.h>
int main(void)
{
    int i;
    int a[5][5];
    for(i=0;i<5;i++){
        printf("Enter row %d: ", i+1);
        scanf(" %d %d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3], &a[i][4]);
    }
    printf("Row totals: ");
    for(i=0;i<5;i++) printf("%-3d", a[i][0]+a[i][1]+a[i][2]+a[i][3]+a[i][4]);
    printf("\nColumn totals: ");
    for(i=0;i<5;i++) printf("%-3d", a[0][i]+a[1][i]+a[2][i]+a[3][i]+a[4][i]);
    return 0;
}
