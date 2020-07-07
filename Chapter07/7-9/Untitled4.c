#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int hour, min;
    char ch;
    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &min, &ch);
    ch=toupper(ch);
    switch (ch)
    {
        case 'A': ; break;
        case 'P': hour+=12; break;
        default: printf("-ERROR-"); break;
    }
    if (hour==24) hour=12;
    printf("Equivalent 24-hour time: %d:%d", hour, min);
    return 0;
}
