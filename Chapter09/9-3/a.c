
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);
int main(void)
{
    char board[10][10];
    generate_random_walk(board);
    print_array(board);
    return 0;
}
void generate_random_walk(char walk[10][10])
{
    int i=0, j=0;
    for (i=0;i<10;i++){for(j=0;j<10;j++) walk[i][j]='.';}
    walk[0][0]='A';
    char letter='B';
    int direction;//0=North, 1=South, 2=West, 3=East
    i=0, j=0;//Current location coordinates
    goto R;
    srand((unsigned) time(NULL));
    for(;letter!='Z';){
        letter+=1;
        R: direction=rand()%4;
        if ((i==0||walk[i-1][j]!='.')&&(i==9||walk[i+1][j]!='.')&&(j==0||walk[i][j-1]!='.')&&(j==9||walk[i][j+1]!='.')) return;
        switch (direction){
        case 0: if (i==0||walk[i-1][j]!='.') goto R; walk[--i][j]=letter; break;
        case 1: if (i==9||walk[i+1][j]!='.') goto R; walk[++i][j]=letter; break;
        case 2: if (j==0||walk[i][j-1]!='.') goto R; walk[i][--j]=letter; break;
        case 3: if (j==9||walk[i][j+1]!='.') goto R; walk[i][++j]=letter; break;
        }
    }
    return;
}
void print_array(char walk[10][10])
{
    int i, j;
    for(i=0;i<10;i++){for(j=0;j<10;j++) printf(" %c", walk[i][j]); printf("\n");}
    return;
}
