#include<stdio.h>
int main(void)
{
    char fstinit, mnls;//first name initial, meaningless
    char lnm[20];
    int i;
    printf("Enter a first and last name: ");
    fstinit=getchar();
    while((mnls=getchar())!=' ') ;
    for(i=0;(lnm[i]=getchar())!='\n';i++){
        printf("%c", lnm[i]);
    }
    printf(", %c.", fstinit);
    return 0;
}

