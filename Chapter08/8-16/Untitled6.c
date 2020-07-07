#include<stdio.h>
#include<ctype.h>
int main(void)
{
    int c[26]={0}, i;
    char ch;
    printf("Enter the first word: ");
    for(;;) {scanf("%c", &ch); if (ch=='\n') break; ch=toupper(ch); if ('A'<=ch&&ch<='Z') c[ch-'A']++;}
    printf("Enter the second word: ");
    for(;;) {scanf("%c", &ch); if (ch=='\n') break; ch=toupper(ch); if ('A'<=ch&&ch<='Z') c[ch-'A']--;}
    for(i=0;i<26;i++) {if (c[i]!=0) break;}
    if (i==26) printf("The words are anagrams.");
     else printf("The words are not anagrams.");
     return 0;
}
