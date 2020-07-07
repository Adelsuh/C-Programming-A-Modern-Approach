#include<stdio.h>
void read_line(char sentence[][21], char *end, int *last);
int main(void){
char c[30][20+1], tm;
int k;
printf("Enter a sentence: ");
read_line(c, &tm, &k);
printf("Reversal of sentence:");
for(;k>=0;k--)printf(" %s", c[k]);
printf("%c", tm);
return 0;
}
void read_line(char sentence[][21], char *end, int *last)
{
    int i, j;
    for(i=0;i<30;i++)
        {
            scanf("%s", sentence[i]);
            for(j=0;j<20+1;j++) if(sentence[i][j]==0) break;
            if (sentence[i][j-1]=='.'||sentence[i][j-1]=='?'||sentence[i][j-1]=='!')
                {*end=sentence[i][j-1]; sentence[i][j-1]='\0'; *last=i; break;}
        }
}
