#include <stdio.h>
#include <string.h>

#define DATE_LENGTH 10

int main(int argc, char *argv[])
{
    int month, day, year;

    if (argc != 2) printf("Usage: printdate DATE");

    if(sscanf(argv[1], "%d-%d-%d", &month, &day, &year) == 3) ;
    else if (sscanf(argv[1], "%d/%d/%d", &month, &day, &year) == 3) ;
    else printf("Date not in proper form\n");

    switch (month)
    {
        case 1: printf("January ");
                break;
        case 2: printf("February ");
                break;
        case 3: printf("March ");
                break;
        case 4: printf("April ");
                break;
        case 5: printf("May ");
                break;
        case 6: printf("June ");
                break;
        case 7: printf("July ");
                break;
        case 8: printf("August ");
                break;
        case 9: printf("September ");
                break;
        case 10: printf("October ");
                break;
        case 11: printf("November ");
                break;
        case 12: printf("December ");
                break;
        default: printf("Month does not exist\n");
                 break;
    }

    printf("%d, %d\n", day, year);

    return 0;
}
