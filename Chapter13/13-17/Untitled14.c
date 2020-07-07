#include<stdio.h>
#include<ctype.h>
#define N 100
void empty_message(char a[]);
void read_message(char a[]);
int is_palindrome(const char *a);
char *p;
int main(void)
{
    char message[N];
    for(;;){
        empty_message(message);
        printf("Enter a message: ");
        gets(message);
        read_message(message);
        if (message[0]=='0') return 0;
        if (is_palindrome(message)) printf("Palindrome\n");
            else printf("Not Palindrome\n");
    }
}
void empty_message(char a[])
{
    int j=0;
    for(;j<N;j++) a[j]=' ';
}
void read_message(char a[])
{
    int i;
    if (a[0]=='0') goto end;
    for(p=a, i=0;*p;i++)
        {
            while('A'<=toupper(a[i])&&toupper(a[i])<='Z') {*p=toupper(a[i]); p++; i++;}
        }
    end: ;
}
int is_palindrome(const char *a)
{
    int j;
    for(j=0, --p;&a[j]<p;j++, p--) {if (a[j]!=*p) return 0;}
    return 1;
}

