#include<stdio.h>
#include<ctype.h>
int main(void)
{
    int hour, minute, time, i;
    int depart[8]={480, 583, 679, 767, 840, 945, 1140, 1305}, arrive[8]={616, 712, 811, 900, 968, 1075, 1280, 1438};
    int closest=480;
    char c;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minute, &c);
    c=toupper(c);
    switch (c)
    {
        case 'A': time=60*hour+minute; break;
        case 'P': time=720+60*hour+minute; break;
    }
    for(i=1;i<8;i++){if (time-depart[i-1]>depart[i]-time) closest=depart[i];}
    if (105+time<480-time) closest=depart[7];
    for(i=0;i<8;i++) if (closest==depart[i]) break;
    if (closest<720) printf("The closest departure time is %d:%dAM", closest/60, closest%60);
     else printf("The closest departure time is %d:%dPM", closest/60-12, closest%60);
    if (arrive[i]<720) printf(", and its arrival time is %d:%dAM.", arrive[i]/60, arrive[i]%60);
     else printf(", and its arrival time is %d:%dPM.", arrive[i]/60-12, arrive[i]%60);
    return 0;
}
