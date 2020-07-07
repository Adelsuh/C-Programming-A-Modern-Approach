#include<stdio.h>
#include<ctype.h>
#define N 100
void empty_message(char a[]);
void read_message(char a[]);
int check_palindrome(char a[]);
char *p;
int main(void)
{
    char message[N], letter;
    for(;;){
        empty_message(message);
        printf("Enter a message: ");
        letter=getchar();
        if (letter=='0') return 0; else {letter=toupper(letter);  if ('A'<=letter&&letter<='Z') message[0]=letter;}
        read_message(message);
        if (check_palindrome(message)) printf("Palindrome\n");
            else printf("Not Palindrome\n");
    }
    return 0;
}
void empty_message(char a[])
{
    int j=0;
    for(;j<N;j++) a[j]=' ';
}
void read_message(char a[])
{
    char letter;
    for(p=a+1;;)
        {
            letter=getchar();
            if (letter=='\n') break;
            letter=toupper(letter);
            if ('A'<=letter&&letter<='Z') {*p=letter; p++;}
        }
}
int check_palindrome(char a[])
{
    int j;
    for(j=0, --p;a+j<p;j++, p--) {if (a+j==p) ; else return 0;}
    return 1;
}
