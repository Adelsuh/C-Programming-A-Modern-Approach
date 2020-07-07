#include<stdio.h>
#include<string.h>
int main(void)
{
    char smallest[21], largest[21], temp[21];
    printf("Enter word: ");
    scanf("%s", temp);
    strcpy(smallest, temp);
    strcpy(largest, temp);
    for(;;)
    {
        printf("Enter word: ");
        scanf("%s", temp);
        if (strlen(temp)==4) break;
        if (strcmp(smallest, temp)>0) strcpy(smallest, temp);
            else if (strcmp(largest, temp)<0) strcpy(largest, temp);
    }
    printf("Smallest word: %s\nLargest word: %s\n", smallest, largest);
    return 0;
}
