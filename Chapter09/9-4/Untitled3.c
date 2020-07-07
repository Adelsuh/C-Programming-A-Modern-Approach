#include<stdio.h>
#include<ctype.h>
void read_word(int counts[26]);
int equal_array(int counts1[26], int counts2[26]);
int main(void)
{
    int w1[26]={0}, w2[26]={0}, i;
    printf("Enter the first word: ");
    read_word(w1);
    printf("Enter the second word: ");
    read_word(w2);
    if (equal_array(w1, w2)) printf("The words are anagrams.");
     else printf("The words are not anagrams.");
     return 0;
}
void read_word(int counts[26])
{
   char ch;
   for(;;) {scanf("%c", &ch); if (ch=='\n') break; ch=toupper(ch); if ('A'<=ch&&ch<='Z') counts[ch-'A']++;}
   return;
}
int equal_array(int counts1[26], int counts2[26])
{
    int i=0;
    for(;i<26;i++) {if(counts1[i]!=counts2[i]) return 0;}
    return 1;
}
