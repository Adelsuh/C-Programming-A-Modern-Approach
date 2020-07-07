#include<stdio.h>
main(void)
{
    int n;
    printf("Enter a number :");
    scanf(" %d", &n);
    printf("The number %d has ", n);
    if (n<10)
        printf("1 digit");
    else
        if (n<100)
            printf("2 digits");
        else
            if(n<1000)
                printf("3 digits");
            else
                if(n<10000)
                    printf("4 digits");
                else
                    printf("-ERROR-");
    return 0;
}
