#include<stdio.h>
int main(void)
{
    char m[80]; int n, i;
    printf("Enter message to be encrypted: ");
    for(i=0;m[i-1]!='\n';i++) scanf("%c", &m[i]);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);
    printf("Encrypted message: ");
    for(i=0;m[i-1]!='\n';i++) {if ('A'<=m[i]&&m[i]<='Z') {printf("%c", ((m[i]-'A')+n)%26+'A'); continue;}
    if ('a'<=m[i]&&m[i]<='z') {printf("%c", ((m[i]-'a')+n)%26+'a'); continue;} printf("%c", m[i]);}
    return 0;
}
