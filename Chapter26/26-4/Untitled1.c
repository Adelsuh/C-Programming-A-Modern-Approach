#include <stdio.h>
#include <time.h>

int main(void)
{
    int n;
    struct tm t;
    t.tm_sec=0;
    t.tm_min=0;
    t.tm_hour=0;
    t.tm_isdst=-1;

    printf("Enter the date(month/day/year): ");
    scanf(" %d/%d/%d", &t.tm_mon, &t.tm_mday, &t.tm_year);

    t.tm_year-=1900;
    t.tm_mon--;

    printf("How many days later would you like to see? ");
    scanf(" %d", &n);

    t.tm_mday+=n;

    mktime(&t);
    printf("Future date: %.2d/%.2d/%4d\n", t.tm_mon+1, t.tm_mday, t.tm_year+1900);

    return 0;
}
