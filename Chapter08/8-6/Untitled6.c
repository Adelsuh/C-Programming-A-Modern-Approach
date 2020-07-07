#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char msg[50]={'a'};
    int i, j;
    printf("Enter message: ");
    for(i=0;;i++) {scanf("%c", &msg[i]); if (msg[i]=='\n') break;}
    for (j=0;j<i;j++) msg[j]=toupper(msg[j]);
    printf("In B1FF-speak: ");
    for (j=0;j<i;j++){
        switch (msg[j]){
            case 'A': printf("4"); break;
            case 'B': printf("8"); break;
            case 'E': printf("3"); break;
            case 'I': printf("1"); break;
            case 'O': printf("0"); break;
            case 'S': printf("5"); break;
            default: printf("%c", msg[j]);
        }
    }
    printf("!!!!!!!!!!\n");
    return 0;
}
