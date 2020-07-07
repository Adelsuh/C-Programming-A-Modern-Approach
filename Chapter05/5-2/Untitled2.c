#include<stdio.h>
int main(void)
{
    int hour, minute;
    printf("Enter a 24-hour time: ");
    scanf(" %d : %d", &hour, &minute);
    printf("Equivalent 12-hour time: ");
    if (hour>12)
        printf("%d:%dPM", hour-12, minute);
    else
        if(hour==12)
            printf("%d:%dPM", hour, minute);
        else
            if(hour==0)
                printf("12:%dAM", minute);
            else
                printf("%d:%dAM", hour, minute);
    return 0;
}
