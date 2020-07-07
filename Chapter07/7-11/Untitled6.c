#include<stdio.h>
int main(void)
{
    char fstinit, mnls, lstnm;//first name initial, meaningless, lastname
    printf("Enter a first and last name: ");
    fstinit=getchar();
    while((mnls=getchar())!=' ') ;
    scanf(" ", mnls);
    for(;(lstnm=getchar())!='\n';){
        printf("%c", lstnm);
    }
    printf(", %c.", fstinit);
    return 0;
}
