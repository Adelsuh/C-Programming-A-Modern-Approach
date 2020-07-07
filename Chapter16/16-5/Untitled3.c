#include<stdio.h>

int main(void)
{
    int hour, minute, time, i;
    struct {
        int departure;
        int arrival;
    } flight_times[8]={{480, 616}, {583, 712}, {679, 811}, {767, 900},
                       {840, 968}, {945, 1075}, {1140, 1280}, {1305, 1438}};

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    time=hour*60+minute;

    for (i=0; i<8; i++) {
        if (flight_times[i].departure<time&&flight_times[i+1].departure>time){
            printf("Closest departure time is %.2d:%.2d, arriving at %.2d:%.2d.",
                   flight_times[i+1].departure/60, flight_times[i+1].departure-(flight_times[i+1].departure/60)*60,
                   flight_times[i+1].arrival/60, flight_times[i+1].arrival-(flight_times[i+1].arrival/60)*60);
            return 0;
            }
    }

    printf("Closest departure time is 8:00, arriving at 10:16.");
    return 0;
}

