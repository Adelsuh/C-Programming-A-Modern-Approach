#include<stdio.h>
#include<string.h>
void reverse_name(char *name);
int main(void)
{
    char called[50]={' '};
    printf("Enter a first and last name: ");
    gets(called);
    reverse_name(called);
    printf("%s", called);
    return 0;
}
void reverse_name(char *name)
{
    int i, j;
    char modified[50]={' '}, initial[2];
    for(i=0;name[i++]==' ';) ;
    initial[0]=name[--i];
    initial[1]='\0';
    for(;name[i++]!=' ';) ;
    for(;name[i++]==' ';) ;
    j=--i;
    for(++j;name[j]!=' '&&name[j]!='\0';j++) ;
    strncpy(modified, name+i, j-i+1);
    strcpy(name, modified);
    strcat(name, ", ");
    strcat(name, initial);
    strcat(name, ".");
}
