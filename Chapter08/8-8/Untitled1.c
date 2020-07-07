#include<stdio.h>
int main(void)
{
    int i, j, high, low;
    int a[5][5];
    for(i=0;i<5;i++){
        printf("Enter student %d's five grades in order: ", i+1);
        scanf(" %d %d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3], &a[i][4]);
    }
    for(i=0;i<5;i++) printf("Student %d's total score: %-3d\nStudent %d's average score: %-3d\n",
                            i+1, a[i][0]+a[i][1]+a[i][2]+a[i][3]+a[i][4], i+1, (a[i][0]+a[i][1]+a[i][2]+a[i][3]+a[i][4])/5);
    for(i=0;i<5;i++) {printf("Quiz %d's average score: %-3d\n", i+1, (a[0][i]+a[1][i]+a[2][i]+a[3][i]+a[4][i])/5);
                        high=a[0][i];
                        for (j=1;j<5;j++)if (high<a[j][i]) high=a[j][i];
                        printf("Quiz %d's high score: %d\n", i+1, high);
                        low=a[0][i];
                        for (j=1;j<5;j++)if (low>a[j][i]) low=a[j][i];
                        printf("Quiz %d's low score: %d\n", i+1, low);
                        }
    return 0;
}
