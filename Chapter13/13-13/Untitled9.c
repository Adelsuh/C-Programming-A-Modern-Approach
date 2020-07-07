#include<stdio.h>
void encrypt(char *message, int shift);
int main(void)
{
    char m[80]; int n;
    printf("Enter message to be encrypted: ");
    gets(m);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &n);
    printf("Encrypted message: ");
    encrypt(m, n);

    return 0;
}
void encrypt(char *message, int shift)
{
    int i;
    for(i=0;message[i]!='\0';i++)
        {
            if ('A'<=message[i]&&message[i]<='Z') {printf("%c", ((message[i]-'A')+shift)%26+'A'); continue;
        }
    if ('a'<=message[i]&&message[i]<='z')
        {printf("%c", ((message[i]-'a')+shift)%26+'a'); continue;} printf("%c", message[i]);}
}
