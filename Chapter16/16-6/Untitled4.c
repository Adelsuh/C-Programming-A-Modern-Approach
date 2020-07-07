#include<stdio.h>

struct date {
    int month;
    int day;
    int year;
};
int compare_dates(struct date d1, struct date d2);

int main(void)
{
    struct date d1, d2;
    int i;

    printf("Enter a date (mm/dd/yy) : ");
    scanf("%d/%d/%2d", &d1.month, &d1.day, &d1.year);
    printf("Enter another date (mm/dd/yy) : ");
    scanf("%d/%d/%2d", &d2.month, &d2.day, &d2.year);
    i=compare_dates(d1, d2);
    if (i<0) printf("%d/%d/%2d is earlier than %d/%d/%2d", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
    else if (i>0) printf("%d/%d/%2d is earlier than %d/%d/%2d", d2.month, d2.day, d2.year, d1.month, d1.day, d1.year);
    else printf("%d/%d/%2d and %d/%d/%2d is the same", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);

    return 0;
}

int compare_dates(struct date d1, struct date d2){
    if (d1.year<d2.year) return -1;
    else if (d1.year>d2.year) return 1;
    else if (d1.month<d2.month) return -1;
    else if (d1.month>d2.month) return 1;
    else if (d1.day<d2.day) return -1;
    else if (d1.day>d2.day) return 1;
    else return 0;
}
