#include <stdio.h>
#include <time.h>
#include <math.h>

#define SEC_PER_DAY (24*60*60)

int main(void)
{
    struct tm time0, time1;
    double diffsec;

    time0.tm_sec=time0.tm_min=time0.tm_hour=time1.tm_sec=time1.tm_min=time1.tm_hour=0;
    time0.tm_isdst=time1.tm_isdst=-1;

    printf("Enter two dates(mm/dd/yyyy, mm/dd/yyyy): ");
    scanf("%d/%d/%d, %d/%d/%d", &time0.tm_mon, &time0.tm_mday,
          &time0.tm_year, &time1.tm_mon, &time1.tm_mday, &time1.tm_year);

    time0.tm_mon--; time1.tm_mon--;
    time0.tm_year-=1900; time1.tm_year-=1900;

    diffsec=difftime(mktime(&time0), mktime(&time1));
    if (diffsec<0) diffsec=-1*diffsec;
    printf("%g days apart.\n", diffsec/SEC_PER_DAY);

    return 0;
}
