#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    int hour, minute, time, dep_hour, dep_min, arr_hour, arr_min, diff, min_diff, min_dep_hour, min_dep_min, min_arr_hour, min_arr_min;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    time=hour*60+minute;

    if((fp=fopen("flights.dat", "r"))==NULL)
    {
        printf("Failed to open flights.dat\n");
        exit(EXIT_FAILURE);
    }

        if(fscanf(fp, " %d:%d %d:%d", &min_dep_hour, &min_dep_min, &min_arr_hour, &min_arr_min)==4)
            {if (time>min_dep_hour*60+min_dep_min) min_diff=time-min_dep_hour*60-min_dep_min;
                else min_diff=min_dep_hour*60+min_dep_min-time;}
            else exit(EXIT_FAILURE);

    for(;;)
    {
        if(fscanf(fp, " %d:%d %d:%d", &dep_hour, &dep_min, &arr_hour, &arr_min)!=4) break;
        if (time>dep_hour*60+dep_min)
        {
            if (time-dep_hour*60-dep_min<1440-time+dep_hour*60+dep_min) diff=time-dep_hour*60-dep_min;
            else diff=1440-time+dep_hour*60+dep_min;
        }
         else
         {
            if (dep_hour*60+dep_min-time<1440+time-dep_hour*60-dep_min) diff=dep_hour*60+dep_min-time;
            else diff=1440+time-dep_hour*60-dep_min;
         }
        if (diff<min_diff)
        {
            min_diff=diff;
            min_dep_hour=dep_hour;
            min_dep_min=dep_min;
            min_arr_hour=arr_hour;
            min_arr_min=arr_min;
        }
    }

    printf("Closest departure time is %d:%d, arriving at %d:%d\n", min_dep_hour, min_dep_min, min_arr_hour, min_arr_min);

    return 0;
}

