#include<stdio.h>
int main(void)
{
    int one, two, three, four, five;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &one, &two, &three, &four, &five);
    printf("GS1 prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", one, two, three, four, five);
    return 0;
}
