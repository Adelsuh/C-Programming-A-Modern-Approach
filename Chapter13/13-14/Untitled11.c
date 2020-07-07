#include<stdio.h>
#include<ctype.h>
int are_anagrams(const char *word1, const char *word2);
int main(void)
{
    char first[20+1], second[20+1];
    printf("Enter the first word: ");
    scanf("%s", first);
    printf("Enter the second word: ");
    scanf("%s", second);
    if (are_anagrams(first, second)) printf("The words are anagrams.");
     else printf("The words are not anagrams.");
     return 0;
}
int are_anagrams(const char *word1, const char *word2)
{
    char init, c[26]={0};
    int i;
    for(i=0;word1[i];i++) {init=toupper(word1[i]); if ('A'<=init&&init<='Z') c[init-'A']++;}
    for(i=0;word2[i];i++) {init=toupper(word2[i]); if ('A'<=init&&init<='Z') c[init-'A']--;}
    for(i=0;i<26;i++) if (c[i]) return 0;
    return 1;
}
