#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
    char board[10][10]={{'A', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}};
    char letter='B';
    int direction;//0=North, 1=South, 2=West, 3=East
    int i=0, j=0;//Current location coordinates
    goto R;
    goto E;
    srand((unsigned) time(NULL));
    for(;letter!='Z';){
        letter+=1;
        R: direction=rand()%4;
        if ((i==0||board[i-1][j]!='.')&&(i==9||board[i+1][j]!='.')&&(j==0||board[i][j-1]!='.')&&(j==9||board[i][j+1]!='.')) goto E;
        switch (direction){
        case 0: if (i==0||board[i-1][j]!='.') goto R; board[--i][j]=letter; break;
        case 1: if (i==9||board[i+1][j]!='.') goto R; board[++i][j]=letter; break;
        case 2: if (j==0||board[i][j-1]!='.') goto R; board[i][--j]=letter; break;
        case 3: if (j==9||board[i][j+1]!='.') goto R; board[i][++j]=letter; break;
        }
    }
    E: for(i=0;i<10;i++){for(j=0;j<10;j++) printf(" %c", board[i][j]); printf("\n");}
    return 0;
}
