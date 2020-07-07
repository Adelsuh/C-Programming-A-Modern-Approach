#include<stdio.h>
int main(void){
char c[50], tm;
int j=0;
char *p;
printf("Enter a sentence: ");
for(p=c;;p++){scanf("%c", p); if (*p=='.'||*p=='?'||*p=='!') {tm=*p; break;}}
printf("Reversal of sentence:");
for(;;)
    {
        printf(" ");
        for(;;p--) {if (*p==' '){*p=tm; break;} if (p==c) {--p; j=1; break;}}
        for(p++;*p!=tm;p++) printf("%c", *p);
        if (j==1) break;
}
printf("%c", tm);
return 0;
}
