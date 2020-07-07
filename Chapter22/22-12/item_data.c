#include <stdio.h>

int main(int argc, char *argv[])
{
    int i, itemnumber, month, day, year;
    float unitprice;

    i=1;
    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
    while(argv[i] != NULL)
    {
        sscanf(argv[i], "%d,%f,%d/%d/%d", &itemnumber, &unitprice, &month, &day, &year);
        printf("%d\t$%7.2f\t%d/%d/%d\n", itemnumber, unitprice, month, day, year);
    }

    return 0;
}

