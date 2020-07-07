#include<stdio.h>
#include<ctype.h>
void find_closest_flight (int desired_time, int *departure_time, int *arrival_time);
int main(void)
{
    int hour, minute, time, depart, arrive;
    char c;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &c);
    c=toupper(c);
    switch (c)
    {
        case 'A': time=60*hour+minute; break;
        case 'P': time=720+60*hour+minute; break;
        default: printf("ERROR"); break;
    }
    if (hour==12&&c=='P')
        time=(720+minute);
    if (hour==12&&c=='A')
        time=minute;
    find_closest_flight(time, &depart, &arrive);
    if (depart>=720) {c='p'; depart-=720; if (depart<60) {hour=12; minute=depart;} else {hour=depart/60; minute=depart-60*hour;}}
        else {c='a'; if (depart<60) {hour=12; minute=depart;} else {hour=depart/60; minute=depart-60*hour;}}
    printf("Closest departure time is %d:%.2d %c.m., ", hour, minute, c);
    if (arrive>=720) {c='p'; arrive-=720; if (arrive<60) {hour=12; minute=arrive;} else {hour=arrive/60; minute=arrive-60*hour;}}
        else {c='a'; if (arrive<60) {hour=12; minute=arrive;} else {hour=arrive/60; minute=arrive-60*hour;}}
    printf("arriving at %d:%.2d %c.m.", hour, minute, c);
    return 0;
}
void find_closest_flight (int desired_time, int *departure_time, int *arrival_time)
{
    if (173<=desired_time&&desired_time<=531)
        {*departure_time=480; *arrival_time=616;}
    else if (532<=desired_time&&desired_time<=631)
        {*departure_time=583; *arrival_time=712;}
    else if (631<desired_time&&desired_time<723)
        {*departure_time=679; *arrival_time=811;}
    else if (723<=desired_time&&desired_time<=803)
        {*departure_time=767; *arrival_time=900;}
    else if (804<=desired_time&&desired_time<=892)
        {*departure_time=840; *arrival_time=968;}
    else if (893<=desired_time&&desired_time<1042)
        {*departure_time=945; *arrival_time=1175;}
    else if (1042<=desired_time&&desired_time<=1222)
        {*departure_time=1140; *arrival_time=1280;}
    else if (1223<=desired_time||desired_time<=172)
        {*departure_time=1305; *arrival_time=1438;}
}
