#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int roll_dice(void);
int play_game(void);
int main(void)
{
    int W=0, L=0;
    char c='y'; char enter;
    for(;c=='y'||c=='Y';)
        {srand((unsigned) time(NULL));
        if (play_game()) {printf("You win!\n\n"); W++;}
        else {printf("You lose!\n\n"); L++;}
        printf("Play again?(Y/N) "); scanf("%c", &c); scanf("%c", &enter);
        }
    printf("\n\nWins: %d, Losses: %d\n", W, L);
    return 0;
}
int roll_dice(void)
{
    return (rand()%6+1)+(rand()%6+1);
}
int play_game(void)
{
    int roll;
    roll=roll_dice();
    printf("You rolled: %d\n", roll);
    if (roll==7||roll==11) return 1;
    if (roll==2||roll==3||roll==12) return 0;
    printf("Your point is %d\n", roll);
    for(;;){
        roll=roll_dice();
        printf("You rolled: %d\n", roll);
        switch(roll)
        {
            case 7: return 0;
            case 2: case 3: case 11: case 12: break;
            default: return 1;
        }
    }
}
