#include<stdio.h>
int main(void)
{
    int itemnumber, month, day, year;
    float unitprice;
    printf("Enter item number: ");
    scanf("%d", &itemnumber);
    printf("Enter unit price: ");
    scanf("%f", &unitprice);
    printf("Enter purchase date(mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t$%7.2f\t%d/%d/%d", itemnumber, unitprice, month, day, year);
    return 0;
}
