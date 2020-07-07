#include<stdio.h>
#include<ctype.h>
int main(void)
{
    int hour, minute, time;
    char c;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &c);
    c=toupper(c);
    switch (c)
    {
        case 'A': time=60*hour+minute; break;
        case 'P': time=720+60*hour+minute; break;
    }
    if (hour==12&&c=='P')
        time=(720+minute);
    if (hour==12&&c=='A')
        time=minute;
    if (173<=time&&time<=531)
        printf("Closest departure time is 8:00AM, each arriving at 10:16AM");
    else if (532<=time&&time<631)
        printf("Closest departure time is 9:43AM, each arriving at 11:52AM");
    else if (631<time&&time<723)
        printf("Closest departure time is 11:19AM, each arriving at 1:31PM");
    else if (723<time&&time<=803)
        printf("Closest departure time is 12:47PM, each arriving at 3:00PM");
    else if (804<=time&&time<=892)
        printf("Closest departure time is 2:00PM, each arriving at 4:08PM");
    else if (893<=time&&time<1042)
        printf("Closest departure time is 3:45PM, each arriving at 5:55PM");
    else if (1042<time&&time<=1222)
        printf("Closest departure time is 7:00PM, each arriving at 9:20PM");
    else if (1223<=time||time<=172)
        printf("Closest departure time is 9:45PM, each arriving at 11:58PM");
    else if (time==631)
        printf("Closest departure times are 9:43AM and 11:19AM, each arriving at 11:52AM and 1:31PM");
    else if (time==723)
        printf("Closest departure times are 11:19AM and 12:47PM, each arriving at 1:31PM and 3:00PM");
    else if (time==1042)
        printf("Closest departure times are 3:45PM and 7:00PM, each arriving at 5:55PM and 9:20PM");
    return 0;
}
