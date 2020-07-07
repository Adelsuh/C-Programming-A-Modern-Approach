#include<stdio.h>
int main(void){
char c[50], tm;
int i, j=0;
printf("Enter a sentence: ");
for(i=0;;i++){scanf("%c", &c[i]); if (c[i]=='.'||c[i]=='?'||c[i]=='!') {tm=c[i]; break;}}
printf("Reversal of sentence:");
for(;;){printf(" "); for(;;i--) {if (c[i]==' '){c[i]=tm; break;} if (i==0) {i=i-1; j=1; break;}} for(i++;c[i]!=tm;i++) printf("%c", c[i]); if (j==1) break;}
printf("%c", tm);
return 0;
}
