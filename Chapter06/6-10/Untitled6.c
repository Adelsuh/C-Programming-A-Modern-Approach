#include<stdio.h>
int main(void)
{
    int em, ed, ey, m, d, y;
    printf("Enter a date (mm/dd/yy) : ");
    scanf("%d/%d/%2d", &em, &ed, &ey);
    for(;;){printf("Enter a date (mm/dd/yy) : ");
    scanf("%d/%d/%2d", &m, &d, &y);
    if (m==0&&d==0&&y==0) break;
    if (ey>y) {ey=y; em=m; ed=d;}
    if ((ey==y)&&(em>m)) {ey=y; em=m; ed=d;}
    if ((ey==y)&&(em==m)&&(ed>d)) {ey=y; em=m; ed=d;}
        }
    printf("%d/%d/%.2d is the earliest date", em, ed, ey);
    return 0;
}

